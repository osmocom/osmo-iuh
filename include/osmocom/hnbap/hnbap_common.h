#pragma once

#include <asn1c/asn_application.h>

#include <osmocom/hnbap/HNBAP_Access-stratum-release-indicator.h>
#include <osmocom/hnbap/HNBAP_AccessResult.h>
#include <osmocom/hnbap/HNBAP_AdditionalNeighbourInfoList.h>
#include <osmocom/hnbap/HNBAP_AltitudeAndDirection.h>
#include <osmocom/hnbap/HNBAP_BackoffTimer.h>
#include <osmocom/hnbap/HNBAP_BindingID.h>
#include <osmocom/hnbap/HNBAP_CELL-FACHMobilitySupport.h>
#include <osmocom/hnbap/HNBAP_CGI.h>
#include <osmocom/hnbap/HNBAP_CI.h>
#include <osmocom/hnbap/HNBAP_CN-DomainIndicator.h>
#include <osmocom/hnbap/HNBAP_CSG-Capability.h>
#include <osmocom/hnbap/HNBAP_CSG-ID.h>
#include <osmocom/hnbap/HNBAP_CSGMembershipStatus.h>
#include <osmocom/hnbap/HNBAP_CSGMembershipUpdate.h>
#include <osmocom/hnbap/HNBAP_Cause.h>
#include <osmocom/hnbap/HNBAP_CauseMisc.h>
#include <osmocom/hnbap/HNBAP_CauseProtocol.h>
#include <osmocom/hnbap/HNBAP_CauseRadioNetwork.h>
#include <osmocom/hnbap/HNBAP_CauseTransport.h>
#include <osmocom/hnbap/HNBAP_CellIdentity.h>
#include <osmocom/hnbap/HNBAP_ConfigurationInformation.h>
#include <osmocom/hnbap/HNBAP_Context-ID.h>
#include <osmocom/hnbap/HNBAP_Criticality.h>
#include <osmocom/hnbap/HNBAP_CriticalityDiagnostics-IE-List.h>
#include <osmocom/hnbap/HNBAP_CriticalityDiagnostics.h>
#include <osmocom/hnbap/HNBAP_ESN.h>
#include <osmocom/hnbap/HNBAP_ErrorIndication.h>
#include <osmocom/hnbap/HNBAP_GTP-TEI.h>
#include <osmocom/hnbap/HNBAP_GeographicalCoordinates.h>
#include <osmocom/hnbap/HNBAP_GeographicalLocation.h>
#include <osmocom/hnbap/HNBAP_HNB-Cell-Access-Mode.h>
#include <osmocom/hnbap/HNBAP_HNB-Cell-Identifier.h>
#include <osmocom/hnbap/HNBAP_HNB-GWResponse.h>
#include <osmocom/hnbap/HNBAP_HNB-Identity-Info.h>
#include <osmocom/hnbap/HNBAP_HNB-Identity.h>
#include <osmocom/hnbap/HNBAP_HNB-Location-Information.h>
#include <osmocom/hnbap/HNBAP_HNB-RNL-Identity.h>
#include <osmocom/hnbap/HNBAP_HNBAP-PDU.h>
#include <osmocom/hnbap/HNBAP_HNBCapacity.h>
#include <osmocom/hnbap/HNBAP_HNBConfigInfo.h>
#include <osmocom/hnbap/HNBAP_HNBConfigTransferRequest.h>
#include <osmocom/hnbap/HNBAP_HNBConfigTransferResponse.h>
#include <osmocom/hnbap/HNBAP_HNBConfigurationInformationMissing.h>
#include <osmocom/hnbap/HNBAP_HNBConfigurationInformationProvided.h>
#include <osmocom/hnbap/HNBAP_HNBDe-Register.h>
#include <osmocom/hnbap/HNBAP_HNBRegisterAccept.h>
#include <osmocom/hnbap/HNBAP_HNBRegisterReject.h>
#include <osmocom/hnbap/HNBAP_HNBRegisterRequest.h>
#include <osmocom/hnbap/HNBAP_IE-Extensions.h>
#include <osmocom/hnbap/HNBAP_IE.h>
#include <osmocom/hnbap/HNBAP_IMEI.h>
#include <osmocom/hnbap/HNBAP_IMSI.h>
#include <osmocom/hnbap/HNBAP_IMSIDS41.h>
#include <osmocom/hnbap/HNBAP_IMSIESN.h>
#include <osmocom/hnbap/HNBAP_IP-Address.h>
#include <osmocom/hnbap/HNBAP_InitiatingMessage.h>
#include <osmocom/hnbap/HNBAP_Ipv4Address.h>
#include <osmocom/hnbap/HNBAP_Ipv6Address.h>
#include <osmocom/hnbap/HNBAP_Iurh-Signalling-TNL-AddressList.h>
#include <osmocom/hnbap/HNBAP_LAC.h>
#include <osmocom/hnbap/HNBAP_LAI.h>
#include <osmocom/hnbap/HNBAP_MacroCellID.h>
#include <osmocom/hnbap/HNBAP_MacroCoverageInformation.h>
#include <osmocom/hnbap/HNBAP_MuxPortNumber.h>
#include <osmocom/hnbap/HNBAP_NeighbourCellIdentityList.h>
#include <osmocom/hnbap/HNBAP_NeighbourIdentity.h>
#include <osmocom/hnbap/HNBAP_NeighbourInfoList.h>
#include <osmocom/hnbap/HNBAP_NeighbourInfoRequestItem.h>
#include <osmocom/hnbap/HNBAP_NeighbourInfoRequestList.h>
#include <osmocom/hnbap/HNBAP_PLMNidentity.h>
#include <osmocom/hnbap/HNBAP_PSC.h>
#include <osmocom/hnbap/HNBAP_PTMSI.h>
#include <osmocom/hnbap/HNBAP_PTMSIRAI.h>
#include <osmocom/hnbap/HNBAP_Presence.h>
#include <osmocom/hnbap/HNBAP_PrivateIE-ID.h>
#include <osmocom/hnbap/HNBAP_PrivateMessage.h>
#include <osmocom/hnbap/HNBAP_ProcedureCode.h>
#include <osmocom/hnbap/HNBAP_ProtocolIE-ID.h>
#include <osmocom/hnbap/HNBAP_RAB-ID.h>
#include <osmocom/hnbap/HNBAP_RABList.h>
#include <osmocom/hnbap/HNBAP_RABListItem.h>
#include <osmocom/hnbap/HNBAP_RAC.h>
#include <osmocom/hnbap/HNBAP_RAI.h>
#include <osmocom/hnbap/HNBAP_RNC-ID.h>
#include <osmocom/hnbap/HNBAP_Registration-Cause.h>
#include <osmocom/hnbap/HNBAP_RelocationComplete.h>
#include <osmocom/hnbap/HNBAP_S-RNTIPrefix.h>
#include <osmocom/hnbap/HNBAP_SAC.h>
#include <osmocom/hnbap/HNBAP_SuccessfulOutcome.h>
#include <osmocom/hnbap/HNBAP_TMSIDS41.h>
#include <osmocom/hnbap/HNBAP_TMSILAI.h>
#include <osmocom/hnbap/HNBAP_TNLUpdateFailure.h>
#include <osmocom/hnbap/HNBAP_TNLUpdateRequest.h>
#include <osmocom/hnbap/HNBAP_TNLUpdateResponse.h>
#include <osmocom/hnbap/HNBAP_TransportInfo.h>
#include <osmocom/hnbap/HNBAP_TransportLayerAddress.h>
#include <osmocom/hnbap/HNBAP_TriggeringMessage.h>
#include <osmocom/hnbap/HNBAP_Tunnel-Information.h>
#include <osmocom/hnbap/HNBAP_TypeOfError.h>
#include <osmocom/hnbap/HNBAP_U-RNTI.h>
#include <osmocom/hnbap/HNBAP_U-RNTIQueryRequest.h>
#include <osmocom/hnbap/HNBAP_U-RNTIQueryResponse.h>
#include <osmocom/hnbap/HNBAP_UDP-Port-Number.h>
#include <osmocom/hnbap/HNBAP_UE-Capabilities.h>
#include <osmocom/hnbap/HNBAP_UE-Identity.h>
#include <osmocom/hnbap/HNBAP_UEDe-Register.h>
#include <osmocom/hnbap/HNBAP_UERegisterAccept.h>
#include <osmocom/hnbap/HNBAP_UERegisterReject.h>
#include <osmocom/hnbap/HNBAP_UERegisterRequest.h>
#include <osmocom/hnbap/HNBAP_URAIdentity.h>
#include <osmocom/hnbap/HNBAP_URAIdentityList.h>
#include <osmocom/hnbap/HNBAP_UTRANCellID.h>
#include <osmocom/hnbap/HNBAP_UnknownU-RNTIIndication.h>
#include <osmocom/hnbap/HNBAP_UnsuccessfulOutcome.h>
#include <osmocom/hnbap/HNBAP_Update-cause.h>

#if (ASN1C_ENVIRONMENT_VERSION < 924)
# error "You are compiling with the wrong version of ASN1C"
#endif

#include <osmocom/core/logging.h>

extern int _hnbap_DHNBAP;
#define HNBAP_DEBUG(x, args ...) DEBUGP(_hnbap_DHNBAP, x, ## args)

extern int asn1_xer_print;

struct msgb *hnbap_generate_initiating_message(
					 e_HNBAP_ProcedureCode procedureCode,
					 HNBAP_Criticality_t criticality,
					 asn_TYPE_descriptor_t * td, void *sptr);

struct msgb *hnbap_generate_successful_outcome(
					   e_HNBAP_ProcedureCode procedureCode,
					   HNBAP_Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr);

struct msgb *hnbap_generate_unsuccessful_outcome(
					   e_HNBAP_ProcedureCode procedureCode,
					   HNBAP_Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr);

HNBAP_IE_t *hnbap_new_ie(HNBAP_ProtocolIE_ID_t id, HNBAP_Criticality_t criticality,
		  asn_TYPE_descriptor_t *type, void *sptr);

char *hnbap_cause_str(const HNBAP_Cause_t *cause);

void hnbap_set_log_area(int log_area);
