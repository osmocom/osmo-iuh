# Ugly: ranap_ies_defs.h is generated from asn1tostruct.py at the same time as
# the ranap_*.c files in src/, but the ranap_ies_defs.h should live here. If
# the build process wants this header file, it should first build
# src/ranap_encoder.c and src/ranap_decoder.c.
# This rule sucks:
ranap_ies_defs.h:
	$(MAKE) -C $(top_builddir)/src/ gen_ranap.stamp

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

ranap_HEADERS = \
	ranap_ies_defs.h \
	ranap_common.h \
	ranap_common_cn.h \
	ranap_common_ran.h \
	ranap_msg_factory.h \
	iu_helpers.h \
	iu_client.h \
	RANAP_AccuracyFulfilmentIndicator.h \
	RANAP_AllocationOrRetentionPriority.h \
	RANAP_AlternativeRABConfigurationRequest.h \
	RANAP_Alt-RAB-Parameter-ExtendedGuaranteedBitrateInf.h \
	RANAP_Alt-RAB-Parameter-ExtendedGuaranteedBitrateList.h \
	RANAP_Alt-RAB-Parameter-ExtendedGuaranteedBitrates.h \
	RANAP_Alt-RAB-Parameter-ExtendedMaxBitrateInf.h \
	RANAP_Alt-RAB-Parameter-ExtendedMaxBitrateList.h \
	RANAP_Alt-RAB-Parameter-ExtendedMaxBitrates.h \
	RANAP_Alt-RAB-Parameter-GuaranteedBitrateInf.h \
	RANAP_Alt-RAB-Parameter-GuaranteedBitrateList.h \
	RANAP_Alt-RAB-Parameter-GuaranteedBitrates.h \
	RANAP_Alt-RAB-Parameter-GuaranteedBitrateType.h \
	RANAP_Alt-RAB-Parameter-MaxBitrateInf.h \
	RANAP_Alt-RAB-Parameter-MaxBitrateList.h \
	RANAP_Alt-RAB-Parameter-MaxBitrates.h \
	RANAP_Alt-RAB-Parameter-MaxBitrateType.h \
	RANAP_Alt-RAB-Parameters.h \
	RANAP_Alt-RAB-Parameter-SupportedGuaranteedBitrateInf.h \
	RANAP_Alt-RAB-Parameter-SupportedGuaranteedBitrates.h \
	RANAP_Alt-RAB-Parameter-SupportedMaxBitrateInf.h \
	RANAP_Alt-RAB-Parameter-SupportedMaxBitrates.h \
	RANAP_APN.h \
	RANAP_AreaIdentity.h \
	RANAP_Ass-RAB-Parameter-ExtendedGuaranteedBitrateList.h \
	RANAP_Ass-RAB-Parameter-ExtendedMaxBitrateList.h \
	RANAP_Ass-RAB-Parameter-GuaranteedBitrateList.h \
	RANAP_Ass-RAB-Parameter-MaxBitrateList.h \
	RANAP_Ass-RAB-Parameters.h \
	RANAP_AuthorisedPLMNs.h \
	RANAP_AuthorisedPLMNs-Value.h \
	RANAP_AuthorisedSNAs.h \
	RANAP_BindingID.h \
	RANAP_BroadcastAssistanceDataDecipheringKeys.h \
	RANAP_Cause.h \
	RANAP_CauseMisc.h \
	RANAP_CauseNAS.h \
	RANAP_CauseNon-Standard.h \
	RANAP_CauseProtocol.h \
	RANAP_CauseRadioNetworkExtension.h \
	RANAP_CauseRadioNetwork.h \
	RANAP_CauseTransmissionNetwork.h \
	RANAP_Cell-Access-Mode.h \
	RANAP_CellBased.h \
	RANAP_Cell-Capacity-Class-Value.h \
	RANAP_Cell-Id.h \
	RANAP_CellIdList.h \
	RANAP_CellLoadInformationGroup.h \
	RANAP_CellLoadInformation.h \
	RANAP_CellType.h \
	RANAP_CGI.h \
	RANAP_ChosenEncryptionAlgorithm.h \
	RANAP_ChosenIntegrityProtectionAlgorithm.h \
	RANAP_CI.h \
	RANAP_ClassmarkInformation2.h \
	RANAP_ClassmarkInformation3.h \
	RANAP_ClientType.h \
	RANAP_CN-DeactivateTrace.h \
	RANAP_CN-DomainIndicator.h \
	RANAP_CN-ID.h \
	RANAP_CN-InvokeTrace.h \
	RANAP_CNMBMSLinkingInformation.h \
	RANAP_CommonID.h \
	RANAP_Correlation-ID.h \
	RANAP_CriticalityDiagnostics.h \
	RANAP_CriticalityDiagnostics-IE-List.h \
	RANAP_CriticalityDiagnostics-IE-List-Value.h \
	RANAP_Criticality.h \
	RANAP_CSFB-Information.h \
	RANAP_CSG-Id.h \
	RANAP_CSG-Id-List.h \
	RANAP_CSG-Membership-Status.h \
	RANAP_DataPDUType.h \
	RANAP_DataVolumeList.h \
	RANAP_DataVolumeList-Value.h \
	RANAP_DataVolumeReference.h \
	RANAP_DataVolumeReport.h \
	RANAP_DataVolumeReportingIndication.h \
	RANAP_DataVolumeReportList.h \
	RANAP_DataVolumeReportRequest.h \
	RANAP_DCH-ID.h \
	RANAP_DeliveryOfErroneousSDU.h \
	RANAP_DeliveryOrder.h \
	RANAP_DeltaRAListofIdleModeUEs.h \
	RANAP_DirectInformationTransfer.h \
	RANAP_DirectReportingIndicator.h \
	RANAP_DirectTransfer.h \
	RANAP_DirectTransfer-IE-ContainerList.h \
	RANAP_DirectTransferInformationItem-RANAP-RelocInf.h \
	RANAP_DL-GTP-PDU-SequenceNumber.h \
	RANAP_DL-N-PDU-SequenceNumber.h \
	RANAP_D-RNTI.h \
	RANAP_DRX-CycleLengthCoefficient.h \
	RANAP_DSCH-ID.h \
	RANAP_EARFCN-Extended.h \
	RANAP_E-DCH-MAC-d-Flow-ID.h \
	RANAP_ENB-ID.h \
	RANAP_EncryptionAlgorithm.h \
	RANAP_EncryptionInformation.h \
	RANAP_EncryptionKey.h \
	RANAP_End-Of-CSFB.h \
	RANAP_EnhancedRelocationCompleteConfirm.h \
	RANAP_EnhancedRelocationCompleteFailure.h \
	RANAP_EnhancedRelocationCompleteRequest.h \
	RANAP_EnhancedRelocationCompleteResponse.h \
	RANAP_EquipmentsToBeTraced.h \
	RANAP_ErrorIndication.h \
	RANAP_EUTRANFrequencies.h \
	RANAP_EUTRANFrequencies-Value.h \
	RANAP_E-UTRAN-Service-Handover.h \
	RANAP_Event1F-Parameters.h \
	RANAP_Event1I-Parameters.h \
	RANAP_Event.h \
	RANAP_ExtendedGuaranteedBitrate.h \
	RANAP_ExtendedMaxBitrate.h \
	RANAP_ExtendedRNC-ID.h \
	RANAP_ForwardingIndication.h \
	RANAP_ForwardSRNS-Context.h \
	RANAP_FrameSequenceNumber.h \
	RANAP_FrequenceLayerConvergenceFlag.h \
	RANAP_GA-AltitudeAndDirection.h \
	RANAP_GA-EllipsoidArc.h \
	RANAP_GANSS-PositioningDataSet.h \
	RANAP_GANSS-PositioningMethodAndUsage.h \
	RANAP_GA-Point.h \
	RANAP_GA-PointWithAltitudeAndUncertaintyEllipsoid.h \
	RANAP_GA-PointWithAltitude.h \
	RANAP_GA-PointWithUnCertaintyEllipse.h \
	RANAP_GA-PointWithUnCertainty.h \
	RANAP_GA-Polygon.h \
	RANAP_GA-Polygon-Value.h \
	RANAP_GA-UncertaintyEllipse.h \
	RANAP_GeographicalArea.h \
	RANAP_GeographicalCoordinates.h \
	RANAP_GERAN-BSC-Container.h \
	RANAP_GERAN-Cell-ID.h \
	RANAP_GERAN-Classmark.h \
	RANAP_GERAN-Iumode-RAB-Failed-RABAssgntResponse-Item.h \
	RANAP_GERAN-Iumode-RAB-Failed-RABAssgntResponse-List.h \
	RANAP_GlobalCN-ID.h \
	RANAP_GlobalRNC-ID.h \
	RANAP_GTP-TEI.h \
	RANAP_GuaranteedBitrate.h \
	RANAP_HigherBitratesThan16MbpsFlag.h \
	RANAP_HorizontalSpeedAndBearing.h \
	RANAP_HorizontalVelocity.h \
	RANAP_HorizontalVelocityWithUncertainty.h \
	RANAP_HorizontalWithVerticalVelocityAndUncertainty.h \
	RANAP_HorizontalWithVerticalVelocity.h \
	RANAP_HS-DSCH-MAC-d-Flow-ID.h \
	RANAP_IE-Extensions.h \
	RANAP_IE.h \
	RANAP_IMEIGroup.h \
	RANAP_IMEI.h \
	RANAP_IMEIList.h \
	RANAP_IMEISVGroup.h \
	RANAP_IMEISV.h \
	RANAP_IMEISVList.h \
	RANAP_ImmediateMDT.h \
	RANAP_IMSI.h \
	RANAP_IncludeVelocity.h \
	RANAP_InformationExchangeID.h \
	RANAP_InformationExchangeType.h \
	RANAP_InformationRequested.h \
	RANAP_InformationRequestType.h \
	RANAP_InformationTransferConfirmation.h \
	RANAP_InformationTransferFailure.h \
	RANAP_InformationTransferID.h \
	RANAP_InformationTransferIndication.h \
	RANAP_InformationTransferType.h \
	RANAP_InitialUE-Message.h \
	RANAP_InitiatingMessage.h \
	RANAP_IntegrityProtectionAlgorithm.h \
	RANAP_IntegrityProtectionInformation.h \
	RANAP_IntegrityProtectionKey.h \
	RANAP_InterfacesToTraceItem.h \
	RANAP_InterSystemInformationTransferType.h \
	RANAP_InterSystemInformation-TransparentContainer.h \
	RANAP_IPMulticastAddress.h \
	RANAP_IRAT-Measurement-Configuration.h \
	RANAP_IRATmeasurementParameters.h \
	RANAP_Iu-ReleaseCommand.h \
	RANAP_Iu-ReleaseComplete.h \
	RANAP_Iu-ReleaseRequest.h \
	RANAP_IuSigConId-IE-ContainerList.h \
	RANAP_IuSignallingConnectionIdentifier.h \
	RANAP_IuTransportAssociation.h \
	RANAP_JoinedMBMSBearerService-IEs.h \
	RANAP_JoinedMBMSBearerService-IEs-Value.h \
	RANAP_KeyStatus.h \
	RANAP_L3-Information.h \
	RANAP_LABased.h \
	RANAP_LAC.h \
	RANAP_LAI.h \
	RANAP_LAI-List.h \
	RANAP_LA-LIST.h \
	RANAP_LA-LIST-Value.h \
	RANAP_LAListofIdleModeUEs.h \
	RANAP_LastKnownServiceArea.h \
	RANAP_LastVisitedUTRANCell-Item.h \
	RANAP_LeftMBMSBearerService-IEs.h \
	RANAP_LeftMBMSBearerService-IEs-Value.h \
	RANAP_LHN-ID.h \
	RANAP_Links-to-log.h \
	RANAP_ListOfInterfacesToTrace.h \
	RANAP_ListOF-SNAs.h \
	RANAP_LoadValue.h \
	RANAP_LocationRelatedDataFailure.h \
	RANAP_LocationRelatedDataRequest.h \
	RANAP_LocationRelatedDataRequestType.h \
	RANAP_LocationRelatedDataRequestTypeSpecificToGERANIuMode.h \
	RANAP_LocationRelatedDataResponse.h \
	RANAP_LocationReport.h \
	RANAP_LocationReportingControl.h \
	RANAP_LocationReportingTransferInformation.h \
	RANAP_LoggedMDT.h \
	RANAP_LoggingDuration.h \
	RANAP_LoggingInterval.h \
	RANAP_M1Report.h \
	RANAP_M2Report.h \
	RANAP_M4-Collection-Parameters.h \
	RANAP_M4-Period.h \
	RANAP_M4Report.h \
	RANAP_M4-Threshold.h \
	RANAP_M5-Period.h \
	RANAP_M5Report.h \
	RANAP_M6-Period.h \
	RANAP_M6Report.h \
	RANAP_M7-Period.h \
	RANAP_M7Report.h \
	RANAP_Management-Based-MDT-Allowed.h \
	RANAP_MaxBitrate.h \
	RANAP_MaxSDU-Size.h \
	RANAP_MBMSBearerServiceType.h \
	RANAP_MBMSCNDe-Registration.h \
	RANAP_MBMSCNDe-RegistrationRequest.h \
	RANAP_MBMSCNDe-RegistrationResponse.h \
	RANAP_MBMSCountingInformation.h \
	RANAP_MBMSHCIndicator.h \
	RANAP_MBMSIPMulticastAddressandAPNlist.h \
	RANAP_MBMSIPMulticastAddressandAPNRequest.h \
	RANAP_MBMSLinkingInformation.h \
	RANAP_MBMS-PTP-RAB-ID.h \
	RANAP_MBMSRABEstablishmentIndication.h \
	RANAP_MBMSRABReleaseFailure.h \
	RANAP_MBMSRABRelease.h \
	RANAP_MBMSRABReleaseRequest.h \
	RANAP_MBMSRegistrationFailure.h \
	RANAP_MBMSRegistrationRequest.h \
	RANAP_MBMSRegistrationRequestType.h \
	RANAP_MBMSRegistrationResponse.h \
	RANAP_MBMSServiceArea.h \
	RANAP_MBMSSessionDuration.h \
	RANAP_MBMSSessionIdentity.h \
	RANAP_MBMSSessionRepetitionNumber.h \
	RANAP_MBMSSessionStartFailure.h \
	RANAP_MBMSSessionStart.h \
	RANAP_MBMSSessionStartResponse.h \
	RANAP_MBMSSessionStop.h \
	RANAP_MBMSSessionStopResponse.h \
	RANAP_MBMSSessionUpdateFailure.h \
	RANAP_MBMSSessionUpdate.h \
	RANAP_MBMSSessionUpdateResponse.h \
	RANAP_MBMSSynchronisationInformation.h \
	RANAP_MBMSUELinkingRequest.h \
	RANAP_MBMSUELinkingResponse.h \
	RANAP_MDT-Activation.h \
	RANAP_MDTAreaScope.h \
	RANAP_MDT-Configuration.h \
	RANAP_MDTMode.h \
	RANAP_MDT-PLMN-List.h \
	RANAP_MDT-Report-Parameters.h \
	RANAP_MeasBand.h \
	RANAP_MeasurementQuantity.h \
	RANAP_MeasurementsToActivate.h \
	RANAP_MessageStructure.h \
	RANAP_MessageStructure-Value.h \
	RANAP_MSISDN.h \
	RANAP_NAS-PDU.h \
	RANAP_NAS-SequenceNumber.h \
	RANAP_NAS-SynchronisationIndicator.h \
	RANAP_NewBSS-To-OldBSS-Information.h \
	RANAP_NewRAListofIdleModeUEs.h \
	RANAP_NonSearchingIndication.h \
	RANAP_NotEmptyRAListofIdleModeUEs.h \
	RANAP_NRTLoadInformationValue.h \
	RANAP_NumberOfIuInstances.h \
	RANAP_NumberOfSteps.h \
	RANAP_Offload-RAB-Parameters-APN.h \
	RANAP_Offload-RAB-Parameters-ChargingCharacteristics.h \
	RANAP_Offload-RAB-Parameters.h \
	RANAP_OldBSS-ToNewBSS-Information.h \
	RANAP_OMC-ID.h \
	RANAP_Outcome.h \
	RANAP_Out-Of-UTRAN.h \
	RANAP_Overload.h \
	RANAP_PagingAreaID.h \
	RANAP_PagingCause.h \
	RANAP_Paging.h \
	RANAP_PDP-Type-extension.h \
	RANAP_PDP-Type.h \
	RANAP_PDP-TypeInformation-extension.h \
	RANAP_PDP-TypeInformation.h \
	RANAP_PDUType14FrameSequenceNumber.h \
	RANAP_PeriodicLocationInfo.h \
	RANAP_PeriodicReportingIndicator.h \
	RANAP_PermanentNAS-UE-ID.h \
	RANAP_PermittedEncryptionAlgorithms.h \
	RANAP_PermittedIntegrityProtectionAlgorithms.h \
	RANAP_PLMNidentity.h \
	RANAP_PLMNs-in-shared-network.h \
	RANAP_PLMNs-in-shared-network-Value.h \
	RANAP_Port-Number.h \
	RANAP_PositionData.h \
	RANAP_PositionDataSpecificToGERANIuMode.h \
	RANAP_PositioningDataDiscriminator.h \
	RANAP_PositioningDataSet.h \
	RANAP_PositioningMethodAndUsage.h \
	RANAP_PositioningPriority.h \
	RANAP_Pre-emptionCapability.h \
	RANAP_Pre-emptionVulnerability.h \
	RANAP_Presence.h \
	RANAP_Priority-Class-Indicator.h \
	RANAP_PriorityLevel.h \
	RANAP_PrivateIE-ID.h \
	RANAP_PrivateMessage.h \
	RANAP_ProcedureCode.h \
	RANAP_ProtocolError-IE-ContainerList.h \
	RANAP_ProtocolExtensionContainer.h \
	RANAP_ProtocolExtensionField.h \
	RANAP_ProtocolExtensionID.h \
	RANAP_ProtocolIE-Container.h \
	RANAP_ProtocolIE-ContainerPair.h \
	RANAP_ProtocolIE-FieldPair.h \
	RANAP_ProtocolIE-ID.h \
	RANAP_ProvidedData.h \
	RANAP_P-TMSI.h \
	RANAP_QueuingAllowed.h \
	RANAP_RABased.h \
	RANAP_RAB-AssignmentRequest.h \
	RANAP_RAB-AssignmentResponse.h \
	RANAP_RAB-AsymmetryIndicator.h \
	RANAP_RAB-ContextItem.h \
	RANAP_RAB-ContextItem-RANAP-RelocInf.h \
	RANAP_RAB-ContextList.h \
	RANAP_RAB-ContextList-RANAP-RelocInf.h \
	RANAP_RAB-DataForwardingItem.h \
	RANAP_RAB-DataForwardingItem-SRNS-CtxReq.h \
	RANAP_RAB-DataForwardingList.h \
	RANAP_RAB-DataForwardingList-SRNS-CtxReq.h \
	RANAP_RABDataVolumeReport.h \
	RANAP_RABDataVolumeReport-Value.h \
	RANAP_RAB-DataVolumeReportItem.h \
	RANAP_RAB-DataVolumeReportList.h \
	RANAP_RAB-DataVolumeReportRequestItem.h \
	RANAP_RAB-DataVolumeReportRequestList.h \
	RANAP_RAB-FailedItem-EnhRelocInfoRes.h \
	RANAP_RAB-FailedItem.h \
	RANAP_RAB-FailedList-EnhRelocInfoRes.h \
	RANAP_RAB-FailedList.h \
	RANAP_RAB-ID.h \
	RANAP_RAB-IE-ContainerList.h \
	RANAP_RAB-IE-ContainerPairList.h \
	RANAP_RAB-ModifyItem.h \
	RANAP_RAB-ModifyList.h \
	RANAP_RAB-ModifyRequest.h \
	RANAP_RAB-Parameter-ExtendedGuaranteedBitrateList.h \
	RANAP_RAB-Parameter-ExtendedMaxBitrateList.h \
	RANAP_RAB-Parameter-GuaranteedBitrateList.h \
	RANAP_RAB-Parameter-MaxBitrateList.h \
	RANAP_RAB-Parameters.h \
	RANAP_RABParametersList.h \
	RANAP_RABParametersList-Value.h \
	RANAP_RAB-QueuedItem.h \
	RANAP_RAB-QueuedList.h \
	RANAP_RAB-ReleasedItem.h \
	RANAP_RAB-ReleasedItem-IuRelComp.h \
	RANAP_RAB-ReleasedList.h \
	RANAP_RAB-ReleasedList-IuRelComp.h \
	RANAP_RAB-ReleaseFailedList.h \
	RANAP_RAB-ReleaseItem.h \
	RANAP_RAB-ReleaseList.h \
	RANAP_RAB-ReleaseRequest.h \
	RANAP_RAB-RelocationReleaseItem.h \
	RANAP_RAB-RelocationReleaseList.h \
	RANAP_RABs-ContextFailedtoTransferItem.h \
	RANAP_RABs-ContextFailedtoTransferList.h \
	RANAP_RAB-SetupItem-EnhancedRelocCompleteReq.h \
	RANAP_RAB-SetupItem-EnhancedRelocCompleteRes.h \
	RANAP_RAB-SetupItem-EnhRelocInfoReq.h \
	RANAP_RAB-SetupItem-EnhRelocInfoRes.h \
	RANAP_RAB-SetupItem-RelocReqAck.h \
	RANAP_RAB-SetupItem-RelocReq.h \
	RANAP_RAB-SetupList-EnhancedRelocCompleteReq.h \
	RANAP_RAB-SetupList-EnhancedRelocCompleteRes.h \
	RANAP_RAB-SetupList-EnhRelocInfoReq.h \
	RANAP_RAB-SetupList-EnhRelocInfoRes.h \
	RANAP_RAB-SetupList-RelocReqAck.h \
	RANAP_RAB-SetupList-RelocReq.h \
	RANAP_RAB-SetupOrModifiedItem.h \
	RANAP_RAB-SetupOrModifiedList.h \
	RANAP_RAB-SetupOrModifyItemFirst.h \
	RANAP_RAB-SetupOrModifyItemSecond.h \
	RANAP_RAB-SetupOrModifyList.h \
	RANAP_RABs-failed-to-reportItem.h \
	RANAP_RABs-failed-to-reportList.h \
	RANAP_RAB-SubflowCombinationBitRate.h \
	RANAP_RAB-ToBeReleasedItem-EnhancedRelocCompleteRes.h \
	RANAP_RAB-ToBeReleasedList-EnhancedRelocCompleteRes.h \
	RANAP_RAB-TrCH-Mapping.h \
	RANAP_RAB-TrCH-MappingItem.h \
	RANAP_RAC.h \
	RANAP_RAI.h \
	RANAP_RAI-List.h \
	RANAP_RAListofIdleModeUEs.h \
	RANAP_RAListwithNoIdleModeUEsAnyMore.h \
	RANAP_RANAP-EnhancedRelocationInformationRequest.h \
	RANAP_RANAP-EnhancedRelocationInformationResponse.h \
	RANAP_RANAP-PDU.h \
	RANAP_RANAP-RelocationInformation.h \
	RANAP_RAofIdleModeUEs.h \
	RANAP_RateControlAllowed.h \
	RANAP_RAT-Type.h \
	RANAP_RedirectAttemptFlag.h \
	RANAP_RedirectionCompleted.h \
	RANAP_RedirectionIndication.h \
	RANAP_RejectCauseValue.h \
	RANAP_RelocationCancelAcknowledge.h \
	RANAP_RelocationCancel.h \
	RANAP_RelocationCommand.h \
	RANAP_RelocationComplete.h \
	RANAP_RelocationDetect.h \
	RANAP_RelocationFailure.h \
	RANAP_RelocationPreparationFailure.h \
	RANAP_RelocationRequestAcknowledge.h \
	RANAP_RelocationRequest.h \
	RANAP_RelocationRequired.h \
	RANAP_RelocationRequirement.h \
	RANAP_RelocationType.h \
	RANAP_RepetitionNumber0.h \
	RANAP_RepetitionNumber1.h \
	RANAP_ReportAmount.h \
	RANAP_ReportArea.h \
	RANAP_ReportChangeOfSAI.h \
	RANAP_ReportInterval.h \
	RANAP_RequestedGANSSAssistanceData.h \
	RANAP_RequestedGPSAssistanceData.h \
	RANAP_RequestedLocationRelatedDataType.h \
	RANAP_RequestedMBMSIPMulticastAddressandAPNRequest.h \
	RANAP_RequestedMulticastServiceList.h \
	RANAP_Requested-RAB-Parameter-ExtendedGuaranteedBitrateList.h \
	RANAP_Requested-RAB-Parameter-ExtendedMaxBitrateList.h \
	RANAP_Requested-RAB-Parameter-GuaranteedBitrateList.h \
	RANAP_Requested-RAB-Parameter-MaxBitrateList.h \
	RANAP_Requested-RAB-Parameter-Values.h \
	RANAP_RequestType.h \
	RANAP_ResetAcknowledge.h \
	RANAP_Reset.h \
	RANAP_ResetResourceAckItem.h \
	RANAP_ResetResourceAckList.h \
	RANAP_ResetResourceAcknowledge.h \
	RANAP_ResetResource.h \
	RANAP_ResetResourceItem.h \
	RANAP_ResetResourceList.h \
	RANAP_ResidualBitErrorRatio.h \
	RANAP_ResponseTime.h \
	RANAP_RIMInformation.h \
	RANAP_RIMRoutingAddress.h \
	RANAP_RIM-Transfer.h \
	RANAP_RNC-ID.h \
	RANAP_RNCTraceInformation.h \
	RANAP_RNSAPRelocationParameters.h \
	RANAP_RRC-Container.h \
	RANAP_RSRQ-Extension.h \
	RANAP_RSRQ-Type.h \
	RANAP_RSRVCC-HO-Indication.h \
	RANAP_RSRVCC-Information.h \
	RANAP_RSRVCC-Operation-Possible.h \
	RANAP_RTLoadValue.h \
	RANAP_SAC.h \
	RANAP_SAI.h \
	RANAP_SAPI.h \
	RANAP_SDU-ErrorRatio.h \
	RANAP_SDU-FormatInformationParameterItem.h \
	RANAP_SDU-FormatInformationParameters.h \
	RANAP_SDU-ParameterItem.h \
	RANAP_SDU-Parameters.h \
	RANAP_SecurityModeCommand.h \
	RANAP_SecurityModeComplete.h \
	RANAP_SecurityModeReject.h \
	RANAP_Service-Handover.h \
	RANAP_Session-Re-establishment-Indicator.h \
	RANAP_SessionUpdateID.h \
	RANAP_Shared-Network-Information.h \
	RANAP_SignallingIndication.h \
	RANAP_SNA-Access-Information.h \
	RANAP_SNAC.h \
	RANAP_SourceBSS-ToTargetBSS-TransparentContainer.h \
	RANAP_SourceCellID.h \
	RANAP_SourceeNodeB-ToTargeteNodeB-TransparentContainer.h \
	RANAP_SourceID.h \
	RANAP_SourceRNC-ID.h \
	RANAP_SourceRNC-ToTargetRNC-TransparentContainer.h \
	RANAP_SourceStatisticsDescriptor.h \
	RANAP_Source-ToTarget-TransparentContainer.h \
	RANAP_SourceUTRANCellID.h \
	RANAP_SRB-ID.h \
	RANAP_SRB-TrCH-Mapping.h \
	RANAP_SRB-TrCH-MappingItem.h \
	RANAP_SRNS-ContextRequest.h \
	RANAP_SRNS-ContextResponse.h \
	RANAP_SRNS-DataForwardCommand.h \
	RANAP_SRVCC-CSKeysRequest.h \
	RANAP_SRVCC-CSKeysResponse.h \
	RANAP_SRVCC-HO-Indication.h \
	RANAP_SRVCC-Information.h \
	RANAP_SRVCC-Operation-Possible.h \
	RANAP_SubflowSDU-Size.h \
	RANAP_SubscriberProfileIDforRFP.h \
	RANAP_SuccessfulOutcome.h \
	RANAP_SupportedBitrate.h \
	RANAP_SupportedRAB-ParameterBitrateList.h \
	RANAP_TAC.h \
	RANAP_TAI.h \
	RANAP_TargetBSS-ToSourceBSS-TransparentContainer.h \
	RANAP_TargetCellId.h \
	RANAP_TargetENB-ID.h \
	RANAP_TargeteNodeB-ToSourceeNodeB-TransparentContainer.h \
	RANAP_TargetID.h \
	RANAP_TargetRNC-ID.h \
	RANAP_TargetRNC-ToSourceRNC-TransparentContainer.h \
	RANAP_Target-ToSource-TransparentContainer.h \
	RANAP_TBCD-STRING.h \
	RANAP_TemporaryUE-ID.h \
	RANAP_TimeToMBMSDataTransfer.h \
	RANAP_Time-UE-StayedInCell-EnhancedGranularity.h \
	RANAP_Time-UE-StayedInCell.h \
	RANAP_TimingDifferenceULDL.h \
	RANAP_TMGI.h \
	RANAP_TMSI.h \
	RANAP_TNLInformationEnhRelInfoReq.h \
	RANAP_TNLInformationEnhRelInfoRes.h \
	RANAP_TraceDepth.h \
	RANAP_TraceInformation.h \
	RANAP_TracePropagationParameters.h \
	RANAP_TraceRecordingSessionInformation.h \
	RANAP_TraceRecordingSessionReference.h \
	RANAP_TraceReference.h \
	RANAP_TraceType.h \
	RANAP_TrafficClass.h \
	RANAP_TrafficHandlingPriority.h \
	RANAP_TransferDelay.h \
	RANAP_TransportLayerAddress.h \
	RANAP_TransportLayerInformation.h \
	RANAP_TrCH-ID.h \
	RANAP_TrCH-ID-List.h \
	RANAP_TriggerID.h \
	RANAP_TriggeringMessage.h \
	RANAP_TunnelInformation.h \
	RANAP_TypeOfError.h \
	RANAP_UE-AggregateMaximumBitRateDownlink.h \
	RANAP_UE-AggregateMaximumBitRate.h \
	RANAP_UE-AggregateMaximumBitRateUplink.h \
	RANAP_UE-History-Information.h \
	RANAP_UE-ID.h \
	RANAP_UeRadioCapabilityMatchRequest.h \
	RANAP_UeRadioCapabilityMatchResponse.h \
	RANAP_UESBI-IuA.h \
	RANAP_UESBI-IuB.h \
	RANAP_UESBI-Iu.h \
	RANAP_UESpecificInformationIndication.h \
	RANAP_UL-GTP-PDU-SequenceNumber.h \
	RANAP_UL-N-PDU-SequenceNumber.h \
	RANAP_UnsuccessfulLinking-IEs.h \
	RANAP_UnsuccessfulLinking-IEs-Value.h \
	RANAP_UnsuccessfullyTransmittedDataVolume.h \
	RANAP_UnsuccessfulOutcome.h \
	RANAP_UPInformation.h \
	RANAP_UPInitialisationFrame.h \
	RANAP_UplinkInformationExchangeFailure.h \
	RANAP_UplinkInformationExchangeRequest.h \
	RANAP_UplinkInformationExchangeResponse.h \
	RANAP_UP-ModeVersions.h \
	RANAP_USCH-ID.h \
	RANAP_UserPlaneInformation.h \
	RANAP_UserPlaneMode.h \
	RANAP_UTRAN-CellID.h \
	RANAP_VelocityEstimate.h \
	RANAP_VerticalAccuracyCode.h \
	RANAP_VerticalSpeedDirection.h \
	RANAP_VerticalVelocity.h \
	RANAP_VoiceSupportMatchIndicator.h \
	version.h \
	$(NULL)

ranapdir = $(includedir)/osmocom/ranap

DISTCLEANFILES = \
	ranap_ies_defs.h \
	version.h \
	$(NULL)
