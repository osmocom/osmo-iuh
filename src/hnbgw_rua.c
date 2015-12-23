/* hnb-gw specific code for RUA (Ranap User Adaption) */

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
#include <osmocom/netif/stream.h>

#include <unistd.h>
#include <errno.h>
#include <string.h>

#include "asn1helpers.h"

#include "hnbgw.h"
#include "hnbgw_ranap.h"
#include "rua_common.h"
#include "rua_ies_defs.h"

static int hnbgw_rua_tx(struct hnb_context *ctx, struct msgb *msg)
{
	if (!msg)
		return -EINVAL;

	msgb_sctp_ppid(msg) = IUH_PPI_RUA;
	return osmo_wqueue_enqueue(&ctx->wqueue, msg);
}

int rua_tx_udt(struct msgb *inmsg)
{
	RUA_ConnectionlessTransfer_t out;
	RUA_ConnectionlessTransferIEs_t ies;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));
	ies.ranaP_Message.buf = inmsg->data;
	ies.ranaP_Message.size = msgb_length(inmsg);

	/* FIXME: msgb_free(msg)? ownership not yet clear */

	memset(&out, 0, sizeof(out));
	rc = rua_encode_connectionlesstransferies(&out, &ies);
	if (rc < 0)
		return rc;

	msg = rua_generate_initiating_message(RUA_ProcedureCode_id_ConnectionlessTransfer,
					      RUA_Criticality_reject,
					      &asn_DEF_RUA_ConnectionlessTransfer,
					      &out);
	msg->dst = inmsg->dst;

	DEBUGP(DMAIN, "transmitting RUA payload of %u bytes\n", msgb_length(msg));

	return hnbgw_rua_tx(msg->dst, msg);
}

int rua_tx_dt(struct msgb *inmsg)
{
	RUA_DirectTransfer_t out;
	RUA_DirectTransferIEs_t ies;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));
	ies.ranaP_Message.buf = inmsg->data;
	ies.ranaP_Message.size = msgb_length(inmsg);

	/* FIXME: msgb_free(msg)? ownership not yet clear */

	memset(&out, 0, sizeof(out));
	rc = rua_encode_directtransferies(&out, &ies);
	if (rc < 0)
		return rc;

	msg = rua_generate_initiating_message(RUA_ProcedureCode_id_DirectTransfer,
					      RUA_Criticality_reject,
					      &asn_DEF_RUA_DirectTransfer,
					      &out);
	msg->dst = inmsg->dst;

	DEBUGP(DMAIN, "transmitting RUA payload of %u bytes\n", msgb_length(msg));

	return hnbgw_rua_tx(msg->dst, msg);
}


static int rua_rx_init_connect(struct msgb *msg, ANY_t *in)
{
	RUA_ConnectIEs_t ies;
	uint32_t context_id;
	int rc;

	rc = rua_decode_connecties(&ies, in);
	if (rc < 0)
		return rc;

	context_id = asn1bitstr_to_u32(&ies.context_ID);

	DEBUGP(DMAIN, "Connect.req(ctx=0x%x, %s)\n", context_id,
		ies.establishment_Cause == RUA_Establishment_Cause_emergency_call
		? "emergency" : "normal");
	/* FIXME: route to CS (MSC) or PS (SGSN) domain */
	rc = hnbgw_ranap_rx(msg, ies.ranaP_Message.buf, ies.ranaP_Message.size);

	return rc;
}

static int rua_rx_init_disconnect(struct msgb *msg, ANY_t *in)
{
	RUA_DisconnectIEs_t ies;
	uint32_t context_id;
	int rc;

	rc = rua_decode_disconnecties(&ies, in);
	if (rc < 0)
		return rc;

	context_id = asn1bitstr_to_u32(&ies.context_ID);

	DEBUGP(DMAIN, "Disconnect.req(ctx=0x%x,cause=%s)\n", context_id,
		rua_cause_str(&ies.cause));
	if (ies.presenceMask & DISCONNECTIES_RUA_RANAP_MESSAGE_PRESENT)
		rc = hnbgw_ranap_rx(msg, ies.ranaP_Message.buf,
				    ies.ranaP_Message.size);

	/* FIXME */
	return rc;
}

