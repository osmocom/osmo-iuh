version.h: version.h.tpl
	$(AM_V_GEN)$(MKDIR_P) $(dir $@)
	$(AM_V_GEN)sed \
		-e "s/{{VERSION}}/$$(echo '@VERSION@' | cut -d. -f1-3)/g" \
		-e "s/{{VERSION_MAJOR}}/$$(echo '@VERSION@' | cut -d. -f1)/g" \
		-e "s/{{VERSION_MINOR}}/$$(echo '@VERSION@' | cut -d. -f2)/g" \
		-e "s/{{VERSION_PATCH}}/$$(echo '@VERSION@' | cut -d. -f3)/g" \
		$< > $@

EXTRA_DIST = \
	version.h.tpl \
	$(NULL)

hnbap_HEADERS = \
	hnbap_common.h hnbap_ies_defs.h \
	HNBAP_AccessResult.h \
	HNBAP_Access-stratum-release-indicator.h \
	HNBAP_AdditionalNeighbourInfoList.h \
	HNBAP_AltitudeAndDirection.h \
	HNBAP_BackoffTimer.h \
	HNBAP_BindingID.h \
	HNBAP_Cause.h \
	HNBAP_CauseMisc.h \
	HNBAP_CauseProtocol.h \
	HNBAP_CauseRadioNetwork.h \
	HNBAP_CauseTransport.h \
	HNBAP_CELL-FACHMobilitySupport.h \
	HNBAP_CellIdentity.h \
	HNBAP_CGI.h \
	HNBAP_CI.h \
	HNBAP_CN-DomainIndicator.h \
	HNBAP_ConfigurationInformation.h \
	HNBAP_Context-ID.h \
	HNBAP_CriticalityDiagnostics.h \
	HNBAP_CriticalityDiagnostics-IE-List.h \
	HNBAP_CriticalityDiagnostics-IE-List-Value.h \
	HNBAP_Criticality.h \
	HNBAP_CSG-Capability.h \
	HNBAP_CSG-ID.h \
	HNBAP_CSGMembershipStatus.h \
	HNBAP_CSGMembershipUpdate.h \
	HNBAP_ErrorIndication.h \
	HNBAP_ESN.h \
	HNBAP_GeographicalCoordinates.h \
	HNBAP_GeographicalLocation.h \
	HNBAP_GTP-TEI.h \
	HNBAP_HNBAP-PDU.h \
	HNBAP_HNBCapacity.h \
	HNBAP_HNB-Cell-Access-Mode.h \
	HNBAP_HNB-Cell-Identifier.h \
	HNBAP_HNBConfigInfo.h \
	HNBAP_HNBConfigTransferRequest.h \
	HNBAP_HNBConfigTransferResponse.h \
	HNBAP_HNBConfigurationInformationMissing.h \
	HNBAP_HNBConfigurationInformationProvided.h \
	HNBAP_HNBDe-Register.h \
	HNBAP_HNB-GWResponse.h \
	HNBAP_HNB-Identity.h \
	HNBAP_HNB-Identity-Info.h \
	HNBAP_HNB-Location-Information.h \
	HNBAP_HNBRegisterAccept.h \
	HNBAP_HNBRegisterReject.h \
	HNBAP_HNBRegisterRequest.h \
	HNBAP_HNB-RNL-Identity.h \
	HNBAP_IE-Extensions.h \
	HNBAP_IE.h \
	HNBAP_IMEI.h \
	HNBAP_IMSIDS41.h \
	HNBAP_IMSIESN.h \
	HNBAP_IMSI.h \
	HNBAP_InitiatingMessage.h \
	HNBAP_IP-Address.h \
	HNBAP_Ipv4Address.h \
	HNBAP_Ipv6Address.h \
	HNBAP_Iurh-Signalling-TNL-AddressList.h \
	HNBAP_LAC.h \
	HNBAP_LAI.h \
	HNBAP_MacroCellID.h \
	HNBAP_MacroCoverageInformation.h \
	HNBAP_MuxPortNumber.h \
	HNBAP_NeighbourCellIdentityList.h \
	HNBAP_NeighbourIdentity.h \
	HNBAP_NeighbourInfoList.h \
	HNBAP_NeighbourInfoRequestItem.h \
	HNBAP_NeighbourInfoRequestList.h \
	HNBAP_PLMNidentity.h \
	HNBAP_Presence.h \
	HNBAP_PrivateIE-ID.h \
	HNBAP_PrivateMessage.h \
	HNBAP_ProcedureCode.h \
	HNBAP_ProtocolIE-ID.h \
	HNBAP_PSC.h \
	HNBAP_PTMSI.h \
	HNBAP_PTMSIRAI.h \
	HNBAP_RAB-ID.h \
	HNBAP_RABList.h \
	HNBAP_RABListItem.h \
	HNBAP_RAC.h \
	HNBAP_RAI.h \
	HNBAP_Registration-Cause.h \
	HNBAP_RelocationComplete.h \
	HNBAP_RNC-ID.h \
	HNBAP_SAC.h \
	HNBAP_S-RNTIPrefix.h \
	HNBAP_SuccessfulOutcome.h \
	HNBAP_TMSIDS41.h \
	HNBAP_TMSILAI.h \
	HNBAP_TNLUpdateFailure.h \
	HNBAP_TNLUpdateRequest.h \
	HNBAP_TNLUpdateResponse.h \
	HNBAP_TransportInfo.h \
	HNBAP_TransportLayerAddress.h \
	HNBAP_TriggeringMessage.h \
	HNBAP_Tunnel-Information.h \
	HNBAP_TypeOfError.h \
	HNBAP_UDP-Port-Number.h \
	HNBAP_UE-Capabilities.h \
	HNBAP_UEDe-Register.h \
	HNBAP_UE-Identity.h \
	HNBAP_UERegisterAccept.h \
	HNBAP_UERegisterReject.h \
	HNBAP_UERegisterRequest.h \
	HNBAP_UnknownU-RNTIIndication.h \
	HNBAP_UnsuccessfulOutcome.h \
	HNBAP_Update-cause.h \
	HNBAP_URAIdentity.h \
	HNBAP_URAIdentityList.h \
	HNBAP_U-RNTI.h \
	HNBAP_U-RNTIQueryRequest.h \
	HNBAP_U-RNTIQueryResponse.h \
	HNBAP_UTRANCellID.h \
	version.h \
	$(NULL)

hnbapdir = $(includedir)/osmocom/hnbap

DISTCLEANFILES = \
	hnbap_ies_defs.h \
	version.h \
	$(NULL)
