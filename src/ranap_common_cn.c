/* RANAP interface for a core-network node */

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

#include <unistd.h>
#include <errno.h>
#include <string.h>

#include <osmocom/core/utils.h>
#include <osmocom/core/logging.h>

#include <osmocom/ranap/ranap_common.h>
#include <osmocom/ranap/ranap_common_cn.h>
#include <osmocom/ranap/ranap_ies_defs.h>

#include "hnbgw.h"

static int cn_ranap_rx_initiating_msg_co(void *ctx, RANAP_InitiatingMessage_t *imsg,
					 ranap_message *message)
{
	int rc = 0;

	message->procedureCode = imsg->procedureCode;
	message->criticality = imsg->criticality;

	DEBUGP(DRANAP, "Rx CO IM (%s)\n",
		get_value_string(ranap_procedure_code_vals, imsg->procedureCode));

	switch (imsg->procedureCode) {
	case RANAP_ProcedureCode_id_InitialUE_Message:
		rc = ranap_decode_initialue_messageies(&message->msg.initialUE_MessageIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_DirectTransfer:
		rc = ranap_decode_directtransferies(&message->msg.directTransferIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_RAB_ReleaseRequest:
		/* RNC requests the release of RAB */
		rc = ranap_decode_rab_releaserequesties(&message->msg.raB_ReleaseRequestIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_Iu_ReleaseRequest:
		/* RNC requests the release of Iu */
		rc = ranap_decode_iu_releaserequesties(&message->msg.iu_ReleaseRequestIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_ErrorIndication:
		rc = ranap_decode_errorindicationies(&message->msg.errorIndicationIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_RAB_ModifyRequest:
		rc = ranap_decode_rab_modifyrequesties(&message->msg.raB_ModifyRequestIEs, &imsg->value);
		break;
	default:
		LOGP(DRANAP, LOGL_NOTICE, "Received suspicious RANAP "
		     "Procedure %s (CO, IM) from RNC, ignoring\n",
		     get_value_string(ranap_procedure_code_vals, imsg->procedureCode));
		rc = -1;
		break;
	}

	return rc;
}

static int cn_ranap_rx_successful_msg_co(void *ctx, RANAP_SuccessfulOutcome_t *imsg,
					 ranap_message *message)
{
	int rc = 0;

	message->procedureCode = imsg->procedureCode;
	message->criticality = imsg->criticality;

	DEBUGP(DRANAP, "Rx CO SO (%s)\n",
		get_value_string(ranap_procedure_code_vals, imsg->procedureCode));

	switch (imsg->procedureCode) {
	case RANAP_ProcedureCode_id_RAB_Assignment:
		/* RAB assignment response */
		rc = ranap_decode_rab_assignmentresponseies(&message->msg.raB_AssignmentResponseIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_SecurityModeControl:
		/* Security Mode Complete */
		rc = ranap_decode_securitymodecompleteies(&message->msg.securityModeCompleteIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_Iu_Release:
		/* Iu release Complete; confirmation of CN-initiated release */
		rc = ranap_decode_iu_releasecompleteies(&message->msg.iu_ReleaseCompleteIEs, &imsg->value);
		break;
	default:
		LOGP(DRANAP, LOGL_NOTICE, "Received suspicious RANAP "
		     "Procedure %s (SO) from RNC, ignoring\n",
		     get_value_string(ranap_procedure_code_vals, imsg->procedureCode));
		rc = -1;
		break;
	}

	return rc;
}

static int cn_ranap_rx_outcome_msg_co(void *ctx, RANAP_Outcome_t *imsg,
					ranap_message *message)
{
	int rc = 0;

	message->procedureCode = imsg->procedureCode;
	message->criticality = imsg->criticality;

	DEBUGP(DRANAP, "Rx CO O (%s)\n",
		get_value_string(ranap_procedure_code_vals, imsg->procedureCode));

	switch (imsg->procedureCode) {
	case RANAP_ProcedureCode_id_RAB_Assignment:
		/* RAB assignment response */
		rc = ranap_decode_rab_assignmentresponseies(&message->msg.raB_AssignmentResponseIEs, &imsg->value);
		break;
	default:
		LOGP(DRANAP, LOGL_NOTICE, "Received suspicious RANAP "
		     "Procedure %s (O) from RNC, ignoring\n",
		     get_value_string(ranap_procedure_code_vals, imsg->procedureCode));
		rc = -1;
		break;
	}

	return rc;
}

static int _cn_ranap_rx_co(void *ctx, RANAP_RANAP_PDU_t *pdu, ranap_message *message)
{
	int rc = 0;

	switch (pdu->present) {
	case RANAP_RANAP_PDU_PR_initiatingMessage:
		rc = cn_ranap_rx_initiating_msg_co(ctx, &pdu->choice.initiatingMessage, message);
		break;
	case RANAP_RANAP_PDU_PR_successfulOutcome:
		rc = cn_ranap_rx_successful_msg_co(ctx, &pdu->choice.successfulOutcome, message);
		break;
	case RANAP_RANAP_PDU_PR_unsuccessfulOutcome:
		LOGP(DRANAP, LOGL_NOTICE, "Received unsupported RANAP "
		     "unsuccessful outcome procedure %s (CO) from RNC, ignoring\n",
		     get_value_string(ranap_procedure_code_vals,
			     	      pdu->choice.unsuccessfulOutcome.procedureCode));
		rc = -1;
		break;
	case RANAP_RANAP_PDU_PR_outcome:
		rc = cn_ranap_rx_outcome_msg_co(ctx, &pdu->choice.successfulOutcome, message);
		break;
	default:
		LOGP(DRANAP, LOGL_NOTICE, "Received suspicious RANAP "
		     "presence %s (CO) from RNC, ignoring\n",
		     get_value_string(ranap_presence_vals, pdu->present));
		rc = -1;
		break;
	}

	return rc;
}

/* receive a connection-oriented RANAP message and call
 * cn_ranap_handle_co() with the resulting ranap_message struct */
int ranap_cn_rx_co(ranap_handle_cb cb, void *ctx, uint8_t *data, size_t len)
{
	RANAP_RANAP_PDU_t *pdu = NULL;
	ranap_message message;
	asn_dec_rval_t dec_ret;
	int rc;

	memset(&message, 0, sizeof(message));

	dec_ret = aper_decode(NULL,&asn_DEF_RANAP_RANAP_PDU, (void **) &pdu,
			      data, len, 0, 0);
	if (dec_ret.code != RC_OK) {
		LOGP(DRANAP, LOGL_ERROR, "Error in RANAP ASN.1 decode\n");
		return rc;
	}

	message.direction = pdu->present;

	rc = _cn_ranap_rx_co(ctx, pdu, &message);

	if (rc == 0)
		(*cb)(ctx, &message);
	else
		LOGP(DRANAP, LOGL_ERROR, "Not calling cn_ranap_handle_co() due to rc=%d\n", rc);

	ASN_STRUCT_FREE(asn_DEF_RANAP_RANAP_PDU, pdu);

	return rc;
}

static int cn_ranap_rx_initiating_msg_cl(void *ctx, RANAP_InitiatingMessage_t *imsg,
					 ranap_message *message)
{
	int rc;

	message->procedureCode = imsg->procedureCode;
	message->criticality = imsg->criticality;

	DEBUGP(DRANAP, "Rx CL IM (%s)\n",
		get_value_string(ranap_procedure_code_vals, imsg->procedureCode));

	switch (imsg->procedureCode) {
	case RANAP_ProcedureCode_id_Reset:
		/* Reset request */
		rc = ranap_decode_reseties(&message->msg.resetIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_OverloadControl: /* Overload ind */
		rc = ranap_decode_overloadies(&message->msg.overloadIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_ErrorIndication: /* Error ind */
		rc = ranap_decode_errorindicationies(&message->msg.errorIndicationIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_ResetResource: /* request */
		rc = ranap_decode_resetresourceies(&message->msg.resetResourceIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_InformationTransfer:
		rc = ranap_decode_informationtransferindicationies(&message->msg.informationTransferIndicationIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_DirectInformationTransfer:
		rc = ranap_decode_directinformationtransferies(&message->msg.directInformationTransferIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_UplinkInformationExchange:
		rc = ranap_decode_uplinkinformationexchangerequesties(&message->msg.uplinkInformationExchangeRequestIEs, &imsg->value);
		break;
	default:
		LOGP(DRANAP, LOGL_NOTICE, "Received suspicious RANAP "
		     "Procedure %s (CL, IM) from RNC, ignoring\n",
		     get_value_string(ranap_procedure_code_vals, imsg->procedureCode));
		break;
	}
}

static int cn_ranap_rx_successful_msg_cl(void *ctx, RANAP_SuccessfulOutcome_t *imsg,
					 ranap_message *message)
{
	int rc;

	message->procedureCode = imsg->procedureCode;
	message->criticality = imsg->criticality;

	DEBUGP(DRANAP, "Rx CL SO (%s)\n",
		get_value_string(ranap_procedure_code_vals, imsg->procedureCode));

	switch (imsg->procedureCode) {
	case RANAP_ProcedureCode_id_Reset: /* Reset acknowledge */
		rc = ranap_decode_resetacknowledgeies(&message->msg.resetAcknowledgeIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_ResetResource: /* response */
		rc = ranap_decode_resetresourceacknowledgeies(&message->msg.resetResourceAcknowledgeIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_InformationTransfer:
		rc = ranap_decode_resetresourceacknowledgeies(&message->msg.resetResourceAcknowledgeIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_DirectInformationTransfer:
		rc = ranap_decode_informationtransferconfirmationies(&message->msg.informationTransferConfirmationIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_UplinkInformationExchange:
		rc = ranap_decode_uplinkinformationexchangeresponseies(&message->msg.uplinkInformationExchangeResponseIEs, &imsg->value);
		break;
	default:
		LOGP(DRANAP, LOGL_NOTICE, "Received suspicious RANAP "
		     "Procedure %s (CL, SO) from RNC, ignoring\n",
		     get_value_string(ranap_procedure_code_vals, imsg->procedureCode));
		break;
	}
}

static int _cn_ranap_rx_cl(void *ctx, RANAP_RANAP_PDU_t *pdu, ranap_message *message)
{
	int rc;

	switch (pdu->present) {
	case RANAP_RANAP_PDU_PR_initiatingMessage:
		rc = cn_ranap_rx_initiating_msg_cl(ctx, &pdu->choice.initiatingMessage,
						   message);
		break;
	case RANAP_RANAP_PDU_PR_successfulOutcome:
		rc = cn_ranap_rx_successful_msg_cl(ctx, &pdu->choice.successfulOutcome,
						   message);
		break;
	case RANAP_RANAP_PDU_PR_unsuccessfulOutcome:
		LOGP(DRANAP, LOGL_NOTICE, "Received unsupported RANAP "
		     "unsuccessful outcome procedure %s (CL) from RNC, ignoring\n",
		     get_value_string(ranap_procedure_code_vals,
			     	      pdu->choice.unsuccessfulOutcome.procedureCode));
		break;
	default:
		LOGP(DRANAP, LOGL_NOTICE, "Received suspicious RANAP "
		     "presence %s (CL) from RNC, ignoring\n",
		     get_value_string(ranap_presence_vals, pdu->present));
		break;
	}
}

/* receive a connection-oriented RANAP message and call
 * cn_ranap_handle_co() with the resulting ranap_message struct */
int ranap_cn_rx_cl(ranap_handle_cb cb, void *ctx, uint8_t *data, size_t len)
{
	RANAP_RANAP_PDU_t *pdu = NULL;
	ranap_message message;
	asn_dec_rval_t dec_ret;
	int rc;

	memset(&message, 0, sizeof(message));

	dec_ret = aper_decode(NULL,&asn_DEF_RANAP_RANAP_PDU, (void **) &pdu,
			      data, len, 0, 0);
	if (dec_ret.code != RC_OK) {
		LOGP(DRANAP, LOGL_ERROR, "Error in RANAP ASN.1 decode\n");
		return rc;
	}

	message.direction = pdu->present;

	rc = _cn_ranap_rx_cl(ctx, pdu, &message);

	if (rc == 0)
		(*cb)(ctx, &message);
	else
		LOGP(DRANAP, LOGL_ERROR, "Not calling cn_ranap_handle_cl() due to rc=%d\n", rc);

	ASN_STRUCT_FREE(asn_DEF_RANAP_RANAP_PDU, pdu);

	return rc;
}
