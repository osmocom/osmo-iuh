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
#include <osmocom/core/socket.h>
#include <osmocom/gsm/gsm48.h>
#include <osmocom/netif/stream.h>

#include <unistd.h>
#include <errno.h>
#include <string.h>

#include "asn1helpers.h"
#include <osmocom/hnbap/hnbap_common.h>
#include <osmocom/ranap/iu_helpers.h>

#include <osmocom/iuh/hnbgw.h>
#include <osmocom/hnbap/hnbap_ies_defs.h>

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

static int hnbgw_tx_hnb_register_rej(struct hnb_context *ctx)
{
	HNBAP_HNBRegisterReject_t reject_out;
	HNBAP_HNBRegisterRejectIEs_t reject;
	struct msgb *msg;
	int rc;

	reject.presenceMask = 0,
	reject.cause.present = HNBAP_Cause_PR_radioNetwork;
	reject.cause.choice.radioNetwork = HNBAP_CauseRadioNetwork_unspecified;

	/* encode the Information Elements */
	memset(&reject_out, 0, sizeof(reject_out));
	rc = hnbap_encode_hnbregisterrejecties(&reject_out,  &reject);
	if (rc < 0) {
		LOGHNB(ctx, DHNBAP, LOGL_ERROR, "Failure to encode HNB-REGISTER-REJECT to %s: rc=%d\n",
			ctx->identity_info, rc);
		return rc;
	}

	/* generate a successfull outcome PDU */
	msg = hnbap_generate_unsuccessful_outcome(HNBAP_ProcedureCode_id_HNBRegister,
						  HNBAP_Criticality_reject,
						  &asn_DEF_HNBAP_HNBRegisterReject,
						  &reject_out);

	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_HNBAP_HNBRegisterReject, &reject_out);

	rc = hnbgw_hnbap_tx(ctx, msg);
	if (rc == 0) {
		/* Tell libosmo-netif to destroy this connection when it is done
		 * sending our HNB-REGISTER-REJECT response. */
		osmo_stream_srv_set_flush_and_destroy(ctx->conn);
	} else {
		/* The message was not queued. Destroy the connection right away. */
		hnb_context_release(ctx);
		return rc;
	}

	return 0;
}

static int hnbgw_tx_hnb_register_acc(struct hnb_context *ctx)
{
	HNBAP_HNBRegisterAccept_t accept_out;
	struct msgb *msg;
	int rc;

	/* Single required response IE: RNC-ID */
	HNBAP_HNBRegisterAcceptIEs_t accept = {
		.rnc_id = ctx->gw->config.rnc_id
	};

	/* encode the Information Elements */
	memset(&accept_out, 0, sizeof(accept_out));
	rc = hnbap_encode_hnbregisteraccepties(&accept_out,  &accept);
	if (rc < 0) {
		LOGHNB(ctx, DHNBAP, LOGL_ERROR, "Failure to encode HNB-REGISTER-ACCEPT to %s: rc=%d\n",
			ctx->identity_info, rc);
		return rc;
	}

	/* generate a successfull outcome PDU */
	msg = hnbap_generate_successful_outcome(HNBAP_ProcedureCode_id_HNBRegister,
					       HNBAP_Criticality_reject,
					       &asn_DEF_HNBAP_HNBRegisterAccept,
					       &accept_out);

	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_HNBAP_HNBRegisterAccept, &accept_out);

	LOGHNB(ctx, DHNBAP, LOGL_NOTICE, "Accepting HNB-REGISTER-REQ from %s\n", ctx->identity_info);

	return hnbgw_hnbap_tx(ctx, msg);
}


