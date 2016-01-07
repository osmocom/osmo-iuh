/* hnb-gw specific code for HNBAP */

/* (C) 2015 by Harald Welte <laforge@gnumonks.org>
 * All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <osmocom/core/msgb.h>
#include <osmocom/core/utils.h>
#include <osmocom/gsm/gsm48.h>
#include <osmocom/netif/stream.h>

#include <unistd.h>
#include <errno.h>
#include <string.h>

#include "asn1helpers.h"
#include <osmocom/ranap/iu_helpers.h>

#include "hnbgw.h"
#include "hnbap_common.h"
#include "hnbap_ies_defs.h"

#define IU_MSG_NUM_IES		32
#define IU_MSG_NUM_EXT_IES	32

static int hnbgw_hnbap_tx(struct hnb_context *ctx, struct msgb *msg)
{
	if (!msg)
		return -EINVAL;

	msgb_sctp_ppid(msg) = IUH_PPI_HNBAP;
	osmo_stream_srv_send(ctx->conn, msg);

	return 0;
}

static int hnbgw_tx_hnb_register_acc(struct hnb_context *ctx)
{
	HNBRegisterAccept_t accept_out;
	struct msgb *msg;
	int rc;

	/* Single required response IE: RNC-ID */
	HNBRegisterAcceptIEs_t accept = {
		.rnc_id = ctx->gw->config.rnc_id
	};

	/* encode the Information Elements */
	memset(&accept_out, 0, sizeof(accept_out));
	rc = hnbap_encode_hnbregisteraccepties(&accept_out,  &accept);
	if (rc < 0) {
		return rc;
	}

	/* generate a successfull outcome PDU */
	msg = hnbap_generate_successful_outcome(ProcedureCode_id_HNBRegister,
					       Criticality_reject,
					       &asn_DEF_HNBRegisterAccept,
					       &accept_out);

	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_HNBRegisterAccept, &accept_out);

	return hnbgw_hnbap_tx(ctx, msg);
}


static int hnbgw_tx_ue_register_acc(struct ue_context *ue)
{
	UERegisterAccept_t accept_out;
	UERegisterAcceptIEs_t accept;
	struct msgb *msg;
	uint8_t encoded_imsi[10];
	uint32_t ctx_id;
	size_t encoded_imsi_len;
	int rc;

	encoded_imsi_len = ranap_imsi_encode(encoded_imsi,
					  sizeof(encoded_imsi), ue->imsi);

	memset(&accept, 0, sizeof(accept));
	accept.uE_Identity.present = UE_Identity_PR_iMSI;
	OCTET_STRING_fromBuf(&accept.uE_Identity.choice.iMSI,
			     (const char *)encoded_imsi, encoded_imsi_len);
	asn1_u24_to_bitstring(&accept.context_ID, &ctx_id, ue->context_id);

	memset(&accept_out, 0, sizeof(accept_out));
	rc = hnbap_encode_ueregisteraccepties(&accept_out, &accept);
	if (rc < 0) {
		return rc;
	}

	msg = hnbap_generate_successful_outcome(ProcedureCode_id_UERegister,
						Criticality_reject,
						&asn_DEF_UERegisterAccept,
						&accept_out);

	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_OCTET_STRING, &accept.uE_Identity.choice.iMSI);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_UERegisterAccept, &accept_out);

	return hnbgw_hnbap_tx(ue->hnb, msg);
}

static int hnbgw_rx_hnb_deregister(struct hnb_context *ctx, ANY_t *in)
{
	HNBDe_RegisterIEs_t ies;
	int rc;

	memset(&ies, 0, sizeof(ies));
	rc = hnbap_decode_hnbde_registeries(&ies, in);
	if (rc < 0)
		return rc;

	DEBUGP(DHNBAP, "HNB-DE-REGSITER cause=%ld\n",
		ies.cause);

	hnbap_free_hnbde_registeries(&ies);
	hnb_context_release(ctx);

	return 0;
}

