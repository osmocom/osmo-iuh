#include <osmocom/core/msgb.h>
#include <osmocom/core/utils.h>

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

	msgb_ppid(msg) = IUH_PPI_RUA;
	return osmo_wqueue_enqueue(&ctx->wqueue, msg);
}

static const struct value_string rua_cause_radio_vals[] = {
	{ RUA_CauseRadioNetwork_normal,		 "normal" },
	{ RUA_CauseRadioNetwork_connect_failed,	 "connect failed" },
	{ RUA_CauseRadioNetwork_network_release, "network release" },
	{ RUA_CauseRadioNetwork_unspecified,	 "unspecified" },
	{ 0, NULL }
};

static const struct value_string rua_cause_transp_vals[] = {
	{ RUA_CauseTransport_transport_resource_unavailable, "resource unavailable" },
	{ RUA_CauseTransport_unspecified, "unspecified" },
	{ 0, NULL }
};

static const struct value_string rua_cause_prot_vals[] = {
	{ RUA_CauseProtocol_transfer_syntax_error, "syntax error" },
	{ RUA_CauseProtocol_abstract_syntax_error_reject,
		"abstract syntax error; reject" },
	{ RUA_CauseProtocol_abstract_syntax_error_ignore_and_notify,
		"abstract syntax error; ignore and notify" },
	{ RUA_CauseProtocol_message_not_compatible_with_receiver_state,
		"message not compatible with receiver state" },
	{ RUA_CauseProtocol_semantic_error, "semantic error" },
	{ RUA_CauseProtocol_unspecified, "unspecified" },
	{ RUA_CauseProtocol_abstract_syntax_error_falsely_constructed_message,
		"falsely constructed message" },
	{ 0, NULL }
};

static const struct value_string rua_cause_misc_vals[] = {
	{ RUA_CauseMisc_processing_overload,	"processing overload" },
	{ RUA_CauseMisc_hardware_failure,	"hardware failure" },
	{ RUA_CauseMisc_o_and_m_intervention,	"OAM intervention" },
	{ RUA_CauseMisc_unspecified, 		"unspecified" },
	{ 0, NULL }
};

static char *rua_cause_str(RUA_Cause_t *cause)
{
	static char buf[32];

	switch (cause->present) {
	case RUA_Cause_PR_radioNetwork:
		snprintf(buf, sizeof(buf), "radio(%s)",
			 get_value_string(rua_cause_radio_vals,
					 cause->choice.radioNetwork));
		break;
	case RUA_Cause_PR_transport:
		snprintf(buf, sizeof(buf), "transport(%s)",
			get_value_string(rua_cause_transp_vals,
					cause->choice.transport));
		break;
	case RUA_Cause_PR_protocol:
		snprintf(buf, sizeof(buf), "protocol(%s)",
			get_value_string(rua_cause_prot_vals,
					cause->choice.protocol));
		break;
	case RUA_Cause_PR_misc:
		snprintf(buf, sizeof(buf), "misc(%s)",
			get_value_string(rua_cause_misc_vals,
					cause->choice.misc));
		break;
	}
	return buf;
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
	/* FIXME */
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
	/* FIXME */
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
		LOGP(DMAIN, LOGL_ERROR, "Error in ASN.1 decode\n");
		return rc;
	}

	rc = _hnbgw_rua_rx(msg, pdu);

	return rc;
}


int hnbgw_rua_init(void)
{

}
