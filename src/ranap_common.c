/* common RANAP code */

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

#include "ranap_common.h"
#include "hnbgw.h"

extern int asn1_xer_print;

static const struct value_string ranap_cause_radio_vals[] = {
	{ RANAP_CauseRadioNetwork_rab_pre_empted,	"RAB pre-empted" },
	{ RANAP_CauseRadioNetwork_trelocoverall_expiry,	"Treloc_overall expiry" },
	{ RANAP_CauseRadioNetwork_trelocprep_expiry,	"Treloc_prep expiry" },
	{ RANAP_CauseRadioNetwork_treloccomplete_expiry,"Treloc_complete expiry" },
	{ RANAP_CauseRadioNetwork_tqueing_expiry,	"Tqueueing expiry" },
	{ RANAP_CauseRadioNetwork_relocation_triggered,	"Relocation triggered" },
	{ RANAP_CauseRadioNetwork_trellocalloc_expiry,	"Treloc_alloc expiry" },
	{ RANAP_CauseRadioNetwork_unable_to_establish_during_relocation,
		"unable to establish during relocation" },
	{ RANAP_CauseRadioNetwork_unknown_target_rnc,
		"unknown target RNC" },
	{ RANAP_CauseRadioNetwork_relocation_cancelled,	"Relocation cancelled" },
	{ RANAP_CauseRadioNetwork_successful_relocation, "Successful relocation" },
	{ RANAP_CauseRadioNetwork_requested_ciphering_and_or_integrity_protection_algorithms_not_supported,
		"requested ciph. and/or int. prot. algorithms not supported" },
	{ RANAP_CauseRadioNetwork_conflict_with_already_existing_integrity_protection_and_or_ciphering_information,
		"conflict with existing int. prot. and/or ciph. information" },
	{ RANAP_CauseRadioNetwork_failure_in_the_radio_interface_procedure,
		"failure in the radio interface procedure" },
	{ RANAP_CauseRadioNetwork_release_due_to_utran_generated_reason,
		"release due to UTRAN generated reason" },
	{ RANAP_CauseRadioNetwork_user_inactivity, 	"user inactivity" },
	{ RANAP_CauseRadioNetwork_time_critical_relocation,
		"time critical relocation" },
	{ RANAP_CauseRadioNetwork_requested_traffic_class_not_available,
		"requested traffic class not available" },
	{ RANAP_CauseRadioNetwork_invalid_rab_parameters_value,
		"invalid RAB parameters value" },
	{ RANAP_CauseRadioNetwork_requested_maximum_bit_rate_not_available,
		"requested max. bit-rate not available" },
	{ RANAP_CauseRadioNetwork_requested_guaranteed_bit_rate_not_available,
		"requested guaranteed bit-rate not available" },
	{ RANAP_CauseRadioNetwork_requested_transfer_delay_not_achievable,
		"requested transfer delay not achievable" },
	{ RANAP_CauseRadioNetwork_invalid_rab_parameters_combination,
		"invalid RAB parameters combination" },
	{ RANAP_CauseRadioNetwork_condition_violation_for_sdu_parameters,
		"condition violation for SDU parameters" },
	{ RANAP_CauseRadioNetwork_condition_violation_for_traffic_handling_priority,
		"condition violation for traffic handling priority" },
	{ RANAP_CauseRadioNetwork_condition_violation_for_guaranteed_bit_rate,
		"condition violation for guaranteed bit-rate" },
	{ RANAP_CauseRadioNetwork_user_plane_versions_not_supported,
		"user-plane versions not supported" },
	{ RANAP_CauseRadioNetwork_iu_up_failure,	"Iu-UP failure" },
	{ RANAP_CauseRadioNetwork_relocation_failure_in_target_CN_RNC_or_target_system,
		"relocation failure in target CN/RNC or target system" },
	{ RANAP_CauseRadioNetwork_invalid_RAB_ID,	"Invalid RAB ID" },
	{ RANAP_CauseRadioNetwork_no_remaining_rab,	"No remaining RAB" },
	{ RANAP_CauseRadioNetwork_interaction_with_other_procedure,
		"interaction with other procedure" },
	{ RANAP_CauseRadioNetwork_requested_maximum_bit_rate_for_dl_not_available,
		"requested maximum bit-rate for DL not available" },
	{ RANAP_CauseRadioNetwork_requested_maximum_bit_rate_for_ul_not_available,
		"requested maximum bit-rate for UL not available" },
	{ RANAP_CauseRadioNetwork_requested_guaranteed_bit_rate_for_dl_not_available,
		"requested guaranteed bit-rate for DL not available" },
	{ RANAP_CauseRadioNetwork_requested_guaranteed_bit_rate_for_ul_not_available,
		"requested guaranteed bit-rate for UL not available" },
	{ RANAP_CauseRadioNetwork_repeated_integrity_checking_failure,
		"repeated integrity checking failure" },
	{ RANAP_CauseRadioNetwork_requested_request_type_not_supported,
		"requested request type not supported" },
	{ RANAP_CauseRadioNetwork_request_superseded,	"request superseded" },
	{ RANAP_CauseRadioNetwork_release_due_to_UE_generated_signalling_connection_release,
		"release due to UE-generated signalling connection release" },
	{ RANAP_CauseRadioNetwork_resource_optimisation_relocation,
		"resource optimisation relocation" },
	{ RANAP_CauseRadioNetwork_requested_information_not_available,
		"requested information not available" },
	{ RANAP_CauseRadioNetwork_relocation_desirable_for_radio_reasons,
		"relocation desirable for radio reasons" },
	{ RANAP_CauseRadioNetwork_relocation_not_supported_in_target_RNC_or_target_system,
		"relocation not supported in target RNC or target system" },
	{ RANAP_CauseRadioNetwork_directed_retry,	"directed retry" },
	{ RANAP_CauseRadioNetwork_radio_connection_with_UE_Lost,
		"radio connection with UE lost" },
	{ RANAP_CauseRadioNetwork_rNC_unable_to_establish_all_RFCs,
		"RNC unable to establish al RFCs" },
	{ RANAP_CauseRadioNetwork_deciphering_keys_not_available,
		"de-ciphering keys not available" },
	{ RANAP_CauseRadioNetwork_dedicated_assistance_data_not_available,
		"dedicated assistance data not available" },
	{ RANAP_CauseRadioNetwork_relocation_target_not_allowed,
		"relocation target not allowed" },
	{ RANAP_CauseRadioNetwork_location_reporting_congestion,
		"relocation reporting congestion" },
	{ RANAP_CauseRadioNetwork_reduce_load_in_serving_cell,
		"reduce load in serving cell" },
	{ RANAP_CauseRadioNetwork_no_radio_resources_available_in_target_cell,
		"no radio resources available in target cell" },
	{ RANAP_CauseRadioNetwork_gERAN_Iumode_failure,
		"GERAN Iu-Mode failure" },
	{ RANAP_CauseRadioNetwork_access_restricted_due_to_shared_networks,
		"access restricted due to shared networks" },
	{ RANAP_CauseRadioNetwork_incoming_relocation_not_supported_due_to_PUESBINE_feature,
		"incoming relocation not supported due to PUESBINE feature" },
	{ RANAP_CauseRadioNetwork_traffic_load_in_the_target_cell_higher_than_in_the_source_cell,
		"traffic load in the target cell higher than in the source cell" },
	{ RANAP_CauseRadioNetwork_mBMS_no_multicast_service_for_this_UE,
		"MBMS: no multicast service for this UE" },
	{ RANAP_CauseRadioNetwork_mBMS_unknown_UE_ID,	"MBMS: unknown UE ID" },
	{ RANAP_CauseRadioNetwork_successful_MBMS_session_start_no_data_bearer_necessary,
		"successful MBMS session start; no data bearer necessarry" },
	{ RANAP_CauseRadioNetwork_mBMS_superseded_due_to_NNSF,
		"MBMS superseded due to NNSF" },
	{ RANAP_CauseRadioNetwork_mBMS_UE_linking_already_done,
		"MBMS: UE linking already done" },
	{ RANAP_CauseRadioNetwork_mBMS_UE_de_linking_failure_no_existing_UE_linking,
		"MBMS: UE de-linking failure; no existing UE linking" },
	{ RANAP_CauseRadioNetwork_tMGI_unknown,		"TMGI unknown" },
	{ 0, NULL }
};

