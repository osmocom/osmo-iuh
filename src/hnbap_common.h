#pragma once

#include "asn_application.h"

#include "ANY.h"
#include "Access-stratum-release-indicator.h"
#include "AccessResult.h"
#include "AdditionalNeighbourInfoList.h"
#include "AltitudeAndDirection.h"
#include "BIT_STRING.h"
#include "BackoffTimer.h"
#include "BindingID.h"
#include "CELL-FACHMobilitySupport.h"
#include "CGI.h"
#include "CI.h"
#include "CN-DomainIndicator.h"
#include "CSG-Capability.h"
#include "CSG-ID.h"
#include "CSGMembershipStatus.h"
#include "CSGMembershipUpdate.h"
#include "Cause.h"
#include "CauseMisc.h"
#include "CauseProtocol.h"
#include "CauseRadioNetwork.h"
#include "CauseTransport.h"
#include "CellIdentity.h"
#include "ConfigurationInformation.h"
#include "Context-ID.h"
#include "Criticality.h"
#include "CriticalityDiagnostics-IE-List.h"
#include "CriticalityDiagnostics.h"
#include "ESN.h"
#include "ErrorIndication.h"
#include "GTP-TEI.h"
#include "GeographicalCoordinates.h"
#include "GeographicalLocation.h"
#include "HNB-Cell-Access-Mode.h"
#include "HNB-Cell-Identifier.h"
#include "HNB-GWResponse.h"
#include "HNB-Identity-Info.h"
#include "HNB-Identity.h"
#include "HNB-Location-Information.h"
#include "HNB-RNL-Identity.h"
#include "HNBAP-PDU.h"
#include "HNBCapacity.h"
#include "HNBConfigInfo.h"
#include "HNBConfigTransferRequest.h"
#include "HNBConfigTransferResponse.h"
#include "HNBConfigurationInformationMissing.h"
#include "HNBConfigurationInformationProvided.h"
#include "HNBDe-Register.h"
#include "HNBRegisterAccept.h"
#include "HNBRegisterReject.h"
#include "HNBRegisterRequest.h"
#include "IE-Extensions.h"
#include "IE.h"
#include "IMEI.h"
#include "IMSI.h"
#include "IMSIDS41.h"
#include "IMSIESN.h"
#include "INTEGER.h"
#include "IP-Address.h"
#include "InitiatingMessage.h"
#include "Ipv4Address.h"
#include "Ipv6Address.h"
#include "Iurh-Signalling-TNL-AddressList.h"
#include "LAC.h"
#include "LAI.h"
#include "MacroCellID.h"
#include "MacroCoverageInformation.h"
#include "MuxPortNumber.h"
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "NeighbourCellIdentityList.h"
#include "NeighbourIdentity.h"
#include "NeighbourInfoList.h"
#include "NeighbourInfoRequestItem.h"
#include "NeighbourInfoRequestList.h"
#include "OBJECT_IDENTIFIER.h"
#include "OCTET_STRING.h"
#include "PLMNidentity.h"
#include "PSC.h"
#include "PTMSI.h"
#include "PTMSIRAI.h"
#include "Presence.h"
#include "PrivateIE-ID.h"
#include "PrivateMessage.h"
#include "ProcedureCode.h"
#include "ProtocolIE-ID.h"
#include "RAB-ID.h"
#include "RABList.h"
#include "RABListItem.h"
#include "RAC.h"
#include "RAI.h"
#include "RNC-ID.h"
#include "Registration-Cause.h"
#include "RelocationComplete.h"
#include "S-RNTIPrefix.h"
#include "SAC.h"
#include "SuccessfulOutcome.h"
#include "TMSIDS41.h"
#include "TMSILAI.h"
#include "TNLUpdateFailure.h"
#include "TNLUpdateRequest.h"
#include "TNLUpdateResponse.h"
#include "TransportInfo.h"
#include "TransportLayerAddress.h"
#include "TriggeringMessage.h"
#include "Tunnel-Information.h"
#include "TypeOfError.h"
#include "U-RNTI.h"
#include "U-RNTIQueryRequest.h"
#include "U-RNTIQueryResponse.h"
#include "UDP-Port-Number.h"
#include "UE-Capabilities.h"
#include "UE-Identity.h"
#include "UEDe-Register.h"
#include "UERegisterAccept.h"
#include "UERegisterReject.h"
#include "UERegisterRequest.h"
#include "URAIdentity.h"
#include "URAIdentityList.h"
#include "UTRANCellID.h"
#include "UnknownU-RNTIIndication.h"
#include "UnsuccessfulOutcome.h"
#include "Update-cause.h"

#if (ASN1C_ENVIRONMENT_VERSION < 924)
# error "You are compiling with the wrong version of ASN1C"
#endif

#include <osmocom/core/logging.h>

#define HNBAP_DEBUG(x, args ...) DEBUGP(0, x, ## args)

extern int asn1_xer_print;

struct msgb *hnbap_generate_initiating_message(
					 e_ProcedureCode procedureCode,
					 Criticality_t criticality,
					 asn_TYPE_descriptor_t * td, void *sptr);

struct msgb *hnbap_generate_successful_outcome(
					   e_ProcedureCode procedureCode,
					   Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr);

struct msgb *hnbap_generate_unsuccessful_outcome(
					   e_ProcedureCode procedureCode,
					   Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr);

IE_t *hnbap_new_ie(ProtocolIE_ID_t id, Criticality_t criticality,
		  asn_TYPE_descriptor_t *type, void *sptr);

char *hnbap_cause_str(Cause_t *cause);
