/* common SABP code */

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

#include <stdint.h>

#include <osmocom/core/msgb.h>

#include <osmocom/sabp/sabp_common.h>
#include <asn1c/asn1helpers.h>

extern int asn1_xer_print;
int _sabp_DSABP = 0;
#define DSABP _sabp_DSABP

const struct value_string sabp_presence_vals[] = {
	{ SABP_SABP_PDU_PR_initiatingMessage,	"Initiating" },
	{ SABP_SABP_PDU_PR_successfulOutcome,	"Successful Outcome" },
	{ SABP_SABP_PDU_PR_unsuccessfulOutcome,	"Unsuccessful Outcome" },
	{ 0, NULL }
};

const struct value_string sabp_procedure_code_vals[] = {
	{ SABP_ProcedureCode_id_Write_Replace, "Write-Replace" },
	{ SABP_ProcedureCode_id_Kill, "Kill" },
	{ SABP_ProcedureCode_id_Load_Status_Enquiry, "Load-Status-Enquiry" },
	{ SABP_ProcedureCode_id_Message_Status_Query, "Message-Status-Query" },
	{ SABP_ProcedureCode_id_Restart_Indication, "Restart-Indication" },
	{ SABP_ProcedureCode_id_Reset, "Reset" },
	{ SABP_ProcedureCode_id_Failure_Indication, "Failure-Indication" },
	{ SABP_ProcedureCode_id_Error_Indication, "Error-Indication" },
	{ 0, NULL }
};

const struct value_string sabp_cause_vals[] = {
	{ SABP_Cause_parameter_not_recognised, "Parameter not recognized" },
	{ SABP_Cause_parameter_value_invalid, "Parameter value invalid" },
	{ SABP_Cause_valid_CN_message_not_identified, "Valid CN message not identified" },
	{ SABP_Cause_service_area_identity_not_valid, "Service Area Identity not valid" },
	{ SABP_Cause_unrecognised_message, "Unrecognised message" },
	{ SABP_Cause_missing_mandatory_element, "Missing mandatory element" },
	{ SABP_Cause_rNC_capacity_exceeded, "RNC capacity exceeded" },
	{ SABP_Cause_rNC_memory_exceeded, "RNC memory exceeded" },
	{ SABP_Cause_service_area_broadcast_not_supported, "Service Area Broadcast not supported" },
	{ SABP_Cause_service_area_broadcast_not_operational, "Service Area Broadcast not operational" },
	{ SABP_Cause_message_reference_already_used, "Message Reference already used" },
	{ SABP_Cause_unspecifed_error, "Unspecified Error" },
	{ SABP_Cause_transfer_syntax_error, "Transfer Syntax Error" },
	{ SABP_Cause_semantic_error, "Semantic Error" },
	{ SABP_Cause_message_not_compatible_with_receiver_state,
						"Message not compatible with receiver state" },
	{ SABP_Cause_abstract_syntax_error_reject, "Abstract Syntax Error - Reject" },
	{ SABP_Cause_abstract_syntax_error_ignore_and_notify,
						"Abstract Syntax Error - Ignore and Notify" },
	{ SABP_Cause_abstract_syntax_error_falsely_constructed_message,
						"Abstract Syntax Error - Falsely constructed message" },
	{ 0, NULL }
};

static struct msgb *sabp_msgb_alloc(void)
{
	return msgb_alloc_headroom(1024+512, 512, "SABP Tx");
}

static struct msgb *_sabp_gen_msg(SABP_SABP_PDU_t *pdu)
{
	struct msgb *msg = sabp_msgb_alloc();
	asn_enc_rval_t rval;

	if (!msg)
		return NULL;

	rval = aper_encode_to_buffer(&asn_DEF_SABP_SABP_PDU, pdu,
				       msg->data, msgb_tailroom(msg));
	if (rval.encoded < 0) {
		LOGP(DSABP, LOGL_ERROR, "Error encoding type: %s\n",
				rval.failed_type->name);

	}

	msgb_put(msg, rval.encoded/8);

	return msg;
}

struct msgb *sabp_generate_initiating_message(e_SABP_ProcedureCode procedureCode,
					  SABP_Criticality_t criticality,
					  asn_TYPE_descriptor_t *td, void *sptr)
{
	SABP_SABP_PDU_t pdu;
	struct msgb *msg;
	int rc;

	memset(&pdu, 0, sizeof(pdu));

	pdu.present = SABP_SABP_PDU_PR_initiatingMessage;
	pdu.choice.initiatingMessage.procedureCode = procedureCode;
	pdu.choice.initiatingMessage.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.initiatingMessage.value, td, sptr);
	if (rc < 0) {
		LOGP(DSABP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		return NULL;
	}

	msg = _sabp_gen_msg(&pdu);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_SABP_SABP_PDU, &pdu);

	return msg;
}

struct msgb *sabp_generate_successful_outcome(
					   e_SABP_ProcedureCode procedureCode,
					   SABP_Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr)
{
	SABP_SABP_PDU_t pdu;
	struct msgb *msg;
	int rc;

	memset(&pdu, 0, sizeof(pdu));

	pdu.present = SABP_SABP_PDU_PR_successfulOutcome;
	pdu.choice.successfulOutcome.procedureCode = procedureCode;
	pdu.choice.successfulOutcome.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.successfulOutcome.value, td, sptr);
	if (rc < 0) {
		LOGP(DSABP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		return NULL;
	}

	msg = _sabp_gen_msg(&pdu);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_SABP_SABP_PDU, &pdu);

	return msg;
}

struct msgb *sabp_generate_unsuccessful_outcome(
					e_SABP_ProcedureCode procedureCode,
					SABP_Criticality_t criticality,
					asn_TYPE_descriptor_t * td,
					void *sptr)
{
	SABP_SABP_PDU_t pdu;
	struct msgb *msg;
	int rc;

	memset(&pdu, 0, sizeof(pdu));

	pdu.present = SABP_SABP_PDU_PR_unsuccessfulOutcome;
	pdu.choice.unsuccessfulOutcome.procedureCode = procedureCode;
	pdu.choice.unsuccessfulOutcome.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.unsuccessfulOutcome.value, td, sptr);
	if (rc < 0) {
		LOGP(DSABP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		return NULL;
	}

	msg = _sabp_gen_msg(&pdu);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_SABP_SABP_PDU, &pdu);

	return msg;
}

SABP_IE_t *sabp_new_ie(SABP_ProtocolIE_ID_t id,
			SABP_Criticality_t criticality,
			asn_TYPE_descriptor_t * type, void *sptr)
{
	SABP_IE_t *buff;
	int rc;

	if ((buff = CALLOC(1, sizeof(*buff))) == NULL) {
		// Possible error on malloc
		return NULL;
	}

	buff->id = id;
	buff->criticality = criticality;

	rc = ANY_fromType_aper(&buff->value, type, sptr);
	if (rc < 0) {
		LOGP(DSABP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		FREEMEM(buff);
		return NULL;
	}

	if (asn1_xer_print)
		if (xer_fprint(stdout, &asn_DEF_SABP_IE, buff) < 0) {
			FREEMEM(buff);
			return NULL;
		}

	return buff;
}

void sabp_set_log_area(int log_area)
{
	_sabp_DSABP = log_area;
}