static const struct value_string ranap_cause_transm_vals[] = {
	{ RANAP_CauseTransmissionNetwork_signalling_transport_resource_failure,
		"signalling transport resource failure"	},
	{ RANAP_CauseTransmissionNetwork_iu_transport_connection_failed_to_establish,
		"Iu transport connection failed to establish" },
	{ 0, NULL }
};

static const struct value_string ranap_cause_nas_vals[] = {
	{ RANAP_CauseNAS_user_restriction_start_indication,
		"user restriction; start indication" },
	{ RANAP_CauseNAS_user_restriction_end_indication,
		"user restriction; stop indication" },
	{ RANAP_CauseNAS_normal_release,
		"normal release" },
	{ RANAP_CauseNAS_csg_subscription_expiry,
		"CSG subscription expiry" },
	{ 0, NULL }
};

static const struct value_string ranap_cause_prot_vals[] = {
	{ RANAP_CauseProtocol_transfer_syntax_error,
		"transfer sytax error" },
	{ RANAP_CauseProtocol_semantic_error,
		"semantic error" },
	{ RANAP_CauseProtocol_message_not_compatible_with_receiver_state,
		"message not compatible with receiver state" },
	{ RANAP_CauseProtocol_abstract_syntax_error_reject,
		"syntax error: reject" },
	{ RANAP_CauseProtocol_abstract_syntax_error_ignore_and_notify,
		"syntax error: ignore and notify" },
	{ RANAP_CauseProtocol_abstract_syntax_error_falsely_constructed_message,
		"syntax error: falsely constructed message" },
	{ 0, NULL }
};

