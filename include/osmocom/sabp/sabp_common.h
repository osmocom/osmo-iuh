#pragma once

#include <asn1c/asn_application.h>

#include <osmocom/sabp/SABP_Available-Bandwidth.h>
#include <osmocom/sabp/SABP_Broadcast-Message-Content-Validity-Indicator.h>
#include <osmocom/sabp/SABP_Broadcast-Message-Content.h>
#include <osmocom/sabp/SABP_Category.h>
#include <osmocom/sabp/SABP_Cause.h>
#include <osmocom/sabp/SABP_Criticality-Diagnostics.h>
#include <osmocom/sabp/SABP_Criticality.h>
#include <osmocom/sabp/SABP_CriticalityDiagnostics-IE-List.h>
#include <osmocom/sabp/SABP_Data-Coding-Scheme.h>
#include <osmocom/sabp/SABP_Error-Indication.h>
#include <osmocom/sabp/SABP_Failure-List-Item.h>
#include <osmocom/sabp/SABP_Failure-List.h>
#include <osmocom/sabp/SABP_Failure.h>
#include <osmocom/sabp/SABP_IE-Extensions.h>
#include <osmocom/sabp/SABP_IE.h>
#include <osmocom/sabp/SABP_InitiatingMessage.h>
#include <osmocom/sabp/SABP_Kill-Complete.h>
#include <osmocom/sabp/SABP_Kill-Failure.h>
#include <osmocom/sabp/SABP_Kill.h>
#include <osmocom/sabp/SABP_Load-Query-Complete.h>
#include <osmocom/sabp/SABP_Load-Query-Failure.h>
#include <osmocom/sabp/SABP_Load-Query.h>
#include <osmocom/sabp/SABP_Message-Identifier.h>
#include <osmocom/sabp/SABP_Message-Status-Query-Complete.h>
#include <osmocom/sabp/SABP_Message-Status-Query-Failure.h>
#include <osmocom/sabp/SABP_Message-Status-Query.h>
#include <osmocom/sabp/SABP_MessageStructure.h>
#include <osmocom/sabp/SABP_New-Serial-Number.h>
#include <osmocom/sabp/SABP_Number-Of-Broadcasts-Completed-Info.h>
#include <osmocom/sabp/SABP_Number-of-Broadcasts-Completed-List-Item.h>
#include <osmocom/sabp/SABP_Number-of-Broadcasts-Completed-List.h>
#include <osmocom/sabp/SABP_Number-of-Broadcasts-Requested.h>
#include <osmocom/sabp/SABP_Old-Serial-Number.h>
#include <osmocom/sabp/SABP_Paging-ETWS-Indicator.h>
#include <osmocom/sabp/SABP_Presence.h>
#include <osmocom/sabp/SABP_ProcedureCode.h>
#include <osmocom/sabp/SABP_ProtocolExtensionID.h>
#include <osmocom/sabp/SABP_ProtocolIE-ID.h>
#include <osmocom/sabp/SABP_Radio-Resource-Loading-List-Item.h>
#include <osmocom/sabp/SABP_Radio-Resource-Loading-List.h>
#include <osmocom/sabp/SABP_Recovery-Indication.h>
#include <osmocom/sabp/SABP_Repetition-Period.h>
#include <osmocom/sabp/SABP_RepetitionNumber0.h>
#include <osmocom/sabp/SABP_RepetitionNumber1.h>
#include <osmocom/sabp/SABP_Reset-Complete.h>
#include <osmocom/sabp/SABP_Reset-Failure.h>
#include <osmocom/sabp/SABP_Reset.h>
#include <osmocom/sabp/SABP_Restart.h>
#include <osmocom/sabp/SABP_SABP-PDU.h>
#include <osmocom/sabp/SABP_Serial-Number.h>
#include <osmocom/sabp/SABP_Service-Area-Identifier.h>
#include <osmocom/sabp/SABP_Service-Areas-List.h>
#include <osmocom/sabp/SABP_SuccessfulOutcome.h>
#include <osmocom/sabp/SABP_TriggeringMessage.h>
#include <osmocom/sabp/SABP_TypeOfError.h>
#include <osmocom/sabp/SABP_UnsuccessfulOutcome.h>
#include <osmocom/sabp/SABP_Warning-Type.h>
#include <osmocom/sabp/SABP_WarningSecurityInfo.h>
#include <osmocom/sabp/SABP_Write-Replace-Complete.h>
#include <osmocom/sabp/SABP_Write-Replace-Failure.h>
#include <osmocom/sabp/SABP_Write-Replace.h>

#if (ASN1C_ENVIRONMENT_VERSION < 924)
# error "You are compiling with the wrong version of ASN1C"
#endif

#include <osmocom/core/logging.h>
#include <osmocom/core/utils.h>
#include <osmocom/sabp/sabp_ies_defs.h>

#define SABP_DEBUG(x, args ...) DEBUGP(_sabp_DSABP, x, ## args)
extern int _sabp_DSABP;

extern int asn1_xer_print;

extern const struct value_string sabp_presence_vals[];
extern const struct value_string sabp_procedure_code_vals[];
extern const struct value_string sabp_cause_vals[];

struct msgb *sabp_generate_initiating_message(e_SABP_ProcedureCode procedureCode,
					  SABP_Criticality_t criticality,
					  asn_TYPE_descriptor_t *td, void *sptr);

struct msgb *sabp_generate_successful_outcome(
					   e_SABP_ProcedureCode procedureCode,
					   SABP_Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr);

struct msgb *sabp_generate_unsuccessful_outcome(
					e_SABP_ProcedureCode procedureCode,
					SABP_Criticality_t criticality,
					asn_TYPE_descriptor_t * td,
					void *sptr);

SABP_IE_t *sabp_new_ie(SABP_ProtocolIE_ID_t id,
			SABP_Criticality_t criticality,
			asn_TYPE_descriptor_t * type, void *sptr);

void sabp_set_log_area(int log_area);