static int hnbgw_tx_ue_register_acc(struct ue_context *ue)
{
	HNBAP_UERegisterAccept_t accept_out;
	HNBAP_UERegisterAcceptIEs_t accept;
	struct msgb *msg;
	uint8_t encoded_imsi[10];
	uint32_t ctx_id;
	size_t encoded_imsi_len;
	int rc;

	encoded_imsi_len = ranap_imsi_encode(encoded_imsi,
					  sizeof(encoded_imsi), ue->imsi);

	memset(&accept, 0, sizeof(accept));
	accept.uE_Identity.present = HNBAP_UE_Identity_PR_iMSI;
	OCTET_STRING_fromBuf(&accept.uE_Identity.choice.iMSI,
			     (const char *)encoded_imsi, encoded_imsi_len);
	asn1_u24_to_bitstring(&accept.context_ID, &ctx_id, ue->context_id);

	memset(&accept_out, 0, sizeof(accept_out));
	rc = hnbap_encode_ueregisteraccepties(&accept_out, &accept);
	if (rc < 0) {
		return rc;
	}

	msg = hnbap_generate_successful_outcome(HNBAP_ProcedureCode_id_UERegister,
						HNBAP_Criticality_reject,
						&asn_DEF_HNBAP_UERegisterAccept,
						&accept_out);

	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_OCTET_STRING, &accept.uE_Identity.choice.iMSI);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_HNBAP_UERegisterAccept, &accept_out);

	return hnbgw_hnbap_tx(ue->hnb, msg);
}