static const struct value_string ranap_cause_misc_vals[] = {
	{ RANAP_CauseMisc_om_intervention,	"OAM intervention" },
	{ RANAP_CauseMisc_no_resource_available, "no resource available" },
	{ RANAP_CauseMisc_unspecified_failure,	"unspecified failure" },
	{ RANAP_CauseMisc_network_optimisation,	"network optimisation" },
	{ 0, NULL }
};

char *ranap_cause_str(const RANAP_Cause_t *cause)
{
	static char buf[128];

	switch (cause->present) {
	case RANAP_Cause_PR_radioNetwork:
		snprintf(buf, sizeof(buf), "radio(%s)",
			 get_value_string(ranap_cause_radio_vals,
					 cause->choice.radioNetwork));
		break;
	case RANAP_Cause_PR_transmissionNetwork:
		snprintf(buf, sizeof(buf), "transmission(%s)",
			get_value_string(ranap_cause_transm_vals,
					cause->choice.transmissionNetwork));
		break;
	case RANAP_Cause_PR_nAS:
		snprintf(buf, sizeof(buf), "nas(%s)",
			get_value_string(ranap_cause_nas_vals,
					cause->choice.nAS));
		break;
	case RANAP_Cause_PR_protocol:
		snprintf(buf, sizeof(buf), "protocol(%s)",
			get_value_string(ranap_cause_prot_vals,
					cause->choice.protocol));
		break;
	case RANAP_Cause_PR_misc:
		snprintf(buf, sizeof(buf), "misc(%s)",
			get_value_string(ranap_cause_misc_vals,
					cause->choice.misc));
		break;
	case RANAP_Cause_PR_non_Standard:
		snprintf(buf, sizeof(buf), "non-standard(%u)",
			cause->choice.non_Standard);
		break;
	default:
		strcpy(buf, "unknown");
		break;
	}
	return buf;
}


static struct msgb *ranap_msgb_alloc(void)
{
	return msgb_alloc(1024, "RANAP Tx");
}

static struct msgb *_ranap_gen_msg(RANAP_RANAP_PDU_t *pdu)
{
	struct msgb *msg = ranap_msgb_alloc();
	asn_enc_rval_t rval;

	if (!msg)
		return NULL;

	rval = aper_encode_to_buffer(&asn_DEF_RANAP_RANAP_PDU, pdu,
				       msg->data, msgb_tailroom(msg));
	if (rval.encoded < 0) {
		LOGP(DRANAP, LOGL_ERROR, "Error encoding type: %s\n",
				rval.failed_type->name);

	}

	msgb_put(msg, rval.encoded/8);

	return msg;
}

struct msgb *ranap_generate_initiating_message(e_RANAP_ProcedureCode procedureCode,
					  RANAP_Criticality_t criticality,
					  asn_TYPE_descriptor_t *td, void *sptr)
{
	RANAP_RANAP_PDU_t pdu;
	struct msgb *msg;
	int rc;

	memset(&pdu, 0, sizeof(pdu));

	pdu.present = RANAP_RANAP_PDU_PR_initiatingMessage;
	pdu.choice.initiatingMessage.procedureCode = procedureCode;
	pdu.choice.initiatingMessage.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.initiatingMessage.value, td, sptr);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		return NULL;
	}

	msg = _ranap_gen_msg(&pdu);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RANAP_PDU, &pdu);

	return msg;
}

