/* RANAP interface for a ran-network node */

/* (C) 2021 by sysmocom s.f.m.c. GmbH <info@sysmocom.de>
 * All Rights Reserved
 *
 * Author: Philipp Maier
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

#include <unistd.h>
#include <errno.h>
#include <string.h>

#include <osmocom/core/utils.h>
#include <osmocom/core/logging.h>

#include <osmocom/ranap/ranap_common.h>
#include <osmocom/ranap/ranap_common_ran.h>
#include <osmocom/ranap/ranap_ies_defs.h>

#define DRANAP _ranap_DRANAP

static int ran_ranap_rx_initiating_msg_co(void *ctx, RANAP_InitiatingMessage_t *imsg, ranap_message *message)
{
	int rc = 0;

	message->procedureCode = imsg->procedureCode;
	message->criticality = imsg->criticality;

	DEBUGP(DRANAP, "Rx CO IM (%s)\n", get_value_string(ranap_procedure_code_vals, imsg->procedureCode));

	switch (imsg->procedureCode) {
	case RANAP_ProcedureCode_id_RAB_Assignment:
		rc = ranap_decode_rab_assignmentrequesties(&message->msg.raB_AssignmentRequestIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_DirectTransfer:
		rc = ranap_decode_directtransferies(&message->msg.directTransferIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_ErrorIndication:
		rc = ranap_decode_errorindicationies(&message->msg.errorIndicationIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_Iu_Release:
		rc = ranap_decode_iu_releasecommandies(&message->msg.iu_ReleaseCommandIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_RelocationResourceAllocation:
		rc = ranap_decode_relocationrequesties(&message->msg.relocationRequestIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_SRNS_ContextTransfer:
		rc = ranap_decode_srns_contextrequesties(&message->msg.srnS_ContextRequestIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_SRNS_DataForward:
		rc = ranap_decode_srns_dataforwardcommandies(&message->msg.srnS_DataForwardCommandIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_ForwardSRNS_Context:
		rc = ranap_decode_forwardsrns_contexties(&message->msg.forwardSRNS_ContextIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_CommonID:
		rc = ranap_decode_commonid_ies(&message->msg.commonID_IEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_CN_InvokeTrace:
		rc = ranap_decode_cn_invoketraceies(&message->msg.cN_InvokeTraceIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_SecurityModeControl:
		rc = ranap_decode_securitymodecommandies(&message->msg.securityModeCommandIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_LocationReportingControl:
		rc = ranap_decode_locationreportingcontrolies(&message->msg.locationReportingControlIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_DataVolumeReport:
		rc = ranap_decode_datavolumereportrequesties(&message->msg.dataVolumeReportRequestIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_CN_DeactivateTrace:
		rc = ranap_decode_cn_deactivatetraceies(&message->msg.cN_DeactivateTraceIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_LocationRelatedData:
		rc = ranap_decode_locationrelateddatarequesties(&message->msg.locationRelatedDataRequestIEs, &imsg->value);
		break;
	default:
		LOGP(DRANAP, LOGL_INFO,
		     "Received RANAP Procedure %s (CO, IM) from CN. Decode not implemented\n",
		     get_value_string(ranap_procedure_code_vals, imsg->procedureCode));
		rc = -1;
		break;
	}

	return rc;
}

static void ran_ranap_free_initiating_msg_co(ranap_message *message)
{
	switch (message->procedureCode) {
	case RANAP_ProcedureCode_id_RAB_Assignment:
		ranap_free_rab_assignmentrequesties(&message->msg.raB_AssignmentRequestIEs);
		break;
	case RANAP_ProcedureCode_id_DirectTransfer:
		ranap_free_directtransferies(&message->msg.directTransferIEs);
		break;
	case RANAP_ProcedureCode_id_ErrorIndication:
		ranap_free_errorindicationies(&message->msg.errorIndicationIEs);
		break;
	case RANAP_ProcedureCode_id_Iu_Release:
		ranap_free_iu_releasecommandies(&message->msg.iu_ReleaseCommandIEs);
		break;
	case RANAP_ProcedureCode_id_RelocationResourceAllocation:
		ranap_free_relocationrequesties(&message->msg.relocationRequestIEs);
		break;
	case RANAP_ProcedureCode_id_SRNS_ContextTransfer:
		ranap_free_srns_contextrequesties(&message->msg.srnS_ContextRequestIEs);
		break;
	case RANAP_ProcedureCode_id_SRNS_DataForward:
		ranap_free_srns_dataforwardcommandies(&message->msg.srnS_DataForwardCommandIEs);
		break;
	case RANAP_ProcedureCode_id_ForwardSRNS_Context:
		ranap_free_forwardsrns_contexties(&message->msg.forwardSRNS_ContextIEs);
		break;
	case RANAP_ProcedureCode_id_CommonID:
		ranap_free_commonid_ies(&message->msg.commonID_IEs);
		break;
	case RANAP_ProcedureCode_id_CN_InvokeTrace:
		ranap_free_cn_invoketraceies(&message->msg.cN_InvokeTraceIEs);
		break;
	case RANAP_ProcedureCode_id_SecurityModeControl:
		ranap_free_securitymodecommandies(&message->msg.securityModeCommandIEs);
		break;
	case RANAP_ProcedureCode_id_LocationReportingControl:
		ranap_free_locationreportingcontrolies(&message->msg.locationReportingControlIEs);
		break;
	case RANAP_ProcedureCode_id_DataVolumeReport:
		ranap_free_datavolumereportrequesties(&message->msg.dataVolumeReportRequestIEs);
		break;
	case RANAP_ProcedureCode_id_CN_DeactivateTrace:
		ranap_free_cn_deactivatetraceies(&message->msg.cN_DeactivateTraceIEs);
		break;
	case RANAP_ProcedureCode_id_LocationRelatedData:
		ranap_free_locationrelateddatarequesties(&message->msg.locationRelatedDataRequestIEs);
		break;
	default:
		LOGP(DRANAP, LOGL_INFO,
		     "Freeing RANAP Procedure %s (CO, IM) from CN not implemented\n",
		     get_value_string(ranap_procedure_code_vals, message->procedureCode));
		break;
	}
}

static int ran_ranap_rx_successful_msg_co(RANAP_SuccessfulOutcome_t *imsg, ranap_message *message)
{
	int rc = 0;

	message->procedureCode = imsg->procedureCode;
	message->criticality = imsg->criticality;

	DEBUGP(DRANAP, "Rx CO SO (%s)\n", get_value_string(ranap_procedure_code_vals, imsg->procedureCode));

	switch (imsg->procedureCode) {
	case RANAP_ProcedureCode_id_RelocationPreparation: /* RELOCATION COMMAND */
		rc = ranap_decode_relocationcommandies(&message->msg.relocationCommandIEs, &imsg->value);
		break;
	default:
		LOGP(DRANAP, LOGL_NOTICE, "Received unsupported RANAP "
		     "successful outcome procedure %s (CO) from CN, ignoring\n",
		     get_value_string(ranap_procedure_code_vals, imsg->procedureCode));
		rc = -1;
		break;
	}

	return rc;
}