static int hnbgw_tx_ue_register_rej_tmsi(struct hnb_context *hnb, HNBAP_UE_Identity_t *ue_id)
{
	HNBAP_UERegisterReject_t reject_out;
	HNBAP_UERegisterRejectIEs_t reject;
	struct msgb *msg;
	int rc;

	memset(&reject, 0, sizeof(reject));
	reject.uE_Identity.present = ue_id->present;

	/* Copy the identity over to the reject message */
	switch (ue_id->present) {
	case HNBAP_UE_Identity_PR_tMSILAI:
		LOGHNB(hnb, DHNBAP, LOGL_DEBUG, "REJ UE_Id tMSI %d %s\n", ue_id->choice.tMSILAI.tMSI.size,
			osmo_hexdump(ue_id->choice.tMSILAI.tMSI.buf, ue_id->choice.tMSILAI.tMSI.size));

		LOGHNB(hnb, DHNBAP, LOGL_DEBUG, "REJ UE_Id pLMNID %d %s\n", ue_id->choice.tMSILAI.lAI.pLMNID.size,
			osmo_hexdump(ue_id->choice.tMSILAI.lAI.pLMNID.buf, ue_id->choice.tMSILAI.lAI.pLMNID.size));

		LOGHNB(hnb, DHNBAP, LOGL_DEBUG, "REJ UE_Id lAC %d %s\n", ue_id->choice.tMSILAI.lAI.lAC.size,
			osmo_hexdump(ue_id->choice.tMSILAI.lAI.lAC.buf, ue_id->choice.tMSILAI.lAI.lAC.size));

		BIT_STRING_fromBuf(&reject.uE_Identity.choice.tMSILAI.tMSI,
				   ue_id->choice.tMSILAI.tMSI.buf,
				   ue_id->choice.tMSILAI.tMSI.size * 8
				   - ue_id->choice.tMSILAI.tMSI.bits_unused);
		OCTET_STRING_fromBuf(&reject.uE_Identity.choice.tMSILAI.lAI.pLMNID,
				     (const char *)ue_id->choice.tMSILAI.lAI.pLMNID.buf,
				     ue_id->choice.tMSILAI.lAI.pLMNID.size);
		OCTET_STRING_fromBuf(&reject.uE_Identity.choice.tMSILAI.lAI.lAC,
				     (const char *)ue_id->choice.tMSILAI.lAI.lAC.buf,
				     ue_id->choice.tMSILAI.lAI.lAC.size);
		break;

	case HNBAP_UE_Identity_PR_pTMSIRAI:
		LOGHNB(hnb, DHNBAP, LOGL_DEBUG, "REJ UE_Id pTMSI %d %s\n", ue_id->choice.pTMSIRAI.pTMSI.size,
			osmo_hexdump(ue_id->choice.pTMSIRAI.pTMSI.buf, ue_id->choice.pTMSIRAI.pTMSI.size));

		LOGHNB(hnb, DHNBAP, LOGL_DEBUG, "REJ UE_Id pLMNID %d %s\n", ue_id->choice.pTMSIRAI.rAI.lAI.pLMNID.size,
			osmo_hexdump(ue_id->choice.pTMSIRAI.rAI.lAI.pLMNID.buf, ue_id->choice.pTMSIRAI.rAI.lAI.pLMNID.size));

		LOGHNB(hnb, DHNBAP, LOGL_DEBUG, "REJ UE_Id lAC %d %s\n", ue_id->choice.pTMSIRAI.rAI.lAI.lAC.size,
			osmo_hexdump(ue_id->choice.pTMSIRAI.rAI.lAI.lAC.buf, ue_id->choice.pTMSIRAI.rAI.lAI.lAC.size));

		LOGHNB(hnb, DHNBAP, LOGL_DEBUG, "REJ UE_Id rAC %d %s\n", ue_id->choice.pTMSIRAI.rAI.rAC.size,
			osmo_hexdump(ue_id->choice.pTMSIRAI.rAI.rAC.buf, ue_id->choice.pTMSIRAI.rAI.rAC.size));

		BIT_STRING_fromBuf(&reject.uE_Identity.choice.pTMSIRAI.pTMSI,
				   ue_id->choice.pTMSIRAI.pTMSI.buf,
				   ue_id->choice.pTMSIRAI.pTMSI.size * 8
				   - ue_id->choice.pTMSIRAI.pTMSI.bits_unused);
		OCTET_STRING_fromBuf(&reject.uE_Identity.choice.pTMSIRAI.rAI.lAI.pLMNID,
				     (const char *)ue_id->choice.pTMSIRAI.rAI.lAI.pLMNID.buf,
				     ue_id->choice.pTMSIRAI.rAI.lAI.pLMNID.size);
		OCTET_STRING_fromBuf(&reject.uE_Identity.choice.pTMSIRAI.rAI.lAI.lAC,
				     (const char *)ue_id->choice.pTMSIRAI.rAI.lAI.lAC.buf,
				     ue_id->choice.pTMSIRAI.rAI.lAI.lAC.size);
		OCTET_STRING_fromBuf(&reject.uE_Identity.choice.pTMSIRAI.rAI.rAC,
				     (const char *)ue_id->choice.pTMSIRAI.rAI.rAC.buf,
				     ue_id->choice.pTMSIRAI.rAI.rAC.size);
		break;

	default:
		LOGHNB(hnb, DHNBAP, LOGL_ERROR, "Cannot compose UE Register Reject:"
		     " unsupported UE ID (present=%d)\n", ue_id->present);
		return -1;
	}

	LOGHNB(hnb, DHNBAP, LOGL_ERROR, "Rejecting UE Register Request: TMSI identity registration is switched off\n");

	reject.cause.present = HNBAP_Cause_PR_radioNetwork;
	reject.cause.choice.radioNetwork = HNBAP_CauseRadioNetwork_invalid_UE_identity;

	memset(&reject_out, 0, sizeof(reject_out));
	rc = hnbap_encode_ueregisterrejecties(&reject_out, &reject);
	if (rc < 0)
		return rc;

	msg = hnbap_generate_unsuccessful_outcome(HNBAP_ProcedureCode_id_UERegister,
						  HNBAP_Criticality_reject,
						  &asn_DEF_HNBAP_UERegisterReject,
						  &reject_out);

	/* Free copied identity IEs */
	switch (ue_id->present) {
	case HNBAP_UE_Identity_PR_tMSILAI:
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_BIT_STRING,
					      &reject.uE_Identity.choice.tMSILAI.tMSI);
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_OCTET_STRING,
					      &reject.uE_Identity.choice.tMSILAI.lAI.pLMNID);
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_OCTET_STRING,
					      &reject.uE_Identity.choice.tMSILAI.lAI.lAC);
		break;

	case HNBAP_UE_Identity_PR_pTMSIRAI:
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_BIT_STRING,
					      &reject.uE_Identity.choice.pTMSIRAI.pTMSI);
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_OCTET_STRING,
					      &reject.uE_Identity.choice.pTMSIRAI.rAI.lAI.pLMNID);
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_OCTET_STRING,
					      &reject.uE_Identity.choice.pTMSIRAI.rAI.lAI.lAC);
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_OCTET_STRING,
					      &reject.uE_Identity.choice.pTMSIRAI.rAI.rAC);
		break;

	default:
		/* should never happen after above switch() */
		break;
	}

	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_HNBAP_UERegisterReject, &reject_out);

	return hnbgw_hnbap_tx(hnb, msg);
}

