#pragma once

#include "asn_application.h"

#include <ANY.h>
#include <BIT_STRING.h>
#include <INTEGER.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <OBJECT_IDENTIFIER.h>
#include <OCTET_STRING.h>

#include <osmocom/osmo-iuh/hnbap/Access-stratum-release-indicator.h>
#include <osmocom/osmo-iuh/hnbap/AccessResult.h>
#include <osmocom/osmo-iuh/hnbap/AdditionalNeighbourInfoList.h>
#include <osmocom/osmo-iuh/hnbap/AltitudeAndDirection.h>
#include <osmocom/osmo-iuh/hnbap/BackoffTimer.h>
#include <osmocom/osmo-iuh/hnbap/BindingID.h>
#include <osmocom/osmo-iuh/hnbap/CELL-FACHMobilitySupport.h>
#include <osmocom/osmo-iuh/hnbap/CGI.h>
#include <osmocom/osmo-iuh/hnbap/CI.h>
#include <osmocom/osmo-iuh/hnbap/CN-DomainIndicator.h>
#include <osmocom/osmo-iuh/hnbap/CSG-Capability.h>
#include <osmocom/osmo-iuh/hnbap/CSG-ID.h>
#include <osmocom/osmo-iuh/hnbap/CSGMembershipStatus.h>
#include <osmocom/osmo-iuh/hnbap/CSGMembershipUpdate.h>
#include <osmocom/osmo-iuh/hnbap/Cause.h>
#include <osmocom/osmo-iuh/hnbap/CauseMisc.h>
#include <osmocom/osmo-iuh/hnbap/CauseProtocol.h>
#include <osmocom/osmo-iuh/hnbap/CauseRadioNetwork.h>
#include <osmocom/osmo-iuh/hnbap/CauseTransport.h>
#include <osmocom/osmo-iuh/hnbap/CellIdentity.h>
#include <osmocom/osmo-iuh/hnbap/ConfigurationInformation.h>
#include <osmocom/osmo-iuh/hnbap/Context-ID.h>
#include <osmocom/osmo-iuh/hnbap/Criticality.h>
#include <osmocom/osmo-iuh/hnbap/CriticalityDiagnostics-IE-List.h>
#include <osmocom/osmo-iuh/hnbap/CriticalityDiagnostics.h>
#include <osmocom/osmo-iuh/hnbap/ESN.h>
#include <osmocom/osmo-iuh/hnbap/ErrorIndication.h>
#include <osmocom/osmo-iuh/hnbap/GTP-TEI.h>
#include <osmocom/osmo-iuh/hnbap/GeographicalCoordinates.h>
#include <osmocom/osmo-iuh/hnbap/GeographicalLocation.h>
#include <osmocom/osmo-iuh/hnbap/HNB-Cell-Access-Mode.h>
#include <osmocom/osmo-iuh/hnbap/HNB-Cell-Identifier.h>
#include <osmocom/osmo-iuh/hnbap/HNB-GWResponse.h>
#include <osmocom/osmo-iuh/hnbap/HNB-Identity-Info.h>
#include <osmocom/osmo-iuh/hnbap/HNB-Identity.h>
#include <osmocom/osmo-iuh/hnbap/HNB-Location-Information.h>
#include <osmocom/osmo-iuh/hnbap/HNB-RNL-Identity.h>
#include <osmocom/osmo-iuh/hnbap/HNBAP-PDU.h>
#include <osmocom/osmo-iuh/hnbap/HNBCapacity.h>
#include <osmocom/osmo-iuh/hnbap/HNBConfigInfo.h>
#include <osmocom/osmo-iuh/hnbap/HNBConfigTransferRequest.h>
#include <osmocom/osmo-iuh/hnbap/HNBConfigTransferResponse.h>
#include <osmocom/osmo-iuh/hnbap/HNBConfigurationInformationMissing.h>
#include <osmocom/osmo-iuh/hnbap/HNBConfigurationInformationProvided.h>
#include <osmocom/osmo-iuh/hnbap/HNBDe-Register.h>
#include <osmocom/osmo-iuh/hnbap/HNBRegisterAccept.h>
#include <osmocom/osmo-iuh/hnbap/HNBRegisterReject.h>
#include <osmocom/osmo-iuh/hnbap/HNBRegisterRequest.h>
#include <osmocom/osmo-iuh/hnbap/IE-Extensions.h>
#include <osmocom/osmo-iuh/hnbap/IE.h>
#include <osmocom/osmo-iuh/hnbap/IMEI.h>
#include <osmocom/osmo-iuh/hnbap/IMSI.h>
#include <osmocom/osmo-iuh/hnbap/IMSIDS41.h>
#include <osmocom/osmo-iuh/hnbap/IMSIESN.h>
#include <osmocom/osmo-iuh/hnbap/IP-Address.h>
#include <osmocom/osmo-iuh/hnbap/InitiatingMessage.h>
#include <osmocom/osmo-iuh/hnbap/Ipv4Address.h>
#include <osmocom/osmo-iuh/hnbap/Ipv6Address.h>
#include <osmocom/osmo-iuh/hnbap/Iurh-Signalling-TNL-AddressList.h>
#include <osmocom/osmo-iuh/hnbap/LAC.h>
#include <osmocom/osmo-iuh/hnbap/LAI.h>
#include <osmocom/osmo-iuh/hnbap/MacroCellID.h>
#include <osmocom/osmo-iuh/hnbap/MacroCoverageInformation.h>
#include <osmocom/osmo-iuh/hnbap/MuxPortNumber.h>
#include <osmocom/osmo-iuh/hnbap/NeighbourCellIdentityList.h>
#include <osmocom/osmo-iuh/hnbap/NeighbourIdentity.h>
#include <osmocom/osmo-iuh/hnbap/NeighbourInfoList.h>
#include <osmocom/osmo-iuh/hnbap/NeighbourInfoRequestItem.h>
#include <osmocom/osmo-iuh/hnbap/NeighbourInfoRequestList.h>
#include <osmocom/osmo-iuh/hnbap/PLMNidentity.h>
#include <osmocom/osmo-iuh/hnbap/PSC.h>
#include <osmocom/osmo-iuh/hnbap/PTMSI.h>
#include <osmocom/osmo-iuh/hnbap/PTMSIRAI.h>
#include <osmocom/osmo-iuh/hnbap/Presence.h>
#include <osmocom/osmo-iuh/hnbap/PrivateIE-ID.h>
#include <osmocom/osmo-iuh/hnbap/PrivateMessage.h>
#include <osmocom/osmo-iuh/hnbap/ProcedureCode.h>
#include <osmocom/osmo-iuh/hnbap/ProtocolIE-ID.h>
#include <osmocom/osmo-iuh/hnbap/RAB-ID.h>
#include <osmocom/osmo-iuh/hnbap/RABList.h>
#include <osmocom/osmo-iuh/hnbap/RABListItem.h>
#include <osmocom/osmo-iuh/hnbap/RAC.h>
#include <osmocom/osmo-iuh/hnbap/RAI.h>
#include <osmocom/osmo-iuh/hnbap/RNC-ID.h>
#include <osmocom/osmo-iuh/hnbap/Registration-Cause.h>
#include <osmocom/osmo-iuh/hnbap/RelocationComplete.h>
#include <osmocom/osmo-iuh/hnbap/S-RNTIPrefix.h>
#include <osmocom/osmo-iuh/hnbap/SAC.h>
#include <osmocom/osmo-iuh/hnbap/SuccessfulOutcome.h>
#include <osmocom/osmo-iuh/hnbap/TMSIDS41.h>
#include <osmocom/osmo-iuh/hnbap/TMSILAI.h>
#include <osmocom/osmo-iuh/hnbap/TNLUpdateFailure.h>
#include <osmocom/osmo-iuh/hnbap/TNLUpdateRequest.h>
#include <osmocom/osmo-iuh/hnbap/TNLUpdateResponse.h>
#include <osmocom/osmo-iuh/hnbap/TransportInfo.h>
#include <osmocom/osmo-iuh/hnbap/TransportLayerAddress.h>
#include <osmocom/osmo-iuh/hnbap/TriggeringMessage.h>
#include <osmocom/osmo-iuh/hnbap/Tunnel-Information.h>
#include <osmocom/osmo-iuh/hnbap/TypeOfError.h>
#include <osmocom/osmo-iuh/hnbap/U-RNTI.h>
#include <osmocom/osmo-iuh/hnbap/U-RNTIQueryRequest.h>
#include <osmocom/osmo-iuh/hnbap/U-RNTIQueryResponse.h>
#include <osmocom/osmo-iuh/hnbap/UDP-Port-Number.h>
#include <osmocom/osmo-iuh/hnbap/UE-Capabilities.h>
#include <osmocom/osmo-iuh/hnbap/UE-Identity.h>
#include <osmocom/osmo-iuh/hnbap/UEDe-Register.h>
#include <osmocom/osmo-iuh/hnbap/UERegisterAccept.h>
#include <osmocom/osmo-iuh/hnbap/UERegisterReject.h>
#include <osmocom/osmo-iuh/hnbap/UERegisterRequest.h>
#include <osmocom/osmo-iuh/hnbap/URAIdentity.h>
#include <osmocom/osmo-iuh/hnbap/URAIdentityList.h>
#include <osmocom/osmo-iuh/hnbap/UTRANCellID.h>
#include <osmocom/osmo-iuh/hnbap/UnknownU-RNTIIndication.h>
#include <osmocom/osmo-iuh/hnbap/UnsuccessfulOutcome.h>
#include <osmocom/osmo-iuh/hnbap/Update-cause.h>

#if (ASN1C_ENVIRONMENT_VERSION < 924)
# error "You are compiling with the wrong version of ASN1C"
#endif

#include <osmocom/core/logging.h>

#define HNBAP_DEBUG(x, args ...) DEBUGP(1, x, ## args)

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