static int hnbgw_rx_hnb_register_req(struct hnb_context *ctx, ANY_t *in)
{
	HNBRegisterRequestIEs_t ies;
	int rc;

	memset(&ies, 0, sizeof(ies));
	rc = hnbap_decode_hnbregisterrequesties(&ies, in);
	if (rc < 0)
		return rc;

	/* copy all identity parameters from the message to ctx */
	asn1_strncpy(ctx->identity_info, &ies.hnB_Identity.hNB_Identity_Info,
			sizeof(ctx->identity_info));
	ctx->id.lac = asn1str_to_u16(&ies.lac);
	ctx->id.sac = asn1str_to_u16(&ies.sac);
	ctx->id.rac = asn1str_to_u8(&ies.rac);
	ctx->id.cid = asn1bitstr_to_u28(&ies.cellIdentity);
	//ctx->id.mcc FIXME
	//ctx->id.mnc FIXME

	DEBUGP(DHNBAP, "HNB-REGISTER-REQ from %s\n", ctx->identity_info);

	/* Send HNBRegisterAccept */
	rc = hnbgw_tx_hnb_register_acc(ctx);
	hnbap_free_hnbregisterrequesties(&ies);
	return rc;
}

static int hnbgw_rx_ue_register_req(struct hnb_context *ctx, ANY_t *in)
{
	UERegisterRequestIEs_t ies;
	struct ue_context *ue;
	char imsi[16];
	int rc;

	memset(&ies, 0, sizeof(ies));
	rc = hnbap_decode_ueregisterrequesties(&ies, in);
	if (rc < 0)
		return rc;

	switch (ies.uE_Identity.present) {
	case UE_Identity_PR_iMSI:
		ranap_bcd_decode(imsi, sizeof(imsi), ies.uE_Identity.choice.iMSI.buf,
			      ies.uE_Identity.choice.iMSI.size);
		break;
	case UE_Identity_PR_iMSIDS41:
		ranap_bcd_decode(imsi, sizeof(imsi), ies.uE_Identity.choice.iMSIDS41.buf,
			      ies.uE_Identity.choice.iMSIDS41.size);
		break;
	case UE_Identity_PR_iMSIESN:
		ranap_bcd_decode(imsi, sizeof(imsi), ies.uE_Identity.choice.iMSIESN.iMSIDS41.buf,
			      ies.uE_Identity.choice.iMSIESN.iMSIDS41.size);
		break;
	default:
		LOGP(DHNBAP, LOGL_NOTICE, "UE-REGISTER-REQ without IMSI?!?\n");
		return -1;
	}

	DEBUGP(DHNBAP, "UE-REGISTER-REQ ID_type=%d imsi=%s cause=%ld\n",
		ies.uE_Identity.present, imsi, ies.registration_Cause);

	ue = ue_context_by_imsi(ctx->gw, imsi);
	if (!ue)
		ue = ue_context_alloc(ctx, imsi);

	hnbap_free_ueregisterrequesties(&ies);
	/* Send UERegisterAccept */
	return hnbgw_tx_ue_register_acc(ue);
}

static int hnbgw_rx_ue_deregister(struct hnb_context *ctx, ANY_t *in)
{
	UEDe_RegisterIEs_t ies;
	struct ue_context *ue;
	int rc;
	uint32_t ctxid;

	memset(&ies, 0, sizeof(ies));
	rc = hnbap_decode_uede_registeries(&ies, in);
	if (rc < 0)
		return rc;

	ctxid = asn1bitstr_to_u24(&ies.context_ID);

	DEBUGP(DHNBAP, "UE-DE-REGISTER context=%ld cause=%s\n",
		ctxid, hnbap_cause_str(&ies.cause));

	ue = ue_context_by_id(ctx->gw, ctxid);
	if (ue)
		ue_context_free(ue);

	hnbap_free_uede_registeries(&ies);
	return 0;
}

static int hnbgw_rx_err_ind(struct hnb_context *hnb, ANY_t *in)
{
	ErrorIndicationIEs_t ies;
	int rc;

	memset(&ies, 0, sizeof(ies));
	rc = hnbap_decode_errorindicationies(&ies, in);
	if (rc < 0)
		return rc;

	LOGP(DHNBAP, LOGL_NOTICE, "HNBAP ERROR.ind, cause: %s\n",
		hnbap_cause_str(&ies.cause));

	hnbap_free_errorindicationies(&ies);
	return 0;
}