static int hnbgw_tx_ue_register_acc_tmsi(struct hnb_context *hnb, HNBAP_UE_Identity_t *ue_id)
{
	HNBAP_UERegisterAccept_t accept_out;
	HNBAP_UERegisterAcceptIEs_t accept;
	struct msgb *msg;
	uint32_t ctx_id;
	uint32_t tmsi = 0;
	struct ue_context *ue;
	int rc;

	memset(&accept, 0, sizeof(accept));
	accept.uE_Identity.present = ue_id->present;

	switch (ue_id->present) {
	case HNBAP_UE_Identity_PR_tMSILAI:
		BIT_STRING_fromBuf(&accept.uE_Identity.choice.tMSILAI.tMSI,
				   ue_id->choice.tMSILAI.tMSI.buf,
				   ue_id->choice.tMSILAI.tMSI.size * 8
				   - ue_id->choice.tMSILAI.tMSI.bits_unused);
		tmsi = *(uint32_t*)accept.uE_Identity.choice.tMSILAI.tMSI.buf;
		OCTET_STRING_fromBuf(&accept.uE_Identity.choice.tMSILAI.lAI.pLMNID,
				     (const char *)ue_id->choice.tMSILAI.lAI.pLMNID.buf,
				     ue_id->choice.tMSILAI.lAI.pLMNID.size);
		OCTET_STRING_fromBuf(&accept.uE_Identity.choice.tMSILAI.lAI.lAC,
				     (const char *)ue_id->choice.tMSILAI.lAI.lAC.buf,
				     ue_id->choice.tMSILAI.lAI.lAC.size);
		break;

	case HNBAP_UE_Identity_PR_pTMSIRAI:
		BIT_STRING_fromBuf(&accept.uE_Identity.choice.pTMSIRAI.pTMSI,
				   ue_id->choice.pTMSIRAI.pTMSI.buf,
				   ue_id->choice.pTMSIRAI.pTMSI.size * 8
				   - ue_id->choice.pTMSIRAI.pTMSI.bits_unused);
		tmsi = *(uint32_t*)accept.uE_Identity.choice.pTMSIRAI.pTMSI.buf;
		OCTET_STRING_fromBuf(&accept.uE_Identity.choice.pTMSIRAI.rAI.lAI.pLMNID,
				     (const char *)ue_id->choice.pTMSIRAI.rAI.lAI.pLMNID.buf,
				     ue_id->choice.pTMSIRAI.rAI.lAI.pLMNID.size);
		OCTET_STRING_fromBuf(&accept.uE_Identity.choice.pTMSIRAI.rAI.lAI.lAC,
				     (const char *)ue_id->choice.pTMSIRAI.rAI.lAI.lAC.buf,
				     ue_id->choice.pTMSIRAI.rAI.lAI.lAC.size);
		OCTET_STRING_fromBuf(&accept.uE_Identity.choice.pTMSIRAI.rAI.rAC,
				     (const char *)ue_id->choice.pTMSIRAI.rAI.rAC.buf,
				     ue_id->choice.pTMSIRAI.rAI.rAC.size);
		break;

	default:
		LOGHNB(hnb, DHNBAP, LOGL_ERROR, "Unsupportedccept UE ID (present=%d)\n", ue_id->present);
		return -1;
	}

	tmsi = ntohl(tmsi);
	LOGHNB(hnb, DHNBAP, LOGL_DEBUG, "HNBAP register with TMSI %x\n", tmsi);

	ue = ue_context_by_tmsi(hnb->gw, tmsi);
	if (!ue)
		ue = ue_context_alloc(hnb, NULL, tmsi);

	asn1_u24_to_bitstring(&accept.context_ID, &ctx_id, ue->context_id);

	memset(&accept_out, 0, sizeof(accept_out));
	rc = hnbap_encode_ueregisteraccepties(&accept_out, &accept);
	if (rc < 0)
		return rc;

	msg = hnbap_generate_successful_outcome(HNBAP_ProcedureCode_id_UERegister,
						HNBAP_Criticality_reject,
						&asn_DEF_HNBAP_UERegisterAccept,
						&accept_out);

	switch (ue_id->present) {
	case HNBAP_UE_Identity_PR_tMSILAI:
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_BIT_STRING,
					      &accept.uE_Identity.choice.tMSILAI.tMSI);
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_OCTET_STRING,
					      &accept.uE_Identity.choice.tMSILAI.lAI.pLMNID);
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_OCTET_STRING,
					      &accept.uE_Identity.choice.tMSILAI.lAI.lAC);
		break;

	case HNBAP_UE_Identity_PR_pTMSIRAI:
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_BIT_STRING,
					      &accept.uE_Identity.choice.pTMSIRAI.pTMSI);
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_OCTET_STRING,
					      &accept.uE_Identity.choice.pTMSIRAI.rAI.lAI.pLMNID);
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_OCTET_STRING,
					      &accept.uE_Identity.choice.pTMSIRAI.rAI.lAI.lAC);
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_OCTET_STRING,
					      &accept.uE_Identity.choice.pTMSIRAI.rAI.rAC);
		break;

	default:
		/* should never happen after above switch() */
		break;
	}

	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_HNBAP_UERegisterAccept, &accept_out);

	return hnbgw_hnbap_tx(hnb, msg);
}