static void ran_ranap_free_successful_msg_co(ranap_message *message)
{
	switch (message->procedureCode) {
	case RANAP_ProcedureCode_id_RelocationPreparation:
		ranap_free_relocationcommandies(&message->msg.relocationCommandIEs);
		break;
	default:
		LOGP(DRANAP, LOGL_NOTICE, "Freeing RANAP "
		     "successful outcome procedure %s (CO) from CN not implemented\n",
		     get_value_string(ranap_procedure_code_vals, message->procedureCode));
		break;
	}
}

static int ran_ranap_rx_unsuccessful_msg_co(RANAP_SuccessfulOutcome_t *imsg, ranap_message *message)
{
	int rc = 0;

	message->procedureCode = imsg->procedureCode;
	message->criticality = imsg->criticality;

	DEBUGP(DRANAP, "Rx CO USO (%s)\n", get_value_string(ranap_procedure_code_vals, imsg->procedureCode));

	switch (imsg->procedureCode) {
	case RANAP_ProcedureCode_id_RelocationPreparation: /* RELOCATION PREPARATION FAILURE */
		rc = ranap_decode_relocationpreparationfailureies(&message->msg.relocationPreparationFailureIEs, &imsg->value);
		break;
	default:
		LOGP(DRANAP, LOGL_NOTICE, "Received unsupported RANAP "
		     "unsuccessful outcome procedure %s (CO) from CN, ignoring\n",
		     get_value_string(ranap_procedure_code_vals, imsg->procedureCode));
		rc = -1;
		break;

	}

	return rc;
}