static int rua_rx_init_dt(struct msgb *msg, ANY_t *in)
{
	RUA_DirectTransferIEs_t ies;
	uint32_t context_id;
	int rc;

	rc = rua_decode_directtransferies(&ies, in);
	if (rc < 0)
		return rc;

	context_id = asn1bitstr_to_u32(&ies.context_ID);

	DEBUGP(DMAIN, "Data.req(ctx=0x%x)\n", context_id);
	/* FIXME */
	rc = hnbgw_ranap_rx(msg, ies.ranaP_Message.buf, ies.ranaP_Message.size);

	return rc;

}

static int rua_rx_init_udt(struct msgb *msg, ANY_t *in)
{
	RUA_ConnectionlessTransferIEs_t ies;
	int rc;

	rc = rua_decode_connectionlesstransferies(&ies, in);
	if (rc < 0)
		return rc;

	DEBUGP(DMAIN, "UData.req()\n");

	/* FIXME: pass on to RANAP */
	rc = hnbgw_ranap_rx(msg, ies.ranaP_Message.buf, ies.ranaP_Message.size);
	/* FIXME: what to do with the asn1c-allocated memory */

	return rc;
}


static int rua_rx_init_err_ind(struct msgb *msg, ANY_t *in)
{
	RUA_ErrorIndicationIEs_t ies;
	int rc;

	rc = rua_decode_errorindicationies(&ies, in);
	if (rc < 0)
		return rc;

}

static int rua_rx_initiating_msg(struct msgb *msg, RUA_InitiatingMessage_t *imsg)
{
	int rc;

	switch (imsg->procedureCode) {
	case RUA_ProcedureCode_id_Connect:
		rc = rua_rx_init_connect(msg, &imsg->value);
		break;
	case RUA_ProcedureCode_id_DirectTransfer:
		rc = rua_rx_init_dt(msg, &imsg->value);
		break;
	case RUA_ProcedureCode_id_Disconnect:
		rc = rua_rx_init_disconnect(msg, &imsg->value);
		break;
	case RUA_ProcedureCode_id_ConnectionlessTransfer:
		rc = rua_rx_init_udt(msg, &imsg->value);
		break;
	case RUA_ProcedureCode_id_ErrorIndication:
		rc = rua_rx_init_err_ind(msg, &imsg->value);
		break;
	case RUA_ProcedureCode_id_privateMessage:
		break;
	default:
		return -1;
	}
}

static int rua_rx_successful_outcome_msg(struct msgb *msg, RUA_SuccessfulOutcome_t *in)
{

}

static int rua_rx_unsuccessful_outcome_msg(struct msgb *msg, RUA_UnsuccessfulOutcome_t *in)
{

}


static int _hnbgw_rua_rx(struct msgb *msg, RUA_RUA_PDU_t *pdu)
{
	int rc;

	/* it's a bit odd that we can't dispatch on procedure code, but
	 * that's not possible */
	switch (pdu->present) {
	case RUA_RUA_PDU_PR_initiatingMessage:
		rc = rua_rx_initiating_msg(msg, &pdu->choice.initiatingMessage);
		break;
	case RUA_RUA_PDU_PR_successfulOutcome:
		rc = rua_rx_successful_outcome_msg(msg, &pdu->choice.successfulOutcome);
		break;
	case RUA_RUA_PDU_PR_unsuccessfulOutcome:
		rc = rua_rx_unsuccessful_outcome_msg(msg, &pdu->choice.unsuccessfulOutcome);
		break;
	default:
		return -1;
	}
}

int hnbgw_rua_rx(struct hnb_context *hnb, struct msgb *msg)
{
	RUA_RUA_PDU_t _pdu, *pdu = &_pdu;
	asn_dec_rval_t dec_ret;
	int rc;

	/* decode and handle to _hnbgw_hnbap_rx() */

	memset(pdu, 0, sizeof(*pdu));
	dec_ret = aper_decode(NULL, &asn_DEF_RUA_RUA_PDU, (void **) &pdu,
			      msg->data, msgb_length(msg), 0, 0);
	if (dec_ret.code != RC_OK) {
		LOGP(DRUA, LOGL_ERROR, "Error in ASN.1 decode\n");
		return rc;
	}

	rc = _hnbgw_rua_rx(msg, pdu);

	return rc;
}


int hnbgw_rua_init(void)
{

}