static int hnbgw_rx_hnb_deregister(struct hnb_context *ctx, ANY_t *in)
{
	HNBAP_HNBDe_RegisterIEs_t ies;
	int rc;

	rc = hnbap_decode_hnbde_registeries(&ies, in);
	if (rc < 0)
		return rc;

	LOGHNB(ctx, DHNBAP, LOGL_DEBUG, "HNB-DE-REGISTER cause=%s\n", hnbap_cause_str(&ies.cause));

	hnbap_free_hnbde_registeries(&ies);
	hnb_context_release(ctx);

	return 0;
}

static int hnbgw_rx_hnb_register_req(struct hnb_context *ctx, ANY_t *in)
{
	struct hnb_context *hnb;
	HNBAP_HNBRegisterRequestIEs_t ies;
	int rc;

	rc = hnbap_decode_hnbregisterrequesties(&ies, in);
	if (rc < 0) {
		LOGHNB(ctx, DHNBAP, LOGL_ERROR, "Failure to decode HNB-REGISTER-REQ from %s: rc=%d\n",
			ctx->identity_info, rc);
		return rc;
	}

	/* copy all identity parameters from the message to ctx */
	asn1_strncpy(ctx->identity_info, &ies.hnB_Identity.hNB_Identity_Info,
			sizeof(ctx->identity_info));
	ctx->id.lac = asn1str_to_u16(&ies.lac);
	ctx->id.sac = asn1str_to_u16(&ies.sac);
	ctx->id.rac = asn1str_to_u8(&ies.rac);
	ctx->id.cid = asn1bitstr_to_u28(&ies.cellIdentity);
	gsm48_mcc_mnc_from_bcd(ies.plmNidentity.buf, &ctx->id.mcc, &ctx->id.mnc);

	llist_for_each_entry(hnb, &ctx->gw->hnb_list, list) {
		if (hnb->hnb_registered && ctx != hnb && memcmp(&ctx->id, &hnb->id, sizeof(ctx->id)) == 0) {
			struct osmo_fd *ofd = osmo_stream_srv_get_ofd(ctx->conn);
			char *name = osmo_sock_get_name(ctx, ofd->fd);
			LOGHNB(ctx, DHNBAP, LOGL_ERROR, "rejecting HNB-REGISTER-REQ with duplicate cell identity "
				"MCC=%u,MNC=%u,LAC=%u,RAC=%u,SAC=%u,CID=%u from %s\n",
				ctx->id.mcc, ctx->id.mnc, ctx->id.lac, ctx->id.rac, ctx->id.sac, ctx->id.cid, name);
			talloc_free(name);
			return hnbgw_tx_hnb_register_rej(ctx);
		}
	}

	ctx->hnb_registered = true;

	LOGHNB(ctx, DHNBAP, LOGL_DEBUG, "HNB-REGISTER-REQ from %s\n", ctx->identity_info);

	/* Send HNBRegisterAccept */
	rc = hnbgw_tx_hnb_register_acc(ctx);
	hnbap_free_hnbregisterrequesties(&ies);
	return rc;
}

