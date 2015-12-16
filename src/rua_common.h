#pragma once

#include <asn_application.h>

#include "rua/RUA_Ansi-41-IDNNS.h"
#include "rua/RUA_CN-DomainIndicator.h"
#include "rua/RUA_CSGMembershipStatus.h"
#include "rua/RUA_Cause.h"
#include "rua/RUA_CauseMisc.h"
#include "rua/RUA_CauseProtocol.h"
#include "rua/RUA_CauseRadioNetwork.h"
#include "rua/RUA_CauseTransport.h"
#include "rua/RUA_Connect.h"
#include "rua/RUA_ConnectionlessTransfer.h"
#include "rua/RUA_Context-ID.h"
#include "rua/RUA_Criticality.h"
#include "rua/RUA_CriticalityDiagnostics-IE-List.h"
#include "rua/RUA_CriticalityDiagnostics.h"
#include "rua/RUA_DirectTransfer.h"
#include "rua/RUA_Disconnect.h"
#include "rua/RUA_ErrorIndication.h"
#include "rua/RUA_Establishment-Cause.h"
#include "rua/RUA_Gsm-map-IDNNS.h"
#include "rua/RUA_IE-Extensions.h"
#include "rua/RUA_IE.h"
#include "rua/RUA_InitiatingMessage.h"
#include "rua/RUA_IntraDomainNasNodeSelector.h"
#include "rua/RUA_Presence.h"
#include "rua/RUA_PrivateIE-ID.h"
#include "rua/RUA_PrivateMessage.h"
#include "rua/RUA_ProcedureCode.h"
#include "rua/RUA_ProtocolIE-ID.h"
#include "rua/RUA_RANAP-Message.h"
#include "rua/RUA_RUA-PDU.h"
#include "rua/RUA_RoutingParameter.h"
#include "rua/RUA_SuccessfulOutcome.h"
#include "rua/RUA_TriggeringMessage.h"
#include "rua/RUA_TypeOfError.h"
#include "rua/RUA_UnsuccessfulOutcome.h"

#if (ASN1C_ENVIRONMENT_VERSION < 924)
# error "You are compiling with the wrong version of ASN1C"
#endif

#include <osmocom/core/logging.h>

#define RUA_DEBUG(x, args ...) DEBUGP(0, x, ## args)

extern int asn1_xer_print;

struct msgb *rua_generate_initiating_message(
					e_RUA_ProcedureCode procedureCode,
					RUA_Criticality_t criticality,
					asn_TYPE_descriptor_t * td, void *sptr);

struct msgb *rua_generate_successful_outcome(
					   e_RUA_ProcedureCode procedureCode,
					   RUA_Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr);

struct msgb *rua_generate_unsuccessful_outcome(
					   e_RUA_ProcedureCode procedureCode,
					   RUA_Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr);

RUA_IE_t *rua_new_ie(RUA_ProtocolIE_ID_t id, RUA_Criticality_t criticality,
		     asn_TYPE_descriptor_t *type, void *sptr);

char *rua_cause_str(RUA_Cause_t *cause);
