#include <osmocom/core/msgb.h>
#include <osmocom/core/utils.h>

#include <unistd.h>
#include <errno.h>
#include <string.h>

#include "asn1helpers.h"

#include "hnbgw.h"
#include "rua_common.h"
#include "rua_ies_defs.h"

static int hnbgw_rua_tx(struct hnb_context *ctx, struct msgb *msg)
{
	if (!msg)
		return -EINVAL;

	msgb_ppid(msg) = IUH_PPI_RUA;
	return osmo_wqueue_enqueue(&ctx->wqueue, msg);
}


static int rua_rx_initiating_msg(struct hnb_context *hnb, RUA_InitiatingMessage_t *imsg)
{
	int rc;

	switch (imsg->procedureCode) {
	case RUA_ProcedureCode_id_Connect:
		break;
	case RUA_ProcedureCode_id_DirectTransfer:
		break;
	case RUA_ProcedureCode_id_Disconnect:
		break;
	case RUA_ProcedureCode_id_ConnectionlessTransfer:
		break;
	case RUA_ProcedureCode_id_ErrorIndication:
	case RUA_ProcedureCode_id_privateMessage:
		break;
	default:
		break;
	}
}

static int rua_rx_successful_outcome_msg(struct hnb_context *hnb, RUA_SuccessfulOutcome_t *msg)
{

}

static int rua_rx_unsuccessful_outcome_msg(struct hnb_context *hnb, RUA_UnsuccessfulOutcome_t *msg)
{

}


static int _hnbgw_rua_rx(struct hnb_context *hnb, RUA_RUA_PDU_t *pdu)
{
	int rc;

	/* it's a bit odd that we can't dispatch on procedure code, but
	 * that's not possible */
	switch (pdu->present) {
	case RUA_RUA_PDU_PR_initiatingMessage:
		rc = rua_rx_initiating_msg(hnb, &pdu->choice.initiatingMessage);
		break;
	case RUA_RUA_PDU_PR_successfulOutcome:
		rc = rua_rx_successful_outcome_msg(hnb, &pdu->choice.successfulOutcome);
		break;
	case RUA_RUA_PDU_PR_unsuccessfulOutcome:
		rc = rua_rx_unsuccessful_outcome_msg(hnb, &pdu->choice.unsuccessfulOutcome);
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
		LOGP(DMAIN, LOGL_ERROR, "Error in ASN.1 decode\n");
		return rc;
	}

	rc = _hnbgw_rua_rx(hnb, pdu);

	return rc;
}


int hnbgw_rua_init(void)
{

}