static int hnbgw_rx_ue_register_req(struct hnb_context *ctx, ANY_t *in)
{
	HNBAP_UERegisterRequestIEs_t ies;
	struct ue_context *ue;
	char imsi[16];
	int rc;

	rc = hnbap_decode_ueregisterrequesties(&ies, in);
	if (rc < 0)
		return rc;

	switch (ies.uE_Identity.present) {
	case HNBAP_UE_Identity_PR_iMSI:
		ranap_bcd_decode(imsi, sizeof(imsi), ies.uE_Identity.choice.iMSI.buf,
			      ies.uE_Identity.choice.iMSI.size);
		break;
	case HNBAP_UE_Identity_PR_iMSIDS41:
		ranap_bcd_decode(imsi, sizeof(imsi), ies.uE_Identity.choice.iMSIDS41.buf,
			      ies.uE_Identity.choice.iMSIDS41.size);
		break;
	case HNBAP_UE_Identity_PR_iMSIESN:
		ranap_bcd_decode(imsi, sizeof(imsi), ies.uE_Identity.choice.iMSIESN.iMSIDS41.buf,
			      ies.uE_Identity.choice.iMSIESN.iMSIDS41.size);
		break;
	case HNBAP_UE_Identity_PR_tMSILAI:
	case HNBAP_UE_Identity_PR_pTMSIRAI:
		if (ctx->gw->config.hnbap_allow_tmsi)
			rc = hnbgw_tx_ue_register_acc_tmsi(ctx, &ies.uE_Identity);
		else
			rc = hnbgw_tx_ue_register_rej_tmsi(ctx, &ies.uE_Identity);
		/* all has been handled by TMSI, skip the IMSI code below */
		hnbap_free_ueregisterrequesties(&ies);
		return rc;
	default:
		LOGHNB(ctx, DHNBAP, LOGL_NOTICE, "UE-REGISTER-REQ with unsupported UE Id type %d\n",
			ies.uE_Identity.present);
		hnbap_free_ueregisterrequesties(&ies);
		return rc;
	}

	LOGHNB(ctx, DHNBAP, LOGL_DEBUG, "UE-REGISTER-REQ ID_type=%d imsi=%s cause=%ld\n",
		ies.uE_Identity.present, imsi, ies.registration_Cause);

	ue = ue_context_by_imsi(ctx->gw, imsi);
	if (!ue)
		ue = ue_context_alloc(ctx, imsi, 0);

	hnbap_free_ueregisterrequesties(&ies);
	/* Send UERegisterAccept */
	return hnbgw_tx_ue_register_acc(ue);
}

static int hnbgw_rx_ue_deregister(struct hnb_context *ctx, ANY_t *in)
{
	HNBAP_UEDe_RegisterIEs_t ies;
	struct ue_context *ue;
	int rc;
	uint32_t ctxid;

	rc = hnbap_decode_uede_registeries(&ies, in);
	if (rc < 0)
		return rc;

	ctxid = asn1bitstr_to_u24(&ies.context_ID);

	LOGHNB(ctx, DHNBAP, LOGL_DEBUG, "UE-DE-REGISTER context=%u cause=%s\n", ctxid, hnbap_cause_str(&ies.cause));

	ue = ue_context_by_id(ctx->gw, ctxid);
	if (ue)
		ue_context_free(ue);

	hnbap_free_uede_registeries(&ies);
	return 0;
}

static int hnbgw_rx_err_ind(struct hnb_context *hnb, ANY_t *in)
{
	HNBAP_ErrorIndicationIEs_t ies;
	int rc;

	rc = hnbap_decode_errorindicationies(&ies, in);
	if (rc < 0)
		return rc;

	LOGHNB(hnb, DHNBAP, LOGL_NOTICE, "HNBAP ERROR.ind, cause: %s\n", hnbap_cause_str(&ies.cause));

	hnbap_free_errorindicationies(&ies);
	return 0;
}