static void ran_ranap_free_unsuccessful_msg_co(ranap_message *message)
{
	switch (message->procedureCode) {
	case RANAP_ProcedureCode_id_RelocationPreparation:
		ranap_free_relocationpreparationfailureies(&message->msg.relocationPreparationFailureIEs);
		break;
	default:
		LOGP(DRANAP, LOGL_NOTICE, "Freeing RANAP "
		     "unsuccessful outcome procedure %s (CO) from CN not implemented\n",
		     get_value_string(ranap_procedure_code_vals, message->procedureCode));
		break;
	}
}

static int _ran_ranap_rx_co(void *ctx, RANAP_RANAP_PDU_t *pdu, ranap_message *message)
{
	int rc = 0;

	switch (pdu->present) {
	case RANAP_RANAP_PDU_PR_initiatingMessage:
		rc = ran_ranap_rx_initiating_msg_co(ctx, &pdu->choice.initiatingMessage, message);
		break;
	case RANAP_RANAP_PDU_PR_successfulOutcome:
		rc = ran_ranap_rx_successful_msg_co(&pdu->choice.successfulOutcome, message);
		break;
	case RANAP_RANAP_PDU_PR_unsuccessfulOutcome:
		rc = ran_ranap_rx_unsuccessful_msg_co(&pdu->choice.successfulOutcome, message);
		break;
	case RANAP_RANAP_PDU_PR_outcome:
		LOGP(DRANAP, LOGL_NOTICE, "Received unsupported RANAP "
		     "outcome procedure %s (CO) from CN, ignoring\n",
		     get_value_string(ranap_procedure_code_vals, pdu->choice.outcome.procedureCode));
		rc = -1;
		break;
	default:
		LOGP(DRANAP, LOGL_INFO,
		     "Received RANAP Procedure %s (CO) from CN. Decode not implemented\n",
		      get_value_string(ranap_presence_vals, pdu->present));
		rc = -1;
		break;
	}

	return rc;
}

/* free a decoded connection-oriented RANAP message */
void ranap_ran_rx_co_free(ranap_message *message)
{
	switch (message->direction) {
	case RANAP_RANAP_PDU_PR_initiatingMessage:
		ran_ranap_free_initiating_msg_co(message);
		break;
	case RANAP_RANAP_PDU_PR_successfulOutcome:
		ran_ranap_free_successful_msg_co(message);
		break;
	case RANAP_RANAP_PDU_PR_unsuccessfulOutcome:
		ran_ranap_free_unsuccessful_msg_co(message);
		break;
	case RANAP_RANAP_PDU_PR_outcome:
		LOGP(DRANAP, LOGL_NOTICE, "Not freeing unsupported RANAP "
		     "outcome procedure (CO) from CN\n");
		break;
	default:
		LOGP(DRANAP, LOGL_INFO,
		     "Freeing RANAP Procedure %s (CO) from CN not implemented\n",
		     get_value_string(ranap_presence_vals, message->direction));
		break;
	}
}

/* decode a connection-oriented RANAP message */
int ranap_ran_rx_co_decode(void *ctx, ranap_message *message, uint8_t *data, size_t len)
{
	RANAP_RANAP_PDU_t *pdu = NULL;
	asn_dec_rval_t dec_ret;
	int rc;

	memset(message, 0, sizeof(*message));

	dec_ret = aper_decode(NULL, &asn_DEF_RANAP_RANAP_PDU, (void **)&pdu, data, len, 0, 0);
	if (dec_ret.code != RC_OK) {
		LOGP(DRANAP, LOGL_ERROR, "Error in RANAP ASN.1 decode\n");
		return -1;
	}

	message->direction = pdu->present;

	rc = _ran_ranap_rx_co(ctx, pdu, message);

	ASN_STRUCT_FREE(asn_DEF_RANAP_RANAP_PDU, pdu);

	return rc;
}

/* receive a connection-oriented RANAP message and call
 * cn_ranap_handle_co() with the resulting ranap_message struct */
int ranap_ran_rx_co(ranap_handle_cb cb, void *ctx, uint8_t *data, size_t len)
{
	ranap_message message;
	int rc;

	rc = ranap_ran_rx_co_decode(ctx, &message, data, len);

	if (rc == 0)
		(*cb) (ctx, &message);
	else
		LOGP(DRANAP, LOGL_ERROR, "Not calling ran_ranap_handle_co() due to rc=%d\n", rc);

	/* Free the asn1 structs in message */
	ranap_ran_rx_co_free(&message);

	return rc;
}