struct msgb *ranap_generate_successful_outcome(
					   e_RANAP_ProcedureCode procedureCode,
					   RANAP_Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr)
{
	RANAP_RANAP_PDU_t pdu;
	struct msgb *msg;
	int rc;

	memset(&pdu, 0, sizeof(pdu));

	pdu.present = RANAP_RANAP_PDU_PR_successfulOutcome;
	pdu.choice.successfulOutcome.procedureCode = procedureCode;
	pdu.choice.successfulOutcome.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.successfulOutcome.value, td, sptr);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		return NULL;
	}

	msg = _ranap_gen_msg(&pdu);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RANAP_PDU, &pdu);

	return msg;
}

struct msgb *ranap_generate_unsuccessful_outcome(
					e_RANAP_ProcedureCode procedureCode,
					RANAP_Criticality_t criticality,
					asn_TYPE_descriptor_t * td,
					void *sptr)
{
	RANAP_RANAP_PDU_t pdu;
	struct msgb *msg;
	int rc;

	memset(&pdu, 0, sizeof(pdu));

	pdu.present = RANAP_RANAP_PDU_PR_unsuccessfulOutcome;
	pdu.choice.unsuccessfulOutcome.procedureCode = procedureCode;
	pdu.choice.unsuccessfulOutcome.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.unsuccessfulOutcome.value, td, sptr);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		return NULL;
	}

	msg = _ranap_gen_msg(&pdu);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RANAP_PDU, &pdu);

	return msg;
}

struct msgb *ranap_generate_outcome(
				e_RANAP_ProcedureCode procedureCode,
				RANAP_Criticality_t criticality,
				asn_TYPE_descriptor_t * td,
				void *sptr)
{
	RANAP_RANAP_PDU_t pdu;
	struct msgb *msg;
	int rc;

	memset(&pdu, 0, sizeof(pdu));

	pdu.present = RANAP_RANAP_PDU_PR_outcome;
	pdu.choice.outcome.procedureCode = procedureCode;
	pdu.choice.outcome.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.outcome.value, td, sptr);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		return NULL;
	}

	msg = _ranap_gen_msg(&pdu);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RANAP_PDU, &pdu);

	return msg;
}


RANAP_IE_t *ranap_new_ie(RANAP_ProtocolIE_ID_t id,
			 RANAP_Criticality_t criticality,
			 asn_TYPE_descriptor_t * type, void *sptr)
{
	RANAP_IE_t *buff;
	int rc;

	if ((buff = CALLOC(1, sizeof(*buff))) == NULL) {
		// Possible error on malloc
		return NULL;
	}

	buff->id = id;
	buff->criticality = criticality;

	rc = ANY_fromType_aper(&buff->value, type, sptr);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		FREEMEM(buff);
		return NULL;
	}

	if (asn1_xer_print)
		if (xer_fprint(stdout, &asn_DEF_RANAP_IE, buff) < 0) {
			FREEMEM(buff);
			return NULL;
		}

	return buff;
}

RANAP_ProtocolIE_FieldPair_t *ranap_new_ie_pair(RANAP_ProtocolIE_ID_t id,
				RANAP_Criticality_t criticality1,
				asn_TYPE_descriptor_t *type1, void *sptr1,
				RANAP_Criticality_t criticality2,
				asn_TYPE_descriptor_t *type2, void *sptr2)
{
	RANAP_ProtocolIE_FieldPair_t *buff;
	int rc;

	if ((buff = CALLOC(1, sizeof(*buff))) == NULL) {
		// Possible error on malloc
		return NULL;
	}

	buff->id = id;
	buff->firstCriticality = criticality1;
	buff->secondCriticality = criticality2;

	rc = ANY_fromType_aper(&buff->firstValue, type1, sptr1);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		FREEMEM(buff);
		return NULL;
	}

	rc = ANY_fromType_aper(&buff->secondValue, type2, sptr2);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		ASN_STRUCT_FREE(asn_DEF_RANAP_ProtocolIE_FieldPair, buff);
		return NULL;
	}

	if (asn1_xer_print)
		if (xer_fprint(stdout, &asn_DEF_RANAP_ProtocolIE_FieldPair, buff) < 0) {
			ASN_STRUCT_FREE(asn_DEF_RANAP_ProtocolIE_FieldPair, buff);
			return NULL;
		}

	return buff;
}