static int hnbgw_rx_initiating_msg(struct hnb_context *hnb, InitiatingMessage_t *imsg)
{
	int rc;

	switch (imsg->procedureCode) {
	case ProcedureCode_id_HNBRegister:	/* 8.2 */
		rc = hnbgw_rx_hnb_register_req(hnb, &imsg->value);
		break;
	case ProcedureCode_id_HNBDe_Register:	/* 8.3 */
		rc = hnbgw_rx_hnb_deregister(hnb, &imsg->value);
		break;
	case ProcedureCode_id_UERegister: 	/* 8.4 */
		rc = hnbgw_rx_ue_register_req(hnb, &imsg->value);
		break;
	case ProcedureCode_id_UEDe_Register:	/* 8.5 */
		rc = hnbgw_rx_ue_deregister(hnb, &imsg->value);
		break;
	case ProcedureCode_id_ErrorIndication:	/* 8.6 */
		rc = hnbgw_rx_err_ind(hnb, &imsg->value);
		break;
	case ProcedureCode_id_TNLUpdate:	/* 8.9 */
	case ProcedureCode_id_HNBConfigTransfer:	/* 8.10 */
	case ProcedureCode_id_RelocationComplete:	/* 8.11 */
	case ProcedureCode_id_U_RNTIQuery:	/* 8.12 */
	case ProcedureCode_id_privateMessage:
		LOGP(DHNBAP, LOGL_NOTICE, "Unimplemented HNBAP Procedure %ld\n",
			imsg->procedureCode);
		break;
	default:
		LOGP(DHNBAP, LOGL_NOTICE, "Unknown HNBAP Procedure %ld\n",
			imsg->procedureCode);
		break;
	}
}

static int hnbgw_rx_successful_outcome_msg(struct hnb_context *hnb, SuccessfulOutcome_t *msg)
{

}

static int hnbgw_rx_unsuccessful_outcome_msg(struct hnb_context *hnb, UnsuccessfulOutcome_t *msg)
{

}


static int _hnbgw_hnbap_rx(struct hnb_context *hnb, HNBAP_PDU_t *pdu)
{
	int rc = 0;

	/* it's a bit odd that we can't dispatch on procedure code, but
	 * that's not possible */
	switch (pdu->present) {
	case HNBAP_PDU_PR_initiatingMessage:
		rc = hnbgw_rx_initiating_msg(hnb, &pdu->choice.initiatingMessage);
		break;
	case HNBAP_PDU_PR_successfulOutcome:
		rc = hnbgw_rx_successful_outcome_msg(hnb, &pdu->choice.successfulOutcome);
		break;
	case HNBAP_PDU_PR_unsuccessfulOutcome:
		rc = hnbgw_rx_unsuccessful_outcome_msg(hnb, &pdu->choice.unsuccessfulOutcome);
		break;
	default:
		LOGP(DHNBAP, LOGL_NOTICE, "Unknown HNBAP Presence %u\n",
			pdu->present);
		rc = -1;
	}

	return rc;
}

int hnbgw_hnbap_rx(struct hnb_context *hnb, struct msgb *msg)
{
	HNBAP_PDU_t _pdu, *pdu = &_pdu;
	asn_dec_rval_t dec_ret;
	int rc;

	/* decode and handle to _hnbgw_hnbap_rx() */

	memset(pdu, 0, sizeof(*pdu));
	dec_ret = aper_decode(NULL, &asn_DEF_HNBAP_PDU, (void **) &pdu,
			      msg->data, msgb_length(msg), 0, 0);
	if (dec_ret.code != RC_OK) {
		LOGP(DHNBAP, LOGL_ERROR, "Error in ASN.1 decode\n");
		return rc;
	}

	rc = _hnbgw_hnbap_rx(hnb, pdu);

	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_HNBAP_PDU, pdu);

	return rc;
}


int hnbgw_hnbap_init(void)
{

}