static int hnbgw_rx_initiating_msg(struct hnb_context *hnb, HNBAP_InitiatingMessage_t *imsg)
{
	int rc = 0;

	switch (imsg->procedureCode) {
	case HNBAP_ProcedureCode_id_HNBRegister:	/* 8.2 */
		rc = hnbgw_rx_hnb_register_req(hnb, &imsg->value);
		break;
	case HNBAP_ProcedureCode_id_HNBDe_Register:	/* 8.3 */
		rc = hnbgw_rx_hnb_deregister(hnb, &imsg->value);
		break;
	case HNBAP_ProcedureCode_id_UERegister: 	/* 8.4 */
		rc = hnbgw_rx_ue_register_req(hnb, &imsg->value);
		break;
	case HNBAP_ProcedureCode_id_UEDe_Register:	/* 8.5 */
		rc = hnbgw_rx_ue_deregister(hnb, &imsg->value);
		break;
	case HNBAP_ProcedureCode_id_ErrorIndication:	/* 8.6 */
		rc = hnbgw_rx_err_ind(hnb, &imsg->value);
		break;
	case HNBAP_ProcedureCode_id_TNLUpdate:	/* 8.9 */
	case HNBAP_ProcedureCode_id_HNBConfigTransfer:	/* 8.10 */
	case HNBAP_ProcedureCode_id_RelocationComplete:	/* 8.11 */
	case HNBAP_ProcedureCode_id_U_RNTIQuery:	/* 8.12 */
	case HNBAP_ProcedureCode_id_privateMessage:
		LOGHNB(hnb, DHNBAP, LOGL_NOTICE, "Unimplemented HNBAP Procedure %ld\n", imsg->procedureCode);
		break;
	default:
		LOGHNB(hnb, DHNBAP, LOGL_NOTICE, "Unknown HNBAP Procedure %ld\n", imsg->procedureCode);
		break;
	}

	return rc;
}

static int hnbgw_rx_successful_outcome_msg(struct hnb_context *hnb, HNBAP_SuccessfulOutcome_t *msg)
{
	/* We don't care much about HNBAP */
	return 0;
}

static int hnbgw_rx_unsuccessful_outcome_msg(struct hnb_context *hnb, HNBAP_UnsuccessfulOutcome_t *msg)
{
	/* We don't care much about HNBAP */
	LOGHNB(hnb, DHNBAP, LOGL_ERROR, "Received Unsuccessful Outcome, procedureCode %ld, criticality %ld,"
		" cell mcc %u mnc %u lac %u rac %u sac %u cid %u\n", msg->procedureCode, msg->criticality,
		hnb->id.mcc, hnb->id.mnc, hnb->id.lac, hnb->id.rac, hnb->id.sac, hnb->id.cid);
	return 0;
}


static int _hnbgw_hnbap_rx(struct hnb_context *hnb, HNBAP_HNBAP_PDU_t *pdu)
{
	int rc = 0;

	/* it's a bit odd that we can't dispatch on procedure code, but
	 * that's not possible */
	switch (pdu->present) {
	case HNBAP_HNBAP_PDU_PR_initiatingMessage:
		rc = hnbgw_rx_initiating_msg(hnb, &pdu->choice.initiatingMessage);
		break;
	case HNBAP_HNBAP_PDU_PR_successfulOutcome:
		rc = hnbgw_rx_successful_outcome_msg(hnb, &pdu->choice.successfulOutcome);
		break;
	case HNBAP_HNBAP_PDU_PR_unsuccessfulOutcome:
		rc = hnbgw_rx_unsuccessful_outcome_msg(hnb, &pdu->choice.unsuccessfulOutcome);
		break;
	default:
		LOGHNB(hnb, DHNBAP, LOGL_NOTICE, "Unknown HNBAP Presence %u\n", pdu->present);
		rc = -1;
	}

	return rc;
}

int hnbgw_hnbap_rx(struct hnb_context *hnb, struct msgb *msg)
{
	HNBAP_HNBAP_PDU_t _pdu, *pdu = &_pdu;
	asn_dec_rval_t dec_ret;
	int rc;

	/* decode and handle to _hnbgw_hnbap_rx() */

	memset(pdu, 0, sizeof(*pdu));
	dec_ret = aper_decode(NULL, &asn_DEF_HNBAP_HNBAP_PDU, (void **) &pdu,
			      msg->data, msgb_length(msg), 0, 0);
	if (dec_ret.code != RC_OK) {
		LOGHNB(hnb, DHNBAP, LOGL_ERROR, "Error in ASN.1 decode\n");
		return -1;
	}

	rc = _hnbgw_hnbap_rx(hnb, pdu);

	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_HNBAP_HNBAP_PDU, pdu);

	return rc;
}


int hnbgw_hnbap_init(void)
{
	return 0;
}
