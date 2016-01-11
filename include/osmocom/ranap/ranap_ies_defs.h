/*******************************************************************************
 * This file had been created by asn1tostruct.py script v0.5osmo1
 * Please do not modify this file but regenerate it via script.
 * Created on: 2016-01-11 12:45:00.144035 by neels
 * from ['../asn1//ranap/RANAP-PDU-Contents.asn']
 ******************************************************************************/
#include <osmocom/ranap/ranap_common.h>

#ifndef RANAP_IES_DEFS_H_
#define RANAP_IES_DEFS_H_

typedef struct RANAP_RAB_ReleasedItemIEs_s {
    RANAP_RAB_ReleasedItem_t raB_ReleasedItem;
} RANAP_RAB_ReleasedItemIEs_t;

typedef struct RANAP_Iu_ReleaseRequestIEs_s {
    RANAP_Cause_t cause;
} RANAP_Iu_ReleaseRequestIEs_t;

#define UESPECIFICINFORMATIONINDICATIONIES_RANAP_UESBI_IU_PRESENT (1 << 0)

typedef struct RANAP_UESpecificInformationIndicationIEs_s {
    uint16_t   presenceMask;
    RANAP_UESBI_Iu_t uesbI_Iu; ///< Optional field
} RANAP_UESpecificInformationIndicationIEs_t;

#define ENHANCEDRELOCATIONCOMPLETEFAILUREIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 0)

typedef struct RANAP_EnhancedRelocationCompleteFailureIEs_s {
    uint16_t                 presenceMask;
    RANAP_Cause_t            cause;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_EnhancedRelocationCompleteFailureIEs_t;

#define MBMSCNDE_REGISTRATIONRESPONSEIES_RANAP_CAUSE_PRESENT            (1 << 0)
#define MBMSCNDE_REGISTRATIONRESPONSEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 1)

typedef struct RANAP_MBMSCNDe_RegistrationResponseIEs_s {
    uint16_t                 presenceMask;
    RANAP_TMGI_t             tmgi;
    RANAP_GlobalRNC_ID_t     globalRNC_ID;
    RANAP_Cause_t            cause; ///< Optional field
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_MBMSCNDe_RegistrationResponseIEs_t;

#define SECURITYMODEREJECTIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 0)

typedef struct RANAP_SecurityModeRejectIEs_s {
    uint16_t                 presenceMask;
    RANAP_Cause_t            cause;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_SecurityModeRejectIEs_t;

#define RANAP_RELOCATIONINFORMATIONIES_RANAP_RAB_CONTEXTLIST_RANAP_RELOCINF_PRESENT (1 << 0)

typedef struct RANAP_RANAP_RelocationInformationIEs_s {
    uint16_t                         presenceMask;
    RANAP_RAB_ContextList_RANAP_RelocInf_t raB_ContextList_RANAP_RelocInf; ///< Optional field
} RANAP_RANAP_RelocationInformationIEs_t;

#define RESETACKNOWLEDGEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 0)
#define RESETACKNOWLEDGEIES_RANAP_GLOBALRNC_ID_PRESENT     (1 << 1)

typedef struct RANAP_ResetAcknowledgeIEs_s {
    uint16_t                 presenceMask;
    RANAP_CN_DomainIndicator_t cN_DomainIndicator;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
    RANAP_GlobalRNC_ID_t     globalRNC_ID; ///< Optional field
} RANAP_ResetAcknowledgeIEs_t;

#define RELOCATIONCANCELACKNOWLEDGEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 0)

typedef struct RANAP_RelocationCancelAcknowledgeIEs_s {
    uint16_t                 presenceMask;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_RelocationCancelAcknowledgeIEs_t;

#define SRVCC_CSKEYSRESPONSEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 0)

typedef struct RANAP_SRVCC_CSKeysResponseIEs_s {
    uint16_t                 presenceMask;
    RANAP_IntegrityProtectionKey_t integrityProtectionKey;
    RANAP_EncryptionKey_t    encryptionKey;
    RANAP_SRVCC_Information_t srvcC_Information;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_SRVCC_CSKeysResponseIEs_t;

#define MBMSCNDE_REGISTRATIONREQUESTIES_RANAP_GLOBALCN_ID_PRESENT (1 << 0)

typedef struct RANAP_MBMSCNDe_RegistrationRequestIEs_s {
    uint16_t      presenceMask;
    RANAP_TMGI_t  tmgi;
    RANAP_GlobalCN_ID_t globalCN_ID; ///< Optional field
} RANAP_MBMSCNDe_RegistrationRequestIEs_t;

#define PAGINGIES_RANAP_TEMPORARYUE_ID_PRESENT       (1 << 0)
#define PAGINGIES_RANAP_PAGINGAREAID_PRESENT         (1 << 1)
#define PAGINGIES_RANAP_PAGINGCAUSE_PRESENT          (1 << 2)
#define PAGINGIES_RANAP_NONSEARCHINGINDICATION_PRESENT (1 << 3)
#define PAGINGIES_RANAP_DRX_CYCLELENGTHCOEFFICIENT_PRESENT (1 << 4)

typedef struct RANAP_PagingIEs_s {
    uint16_t                     presenceMask;
    RANAP_CN_DomainIndicator_t   cN_DomainIndicator;
    RANAP_PermanentNAS_UE_ID_t   permanentNAS_UE_ID;
    RANAP_TemporaryUE_ID_t       temporaryUE_ID; ///< Optional field
    RANAP_PagingAreaID_t         pagingAreaID; ///< Optional field
    RANAP_PagingCause_t          pagingCause; ///< Optional field
    RANAP_NonSearchingIndication_t nonSearchingIndication; ///< Optional field
    RANAP_DRX_CycleLengthCoefficient_t drX_CycleLengthCoefficient; ///< Optional field
} RANAP_PagingIEs_t;

typedef struct RANAP_GERAN_Iumode_RAB_Failed_RABAssgntResponse_ItemIEs_s {
    RANAP_GERAN_Iumode_RAB_Failed_RABAssgntResponse_Item_t geraN_Iumode_RAB_Failed_RABAssgntResponse_Item;
} RANAP_GERAN_Iumode_RAB_Failed_RABAssgntResponse_ItemIEs_t;

typedef struct RANAP_ResetResourceItemIEs_s {
    RANAP_ResetResourceItem_t iuSigConIdItem;
} RANAP_ResetResourceItemIEs_t;

typedef struct RANAP_LocationReportingControlIEs_s {
    RANAP_RequestType_t requestType;
} RANAP_LocationReportingControlIEs_t;

#define ENHANCEDRELOCATIONCOMPLETEREQUESTIES_RANAP_EXTENDEDRNC_ID_PRESENT                   (1 << 0)
#define ENHANCEDRELOCATIONCOMPLETEREQUESTIES_RANAP_EXTENDEDRNC_ID_PRESENT                   (1 << 1)
#define ENHANCEDRELOCATIONCOMPLETEREQUESTIES_RANAP_RAB_SETUPLIST_ENHANCEDRELOCCOMPLETEREQ_PRESENT (1 << 2)

typedef struct RANAP_EnhancedRelocationCompleteRequestIEs_s {
    uint16_t                                 presenceMask;
    RANAP_IuSignallingConnectionIdentifier_t oldIuSigConId;
    RANAP_IuSignallingConnectionIdentifier_t iuSigConId;
    RANAP_GlobalRNC_ID_t                     relocation_SourceRNC_ID;
    RANAP_ExtendedRNC_ID_t                   relocation_SourceExtendedRNC_ID; ///< Optional field
    RANAP_GlobalRNC_ID_t                     relocation_TargetRNC_ID;
    RANAP_ExtendedRNC_ID_t                   relocation_TargetExtendedRNC_ID; ///< Optional field
    RANAP_RAB_SetupList_EnhancedRelocCompleteReq_t raB_SetupList_EnhancedRelocCompleteReq; ///< Optional field
} RANAP_EnhancedRelocationCompleteRequestIEs_t;

typedef struct RANAP_RAB_FailedItemIEs_s {
    RANAP_RAB_FailedItem_t raB_FailedItem;
} RANAP_RAB_FailedItemIEs_t;

#define MBMSUELINKINGRESPONSEIES_RANAP_UNSUCCESSFULLINKING_IES_PRESENT (1 << 0)
#define MBMSUELINKINGRESPONSEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 1)

typedef struct RANAP_MBMSUELinkingResponseIEs_s {
    uint16_t                  presenceMask;
    RANAP_UnsuccessfulLinking_IEs_t unsuccessfulLinkingList; ///< Optional field
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_MBMSUELinkingResponseIEs_t;

typedef struct RANAP_RAB_QueuedItemIEs_s {
    RANAP_RAB_QueuedItem_t raB_QueuedItem;
} RANAP_RAB_QueuedItemIEs_t;

#define CN_INVOKETRACEIES_RANAP_TRACETYPE_PRESENT (1 << 0)
#define CN_INVOKETRACEIES_RANAP_TRIGGERID_PRESENT (1 << 1)
#define CN_INVOKETRACEIES_RANAP_UE_ID_PRESENT    (1 << 2)
#define CN_INVOKETRACEIES_RANAP_OMC_ID_PRESENT   (1 << 3)

typedef struct RANAP_CN_InvokeTraceIEs_s {
    uint16_t         presenceMask;
    RANAP_TraceType_t traceType; ///< Optional field
    RANAP_TraceReference_t traceReference;
    RANAP_TriggerID_t triggerID; ///< Optional field
    RANAP_UE_ID_t    ue_id; ///< Optional field
    RANAP_OMC_ID_t   omc_id; ///< Optional field
} RANAP_CN_InvokeTraceIEs_t;

typedef struct RANAP_Iu_ReleaseCommandIEs_s {
    RANAP_Cause_t cause;
} RANAP_Iu_ReleaseCommandIEs_t;

#define RELOCATIONREQUESTACKNOWLEDGEIES_RANAP_TARGETRNC_TOSOURCERNC_TRANSPARENTCONTAINER_PRESENT (1 << 0)
#define RELOCATIONREQUESTACKNOWLEDGEIES_RANAP_RAB_SETUPLIST_RELOCREQACK_PRESENT            (1 << 1)
#define RELOCATIONREQUESTACKNOWLEDGEIES_RANAP_RAB_FAILEDLIST_PRESENT                       (1 << 2)
#define RELOCATIONREQUESTACKNOWLEDGEIES_RANAP_CHOSENINTEGRITYPROTECTIONALGORITHM_PRESENT   (1 << 3)
#define RELOCATIONREQUESTACKNOWLEDGEIES_RANAP_CHOSENENCRYPTIONALGORITHM_PRESENT            (1 << 4)
#define RELOCATIONREQUESTACKNOWLEDGEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT               (1 << 5)

typedef struct RANAP_RelocationRequestAcknowledgeIEs_s {
    uint16_t                                     presenceMask;
    RANAP_TargetRNC_ToSourceRNC_TransparentContainer_t target_ToSource_TransparentContainer; ///< Optional field
    RANAP_RAB_SetupList_RelocReqAck_t            raB_SetupList_RelocReqAck; ///< Optional field
    RANAP_RAB_FailedList_t                       raB_FailedList; ///< Optional field
    RANAP_ChosenIntegrityProtectionAlgorithm_t   chosenIntegrityProtectionAlgorithm; ///< Optional field
    RANAP_ChosenEncryptionAlgorithm_t            chosenEncryptionAlgorithm; ///< Optional field
    RANAP_CriticalityDiagnostics_t               criticalityDiagnostics; ///< Optional field
} RANAP_RelocationRequestAcknowledgeIEs_t;

#define RELOCATIONFAILUREIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 0)

typedef struct RANAP_RelocationFailureIEs_s {
    uint16_t                 presenceMask;
    RANAP_Cause_t            cause;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_RelocationFailureIEs_t;

typedef struct RANAP_RABs_failed_to_reportItemIEs_s {
    RANAP_RABs_failed_to_reportItem_t raB_FailedtoReportItem;
} RANAP_RABs_failed_to_reportItemIEs_t;

#define RELOCATIONPREPARATIONFAILUREIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 0)

typedef struct RANAP_RelocationPreparationFailureIEs_s {
    uint16_t                 presenceMask;
    RANAP_Cause_t            cause;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_RelocationPreparationFailureIEs_t;

typedef struct RANAP_RAB_ToBeReleasedItem_EnhancedRelocCompleteRes_IEs_s {
    RANAP_RAB_ToBeReleasedItem_EnhancedRelocCompleteRes_t raB_ToBeReleasedItem_EnhancedRelocCompleteRes;
} RANAP_RAB_ToBeReleasedItem_EnhancedRelocCompleteRes_IEs_t;

typedef struct RANAP_RABs_ContextFailedtoTransferItemIEs_s {
    RANAP_RABs_ContextFailedtoTransferItem_t raB_ContextFailedtoTransferItem;
} RANAP_RABs_ContextFailedtoTransferItemIEs_t;

#define RELOCATIONREQUIREDIES_RANAP_OLDBSS_TONEWBSS_INFORMATION_PRESENT (1 << 0)

typedef struct RANAP_RelocationRequiredIEs_s {
    uint16_t                      presenceMask;
    RANAP_RelocationType_t        relocationType;
    RANAP_Cause_t                 cause;
    RANAP_SourceID_t              sourceID;
    RANAP_TargetID_t              targetID;
    RANAP_OldBSS_ToNewBSS_Information_t oldBSS_ToNewBSS_Information; ///< Optional field
} RANAP_RelocationRequiredIEs_t;

typedef struct RANAP_MBMSSessionStopIEs_s {
    RANAP_MBMSCNDe_Registration_t mbmscnDe_Registration;
} RANAP_MBMSSessionStopIEs_t;

#define MBMSSESSIONUPDATEFAILUREIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 0)

typedef struct RANAP_MBMSSessionUpdateFailureIEs_s {
    uint16_t                 presenceMask;
    RANAP_SessionUpdateID_t  sessionUpdateID;
    RANAP_Cause_t            cause;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_MBMSSessionUpdateFailureIEs_t;

#define RESETIES_RANAP_GLOBALRNC_ID_PRESENT (1 << 0)

typedef struct RANAP_ResetIEs_s {
    uint16_t             presenceMask;
    RANAP_Cause_t        cause;
    RANAP_CN_DomainIndicator_t cN_DomainIndicator;
    RANAP_GlobalRNC_ID_t globalRNC_ID; ///< Optional field
} RANAP_ResetIEs_t;

typedef struct RANAP_LocationRelatedDataFailureIEs_s {
    RANAP_Cause_t cause;
} RANAP_LocationRelatedDataFailureIEs_t;

#define RESETRESOURCEACKNOWLEDGEIES_RANAP_GLOBALRNC_ID_PRESENT     (1 << 0)
#define RESETRESOURCEACKNOWLEDGEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 1)

typedef struct RANAP_ResetResourceAcknowledgeIEs_s {
    uint16_t                 presenceMask;
    RANAP_CN_DomainIndicator_t cN_DomainIndicator;
    RANAP_ResetResourceAckList_t iuSigConIdList;
    RANAP_GlobalRNC_ID_t     globalRNC_ID; ///< Optional field
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_ResetResourceAcknowledgeIEs_t;

#define MBMSREGISTRATIONREQUESTIES_RANAP_GLOBALRNC_ID_PRESENT          (1 << 0)

typedef struct RANAP_MBMSRegistrationRequestIEs_s {
    uint16_t                      presenceMask;
    RANAP_MBMSRegistrationRequestType_t mbmsRegistrationRequestType;
    RANAP_TMGI_t                  tmgi;
    RANAP_GlobalRNC_ID_t          globalRNC_ID; ///< Optional field
} RANAP_MBMSRegistrationRequestIEs_t;

typedef struct RANAP_UplinkInformationExchangeRequestIEs_s {
    RANAP_InformationExchangeID_t informationExchangeID;
    RANAP_InformationExchangeType_t informationExchangeType;
    RANAP_CN_DomainIndicator_t cN_DomainIndicator;
    RANAP_GlobalRNC_ID_t      globalRNC_ID;
} RANAP_UplinkInformationExchangeRequestIEs_t;

#define MBMSSESSIONSTOPRESPONSEIES_RANAP_CAUSE_PRESENT            (1 << 0)
#define MBMSSESSIONSTOPRESPONSEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 1)

typedef struct RANAP_MBMSSessionStopResponseIEs_s {
    uint16_t                 presenceMask;
    RANAP_Cause_t            cause; ///< Optional field
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_MBMSSessionStopResponseIEs_t;

typedef struct RANAP_RAB_ContextItemIEs_RANAP_RelocInf_s {
    RANAP_RAB_ContextItem_RANAP_RelocInf_t raB_ContextItem_RANAP_RelocInf;
} RANAP_RAB_ContextItemIEs_RANAP_RelocInf_t;

#define LOCATIONRELATEDDATAREQUESTIES_RANAP_LOCATIONRELATEDDATAREQUESTTYPE_PRESENT (1 << 0)

typedef struct RANAP_LocationRelatedDataRequestIEs_s {
    uint16_t                         presenceMask;
    RANAP_LocationRelatedDataRequestType_t locationRelatedDataRequestType; ///< Optional field
} RANAP_LocationRelatedDataRequestIEs_t;

typedef struct RANAP_RAB_DataForwardingItem_SRNS_CtxReq_IEs_s {
    RANAP_RAB_DataForwardingItem_SRNS_CtxReq_t raB_DataForwardingItem_SRNS_CtxReq;
} RANAP_RAB_DataForwardingItem_SRNS_CtxReq_IEs_t;

typedef struct RANAP_RAB_ReleaseItemIEs_s {
    RANAP_RAB_ReleaseItem_t raB_ReleaseItem;
} RANAP_RAB_ReleaseItemIEs_t;

typedef struct RANAP_RAB_DataVolumeReportRequestItemIEs_s {
    RANAP_RAB_DataVolumeReportRequestItem_t raB_DataVolumeReportRequestItem;
} RANAP_RAB_DataVolumeReportRequestItemIEs_t;

#define INFORMATIONTRANSFERCONFIRMATIONIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 0)

typedef struct RANAP_InformationTransferConfirmationIEs_s {
    uint16_t                 presenceMask;
    RANAP_InformationTransferID_t informationTransferID;
    RANAP_CN_DomainIndicator_t cN_DomainIndicator;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
    RANAP_GlobalRNC_ID_t     globalRNC_ID;
} RANAP_InformationTransferConfirmationIEs_t;

#define INITIALUE_MESSAGEIES_RANAP_RAC_PRESENT                        (1 << 0)

typedef struct RANAP_InitialUE_MessageIEs_s {
    uint16_t                           presenceMask;
    RANAP_CN_DomainIndicator_t         cN_DomainIndicator;
    RANAP_LAI_t                        lai;
    RANAP_RAC_t                        rac; ///< Conditional field
    RANAP_SAI_t                        sai;
    RANAP_NAS_PDU_t                    nas_pdu;
    RANAP_IuSignallingConnectionIdentifier_t iuSigConId;
    RANAP_GlobalRNC_ID_t               globalRNC_ID;
} RANAP_InitialUE_MessageIEs_t;

#define SRNS_CONTEXTRESPONSEIES_RANAP_RAB_CONTEXTLIST_PRESENT            (1 << 0)
#define SRNS_CONTEXTRESPONSEIES_RANAP_RABS_CONTEXTFAILEDTOTRANSFERLIST_PRESENT (1 << 1)
#define SRNS_CONTEXTRESPONSEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT     (1 << 2)

typedef struct RANAP_SRNS_ContextResponseIEs_s {
    uint16_t                           presenceMask;
    RANAP_RAB_ContextList_t            raB_ContextList; ///< Optional field
    RANAP_RABs_ContextFailedtoTransferList_t raB_ContextFailedtoTransferList; ///< Optional field
    RANAP_CriticalityDiagnostics_t     criticalityDiagnostics; ///< Optional field
} RANAP_SRNS_ContextResponseIEs_t;

typedef struct RANAP_ResetResourceAckItemIEs_s {
    RANAP_ResetResourceAckItem_t iuSigConIdItem;
} RANAP_ResetResourceAckItemIEs_t;

#define SRNS_DATAFORWARDCOMMANDIES_RANAP_RAB_DATAFORWARDINGLIST_PRESENT (1 << 0)

typedef struct RANAP_SRNS_DataForwardCommandIEs_s {
    uint16_t                 presenceMask;
    RANAP_RAB_DataForwardingList_t raB_DataForwardingList; ///< Optional field
} RANAP_SRNS_DataForwardCommandIEs_t;

#define RELOCATIONREQUESTIES_RANAP_PERMANENTNAS_UE_ID_PRESENT                   (1 << 0)
#define RELOCATIONREQUESTIES_RANAP_RAB_SETUPLIST_RELOCREQ_PRESENT               (1 << 1)
#define RELOCATIONREQUESTIES_RANAP_INTEGRITYPROTECTIONINFORMATION_PRESENT       (1 << 2)
#define RELOCATIONREQUESTIES_RANAP_ENCRYPTIONINFORMATION_PRESENT                (1 << 3)

typedef struct RANAP_RelocationRequestIEs_s {
    uint16_t                                     presenceMask;
    RANAP_PermanentNAS_UE_ID_t                   permanentNAS_UE_ID; ///< Optional field
    RANAP_Cause_t                                cause;
    RANAP_CN_DomainIndicator_t                   cN_DomainIndicator;
    RANAP_SourceRNC_ToTargetRNC_TransparentContainer_t source_ToTarget_TransparentContainer;
    RANAP_RAB_SetupList_RelocReq_t               raB_SetupList_RelocReq; ///< Optional field
    RANAP_IntegrityProtectionInformation_t       integrityProtectionInformation; ///< Optional field
    RANAP_EncryptionInformation_t                encryptionInformation; ///< Optional field
    RANAP_IuSignallingConnectionIdentifier_t     iuSigConId;
} RANAP_RelocationRequestIEs_t;

typedef struct RANAP_SRNS_ContextRequestIEs_s {
    RANAP_RAB_DataForwardingList_SRNS_CtxReq_t raB_DataForwardingList_SRNS_CtxReq;
} RANAP_SRNS_ContextRequestIEs_t;

#define MBMSSESSIONSTARTRESPONSEIES_RANAP_TRANSPORTLAYERINFORMATION_PRESENT (1 << 0)
#define MBMSSESSIONSTARTRESPONSEIES_RANAP_CAUSE_PRESENT               (1 << 1)
#define MBMSSESSIONSTARTRESPONSEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 2)

typedef struct RANAP_MBMSSessionStartResponseIEs_s {
    uint16_t                    presenceMask;
    RANAP_TransportLayerInformation_t transportLayerInformation; ///< Optional field
    RANAP_Cause_t               cause; ///< Optional field
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_MBMSSessionStartResponseIEs_t;

#define DIRECTTRANSFERIES_RANAP_LAI_PRESENT (1 << 0)
#define DIRECTTRANSFERIES_RANAP_RAC_PRESENT (1 << 1)
#define DIRECTTRANSFERIES_RANAP_SAI_PRESENT (1 << 2)
#define DIRECTTRANSFERIES_RANAP_SAPI_PRESENT (1 << 3)

typedef struct RANAP_DirectTransferIEs_s {
    uint16_t  presenceMask;
    RANAP_NAS_PDU_t nas_pdu;
    RANAP_LAI_t lai; ///< Optional field
    RANAP_RAC_t rac; ///< Optional field
    RANAP_SAI_t sai; ///< Optional field
    RANAP_SAPI_t sapi; ///< Optional field
} RANAP_DirectTransferIEs_t;

#define RESETRESOURCEIES_RANAP_GLOBALRNC_ID_PRESENT (1 << 0)

typedef struct RANAP_ResetResourceIEs_s {
    uint16_t             presenceMask;
    RANAP_CN_DomainIndicator_t cN_DomainIndicator;
    RANAP_Cause_t        cause;
    RANAP_ResetResourceList_t iuSigConIdList;
    RANAP_GlobalRNC_ID_t globalRNC_ID; ///< Optional field
} RANAP_ResetResourceIEs_t;

#define RANAP_ENHANCEDRELOCATIONINFORMATIONRESPONSEIES_RANAP_TARGETRNC_TOSOURCERNC_TRANSPARENTCONTAINER_PRESENT (1 << 0)
#define RANAP_ENHANCEDRELOCATIONINFORMATIONRESPONSEIES_RANAP_RAB_SETUPLIST_ENHRELOCINFORES_PRESENT        (1 << 1)
#define RANAP_ENHANCEDRELOCATIONINFORMATIONRESPONSEIES_RANAP_RAB_FAILEDLIST_ENHRELOCINFORES_PRESENT       (1 << 2)
#define RANAP_ENHANCEDRELOCATIONINFORMATIONRESPONSEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT               (1 << 3)

typedef struct RANAP_RANAP_EnhancedRelocationInformationResponseIEs_s {
    uint16_t                                     presenceMask;
    RANAP_TargetRNC_ToSourceRNC_TransparentContainer_t target_ToSource_TransparentContainer; ///< Optional field
    RANAP_RAB_SetupList_EnhRelocInfoRes_t        raB_SetupList_EnhRelocInfoRes; ///< Optional field
    RANAP_RAB_FailedList_EnhRelocInfoRes_t       raB_FailedList_EnhRelocInfoRes; ///< Optional field
    RANAP_CriticalityDiagnostics_t               criticalityDiagnostics; ///< Optional field
} RANAP_RANAP_EnhancedRelocationInformationResponseIEs_t;

typedef struct RANAP_RAB_SetupItem_EnhancedRelocCompleteRes_IEs_s {
    RANAP_RAB_SetupItem_EnhancedRelocCompleteRes_t raB_SetupItem_EnhancedRelocCompleteRes;
} RANAP_RAB_SetupItem_EnhancedRelocCompleteRes_IEs_t;

#define RANAP_ENHANCEDRELOCATIONINFORMATIONREQUESTIES_RANAP_IUSIGNALLINGCONNECTIONIDENTIFIER_PRESENT     (1 << 0)
#define RANAP_ENHANCEDRELOCATIONINFORMATIONREQUESTIES_RANAP_GLOBALCN_ID_PRESENT                          (1 << 1)
#define RANAP_ENHANCEDRELOCATIONINFORMATIONREQUESTIES_RANAP_IUSIGNALLINGCONNECTIONIDENTIFIER_PRESENT     (1 << 2)
#define RANAP_ENHANCEDRELOCATIONINFORMATIONREQUESTIES_RANAP_GLOBALCN_ID_PRESENT                          (1 << 3)
#define RANAP_ENHANCEDRELOCATIONINFORMATIONREQUESTIES_RANAP_RAB_SETUPLIST_ENHRELOCINFOREQ_PRESENT        (1 << 4)
#define RANAP_ENHANCEDRELOCATIONINFORMATIONREQUESTIES_RANAP_SNA_ACCESS_INFORMATION_PRESENT               (1 << 5)
#define RANAP_ENHANCEDRELOCATIONINFORMATIONREQUESTIES_RANAP_UESBI_IU_PRESENT                             (1 << 6)
#define RANAP_ENHANCEDRELOCATIONINFORMATIONREQUESTIES_RANAP_PLMNIDENTITY_PRESENT                         (1 << 7)
#define RANAP_ENHANCEDRELOCATIONINFORMATIONREQUESTIES_RANAP_CNMBMSLINKINGINFORMATION_PRESENT             (1 << 8)

typedef struct RANAP_RANAP_EnhancedRelocationInformationRequestIEs_s {
    uint16_t                                     presenceMask;
    RANAP_SourceRNC_ToTargetRNC_TransparentContainer_t source_ToTarget_TransparentContainer;
    RANAP_IuSignallingConnectionIdentifier_t     oldIuSigConIdCS; ///< Optional field
    RANAP_GlobalCN_ID_t                          globalCN_IDCS; ///< Optional field
    RANAP_IuSignallingConnectionIdentifier_t     oldIuSigConIdPS; ///< Optional field
    RANAP_GlobalCN_ID_t                          globalCN_IDPS; ///< Optional field
    RANAP_RAB_SetupList_EnhRelocInfoReq_t        raB_SetupList_EnhRelocInfoReq; ///< Optional field
    RANAP_SNA_Access_Information_t               snA_Access_Information; ///< Optional field
    RANAP_UESBI_Iu_t                             uesbI_Iu; ///< Optional field
    RANAP_PLMNidentity_t                         selectedPLMN_ID; ///< Optional field
    RANAP_CNMBMSLinkingInformation_t             cnmbmsLinkingInformation; ///< Optional field
} RANAP_RANAP_EnhancedRelocationInformationRequestIEs_t;

#define SECURITYMODECOMMANDIES_RANAP_ENCRYPTIONINFORMATION_PRESENT    (1 << 0)

typedef struct RANAP_SecurityModeCommandIEs_s {
    uint16_t                         presenceMask;
    RANAP_IntegrityProtectionInformation_t integrityProtectionInformation;
    RANAP_EncryptionInformation_t    encryptionInformation; ///< Optional field
    RANAP_KeyStatus_t                keyStatus;
} RANAP_SecurityModeCommandIEs_t;

typedef struct RANAP_RelocationCancelIEs_s {
    RANAP_Cause_t cause;
} RANAP_RelocationCancelIEs_t;

typedef struct RANAP_RAB_SetupItem_RelocReqAck_IEs_s {
    RANAP_RAB_SetupItem_RelocReqAck_t raB_SetupItem_RelocReqAck;
} RANAP_RAB_SetupItem_RelocReqAck_IEs_t;

#define MBMSREGISTRATIONFAILUREIES_RANAP_TMGI_PRESENT             (1 << 0)
#define MBMSREGISTRATIONFAILUREIES_RANAP_GLOBALCN_ID_PRESENT      (1 << 1)
#define MBMSREGISTRATIONFAILUREIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 2)

typedef struct RANAP_MBMSRegistrationFailureIEs_s {
    uint16_t                 presenceMask;
    RANAP_TMGI_t             tmgi; ///< Optional field
    RANAP_GlobalCN_ID_t      globalCN_ID; ///< Optional field
    RANAP_Cause_t            cause;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_MBMSRegistrationFailureIEs_t;

typedef struct RANAP_MBMSRABEstablishmentIndicationIEs_s {
    RANAP_TransportLayerInformation_t transportLayerInformation;
} RANAP_MBMSRABEstablishmentIndicationIEs_t;

#define MBMSSESSIONSTARTFAILUREIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 0)

typedef struct RANAP_MBMSSessionStartFailureIEs_s {
    uint16_t                 presenceMask;
    RANAP_Cause_t            cause;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_MBMSSessionStartFailureIEs_t;

#define IU_RELEASECOMPLETEIES_RANAP_RAB_DATAVOLUMEREPORTLIST_PRESENT (1 << 0)
#define IU_RELEASECOMPLETEIES_RANAP_RAB_RELEASEDLIST_IURELCOMP_PRESENT (1 << 1)
#define IU_RELEASECOMPLETEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 2)

typedef struct RANAP_Iu_ReleaseCompleteIEs_s {
    uint16_t                     presenceMask;
    RANAP_RAB_DataVolumeReportList_t raB_DataVolumeReportList; ///< Optional field
    RANAP_RAB_ReleasedList_IuRelComp_t raB_ReleasedList_IuRelComp; ///< Optional field
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_Iu_ReleaseCompleteIEs_t;

#define CN_DEACTIVATETRACEIES_RANAP_TRIGGERID_PRESENT (1 << 0)

typedef struct RANAP_CN_DeactivateTraceIEs_s {
    uint16_t         presenceMask;
    RANAP_TraceReference_t traceReference;
    RANAP_TriggerID_t triggerID; ///< Optional field
} RANAP_CN_DeactivateTraceIEs_t;

typedef struct RANAP_DataVolumeReportRequestIEs_s {
    RANAP_RAB_DataVolumeReportRequestList_t raB_DataVolumeReportRequestList;
} RANAP_DataVolumeReportRequestIEs_t;

typedef struct RANAP_RAB_RelocationReleaseItemIEs_s {
    RANAP_RAB_RelocationReleaseItem_t raB_RelocationReleaseItem;
} RANAP_RAB_RelocationReleaseItemIEs_t;

typedef struct RANAP_RAB_ModifyRequestIEs_s {
    RANAP_RAB_ModifyList_t raB_ModifyList;
} RANAP_RAB_ModifyRequestIEs_t;

#define SECURITYMODECOMPLETEIES_RANAP_CHOSENENCRYPTIONALGORITHM_PRESENT    (1 << 0)
#define SECURITYMODECOMPLETEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT       (1 << 1)

typedef struct RANAP_SecurityModeCompleteIEs_s {
    uint16_t                             presenceMask;
    RANAP_ChosenIntegrityProtectionAlgorithm_t chosenIntegrityProtectionAlgorithm;
    RANAP_ChosenEncryptionAlgorithm_t    chosenEncryptionAlgorithm; ///< Optional field
    RANAP_CriticalityDiagnostics_t       criticalityDiagnostics; ///< Optional field
} RANAP_SecurityModeCompleteIEs_t;

#define MBMSRABRELEASEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 0)

typedef struct RANAP_MBMSRABReleaseIEs_s {
    uint16_t                 presenceMask;
    RANAP_Cause_t            cause;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_MBMSRABReleaseIEs_t;

#define OVERLOADIES_RANAP_NUMBEROFSTEPS_PRESENT (1 << 0)
#define OVERLOADIES_RANAP_GLOBALRNC_ID_PRESENT (1 << 1)

typedef struct RANAP_OverloadIEs_s {
    uint16_t        presenceMask;
    RANAP_NumberOfSteps_t numberOfSteps; ///< Optional field
    RANAP_GlobalRNC_ID_t globalRNC_ID; ///< Optional field
} RANAP_OverloadIEs_t;

typedef struct RANAP_RAB_SetupItem_RelocReq_IEs_s {
    RANAP_RAB_SetupItem_RelocReq_t raB_SetupItem_RelocReq;
} RANAP_RAB_SetupItem_RelocReq_IEs_t;

typedef struct RANAP_RAB_ModifyItemIEs_s {
    RANAP_RAB_ModifyItem_t raB_ModifyItem;
} RANAP_RAB_ModifyItemIEs_t;

#define MBMSREGISTRATIONRESPONSEIES_RANAP_TMGI_PRESENT             (1 << 0)
#define MBMSREGISTRATIONRESPONSEIES_RANAP_GLOBALCN_ID_PRESENT      (1 << 1)
#define MBMSREGISTRATIONRESPONSEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 2)

typedef struct RANAP_MBMSRegistrationResponseIEs_s {
    uint16_t                 presenceMask;
    RANAP_TMGI_t             tmgi; ///< Optional field
    RANAP_GlobalCN_ID_t      globalCN_ID; ///< Optional field
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_MBMSRegistrationResponseIEs_t;

typedef struct RANAP_ForwardSRNS_ContextIEs_s {
    RANAP_RAB_ContextList_t raB_ContextList;
} RANAP_ForwardSRNS_ContextIEs_t;

#define UPLINKINFORMATIONEXCHANGEFAILUREIES_RANAP_GLOBALCN_ID_PRESENT      (1 << 0)
#define UPLINKINFORMATIONEXCHANGEFAILUREIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 1)

typedef struct RANAP_UplinkInformationExchangeFailureIEs_s {
    uint16_t                 presenceMask;
    RANAP_InformationExchangeID_t informationExchangeID;
    RANAP_CN_DomainIndicator_t cN_DomainIndicator;
    RANAP_GlobalCN_ID_t      globalCN_ID; ///< Optional field
    RANAP_Cause_t            cause;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_UplinkInformationExchangeFailureIEs_t;

typedef struct RANAP_RAB_SetupItem_EnhRelocInfoRes_IEs_s {
    RANAP_RAB_SetupItem_EnhRelocInfoRes_t raB_SetupItem_EnhRelocInfoRes;
} RANAP_RAB_SetupItem_EnhRelocInfoRes_IEs_t;

#define DATAVOLUMEREPORTIES_RANAP_RAB_DATAVOLUMEREPORTLIST_PRESENT (1 << 0)
#define DATAVOLUMEREPORTIES_RANAP_RABS_FAILED_TO_REPORTLIST_PRESENT (1 << 1)
#define DATAVOLUMEREPORTIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 2)

typedef struct RANAP_DataVolumeReportIEs_s {
    uint16_t                    presenceMask;
    RANAP_RAB_DataVolumeReportList_t raB_DataVolumeReportList; ///< Optional field
    RANAP_RABs_failed_to_reportList_t raB_FailedtoReportList; ///< Optional field
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_DataVolumeReportIEs_t;

#define INFORMATIONTRANSFERINDICATIONIES_RANAP_GLOBALCN_ID_PRESENT     (1 << 0)

typedef struct RANAP_InformationTransferIndicationIEs_s {
    uint16_t                presenceMask;
    RANAP_InformationTransferID_t informationTransferID;
    RANAP_ProvidedData_t    providedData;
    RANAP_CN_DomainIndicator_t cN_DomainIndicator;
    RANAP_GlobalCN_ID_t     globalCN_ID; ///< Optional field
} RANAP_InformationTransferIndicationIEs_t;

typedef struct RANAP_RAB_FailedItem_EnhRelocInfoRes_IEs_s {
    RANAP_RAB_FailedItem_EnhRelocInfoRes_t raB_FailedItem_EnhRelocInfoRes;
} RANAP_RAB_FailedItem_EnhRelocInfoRes_IEs_t;

#define INFORMATIONTRANSFERFAILUREIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 0)

typedef struct RANAP_InformationTransferFailureIEs_s {
    uint16_t                 presenceMask;
    RANAP_InformationTransferID_t informationTransferID;
    RANAP_CN_DomainIndicator_t cN_DomainIndicator;
    RANAP_Cause_t            cause;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
    RANAP_GlobalRNC_ID_t     globalRNC_ID;
} RANAP_InformationTransferFailureIEs_t;

typedef struct RANAP_CommonID_IEs_s {
    RANAP_PermanentNAS_UE_ID_t permanentNAS_UE_ID;
} RANAP_CommonID_IEs_t;

#define MBMSUELINKINGREQUESTIES_RANAP_JOINEDMBMSBEARERSERVICE_IES_PRESENT (1 << 0)
#define MBMSUELINKINGREQUESTIES_RANAP_LEFTMBMSBEARERSERVICE_IES_PRESENT (1 << 1)

typedef struct RANAP_MBMSUELinkingRequestIEs_s {
    uint16_t                      presenceMask;
    RANAP_JoinedMBMSBearerService_IEs_t joinedMBMSBearerServicesList; ///< Optional field
    RANAP_LeftMBMSBearerService_IEs_t leftMBMSBearerServicesList; ///< Optional field
} RANAP_MBMSUELinkingRequestIEs_t;

#define ERRORINDICATIONIES_RANAP_CAUSE_PRESENT            (1 << 0)
#define ERRORINDICATIONIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 1)
#define ERRORINDICATIONIES_RANAP_CN_DOMAININDICATOR_PRESENT (1 << 2)
#define ERRORINDICATIONIES_RANAP_GLOBALRNC_ID_PRESENT     (1 << 3)

typedef struct RANAP_ErrorIndicationIEs_s {
    uint16_t                 presenceMask;
    RANAP_Cause_t            cause; ///< Optional field
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
    RANAP_CN_DomainIndicator_t cN_DomainIndicator; ///< Optional field
    RANAP_GlobalRNC_ID_t     globalRNC_ID; ///< Optional field
} RANAP_ErrorIndicationIEs_t;

#define REDIRECTIONINDICATION_IES_RANAP_NAS_SEQUENCENUMBER_PRESENT (1 << 0)
#define REDIRECTIONINDICATION_IES_RANAP_PERMANENTNAS_UE_ID_PRESENT (1 << 1)

typedef struct RANAP_RedirectionIndication_IEs_s {
    uint16_t             presenceMask;
    RANAP_NAS_PDU_t      nas_pdu;
    RANAP_RejectCauseValue_t rejectCauseValue;
    RANAP_NAS_SequenceNumber_t naS_SequenceNumber; ///< Optional field
    RANAP_PermanentNAS_UE_ID_t permanentNAS_UE_ID; ///< Optional field
} RANAP_RedirectionIndication_IEs_t;

typedef struct RANAP_RAB_DataForwardingItemIEs_s {
    RANAP_RAB_DataForwardingItem_t raB_DataForwardingItem;
} RANAP_RAB_DataForwardingItemIEs_t;

typedef struct RANAP_RAB_SetupItem_EnhRelocInfoReq_IEs_s {
    RANAP_RAB_SetupItem_EnhRelocInfoReq_t raB_SetupItem_EnhRelocInfoReq;
} RANAP_RAB_SetupItem_EnhRelocInfoReq_IEs_t;

#define MBMSRABRELEASEFAILUREIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 0)

typedef struct RANAP_MBMSRABReleaseFailureIEs_s {
    uint16_t                 presenceMask;
    RANAP_Cause_t            cause;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_MBMSRABReleaseFailureIEs_t;

typedef struct RANAP_RAB_DataVolumeReportItemIEs_s {
    RANAP_RAB_DataVolumeReportItem_t raB_DataVolumeReportItem;
} RANAP_RAB_DataVolumeReportItemIEs_t;

#define DIRECTINFORMATIONTRANSFERIES_RANAP_INTERSYSTEMINFORMATIONTRANSFERTYPE_PRESENT (1 << 0)
#define DIRECTINFORMATIONTRANSFERIES_RANAP_GLOBALRNC_ID_PRESENT                 (1 << 1)
#define DIRECTINFORMATIONTRANSFERIES_RANAP_GLOBALCN_ID_PRESENT                  (1 << 2)

typedef struct RANAP_DirectInformationTransferIEs_s {
    uint16_t                             presenceMask;
    RANAP_InterSystemInformationTransferType_t interSystemInformationTransferType; ///< Optional field
    RANAP_CN_DomainIndicator_t           cN_DomainIndicator;
    RANAP_GlobalRNC_ID_t                 globalRNC_ID; ///< Optional field
    RANAP_GlobalCN_ID_t                  globalCN_ID; ///< Optional field
} RANAP_DirectInformationTransferIEs_t;

#define RELOCATIONCOMMANDIES_RANAP_L3_INFORMATION_PRESENT      (1 << 0)
#define RELOCATIONCOMMANDIES_RANAP_RAB_RELOCATIONRELEASELIST_PRESENT (1 << 1)
#define RELOCATIONCOMMANDIES_RANAP_RAB_DATAFORWARDINGLIST_PRESENT (1 << 2)
#define RELOCATIONCOMMANDIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 3)

typedef struct RANAP_RelocationCommandIEs_s {
    uint16_t                    presenceMask;
    RANAP_L3_Information_t      l3_Information; ///< Optional field
    RANAP_RAB_RelocationReleaseList_t raB_RelocationReleaseList; ///< Optional field
    RANAP_RAB_DataForwardingList_t raB_DataForwardingList; ///< Optional field
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_RelocationCommandIEs_t;

#define UPLINKINFORMATIONEXCHANGERESPONSEIES_RANAP_INFORMATIONREQUESTED_PRESENT (1 << 0)
#define UPLINKINFORMATIONEXCHANGERESPONSEIES_RANAP_GLOBALCN_ID_PRESENT      (1 << 1)
#define UPLINKINFORMATIONEXCHANGERESPONSEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 2)

typedef struct RANAP_UplinkInformationExchangeResponseIEs_s {
    uint16_t                 presenceMask;
    RANAP_InformationExchangeID_t informationExchangeID;
    RANAP_InformationRequested_t informationRequested; ///< Optional field
    RANAP_CN_DomainIndicator_t cN_DomainIndicator;
    RANAP_GlobalCN_ID_t      globalCN_ID; ///< Optional field
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_UplinkInformationExchangeResponseIEs_t;

typedef struct RANAP_MBMSRABReleaseRequestIEs_s {
    RANAP_Cause_t cause;
} RANAP_MBMSRABReleaseRequestIEs_t;

#define RAB_ASSIGNMENTREQUESTIES_RANAP_RAB_SETUPORMODIFYLIST_PRESENT (1 << 0)
#define RAB_ASSIGNMENTREQUESTIES_RANAP_RAB_RELEASELIST_PRESENT (1 << 1)

typedef struct RANAP_RAB_AssignmentRequestIEs_s {
    uint16_t                presenceMask;
    RANAP_RAB_SetupOrModifyList_t raB_SetupOrModifyList; ///< Optional field
    RANAP_RAB_ReleaseList_t raB_ReleaseList; ///< Optional field
} RANAP_RAB_AssignmentRequestIEs_t;

typedef struct RANAP_RAB_ReleasedItem_IuRelComp_IEs_s {
    RANAP_RAB_ReleasedItem_IuRelComp_t raB_ReleasedItem_IuRelComp;
} RANAP_RAB_ReleasedItem_IuRelComp_IEs_t;

#define ENHANCEDRELOCATIONCOMPLETERESPONSEIES_RANAP_RAB_SETUPLIST_ENHANCEDRELOCCOMPLETERES_PRESENT  (1 << 0)
#define ENHANCEDRELOCATIONCOMPLETERESPONSEIES_RANAP_RAB_TOBERELEASEDLIST_ENHANCEDRELOCCOMPLETERES_PRESENT (1 << 1)
#define ENHANCEDRELOCATIONCOMPLETERESPONSEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT                  (1 << 2)

typedef struct RANAP_EnhancedRelocationCompleteResponseIEs_s {
    uint16_t                                        presenceMask;
    RANAP_RAB_SetupList_EnhancedRelocCompleteRes_t  raB_SetupList_EnhancedRelocCompleteRes; ///< Optional field
    RANAP_RAB_ToBeReleasedList_EnhancedRelocCompleteRes_t raB_ToBeReleasedList_EnhancedRelocCompleteRes; ///< Optional field
    RANAP_CriticalityDiagnostics_t                  criticalityDiagnostics; ///< Optional field
} RANAP_EnhancedRelocationCompleteResponseIEs_t;

#define LOCATIONREPORTIES_RANAP_AREAIDENTITY_PRESENT (1 << 0)
#define LOCATIONREPORTIES_RANAP_CAUSE_PRESENT  (1 << 1)
#define LOCATIONREPORTIES_RANAP_REQUESTTYPE_PRESENT (1 << 2)

typedef struct RANAP_LocationReportIEs_s {
    uint16_t       presenceMask;
    RANAP_AreaIdentity_t areaIdentity; ///< Optional field
    RANAP_Cause_t  cause; ///< Optional field
    RANAP_RequestType_t requestType; ///< Optional field
} RANAP_LocationReportIEs_t;

typedef struct RANAP_RAB_SetupItem_EnhancedRelocCompleteReq_IEs_s {
    RANAP_RAB_SetupItem_EnhancedRelocCompleteReq_t raB_SetupItem_EnhancedRelocCompleteReq;
} RANAP_RAB_SetupItem_EnhancedRelocCompleteReq_IEs_t;

#define RAB_ASSIGNMENTRESPONSEIES_RANAP_RAB_SETUPORMODIFIEDLIST_PRESENT (1 << 0)
#define RAB_ASSIGNMENTRESPONSEIES_RANAP_RAB_RELEASEDLIST_PRESENT  (1 << 1)
#define RAB_ASSIGNMENTRESPONSEIES_RANAP_RAB_QUEUEDLIST_PRESENT    (1 << 2)
#define RAB_ASSIGNMENTRESPONSEIES_RANAP_RAB_FAILEDLIST_PRESENT    (1 << 3)
#define RAB_ASSIGNMENTRESPONSEIES_RANAP_RAB_RELEASEFAILEDLIST_PRESENT (1 << 4)
#define RAB_ASSIGNMENTRESPONSEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 5)

typedef struct RANAP_RAB_AssignmentResponseIEs_s {
    uint16_t                  presenceMask;
    RANAP_RAB_SetupOrModifiedList_t raB_SetupOrModifiedList; ///< Optional field
    RANAP_RAB_ReleasedList_t  raB_ReleasedList; ///< Optional field
    RANAP_RAB_QueuedList_t    raB_QueuedList; ///< Optional field
    RANAP_RAB_FailedList_t    raB_FailedList; ///< Optional field
    RANAP_RAB_ReleaseFailedList_t raB_ReleaseFailedList; ///< Optional field
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_RAB_AssignmentResponseIEs_t;

typedef struct RANAP_RAB_ContextItemIEs_s {
    RANAP_RAB_ContextItem_t raB_ContextItem;
} RANAP_RAB_ContextItemIEs_t;

#define MBMSSESSIONUPDATERESPONSEIES_RANAP_TRANSPORTLAYERINFORMATION_PRESENT (1 << 0)
#define MBMSSESSIONUPDATERESPONSEIES_RANAP_CAUSE_PRESENT               (1 << 1)
#define MBMSSESSIONUPDATERESPONSEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 2)

typedef struct RANAP_MBMSSessionUpdateResponseIEs_s {
    uint16_t                    presenceMask;
    RANAP_SessionUpdateID_t     sessionUpdateID;
    RANAP_TransportLayerInformation_t transportLayerInformation; ///< Optional field
    RANAP_Cause_t               cause; ///< Optional field
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
} RANAP_MBMSSessionUpdateResponseIEs_t;

typedef struct RANAP_UeRadioCapabilityMatchResponseIEs_s {
    RANAP_VoiceSupportMatchIndicator_t voiceSupportMatchIndicator;
} RANAP_UeRadioCapabilityMatchResponseIEs_t;

typedef struct RANAP_RAB_ReleaseRequestIEs_s {
    RANAP_RAB_ReleaseList_t raB_ReleaseList;
} RANAP_RAB_ReleaseRequestIEs_t;

#define ENHANCEDRELOCATIONCOMPLETECONFIRMIES_RANAP_RAB_FAILEDLIST_PRESENT (1 << 0)

typedef struct RANAP_EnhancedRelocationCompleteConfirmIEs_s {
    uint16_t         presenceMask;
    RANAP_RAB_FailedList_t raB_FailedList; ///< Optional field
} RANAP_EnhancedRelocationCompleteConfirmIEs_t;

typedef struct RANAP_MBMSSessionUpdateIEs_s {
    RANAP_SessionUpdateID_t    sessionUpdateID;
    RANAP_DeltaRAListofIdleModeUEs_t deltaRAListofIdleModeUEs;
} RANAP_MBMSSessionUpdateIEs_t;

#define MBMSSESSIONSTARTIES_RANAP_MBMSSESSIONIDENTITY_PRESENT        (1 << 0)
#define MBMSSESSIONSTARTIES_RANAP_PDP_TYPEINFORMATION_PRESENT        (1 << 1)
#define MBMSSESSIONSTARTIES_RANAP_FREQUENCELAYERCONVERGENCEFLAG_PRESENT (1 << 2)
#define MBMSSESSIONSTARTIES_RANAP_RALISTOFIDLEMODEUES_PRESENT        (1 << 3)
#define MBMSSESSIONSTARTIES_RANAP_GLOBALCN_ID_PRESENT                (1 << 4)
#define MBMSSESSIONSTARTIES_RANAP_MBMSSESSIONREPETITIONNUMBER_PRESENT (1 << 5)

typedef struct RANAP_MBMSSessionStartIEs_s {
    uint16_t                           presenceMask;
    RANAP_TMGI_t                       tmgi;
    RANAP_MBMSSessionIdentity_t        mbmsSessionIdentity; ///< Optional field
    RANAP_MBMSBearerServiceType_t      mbmsBearerServiceType;
    RANAP_IuSignallingConnectionIdentifier_t iuSigConId;
    RANAP_RAB_Parameters_t             raB_Parameters;
    RANAP_PDP_TypeInformation_t        pdP_TypeInformation; ///< Optional field
    RANAP_MBMSSessionDuration_t        mbmsSessionDuration;
    RANAP_MBMSServiceArea_t            mbmsServiceArea;
    RANAP_FrequenceLayerConvergenceFlag_t frequenceLayerConvergenceFlag; ///< Optional field
    RANAP_RAListofIdleModeUEs_t        raListofIdleModeUEs; ///< Optional field
    RANAP_GlobalCN_ID_t                globalCN_ID; ///< Optional field
    RANAP_MBMSSessionRepetitionNumber_t mbmsSessionRepetitionNumber; ///< Optional field
    RANAP_TimeToMBMSDataTransfer_t     timeToMBMSDataTransfer;
} RANAP_MBMSSessionStartIEs_t;

#define LOCATIONRELATEDDATARESPONSEIES_RANAP_BROADCASTASSISTANCEDATADECIPHERINGKEYS_PRESENT (1 << 0)

typedef struct RANAP_LocationRelatedDataResponseIEs_s {
    uint16_t                                 presenceMask;
    RANAP_BroadcastAssistanceDataDecipheringKeys_t broadcastAssistanceDataDecipheringKeys; ///< Optional field
} RANAP_LocationRelatedDataResponseIEs_t;

typedef struct RANAP_RAB_SetupOrModifiedItemIEs_s {
    RANAP_RAB_SetupOrModifiedItem_t raB_SetupOrModifiedItem;
} RANAP_RAB_SetupOrModifiedItemIEs_t;

typedef struct ranap_message_s {
    uint8_t procedureCode;
    uint8_t criticality;
    uint8_t direction;
    union {
        RANAP_CN_DeactivateTraceIEs_t cN_DeactivateTraceIEs;
        RANAP_CN_InvokeTraceIEs_t cN_InvokeTraceIEs;
        RANAP_CommonID_IEs_t commonID_IEs;
        RANAP_DataVolumeReportIEs_t dataVolumeReportIEs;
        RANAP_DataVolumeReportRequestIEs_t dataVolumeReportRequestIEs;
        RANAP_DirectInformationTransferIEs_t directInformationTransferIEs;
        RANAP_DirectTransferIEs_t directTransferIEs;
        RANAP_EnhancedRelocationCompleteConfirmIEs_t enhancedRelocationCompleteConfirmIEs;
        RANAP_EnhancedRelocationCompleteFailureIEs_t enhancedRelocationCompleteFailureIEs;
        RANAP_EnhancedRelocationCompleteRequestIEs_t enhancedRelocationCompleteRequestIEs;
        RANAP_EnhancedRelocationCompleteResponseIEs_t enhancedRelocationCompleteResponseIEs;
        RANAP_ErrorIndicationIEs_t errorIndicationIEs;
        RANAP_ForwardSRNS_ContextIEs_t forwardSRNS_ContextIEs;
        RANAP_GERAN_Iumode_RAB_Failed_RABAssgntResponse_ItemIEs_t geraN_Iumode_RAB_Failed_RABAssgntResponse_ItemIEs;
        RANAP_InformationTransferConfirmationIEs_t informationTransferConfirmationIEs;
        RANAP_InformationTransferFailureIEs_t informationTransferFailureIEs;
        RANAP_InformationTransferIndicationIEs_t informationTransferIndicationIEs;
        RANAP_InitialUE_MessageIEs_t initialUE_MessageIEs;
        RANAP_Iu_ReleaseCommandIEs_t iu_ReleaseCommandIEs;
        RANAP_Iu_ReleaseCompleteIEs_t iu_ReleaseCompleteIEs;
        RANAP_Iu_ReleaseRequestIEs_t iu_ReleaseRequestIEs;
        RANAP_LocationRelatedDataFailureIEs_t locationRelatedDataFailureIEs;
        RANAP_LocationRelatedDataRequestIEs_t locationRelatedDataRequestIEs;
        RANAP_LocationRelatedDataResponseIEs_t locationRelatedDataResponseIEs;
        RANAP_LocationReportIEs_t locationReportIEs;
        RANAP_LocationReportingControlIEs_t locationReportingControlIEs;
        RANAP_MBMSCNDe_RegistrationRequestIEs_t mbmscnDe_RegistrationRequestIEs;
        RANAP_MBMSCNDe_RegistrationResponseIEs_t mbmscnDe_RegistrationResponseIEs;
        RANAP_MBMSRABEstablishmentIndicationIEs_t mbmsrabEstablishmentIndicationIEs;
        RANAP_MBMSRABReleaseFailureIEs_t mbmsrabReleaseFailureIEs;
        RANAP_MBMSRABReleaseIEs_t mbmsrabReleaseIEs;
        RANAP_MBMSRABReleaseRequestIEs_t mbmsrabReleaseRequestIEs;
        RANAP_MBMSRegistrationFailureIEs_t mbmsRegistrationFailureIEs;
        RANAP_MBMSRegistrationRequestIEs_t mbmsRegistrationRequestIEs;
        RANAP_MBMSRegistrationResponseIEs_t mbmsRegistrationResponseIEs;
        RANAP_MBMSSessionStartFailureIEs_t mbmsSessionStartFailureIEs;
        RANAP_MBMSSessionStartIEs_t mbmsSessionStartIEs;
        RANAP_MBMSSessionStartResponseIEs_t mbmsSessionStartResponseIEs;
        RANAP_MBMSSessionStopIEs_t mbmsSessionStopIEs;
        RANAP_MBMSSessionStopResponseIEs_t mbmsSessionStopResponseIEs;
        RANAP_MBMSSessionUpdateFailureIEs_t mbmsSessionUpdateFailureIEs;
        RANAP_MBMSSessionUpdateIEs_t mbmsSessionUpdateIEs;
        RANAP_MBMSSessionUpdateResponseIEs_t mbmsSessionUpdateResponseIEs;
        RANAP_MBMSUELinkingRequestIEs_t mbmsueLinkingRequestIEs;
        RANAP_MBMSUELinkingResponseIEs_t mbmsueLinkingResponseIEs;
        RANAP_OverloadIEs_t overloadIEs;
        RANAP_PagingIEs_t pagingIEs;
        RANAP_RAB_AssignmentRequestIEs_t raB_AssignmentRequestIEs;
        RANAP_RAB_AssignmentResponseIEs_t raB_AssignmentResponseIEs;
        RANAP_RAB_ContextItemIEs_t raB_ContextItemIEs;
        RANAP_RAB_ContextItemIEs_RANAP_RelocInf_t raB_ContextItemIEs_RANAP_RelocInf;
        RANAP_RAB_DataForwardingItem_SRNS_CtxReq_IEs_t raB_DataForwardingItem_SRNS_CtxReq_IEs;
        RANAP_RAB_DataForwardingItemIEs_t raB_DataForwardingItemIEs;
        RANAP_RAB_DataVolumeReportItemIEs_t raB_DataVolumeReportItemIEs;
        RANAP_RAB_DataVolumeReportRequestItemIEs_t raB_DataVolumeReportRequestItemIEs;
        RANAP_RAB_FailedItem_EnhRelocInfoRes_IEs_t raB_FailedItem_EnhRelocInfoRes_IEs;
        RANAP_RAB_FailedItemIEs_t raB_FailedItemIEs;
        RANAP_RAB_ModifyItemIEs_t raB_ModifyItemIEs;
        RANAP_RAB_ModifyRequestIEs_t raB_ModifyRequestIEs;
        RANAP_RAB_QueuedItemIEs_t raB_QueuedItemIEs;
        RANAP_RAB_ReleaseItemIEs_t raB_ReleaseItemIEs;
        RANAP_RAB_ReleaseRequestIEs_t raB_ReleaseRequestIEs;
        RANAP_RAB_ReleasedItem_IuRelComp_IEs_t raB_ReleasedItem_IuRelComp_IEs;
        RANAP_RAB_ReleasedItemIEs_t raB_ReleasedItemIEs;
        RANAP_RAB_RelocationReleaseItemIEs_t raB_RelocationReleaseItemIEs;
        RANAP_RAB_SetupItem_EnhRelocInfoReq_IEs_t raB_SetupItem_EnhRelocInfoReq_IEs;
        RANAP_RAB_SetupItem_EnhRelocInfoRes_IEs_t raB_SetupItem_EnhRelocInfoRes_IEs;
        RANAP_RAB_SetupItem_EnhancedRelocCompleteReq_IEs_t raB_SetupItem_EnhancedRelocCompleteReq_IEs;
        RANAP_RAB_SetupItem_EnhancedRelocCompleteRes_IEs_t raB_SetupItem_EnhancedRelocCompleteRes_IEs;
        RANAP_RAB_SetupItem_RelocReq_IEs_t raB_SetupItem_RelocReq_IEs;
        RANAP_RAB_SetupItem_RelocReqAck_IEs_t raB_SetupItem_RelocReqAck_IEs;
        RANAP_RAB_SetupOrModifiedItemIEs_t raB_SetupOrModifiedItemIEs;
        RANAP_RAB_ToBeReleasedItem_EnhancedRelocCompleteRes_IEs_t raB_ToBeReleasedItem_EnhancedRelocCompleteRes_IEs;
        RANAP_RABs_ContextFailedtoTransferItemIEs_t raBs_ContextFailedtoTransferItemIEs;
        RANAP_RABs_failed_to_reportItemIEs_t raBs_failed_to_reportItemIEs;
        RANAP_RANAP_EnhancedRelocationInformationRequestIEs_t ranaP_EnhancedRelocationInformationRequestIEs;
        RANAP_RANAP_EnhancedRelocationInformationResponseIEs_t ranaP_EnhancedRelocationInformationResponseIEs;
        RANAP_RANAP_RelocationInformationIEs_t ranaP_RelocationInformationIEs;
        RANAP_RedirectionIndication_IEs_t redirectionIndication_IEs;
        RANAP_RelocationCancelAcknowledgeIEs_t relocationCancelAcknowledgeIEs;
        RANAP_RelocationCancelIEs_t relocationCancelIEs;
        RANAP_RelocationCommandIEs_t relocationCommandIEs;
        RANAP_RelocationFailureIEs_t relocationFailureIEs;
        RANAP_RelocationPreparationFailureIEs_t relocationPreparationFailureIEs;
        RANAP_RelocationRequestAcknowledgeIEs_t relocationRequestAcknowledgeIEs;
        RANAP_RelocationRequestIEs_t relocationRequestIEs;
        RANAP_RelocationRequiredIEs_t relocationRequiredIEs;
        RANAP_ResetAcknowledgeIEs_t resetAcknowledgeIEs;
        RANAP_ResetIEs_t resetIEs;
        RANAP_ResetResourceAckItemIEs_t resetResourceAckItemIEs;
        RANAP_ResetResourceAcknowledgeIEs_t resetResourceAcknowledgeIEs;
        RANAP_ResetResourceIEs_t resetResourceIEs;
        RANAP_ResetResourceItemIEs_t resetResourceItemIEs;
        RANAP_SRNS_ContextRequestIEs_t srnS_ContextRequestIEs;
        RANAP_SRNS_ContextResponseIEs_t srnS_ContextResponseIEs;
        RANAP_SRNS_DataForwardCommandIEs_t srnS_DataForwardCommandIEs;
        RANAP_SRVCC_CSKeysResponseIEs_t srvcC_CSKeysResponseIEs;
        RANAP_SecurityModeCommandIEs_t securityModeCommandIEs;
        RANAP_SecurityModeCompleteIEs_t securityModeCompleteIEs;
        RANAP_SecurityModeRejectIEs_t securityModeRejectIEs;
        RANAP_UESpecificInformationIndicationIEs_t ueSpecificInformationIndicationIEs;
        RANAP_UeRadioCapabilityMatchResponseIEs_t ueRadioCapabilityMatchResponseIEs;
        RANAP_UplinkInformationExchangeFailureIEs_t uplinkInformationExchangeFailureIEs;
        RANAP_UplinkInformationExchangeRequestIEs_t uplinkInformationExchangeRequestIEs;
        RANAP_UplinkInformationExchangeResponseIEs_t uplinkInformationExchangeResponseIEs;
    } msg;
} ranap_message;

/** \brief Decode function for RAB-ReleasedItemIEs ies.
 * \param raB_ReleasedItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_releaseditemies(
    RANAP_RAB_ReleasedItemIEs_t *raB_ReleasedItemIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-ReleasedItemIEs ies.
 *  \param ranaP_RAB_ReleasedList Pointer to the ASN1 structure.
 *  \param raB_ReleasedItemIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_releaseditemies(
    RANAP_RAB_ReleasedList_t *ranaP_RAB_ReleasedList,
    RANAP_RAB_ReleasedItemIEs_t *raB_ReleasedItemIEs);

/** \brief Decode function for Iu-ReleaseRequestIEs ies.
 * \param iu_ReleaseRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_iu_releaserequesties(
    RANAP_Iu_ReleaseRequestIEs_t *iu_ReleaseRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for Iu-ReleaseRequestIEs ies.
 *  \param ranaP_Iu_ReleaseRequest Pointer to the ASN1 structure.
 *  \param iu_ReleaseRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_iu_releaserequesties(
    RANAP_Iu_ReleaseRequest_t *ranaP_Iu_ReleaseRequest,
    RANAP_Iu_ReleaseRequestIEs_t *iu_ReleaseRequestIEs);

/** \brief Decode function for UESpecificInformationIndicationIEs ies.
 * \param ueSpecificInformationIndicationIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_uespecificinformationindicationies(
    RANAP_UESpecificInformationIndicationIEs_t *ueSpecificInformationIndicationIEs,
    ANY_t *any_p);

/** \brief Encode function for UESpecificInformationIndicationIEs ies.
 *  \param ranaP_UESpecificInformationIndication Pointer to the ASN1 structure.
 *  \param ueSpecificInformationIndicationIEs Pointer to the IES structure.
 **/
int ranap_encode_uespecificinformationindicationies(
    RANAP_UESpecificInformationIndication_t *ranaP_UESpecificInformationIndication,
    RANAP_UESpecificInformationIndicationIEs_t *ueSpecificInformationIndicationIEs);

/** \brief Decode function for EnhancedRelocationCompleteFailureIEs ies.
 * \param enhancedRelocationCompleteFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_enhancedrelocationcompletefailureies(
    RANAP_EnhancedRelocationCompleteFailureIEs_t *enhancedRelocationCompleteFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for EnhancedRelocationCompleteFailureIEs ies.
 *  \param ranaP_EnhancedRelocationCompleteFailure Pointer to the ASN1 structure.
 *  \param enhancedRelocationCompleteFailureIEs Pointer to the IES structure.
 **/
int ranap_encode_enhancedrelocationcompletefailureies(
    RANAP_EnhancedRelocationCompleteFailure_t *ranaP_EnhancedRelocationCompleteFailure,
    RANAP_EnhancedRelocationCompleteFailureIEs_t *enhancedRelocationCompleteFailureIEs);

/** \brief Decode function for MBMSCNDe-RegistrationResponseIEs ies.
 * \param mbmscnDe_RegistrationResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmscnde_registrationresponseies(
    RANAP_MBMSCNDe_RegistrationResponseIEs_t *mbmscnDe_RegistrationResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSCNDe-RegistrationResponseIEs ies.
 *  \param ranaP_MBMSCNDe_RegistrationResponse Pointer to the ASN1 structure.
 *  \param mbmscnDe_RegistrationResponseIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmscnde_registrationresponseies(
    RANAP_MBMSCNDe_RegistrationResponse_t *ranaP_MBMSCNDe_RegistrationResponse,
    RANAP_MBMSCNDe_RegistrationResponseIEs_t *mbmscnDe_RegistrationResponseIEs);

/** \brief Decode function for SecurityModeRejectIEs ies.
 * \param securityModeRejectIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_securitymoderejecties(
    RANAP_SecurityModeRejectIEs_t *securityModeRejectIEs,
    ANY_t *any_p);

/** \brief Encode function for SecurityModeRejectIEs ies.
 *  \param ranaP_SecurityModeReject Pointer to the ASN1 structure.
 *  \param securityModeRejectIEs Pointer to the IES structure.
 **/
int ranap_encode_securitymoderejecties(
    RANAP_SecurityModeReject_t *ranaP_SecurityModeReject,
    RANAP_SecurityModeRejectIEs_t *securityModeRejectIEs);

/** \brief Decode function for RANAP-RelocationInformationIEs ies.
 * \param ranaP_RelocationInformationIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_ranap_relocationinformationies(
    RANAP_RANAP_RelocationInformationIEs_t *ranaP_RelocationInformationIEs,
    ANY_t *any_p);

/** \brief Encode function for RANAP-RelocationInformationIEs ies.
 *  \param ranaP_RANAP_RelocationInformation Pointer to the ASN1 structure.
 *  \param ranaP_RelocationInformationIEs Pointer to the IES structure.
 **/
int ranap_encode_ranap_relocationinformationies(
    RANAP_RANAP_RelocationInformation_t *ranaP_RANAP_RelocationInformation,
    RANAP_RANAP_RelocationInformationIEs_t *ranaP_RelocationInformationIEs);

/** \brief Decode function for ResetAcknowledgeIEs ies.
 * \param resetAcknowledgeIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_resetacknowledgeies(
    RANAP_ResetAcknowledgeIEs_t *resetAcknowledgeIEs,
    ANY_t *any_p);

/** \brief Encode function for ResetAcknowledgeIEs ies.
 *  \param ranaP_ResetAcknowledge Pointer to the ASN1 structure.
 *  \param resetAcknowledgeIEs Pointer to the IES structure.
 **/
int ranap_encode_resetacknowledgeies(
    RANAP_ResetAcknowledge_t *ranaP_ResetAcknowledge,
    RANAP_ResetAcknowledgeIEs_t *resetAcknowledgeIEs);

/** \brief Decode function for RelocationCancelAcknowledgeIEs ies.
 * \param relocationCancelAcknowledgeIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_relocationcancelacknowledgeies(
    RANAP_RelocationCancelAcknowledgeIEs_t *relocationCancelAcknowledgeIEs,
    ANY_t *any_p);

/** \brief Encode function for RelocationCancelAcknowledgeIEs ies.
 *  \param ranaP_RelocationCancelAcknowledge Pointer to the ASN1 structure.
 *  \param relocationCancelAcknowledgeIEs Pointer to the IES structure.
 **/
int ranap_encode_relocationcancelacknowledgeies(
    RANAP_RelocationCancelAcknowledge_t *ranaP_RelocationCancelAcknowledge,
    RANAP_RelocationCancelAcknowledgeIEs_t *relocationCancelAcknowledgeIEs);

/** \brief Decode function for SRVCC-CSKeysResponseIEs ies.
 * \param srvcC_CSKeysResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_srvcc_cskeysresponseies(
    RANAP_SRVCC_CSKeysResponseIEs_t *srvcC_CSKeysResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for SRVCC-CSKeysResponseIEs ies.
 *  \param ranaP_SRVCC_CSKeysResponse Pointer to the ASN1 structure.
 *  \param srvcC_CSKeysResponseIEs Pointer to the IES structure.
 **/
int ranap_encode_srvcc_cskeysresponseies(
    RANAP_SRVCC_CSKeysResponse_t *ranaP_SRVCC_CSKeysResponse,
    RANAP_SRVCC_CSKeysResponseIEs_t *srvcC_CSKeysResponseIEs);

/** \brief Decode function for MBMSCNDe-RegistrationRequestIEs ies.
 * \param mbmscnDe_RegistrationRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmscnde_registrationrequesties(
    RANAP_MBMSCNDe_RegistrationRequestIEs_t *mbmscnDe_RegistrationRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSCNDe-RegistrationRequestIEs ies.
 *  \param ranaP_MBMSCNDe_RegistrationRequest Pointer to the ASN1 structure.
 *  \param mbmscnDe_RegistrationRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmscnde_registrationrequesties(
    RANAP_MBMSCNDe_RegistrationRequest_t *ranaP_MBMSCNDe_RegistrationRequest,
    RANAP_MBMSCNDe_RegistrationRequestIEs_t *mbmscnDe_RegistrationRequestIEs);

/** \brief Decode function for PagingIEs ies.
 * \param pagingIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_pagingies(
    RANAP_PagingIEs_t *pagingIEs,
    ANY_t *any_p);

/** \brief Encode function for PagingIEs ies.
 *  \param ranaP_Paging Pointer to the ASN1 structure.
 *  \param pagingIEs Pointer to the IES structure.
 **/
int ranap_encode_pagingies(
    RANAP_Paging_t *ranaP_Paging,
    RANAP_PagingIEs_t *pagingIEs);

/** \brief Decode function for GERAN-Iumode-RAB-Failed-RABAssgntResponse-ItemIEs ies.
 * \param geraN_Iumode_RAB_Failed_RABAssgntResponse_ItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_geran_iumode_rab_failed_rabassgntresponse_itemies(
    RANAP_GERAN_Iumode_RAB_Failed_RABAssgntResponse_ItemIEs_t *geraN_Iumode_RAB_Failed_RABAssgntResponse_ItemIEs,
    ANY_t *any_p);

/** \brief Encode function for GERAN-Iumode-RAB-Failed-RABAssgntResponse-ItemIEs ies.
 *  \param ranaP_GERAN_Iumode_RAB_Failed_RABAssgntResponse_List Pointer to the ASN1 structure.
 *  \param geraN_Iumode_RAB_Failed_RABAssgntResponse_ItemIEs Pointer to the IES structure.
 **/
int ranap_encode_geran_iumode_rab_failed_rabassgntresponse_itemies(
    RANAP_GERAN_Iumode_RAB_Failed_RABAssgntResponse_List_t *ranaP_GERAN_Iumode_RAB_Failed_RABAssgntResponse_List,
    RANAP_GERAN_Iumode_RAB_Failed_RABAssgntResponse_ItemIEs_t *geraN_Iumode_RAB_Failed_RABAssgntResponse_ItemIEs);

/** \brief Decode function for ResetResourceItemIEs ies.
 * \param resetResourceItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_resetresourceitemies(
    RANAP_ResetResourceItemIEs_t *resetResourceItemIEs,
    ANY_t *any_p);

/** \brief Encode function for ResetResourceItemIEs ies.
 *  \param ranaP_ResetResourceList Pointer to the ASN1 structure.
 *  \param resetResourceItemIEs Pointer to the IES structure.
 **/
int ranap_encode_resetresourceitemies(
    RANAP_ResetResourceList_t *ranaP_ResetResourceList,
    RANAP_ResetResourceItemIEs_t *resetResourceItemIEs);

/** \brief Decode function for LocationReportingControlIEs ies.
 * \param locationReportingControlIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_locationreportingcontrolies(
    RANAP_LocationReportingControlIEs_t *locationReportingControlIEs,
    ANY_t *any_p);

/** \brief Encode function for LocationReportingControlIEs ies.
 *  \param ranaP_LocationReportingControl Pointer to the ASN1 structure.
 *  \param locationReportingControlIEs Pointer to the IES structure.
 **/
int ranap_encode_locationreportingcontrolies(
    RANAP_LocationReportingControl_t *ranaP_LocationReportingControl,
    RANAP_LocationReportingControlIEs_t *locationReportingControlIEs);

/** \brief Decode function for EnhancedRelocationCompleteRequestIEs ies.
 * \param enhancedRelocationCompleteRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_enhancedrelocationcompleterequesties(
    RANAP_EnhancedRelocationCompleteRequestIEs_t *enhancedRelocationCompleteRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for EnhancedRelocationCompleteRequestIEs ies.
 *  \param ranaP_EnhancedRelocationCompleteRequest Pointer to the ASN1 structure.
 *  \param enhancedRelocationCompleteRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_enhancedrelocationcompleterequesties(
    RANAP_EnhancedRelocationCompleteRequest_t *ranaP_EnhancedRelocationCompleteRequest,
    RANAP_EnhancedRelocationCompleteRequestIEs_t *enhancedRelocationCompleteRequestIEs);

/** \brief Decode function for RAB-FailedItemIEs ies.
 * \param raB_FailedItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_faileditemies(
    RANAP_RAB_FailedItemIEs_t *raB_FailedItemIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-FailedItemIEs ies.
 *  \param ranaP_RAB_FailedList Pointer to the ASN1 structure.
 *  \param raB_FailedItemIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_faileditemies(
    RANAP_RAB_FailedList_t *ranaP_RAB_FailedList,
    RANAP_RAB_FailedItemIEs_t *raB_FailedItemIEs);

/** \brief Decode function for MBMSUELinkingResponseIEs ies.
 * \param mbmsueLinkingResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmsuelinkingresponseies(
    RANAP_MBMSUELinkingResponseIEs_t *mbmsueLinkingResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSUELinkingResponseIEs ies.
 *  \param ranaP_MBMSUELinkingResponse Pointer to the ASN1 structure.
 *  \param mbmsueLinkingResponseIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmsuelinkingresponseies(
    RANAP_MBMSUELinkingResponse_t *ranaP_MBMSUELinkingResponse,
    RANAP_MBMSUELinkingResponseIEs_t *mbmsueLinkingResponseIEs);

/** \brief Decode function for RAB-QueuedItemIEs ies.
 * \param raB_QueuedItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_queueditemies(
    RANAP_RAB_QueuedItemIEs_t *raB_QueuedItemIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-QueuedItemIEs ies.
 *  \param ranaP_RAB_QueuedList Pointer to the ASN1 structure.
 *  \param raB_QueuedItemIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_queueditemies(
    RANAP_RAB_QueuedList_t *ranaP_RAB_QueuedList,
    RANAP_RAB_QueuedItemIEs_t *raB_QueuedItemIEs);

/** \brief Decode function for CN-InvokeTraceIEs ies.
 * \param cN_InvokeTraceIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_cn_invoketraceies(
    RANAP_CN_InvokeTraceIEs_t *cN_InvokeTraceIEs,
    ANY_t *any_p);

/** \brief Encode function for CN-InvokeTraceIEs ies.
 *  \param ranaP_CN_InvokeTrace Pointer to the ASN1 structure.
 *  \param cN_InvokeTraceIEs Pointer to the IES structure.
 **/
int ranap_encode_cn_invoketraceies(
    RANAP_CN_InvokeTrace_t *ranaP_CN_InvokeTrace,
    RANAP_CN_InvokeTraceIEs_t *cN_InvokeTraceIEs);

/** \brief Decode function for Iu-ReleaseCommandIEs ies.
 * \param iu_ReleaseCommandIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_iu_releasecommandies(
    RANAP_Iu_ReleaseCommandIEs_t *iu_ReleaseCommandIEs,
    ANY_t *any_p);

/** \brief Encode function for Iu-ReleaseCommandIEs ies.
 *  \param ranaP_Iu_ReleaseCommand Pointer to the ASN1 structure.
 *  \param iu_ReleaseCommandIEs Pointer to the IES structure.
 **/
int ranap_encode_iu_releasecommandies(
    RANAP_Iu_ReleaseCommand_t *ranaP_Iu_ReleaseCommand,
    RANAP_Iu_ReleaseCommandIEs_t *iu_ReleaseCommandIEs);

/** \brief Decode function for RelocationRequestAcknowledgeIEs ies.
 * \param relocationRequestAcknowledgeIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_relocationrequestacknowledgeies(
    RANAP_RelocationRequestAcknowledgeIEs_t *relocationRequestAcknowledgeIEs,
    ANY_t *any_p);

/** \brief Encode function for RelocationRequestAcknowledgeIEs ies.
 *  \param ranaP_RelocationRequestAcknowledge Pointer to the ASN1 structure.
 *  \param relocationRequestAcknowledgeIEs Pointer to the IES structure.
 **/
int ranap_encode_relocationrequestacknowledgeies(
    RANAP_RelocationRequestAcknowledge_t *ranaP_RelocationRequestAcknowledge,
    RANAP_RelocationRequestAcknowledgeIEs_t *relocationRequestAcknowledgeIEs);

/** \brief Decode function for RelocationFailureIEs ies.
 * \param relocationFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_relocationfailureies(
    RANAP_RelocationFailureIEs_t *relocationFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for RelocationFailureIEs ies.
 *  \param ranaP_RelocationFailure Pointer to the ASN1 structure.
 *  \param relocationFailureIEs Pointer to the IES structure.
 **/
int ranap_encode_relocationfailureies(
    RANAP_RelocationFailure_t *ranaP_RelocationFailure,
    RANAP_RelocationFailureIEs_t *relocationFailureIEs);

/** \brief Decode function for RABs-failed-to-reportItemIEs ies.
 * \param raBs_failed_to_reportItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rabs_failed_to_reportitemies(
    RANAP_RABs_failed_to_reportItemIEs_t *raBs_failed_to_reportItemIEs,
    ANY_t *any_p);

/** \brief Encode function for RABs-failed-to-reportItemIEs ies.
 *  \param ranaP_RABs_failed_to_reportList Pointer to the ASN1 structure.
 *  \param raBs_failed_to_reportItemIEs Pointer to the IES structure.
 **/
int ranap_encode_rabs_failed_to_reportitemies(
    RANAP_RABs_failed_to_reportList_t *ranaP_RABs_failed_to_reportList,
    RANAP_RABs_failed_to_reportItemIEs_t *raBs_failed_to_reportItemIEs);

/** \brief Decode function for RelocationPreparationFailureIEs ies.
 * \param relocationPreparationFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_relocationpreparationfailureies(
    RANAP_RelocationPreparationFailureIEs_t *relocationPreparationFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for RelocationPreparationFailureIEs ies.
 *  \param ranaP_RelocationPreparationFailure Pointer to the ASN1 structure.
 *  \param relocationPreparationFailureIEs Pointer to the IES structure.
 **/
int ranap_encode_relocationpreparationfailureies(
    RANAP_RelocationPreparationFailure_t *ranaP_RelocationPreparationFailure,
    RANAP_RelocationPreparationFailureIEs_t *relocationPreparationFailureIEs);

/** \brief Decode function for RAB-ToBeReleasedItem-EnhancedRelocCompleteRes-IEs ies.
 * \param raB_ToBeReleasedItem_EnhancedRelocCompleteRes_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_tobereleaseditem_enhancedreloccompleteres_ies(
    RANAP_RAB_ToBeReleasedItem_EnhancedRelocCompleteRes_IEs_t *raB_ToBeReleasedItem_EnhancedRelocCompleteRes_IEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-ToBeReleasedItem-EnhancedRelocCompleteRes-IEs ies.
 *  \param ranaP_RAB_ToBeReleasedList_EnhancedRelocCompleteRes Pointer to the ASN1 structure.
 *  \param raB_ToBeReleasedItem_EnhancedRelocCompleteRes_IEs Pointer to the IES structure.
 **/
int ranap_encode_rab_tobereleaseditem_enhancedreloccompleteres_ies(
    RANAP_RAB_ToBeReleasedList_EnhancedRelocCompleteRes_t *ranaP_RAB_ToBeReleasedList_EnhancedRelocCompleteRes,
    RANAP_RAB_ToBeReleasedItem_EnhancedRelocCompleteRes_IEs_t *raB_ToBeReleasedItem_EnhancedRelocCompleteRes_IEs);

/** \brief Decode function for RABs-ContextFailedtoTransferItemIEs ies.
 * \param raBs_ContextFailedtoTransferItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rabs_contextfailedtotransferitemies(
    RANAP_RABs_ContextFailedtoTransferItemIEs_t *raBs_ContextFailedtoTransferItemIEs,
    ANY_t *any_p);

/** \brief Encode function for RABs-ContextFailedtoTransferItemIEs ies.
 *  \param ranaP_RABs_ContextFailedtoTransferList Pointer to the ASN1 structure.
 *  \param raBs_ContextFailedtoTransferItemIEs Pointer to the IES structure.
 **/
int ranap_encode_rabs_contextfailedtotransferitemies(
    RANAP_RABs_ContextFailedtoTransferList_t *ranaP_RABs_ContextFailedtoTransferList,
    RANAP_RABs_ContextFailedtoTransferItemIEs_t *raBs_ContextFailedtoTransferItemIEs);

/** \brief Decode function for RelocationRequiredIEs ies.
 * \param relocationRequiredIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_relocationrequiredies(
    RANAP_RelocationRequiredIEs_t *relocationRequiredIEs,
    ANY_t *any_p);

/** \brief Encode function for RelocationRequiredIEs ies.
 *  \param ranaP_RelocationRequired Pointer to the ASN1 structure.
 *  \param relocationRequiredIEs Pointer to the IES structure.
 **/
int ranap_encode_relocationrequiredies(
    RANAP_RelocationRequired_t *ranaP_RelocationRequired,
    RANAP_RelocationRequiredIEs_t *relocationRequiredIEs);

/** \brief Decode function for MBMSSessionStopIEs ies.
 * \param mbmsSessionStopIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmssessionstopies(
    RANAP_MBMSSessionStopIEs_t *mbmsSessionStopIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSSessionStopIEs ies.
 *  \param ranaP_MBMSSessionStop Pointer to the ASN1 structure.
 *  \param mbmsSessionStopIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmssessionstopies(
    RANAP_MBMSSessionStop_t *ranaP_MBMSSessionStop,
    RANAP_MBMSSessionStopIEs_t *mbmsSessionStopIEs);

/** \brief Decode function for MBMSSessionUpdateFailureIEs ies.
 * \param mbmsSessionUpdateFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmssessionupdatefailureies(
    RANAP_MBMSSessionUpdateFailureIEs_t *mbmsSessionUpdateFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSSessionUpdateFailureIEs ies.
 *  \param ranaP_MBMSSessionUpdateFailure Pointer to the ASN1 structure.
 *  \param mbmsSessionUpdateFailureIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmssessionupdatefailureies(
    RANAP_MBMSSessionUpdateFailure_t *ranaP_MBMSSessionUpdateFailure,
    RANAP_MBMSSessionUpdateFailureIEs_t *mbmsSessionUpdateFailureIEs);

/** \brief Decode function for ResetIEs ies.
 * \param resetIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_reseties(
    RANAP_ResetIEs_t *resetIEs,
    ANY_t *any_p);

/** \brief Encode function for ResetIEs ies.
 *  \param ranaP_Reset Pointer to the ASN1 structure.
 *  \param resetIEs Pointer to the IES structure.
 **/
int ranap_encode_reseties(
    RANAP_Reset_t *ranaP_Reset,
    RANAP_ResetIEs_t *resetIEs);

/** \brief Decode function for LocationRelatedDataFailureIEs ies.
 * \param locationRelatedDataFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_locationrelateddatafailureies(
    RANAP_LocationRelatedDataFailureIEs_t *locationRelatedDataFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for LocationRelatedDataFailureIEs ies.
 *  \param ranaP_LocationRelatedDataFailure Pointer to the ASN1 structure.
 *  \param locationRelatedDataFailureIEs Pointer to the IES structure.
 **/
int ranap_encode_locationrelateddatafailureies(
    RANAP_LocationRelatedDataFailure_t *ranaP_LocationRelatedDataFailure,
    RANAP_LocationRelatedDataFailureIEs_t *locationRelatedDataFailureIEs);

/** \brief Decode function for ResetResourceAcknowledgeIEs ies.
 * \param resetResourceAcknowledgeIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_resetresourceacknowledgeies(
    RANAP_ResetResourceAcknowledgeIEs_t *resetResourceAcknowledgeIEs,
    ANY_t *any_p);

/** \brief Encode function for ResetResourceAcknowledgeIEs ies.
 *  \param ranaP_ResetResourceAcknowledge Pointer to the ASN1 structure.
 *  \param resetResourceAcknowledgeIEs Pointer to the IES structure.
 **/
int ranap_encode_resetresourceacknowledgeies(
    RANAP_ResetResourceAcknowledge_t *ranaP_ResetResourceAcknowledge,
    RANAP_ResetResourceAcknowledgeIEs_t *resetResourceAcknowledgeIEs);

/** \brief Decode function for MBMSRegistrationRequestIEs ies.
 * \param mbmsRegistrationRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmsregistrationrequesties(
    RANAP_MBMSRegistrationRequestIEs_t *mbmsRegistrationRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSRegistrationRequestIEs ies.
 *  \param ranaP_MBMSRegistrationRequest Pointer to the ASN1 structure.
 *  \param mbmsRegistrationRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmsregistrationrequesties(
    RANAP_MBMSRegistrationRequest_t *ranaP_MBMSRegistrationRequest,
    RANAP_MBMSRegistrationRequestIEs_t *mbmsRegistrationRequestIEs);

/** \brief Decode function for UplinkInformationExchangeRequestIEs ies.
 * \param uplinkInformationExchangeRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_uplinkinformationexchangerequesties(
    RANAP_UplinkInformationExchangeRequestIEs_t *uplinkInformationExchangeRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for UplinkInformationExchangeRequestIEs ies.
 *  \param ranaP_UplinkInformationExchangeRequest Pointer to the ASN1 structure.
 *  \param uplinkInformationExchangeRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_uplinkinformationexchangerequesties(
    RANAP_UplinkInformationExchangeRequest_t *ranaP_UplinkInformationExchangeRequest,
    RANAP_UplinkInformationExchangeRequestIEs_t *uplinkInformationExchangeRequestIEs);

/** \brief Decode function for MBMSSessionStopResponseIEs ies.
 * \param mbmsSessionStopResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmssessionstopresponseies(
    RANAP_MBMSSessionStopResponseIEs_t *mbmsSessionStopResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSSessionStopResponseIEs ies.
 *  \param ranaP_MBMSSessionStopResponse Pointer to the ASN1 structure.
 *  \param mbmsSessionStopResponseIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmssessionstopresponseies(
    RANAP_MBMSSessionStopResponse_t *ranaP_MBMSSessionStopResponse,
    RANAP_MBMSSessionStopResponseIEs_t *mbmsSessionStopResponseIEs);

/** \brief Decode function for RAB-ContextItemIEs-RANAP-RelocInf ies.
 * \param raB_ContextItemIEs_RANAP_RelocInf Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_contextitemies_ranap_relocinf(
    RANAP_RAB_ContextItemIEs_RANAP_RelocInf_t *raB_ContextItemIEs_RANAP_RelocInf,
    ANY_t *any_p);

/** \brief Encode function for RAB-ContextItemIEs-RANAP-RelocInf ies.
 *  \param ranaP_RAB_ContextList_RANAP_RelocInf Pointer to the ASN1 structure.
 *  \param raB_ContextItemIEs_RANAP_RelocInf Pointer to the IES structure.
 **/
int ranap_encode_rab_contextitemies_ranap_relocinf(
    RANAP_RAB_ContextList_RANAP_RelocInf_t *ranaP_RAB_ContextList_RANAP_RelocInf,
    RANAP_RAB_ContextItemIEs_RANAP_RelocInf_t *raB_ContextItemIEs_RANAP_RelocInf);

/** \brief Decode function for LocationRelatedDataRequestIEs ies.
 * \param locationRelatedDataRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_locationrelateddatarequesties(
    RANAP_LocationRelatedDataRequestIEs_t *locationRelatedDataRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for LocationRelatedDataRequestIEs ies.
 *  \param ranaP_LocationRelatedDataRequest Pointer to the ASN1 structure.
 *  \param locationRelatedDataRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_locationrelateddatarequesties(
    RANAP_LocationRelatedDataRequest_t *ranaP_LocationRelatedDataRequest,
    RANAP_LocationRelatedDataRequestIEs_t *locationRelatedDataRequestIEs);

/** \brief Decode function for RAB-DataForwardingItem-SRNS-CtxReq-IEs ies.
 * \param raB_DataForwardingItem_SRNS_CtxReq_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_dataforwardingitem_srns_ctxreq_ies(
    RANAP_RAB_DataForwardingItem_SRNS_CtxReq_IEs_t *raB_DataForwardingItem_SRNS_CtxReq_IEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-DataForwardingItem-SRNS-CtxReq-IEs ies.
 *  \param ranaP_RAB_DataForwardingList_SRNS_CtxReq Pointer to the ASN1 structure.
 *  \param raB_DataForwardingItem_SRNS_CtxReq_IEs Pointer to the IES structure.
 **/
int ranap_encode_rab_dataforwardingitem_srns_ctxreq_ies(
    RANAP_RAB_DataForwardingList_SRNS_CtxReq_t *ranaP_RAB_DataForwardingList_SRNS_CtxReq,
    RANAP_RAB_DataForwardingItem_SRNS_CtxReq_IEs_t *raB_DataForwardingItem_SRNS_CtxReq_IEs);

/** \brief Decode function for RAB-ReleaseItemIEs ies.
 * \param raB_ReleaseItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_releaseitemies(
    RANAP_RAB_ReleaseItemIEs_t *raB_ReleaseItemIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-ReleaseItemIEs ies.
 *  \param ranaP_RAB_ReleaseList Pointer to the ASN1 structure.
 *  \param raB_ReleaseItemIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_releaseitemies(
    RANAP_RAB_ReleaseList_t *ranaP_RAB_ReleaseList,
    RANAP_RAB_ReleaseItemIEs_t *raB_ReleaseItemIEs);

/** \brief Decode function for RAB-DataVolumeReportRequestItemIEs ies.
 * \param raB_DataVolumeReportRequestItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_datavolumereportrequestitemies(
    RANAP_RAB_DataVolumeReportRequestItemIEs_t *raB_DataVolumeReportRequestItemIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-DataVolumeReportRequestItemIEs ies.
 *  \param ranaP_RAB_DataVolumeReportRequestList Pointer to the ASN1 structure.
 *  \param raB_DataVolumeReportRequestItemIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_datavolumereportrequestitemies(
    RANAP_RAB_DataVolumeReportRequestList_t *ranaP_RAB_DataVolumeReportRequestList,
    RANAP_RAB_DataVolumeReportRequestItemIEs_t *raB_DataVolumeReportRequestItemIEs);

/** \brief Decode function for InformationTransferConfirmationIEs ies.
 * \param informationTransferConfirmationIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_informationtransferconfirmationies(
    RANAP_InformationTransferConfirmationIEs_t *informationTransferConfirmationIEs,
    ANY_t *any_p);

/** \brief Encode function for InformationTransferConfirmationIEs ies.
 *  \param ranaP_InformationTransferConfirmation Pointer to the ASN1 structure.
 *  \param informationTransferConfirmationIEs Pointer to the IES structure.
 **/
int ranap_encode_informationtransferconfirmationies(
    RANAP_InformationTransferConfirmation_t *ranaP_InformationTransferConfirmation,
    RANAP_InformationTransferConfirmationIEs_t *informationTransferConfirmationIEs);

/** \brief Decode function for InitialUE-MessageIEs ies.
 * \param initialUE_MessageIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_initialue_messageies(
    RANAP_InitialUE_MessageIEs_t *initialUE_MessageIEs,
    ANY_t *any_p);

/** \brief Encode function for InitialUE-MessageIEs ies.
 *  \param ranaP_InitialUE_Message Pointer to the ASN1 structure.
 *  \param initialUE_MessageIEs Pointer to the IES structure.
 **/
int ranap_encode_initialue_messageies(
    RANAP_InitialUE_Message_t *ranaP_InitialUE_Message,
    RANAP_InitialUE_MessageIEs_t *initialUE_MessageIEs);

/** \brief Decode function for SRNS-ContextResponseIEs ies.
 * \param srnS_ContextResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_srns_contextresponseies(
    RANAP_SRNS_ContextResponseIEs_t *srnS_ContextResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for SRNS-ContextResponseIEs ies.
 *  \param ranaP_SRNS_ContextResponse Pointer to the ASN1 structure.
 *  \param srnS_ContextResponseIEs Pointer to the IES structure.
 **/
int ranap_encode_srns_contextresponseies(
    RANAP_SRNS_ContextResponse_t *ranaP_SRNS_ContextResponse,
    RANAP_SRNS_ContextResponseIEs_t *srnS_ContextResponseIEs);

/** \brief Decode function for ResetResourceAckItemIEs ies.
 * \param resetResourceAckItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_resetresourceackitemies(
    RANAP_ResetResourceAckItemIEs_t *resetResourceAckItemIEs,
    ANY_t *any_p);

/** \brief Encode function for ResetResourceAckItemIEs ies.
 *  \param ranaP_ResetResourceAckList Pointer to the ASN1 structure.
 *  \param resetResourceAckItemIEs Pointer to the IES structure.
 **/
int ranap_encode_resetresourceackitemies(
    RANAP_ResetResourceAckList_t *ranaP_ResetResourceAckList,
    RANAP_ResetResourceAckItemIEs_t *resetResourceAckItemIEs);

/** \brief Decode function for SRNS-DataForwardCommandIEs ies.
 * \param srnS_DataForwardCommandIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_srns_dataforwardcommandies(
    RANAP_SRNS_DataForwardCommandIEs_t *srnS_DataForwardCommandIEs,
    ANY_t *any_p);

/** \brief Encode function for SRNS-DataForwardCommandIEs ies.
 *  \param ranaP_SRNS_DataForwardCommand Pointer to the ASN1 structure.
 *  \param srnS_DataForwardCommandIEs Pointer to the IES structure.
 **/
int ranap_encode_srns_dataforwardcommandies(
    RANAP_SRNS_DataForwardCommand_t *ranaP_SRNS_DataForwardCommand,
    RANAP_SRNS_DataForwardCommandIEs_t *srnS_DataForwardCommandIEs);

/** \brief Decode function for RelocationRequestIEs ies.
 * \param relocationRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_relocationrequesties(
    RANAP_RelocationRequestIEs_t *relocationRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for RelocationRequestIEs ies.
 *  \param ranaP_RelocationRequest Pointer to the ASN1 structure.
 *  \param relocationRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_relocationrequesties(
    RANAP_RelocationRequest_t *ranaP_RelocationRequest,
    RANAP_RelocationRequestIEs_t *relocationRequestIEs);

/** \brief Decode function for SRNS-ContextRequestIEs ies.
 * \param srnS_ContextRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_srns_contextrequesties(
    RANAP_SRNS_ContextRequestIEs_t *srnS_ContextRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for SRNS-ContextRequestIEs ies.
 *  \param ranaP_SRNS_ContextRequest Pointer to the ASN1 structure.
 *  \param srnS_ContextRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_srns_contextrequesties(
    RANAP_SRNS_ContextRequest_t *ranaP_SRNS_ContextRequest,
    RANAP_SRNS_ContextRequestIEs_t *srnS_ContextRequestIEs);

/** \brief Decode function for MBMSSessionStartResponseIEs ies.
 * \param mbmsSessionStartResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmssessionstartresponseies(
    RANAP_MBMSSessionStartResponseIEs_t *mbmsSessionStartResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSSessionStartResponseIEs ies.
 *  \param ranaP_MBMSSessionStartResponse Pointer to the ASN1 structure.
 *  \param mbmsSessionStartResponseIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmssessionstartresponseies(
    RANAP_MBMSSessionStartResponse_t *ranaP_MBMSSessionStartResponse,
    RANAP_MBMSSessionStartResponseIEs_t *mbmsSessionStartResponseIEs);

/** \brief Decode function for DirectTransferIEs ies.
 * \param directTransferIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_directtransferies(
    RANAP_DirectTransferIEs_t *directTransferIEs,
    ANY_t *any_p);

/** \brief Encode function for DirectTransferIEs ies.
 *  \param ranaP_DirectTransfer Pointer to the ASN1 structure.
 *  \param directTransferIEs Pointer to the IES structure.
 **/
int ranap_encode_directtransferies(
    RANAP_DirectTransfer_t *ranaP_DirectTransfer,
    RANAP_DirectTransferIEs_t *directTransferIEs);

/** \brief Decode function for ResetResourceIEs ies.
 * \param resetResourceIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_resetresourceies(
    RANAP_ResetResourceIEs_t *resetResourceIEs,
    ANY_t *any_p);

/** \brief Encode function for ResetResourceIEs ies.
 *  \param ranaP_ResetResource Pointer to the ASN1 structure.
 *  \param resetResourceIEs Pointer to the IES structure.
 **/
int ranap_encode_resetresourceies(
    RANAP_ResetResource_t *ranaP_ResetResource,
    RANAP_ResetResourceIEs_t *resetResourceIEs);

/** \brief Decode function for RANAP-EnhancedRelocationInformationResponseIEs ies.
 * \param ranaP_EnhancedRelocationInformationResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_ranap_enhancedrelocationinformationresponseies(
    RANAP_RANAP_EnhancedRelocationInformationResponseIEs_t *ranaP_EnhancedRelocationInformationResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for RANAP-EnhancedRelocationInformationResponseIEs ies.
 *  \param ranaP_RANAP_EnhancedRelocationInformationResponse Pointer to the ASN1 structure.
 *  \param ranaP_EnhancedRelocationInformationResponseIEs Pointer to the IES structure.
 **/
int ranap_encode_ranap_enhancedrelocationinformationresponseies(
    RANAP_RANAP_EnhancedRelocationInformationResponse_t *ranaP_RANAP_EnhancedRelocationInformationResponse,
    RANAP_RANAP_EnhancedRelocationInformationResponseIEs_t *ranaP_EnhancedRelocationInformationResponseIEs);

/** \brief Decode function for RAB-SetupItem-EnhancedRelocCompleteRes-IEs ies.
 * \param raB_SetupItem_EnhancedRelocCompleteRes_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_setupitem_enhancedreloccompleteres_ies(
    RANAP_RAB_SetupItem_EnhancedRelocCompleteRes_IEs_t *raB_SetupItem_EnhancedRelocCompleteRes_IEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-SetupItem-EnhancedRelocCompleteRes-IEs ies.
 *  \param ranaP_RAB_SetupList_EnhancedRelocCompleteRes Pointer to the ASN1 structure.
 *  \param raB_SetupItem_EnhancedRelocCompleteRes_IEs Pointer to the IES structure.
 **/
int ranap_encode_rab_setupitem_enhancedreloccompleteres_ies(
    RANAP_RAB_SetupList_EnhancedRelocCompleteRes_t *ranaP_RAB_SetupList_EnhancedRelocCompleteRes,
    RANAP_RAB_SetupItem_EnhancedRelocCompleteRes_IEs_t *raB_SetupItem_EnhancedRelocCompleteRes_IEs);

/** \brief Decode function for RANAP-EnhancedRelocationInformationRequestIEs ies.
 * \param ranaP_EnhancedRelocationInformationRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_ranap_enhancedrelocationinformationrequesties(
    RANAP_RANAP_EnhancedRelocationInformationRequestIEs_t *ranaP_EnhancedRelocationInformationRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for RANAP-EnhancedRelocationInformationRequestIEs ies.
 *  \param ranaP_RANAP_EnhancedRelocationInformationRequest Pointer to the ASN1 structure.
 *  \param ranaP_EnhancedRelocationInformationRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_ranap_enhancedrelocationinformationrequesties(
    RANAP_RANAP_EnhancedRelocationInformationRequest_t *ranaP_RANAP_EnhancedRelocationInformationRequest,
    RANAP_RANAP_EnhancedRelocationInformationRequestIEs_t *ranaP_EnhancedRelocationInformationRequestIEs);

/** \brief Decode function for SecurityModeCommandIEs ies.
 * \param securityModeCommandIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_securitymodecommandies(
    RANAP_SecurityModeCommandIEs_t *securityModeCommandIEs,
    ANY_t *any_p);

/** \brief Encode function for SecurityModeCommandIEs ies.
 *  \param ranaP_SecurityModeCommand Pointer to the ASN1 structure.
 *  \param securityModeCommandIEs Pointer to the IES structure.
 **/
int ranap_encode_securitymodecommandies(
    RANAP_SecurityModeCommand_t *ranaP_SecurityModeCommand,
    RANAP_SecurityModeCommandIEs_t *securityModeCommandIEs);

/** \brief Decode function for RelocationCancelIEs ies.
 * \param relocationCancelIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_relocationcancelies(
    RANAP_RelocationCancelIEs_t *relocationCancelIEs,
    ANY_t *any_p);

/** \brief Encode function for RelocationCancelIEs ies.
 *  \param ranaP_RelocationCancel Pointer to the ASN1 structure.
 *  \param relocationCancelIEs Pointer to the IES structure.
 **/
int ranap_encode_relocationcancelies(
    RANAP_RelocationCancel_t *ranaP_RelocationCancel,
    RANAP_RelocationCancelIEs_t *relocationCancelIEs);

/** \brief Decode function for RAB-SetupItem-RelocReqAck-IEs ies.
 * \param raB_SetupItem_RelocReqAck_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_setupitem_relocreqack_ies(
    RANAP_RAB_SetupItem_RelocReqAck_IEs_t *raB_SetupItem_RelocReqAck_IEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-SetupItem-RelocReqAck-IEs ies.
 *  \param ranaP_RAB_SetupList_RelocReqAck Pointer to the ASN1 structure.
 *  \param raB_SetupItem_RelocReqAck_IEs Pointer to the IES structure.
 **/
int ranap_encode_rab_setupitem_relocreqack_ies(
    RANAP_RAB_SetupList_RelocReqAck_t *ranaP_RAB_SetupList_RelocReqAck,
    RANAP_RAB_SetupItem_RelocReqAck_IEs_t *raB_SetupItem_RelocReqAck_IEs);

/** \brief Decode function for MBMSRegistrationFailureIEs ies.
 * \param mbmsRegistrationFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmsregistrationfailureies(
    RANAP_MBMSRegistrationFailureIEs_t *mbmsRegistrationFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSRegistrationFailureIEs ies.
 *  \param ranaP_MBMSRegistrationFailure Pointer to the ASN1 structure.
 *  \param mbmsRegistrationFailureIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmsregistrationfailureies(
    RANAP_MBMSRegistrationFailure_t *ranaP_MBMSRegistrationFailure,
    RANAP_MBMSRegistrationFailureIEs_t *mbmsRegistrationFailureIEs);

/** \brief Decode function for MBMSRABEstablishmentIndicationIEs ies.
 * \param mbmsrabEstablishmentIndicationIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmsrabestablishmentindicationies(
    RANAP_MBMSRABEstablishmentIndicationIEs_t *mbmsrabEstablishmentIndicationIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSRABEstablishmentIndicationIEs ies.
 *  \param ranaP_MBMSRABEstablishmentIndication Pointer to the ASN1 structure.
 *  \param mbmsrabEstablishmentIndicationIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmsrabestablishmentindicationies(
    RANAP_MBMSRABEstablishmentIndication_t *ranaP_MBMSRABEstablishmentIndication,
    RANAP_MBMSRABEstablishmentIndicationIEs_t *mbmsrabEstablishmentIndicationIEs);

/** \brief Decode function for MBMSSessionStartFailureIEs ies.
 * \param mbmsSessionStartFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmssessionstartfailureies(
    RANAP_MBMSSessionStartFailureIEs_t *mbmsSessionStartFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSSessionStartFailureIEs ies.
 *  \param ranaP_MBMSSessionStartFailure Pointer to the ASN1 structure.
 *  \param mbmsSessionStartFailureIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmssessionstartfailureies(
    RANAP_MBMSSessionStartFailure_t *ranaP_MBMSSessionStartFailure,
    RANAP_MBMSSessionStartFailureIEs_t *mbmsSessionStartFailureIEs);

/** \brief Decode function for Iu-ReleaseCompleteIEs ies.
 * \param iu_ReleaseCompleteIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_iu_releasecompleteies(
    RANAP_Iu_ReleaseCompleteIEs_t *iu_ReleaseCompleteIEs,
    ANY_t *any_p);

/** \brief Encode function for Iu-ReleaseCompleteIEs ies.
 *  \param ranaP_Iu_ReleaseComplete Pointer to the ASN1 structure.
 *  \param iu_ReleaseCompleteIEs Pointer to the IES structure.
 **/
int ranap_encode_iu_releasecompleteies(
    RANAP_Iu_ReleaseComplete_t *ranaP_Iu_ReleaseComplete,
    RANAP_Iu_ReleaseCompleteIEs_t *iu_ReleaseCompleteIEs);

/** \brief Decode function for CN-DeactivateTraceIEs ies.
 * \param cN_DeactivateTraceIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_cn_deactivatetraceies(
    RANAP_CN_DeactivateTraceIEs_t *cN_DeactivateTraceIEs,
    ANY_t *any_p);

/** \brief Encode function for CN-DeactivateTraceIEs ies.
 *  \param ranaP_CN_DeactivateTrace Pointer to the ASN1 structure.
 *  \param cN_DeactivateTraceIEs Pointer to the IES structure.
 **/
int ranap_encode_cn_deactivatetraceies(
    RANAP_CN_DeactivateTrace_t *ranaP_CN_DeactivateTrace,
    RANAP_CN_DeactivateTraceIEs_t *cN_DeactivateTraceIEs);

/** \brief Decode function for DataVolumeReportRequestIEs ies.
 * \param dataVolumeReportRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_datavolumereportrequesties(
    RANAP_DataVolumeReportRequestIEs_t *dataVolumeReportRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for DataVolumeReportRequestIEs ies.
 *  \param ranaP_DataVolumeReportRequest Pointer to the ASN1 structure.
 *  \param dataVolumeReportRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_datavolumereportrequesties(
    RANAP_DataVolumeReportRequest_t *ranaP_DataVolumeReportRequest,
    RANAP_DataVolumeReportRequestIEs_t *dataVolumeReportRequestIEs);

/** \brief Decode function for RAB-RelocationReleaseItemIEs ies.
 * \param raB_RelocationReleaseItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_relocationreleaseitemies(
    RANAP_RAB_RelocationReleaseItemIEs_t *raB_RelocationReleaseItemIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-RelocationReleaseItemIEs ies.
 *  \param ranaP_RAB_RelocationReleaseList Pointer to the ASN1 structure.
 *  \param raB_RelocationReleaseItemIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_relocationreleaseitemies(
    RANAP_RAB_RelocationReleaseList_t *ranaP_RAB_RelocationReleaseList,
    RANAP_RAB_RelocationReleaseItemIEs_t *raB_RelocationReleaseItemIEs);

/** \brief Decode function for RAB-ModifyRequestIEs ies.
 * \param raB_ModifyRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_modifyrequesties(
    RANAP_RAB_ModifyRequestIEs_t *raB_ModifyRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-ModifyRequestIEs ies.
 *  \param ranaP_RAB_ModifyRequest Pointer to the ASN1 structure.
 *  \param raB_ModifyRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_modifyrequesties(
    RANAP_RAB_ModifyRequest_t *ranaP_RAB_ModifyRequest,
    RANAP_RAB_ModifyRequestIEs_t *raB_ModifyRequestIEs);

/** \brief Decode function for SecurityModeCompleteIEs ies.
 * \param securityModeCompleteIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_securitymodecompleteies(
    RANAP_SecurityModeCompleteIEs_t *securityModeCompleteIEs,
    ANY_t *any_p);

/** \brief Encode function for SecurityModeCompleteIEs ies.
 *  \param ranaP_SecurityModeComplete Pointer to the ASN1 structure.
 *  \param securityModeCompleteIEs Pointer to the IES structure.
 **/
int ranap_encode_securitymodecompleteies(
    RANAP_SecurityModeComplete_t *ranaP_SecurityModeComplete,
    RANAP_SecurityModeCompleteIEs_t *securityModeCompleteIEs);

/** \brief Decode function for MBMSRABReleaseIEs ies.
 * \param mbmsrabReleaseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmsrabreleaseies(
    RANAP_MBMSRABReleaseIEs_t *mbmsrabReleaseIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSRABReleaseIEs ies.
 *  \param ranaP_MBMSRABRelease Pointer to the ASN1 structure.
 *  \param mbmsrabReleaseIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmsrabreleaseies(
    RANAP_MBMSRABRelease_t *ranaP_MBMSRABRelease,
    RANAP_MBMSRABReleaseIEs_t *mbmsrabReleaseIEs);

/** \brief Decode function for OverloadIEs ies.
 * \param overloadIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_overloadies(
    RANAP_OverloadIEs_t *overloadIEs,
    ANY_t *any_p);

/** \brief Encode function for OverloadIEs ies.
 *  \param ranaP_Overload Pointer to the ASN1 structure.
 *  \param overloadIEs Pointer to the IES structure.
 **/
int ranap_encode_overloadies(
    RANAP_Overload_t *ranaP_Overload,
    RANAP_OverloadIEs_t *overloadIEs);

/** \brief Decode function for RAB-SetupItem-RelocReq-IEs ies.
 * \param raB_SetupItem_RelocReq_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_setupitem_relocreq_ies(
    RANAP_RAB_SetupItem_RelocReq_IEs_t *raB_SetupItem_RelocReq_IEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-SetupItem-RelocReq-IEs ies.
 *  \param ranaP_RAB_SetupList_RelocReq Pointer to the ASN1 structure.
 *  \param raB_SetupItem_RelocReq_IEs Pointer to the IES structure.
 **/
int ranap_encode_rab_setupitem_relocreq_ies(
    RANAP_RAB_SetupList_RelocReq_t *ranaP_RAB_SetupList_RelocReq,
    RANAP_RAB_SetupItem_RelocReq_IEs_t *raB_SetupItem_RelocReq_IEs);

/** \brief Decode function for RAB-ModifyItemIEs ies.
 * \param raB_ModifyItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_modifyitemies(
    RANAP_RAB_ModifyItemIEs_t *raB_ModifyItemIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-ModifyItemIEs ies.
 *  \param ranaP_RAB_ModifyList Pointer to the ASN1 structure.
 *  \param raB_ModifyItemIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_modifyitemies(
    RANAP_RAB_ModifyList_t *ranaP_RAB_ModifyList,
    RANAP_RAB_ModifyItemIEs_t *raB_ModifyItemIEs);

/** \brief Decode function for MBMSRegistrationResponseIEs ies.
 * \param mbmsRegistrationResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmsregistrationresponseies(
    RANAP_MBMSRegistrationResponseIEs_t *mbmsRegistrationResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSRegistrationResponseIEs ies.
 *  \param ranaP_MBMSRegistrationResponse Pointer to the ASN1 structure.
 *  \param mbmsRegistrationResponseIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmsregistrationresponseies(
    RANAP_MBMSRegistrationResponse_t *ranaP_MBMSRegistrationResponse,
    RANAP_MBMSRegistrationResponseIEs_t *mbmsRegistrationResponseIEs);

/** \brief Decode function for ForwardSRNS-ContextIEs ies.
 * \param forwardSRNS_ContextIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_forwardsrns_contexties(
    RANAP_ForwardSRNS_ContextIEs_t *forwardSRNS_ContextIEs,
    ANY_t *any_p);

/** \brief Encode function for ForwardSRNS-ContextIEs ies.
 *  \param ranaP_ForwardSRNS_Context Pointer to the ASN1 structure.
 *  \param forwardSRNS_ContextIEs Pointer to the IES structure.
 **/
int ranap_encode_forwardsrns_contexties(
    RANAP_ForwardSRNS_Context_t *ranaP_ForwardSRNS_Context,
    RANAP_ForwardSRNS_ContextIEs_t *forwardSRNS_ContextIEs);

/** \brief Decode function for UplinkInformationExchangeFailureIEs ies.
 * \param uplinkInformationExchangeFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_uplinkinformationexchangefailureies(
    RANAP_UplinkInformationExchangeFailureIEs_t *uplinkInformationExchangeFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for UplinkInformationExchangeFailureIEs ies.
 *  \param ranaP_UplinkInformationExchangeFailure Pointer to the ASN1 structure.
 *  \param uplinkInformationExchangeFailureIEs Pointer to the IES structure.
 **/
int ranap_encode_uplinkinformationexchangefailureies(
    RANAP_UplinkInformationExchangeFailure_t *ranaP_UplinkInformationExchangeFailure,
    RANAP_UplinkInformationExchangeFailureIEs_t *uplinkInformationExchangeFailureIEs);

/** \brief Decode function for RAB-SetupItem-EnhRelocInfoRes-IEs ies.
 * \param raB_SetupItem_EnhRelocInfoRes_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_setupitem_enhrelocinfores_ies(
    RANAP_RAB_SetupItem_EnhRelocInfoRes_IEs_t *raB_SetupItem_EnhRelocInfoRes_IEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-SetupItem-EnhRelocInfoRes-IEs ies.
 *  \param ranaP_RAB_SetupList_EnhRelocInfoRes Pointer to the ASN1 structure.
 *  \param raB_SetupItem_EnhRelocInfoRes_IEs Pointer to the IES structure.
 **/
int ranap_encode_rab_setupitem_enhrelocinfores_ies(
    RANAP_RAB_SetupList_EnhRelocInfoRes_t *ranaP_RAB_SetupList_EnhRelocInfoRes,
    RANAP_RAB_SetupItem_EnhRelocInfoRes_IEs_t *raB_SetupItem_EnhRelocInfoRes_IEs);

/** \brief Decode function for DataVolumeReportIEs ies.
 * \param dataVolumeReportIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_datavolumereporties(
    RANAP_DataVolumeReportIEs_t *dataVolumeReportIEs,
    ANY_t *any_p);

/** \brief Encode function for DataVolumeReportIEs ies.
 *  \param ranaP_DataVolumeReport Pointer to the ASN1 structure.
 *  \param dataVolumeReportIEs Pointer to the IES structure.
 **/
int ranap_encode_datavolumereporties(
    RANAP_DataVolumeReport_t *ranaP_DataVolumeReport,
    RANAP_DataVolumeReportIEs_t *dataVolumeReportIEs);

/** \brief Decode function for InformationTransferIndicationIEs ies.
 * \param informationTransferIndicationIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_informationtransferindicationies(
    RANAP_InformationTransferIndicationIEs_t *informationTransferIndicationIEs,
    ANY_t *any_p);

/** \brief Encode function for InformationTransferIndicationIEs ies.
 *  \param ranaP_InformationTransferIndication Pointer to the ASN1 structure.
 *  \param informationTransferIndicationIEs Pointer to the IES structure.
 **/
int ranap_encode_informationtransferindicationies(
    RANAP_InformationTransferIndication_t *ranaP_InformationTransferIndication,
    RANAP_InformationTransferIndicationIEs_t *informationTransferIndicationIEs);

/** \brief Decode function for RAB-FailedItem-EnhRelocInfoRes-IEs ies.
 * \param raB_FailedItem_EnhRelocInfoRes_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_faileditem_enhrelocinfores_ies(
    RANAP_RAB_FailedItem_EnhRelocInfoRes_IEs_t *raB_FailedItem_EnhRelocInfoRes_IEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-FailedItem-EnhRelocInfoRes-IEs ies.
 *  \param ranaP_RAB_FailedList_EnhRelocInfoRes Pointer to the ASN1 structure.
 *  \param raB_FailedItem_EnhRelocInfoRes_IEs Pointer to the IES structure.
 **/
int ranap_encode_rab_faileditem_enhrelocinfores_ies(
    RANAP_RAB_FailedList_EnhRelocInfoRes_t *ranaP_RAB_FailedList_EnhRelocInfoRes,
    RANAP_RAB_FailedItem_EnhRelocInfoRes_IEs_t *raB_FailedItem_EnhRelocInfoRes_IEs);

/** \brief Decode function for InformationTransferFailureIEs ies.
 * \param informationTransferFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_informationtransferfailureies(
    RANAP_InformationTransferFailureIEs_t *informationTransferFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for InformationTransferFailureIEs ies.
 *  \param ranaP_InformationTransferFailure Pointer to the ASN1 structure.
 *  \param informationTransferFailureIEs Pointer to the IES structure.
 **/
int ranap_encode_informationtransferfailureies(
    RANAP_InformationTransferFailure_t *ranaP_InformationTransferFailure,
    RANAP_InformationTransferFailureIEs_t *informationTransferFailureIEs);

/** \brief Decode function for CommonID-IEs ies.
 * \param commonID_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_commonid_ies(
    RANAP_CommonID_IEs_t *commonID_IEs,
    ANY_t *any_p);

/** \brief Encode function for CommonID-IEs ies.
 *  \param ranaP_CommonID Pointer to the ASN1 structure.
 *  \param commonID_IEs Pointer to the IES structure.
 **/
int ranap_encode_commonid_ies(
    RANAP_CommonID_t *ranaP_CommonID,
    RANAP_CommonID_IEs_t *commonID_IEs);

/** \brief Decode function for MBMSUELinkingRequestIEs ies.
 * \param mbmsueLinkingRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmsuelinkingrequesties(
    RANAP_MBMSUELinkingRequestIEs_t *mbmsueLinkingRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSUELinkingRequestIEs ies.
 *  \param ranaP_MBMSUELinkingRequest Pointer to the ASN1 structure.
 *  \param mbmsueLinkingRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmsuelinkingrequesties(
    RANAP_MBMSUELinkingRequest_t *ranaP_MBMSUELinkingRequest,
    RANAP_MBMSUELinkingRequestIEs_t *mbmsueLinkingRequestIEs);

/** \brief Decode function for ErrorIndicationIEs ies.
 * \param errorIndicationIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_errorindicationies(
    RANAP_ErrorIndicationIEs_t *errorIndicationIEs,
    ANY_t *any_p);

/** \brief Encode function for ErrorIndicationIEs ies.
 *  \param ranaP_ErrorIndication Pointer to the ASN1 structure.
 *  \param errorIndicationIEs Pointer to the IES structure.
 **/
int ranap_encode_errorindicationies(
    RANAP_ErrorIndication_t *ranaP_ErrorIndication,
    RANAP_ErrorIndicationIEs_t *errorIndicationIEs);

/** \brief Decode function for RedirectionIndication-IEs ies.
 * \param redirectionIndication_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_redirectionindication_ies(
    RANAP_RedirectionIndication_IEs_t *redirectionIndication_IEs,
    ANY_t *any_p);

/** \brief Encode function for RedirectionIndication-IEs ies.
 *  \param ranaP_RedirectionIndication Pointer to the ASN1 structure.
 *  \param redirectionIndication_IEs Pointer to the IES structure.
 **/
int ranap_encode_redirectionindication_ies(
    RANAP_RedirectionIndication_t *ranaP_RedirectionIndication,
    RANAP_RedirectionIndication_IEs_t *redirectionIndication_IEs);

/** \brief Decode function for RAB-DataForwardingItemIEs ies.
 * \param raB_DataForwardingItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_dataforwardingitemies(
    RANAP_RAB_DataForwardingItemIEs_t *raB_DataForwardingItemIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-DataForwardingItemIEs ies.
 *  \param ranaP_RAB_DataForwardingList Pointer to the ASN1 structure.
 *  \param raB_DataForwardingItemIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_dataforwardingitemies(
    RANAP_RAB_DataForwardingList_t *ranaP_RAB_DataForwardingList,
    RANAP_RAB_DataForwardingItemIEs_t *raB_DataForwardingItemIEs);

/** \brief Decode function for RAB-SetupItem-EnhRelocInfoReq-IEs ies.
 * \param raB_SetupItem_EnhRelocInfoReq_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_setupitem_enhrelocinforeq_ies(
    RANAP_RAB_SetupItem_EnhRelocInfoReq_IEs_t *raB_SetupItem_EnhRelocInfoReq_IEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-SetupItem-EnhRelocInfoReq-IEs ies.
 *  \param ranaP_RAB_SetupList_EnhRelocInfoReq Pointer to the ASN1 structure.
 *  \param raB_SetupItem_EnhRelocInfoReq_IEs Pointer to the IES structure.
 **/
int ranap_encode_rab_setupitem_enhrelocinforeq_ies(
    RANAP_RAB_SetupList_EnhRelocInfoReq_t *ranaP_RAB_SetupList_EnhRelocInfoReq,
    RANAP_RAB_SetupItem_EnhRelocInfoReq_IEs_t *raB_SetupItem_EnhRelocInfoReq_IEs);

/** \brief Decode function for MBMSRABReleaseFailureIEs ies.
 * \param mbmsrabReleaseFailureIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmsrabreleasefailureies(
    RANAP_MBMSRABReleaseFailureIEs_t *mbmsrabReleaseFailureIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSRABReleaseFailureIEs ies.
 *  \param ranaP_MBMSRABReleaseFailure Pointer to the ASN1 structure.
 *  \param mbmsrabReleaseFailureIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmsrabreleasefailureies(
    RANAP_MBMSRABReleaseFailure_t *ranaP_MBMSRABReleaseFailure,
    RANAP_MBMSRABReleaseFailureIEs_t *mbmsrabReleaseFailureIEs);

/** \brief Decode function for RAB-DataVolumeReportItemIEs ies.
 * \param raB_DataVolumeReportItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_datavolumereportitemies(
    RANAP_RAB_DataVolumeReportItemIEs_t *raB_DataVolumeReportItemIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-DataVolumeReportItemIEs ies.
 *  \param ranaP_RAB_DataVolumeReportList Pointer to the ASN1 structure.
 *  \param raB_DataVolumeReportItemIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_datavolumereportitemies(
    RANAP_RAB_DataVolumeReportList_t *ranaP_RAB_DataVolumeReportList,
    RANAP_RAB_DataVolumeReportItemIEs_t *raB_DataVolumeReportItemIEs);

/** \brief Decode function for DirectInformationTransferIEs ies.
 * \param directInformationTransferIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_directinformationtransferies(
    RANAP_DirectInformationTransferIEs_t *directInformationTransferIEs,
    ANY_t *any_p);

/** \brief Encode function for DirectInformationTransferIEs ies.
 *  \param ranaP_DirectInformationTransfer Pointer to the ASN1 structure.
 *  \param directInformationTransferIEs Pointer to the IES structure.
 **/
int ranap_encode_directinformationtransferies(
    RANAP_DirectInformationTransfer_t *ranaP_DirectInformationTransfer,
    RANAP_DirectInformationTransferIEs_t *directInformationTransferIEs);

/** \brief Decode function for RelocationCommandIEs ies.
 * \param relocationCommandIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_relocationcommandies(
    RANAP_RelocationCommandIEs_t *relocationCommandIEs,
    ANY_t *any_p);

/** \brief Encode function for RelocationCommandIEs ies.
 *  \param ranaP_RelocationCommand Pointer to the ASN1 structure.
 *  \param relocationCommandIEs Pointer to the IES structure.
 **/
int ranap_encode_relocationcommandies(
    RANAP_RelocationCommand_t *ranaP_RelocationCommand,
    RANAP_RelocationCommandIEs_t *relocationCommandIEs);

/** \brief Decode function for UplinkInformationExchangeResponseIEs ies.
 * \param uplinkInformationExchangeResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_uplinkinformationexchangeresponseies(
    RANAP_UplinkInformationExchangeResponseIEs_t *uplinkInformationExchangeResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for UplinkInformationExchangeResponseIEs ies.
 *  \param ranaP_UplinkInformationExchangeResponse Pointer to the ASN1 structure.
 *  \param uplinkInformationExchangeResponseIEs Pointer to the IES structure.
 **/
int ranap_encode_uplinkinformationexchangeresponseies(
    RANAP_UplinkInformationExchangeResponse_t *ranaP_UplinkInformationExchangeResponse,
    RANAP_UplinkInformationExchangeResponseIEs_t *uplinkInformationExchangeResponseIEs);

/** \brief Decode function for MBMSRABReleaseRequestIEs ies.
 * \param mbmsrabReleaseRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmsrabreleaserequesties(
    RANAP_MBMSRABReleaseRequestIEs_t *mbmsrabReleaseRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSRABReleaseRequestIEs ies.
 *  \param ranaP_MBMSRABReleaseRequest Pointer to the ASN1 structure.
 *  \param mbmsrabReleaseRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmsrabreleaserequesties(
    RANAP_MBMSRABReleaseRequest_t *ranaP_MBMSRABReleaseRequest,
    RANAP_MBMSRABReleaseRequestIEs_t *mbmsrabReleaseRequestIEs);

/** \brief Decode function for RAB-AssignmentRequestIEs ies.
 * \param raB_AssignmentRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_assignmentrequesties(
    RANAP_RAB_AssignmentRequestIEs_t *raB_AssignmentRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-AssignmentRequestIEs ies.
 *  \param ranaP_RAB_AssignmentRequest Pointer to the ASN1 structure.
 *  \param raB_AssignmentRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_assignmentrequesties(
    RANAP_RAB_AssignmentRequest_t *ranaP_RAB_AssignmentRequest,
    RANAP_RAB_AssignmentRequestIEs_t *raB_AssignmentRequestIEs);

/** \brief Decode function for RAB-ReleasedItem-IuRelComp-IEs ies.
 * \param raB_ReleasedItem_IuRelComp_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_releaseditem_iurelcomp_ies(
    RANAP_RAB_ReleasedItem_IuRelComp_IEs_t *raB_ReleasedItem_IuRelComp_IEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-ReleasedItem-IuRelComp-IEs ies.
 *  \param ranaP_RAB_ReleasedList_IuRelComp Pointer to the ASN1 structure.
 *  \param raB_ReleasedItem_IuRelComp_IEs Pointer to the IES structure.
 **/
int ranap_encode_rab_releaseditem_iurelcomp_ies(
    RANAP_RAB_ReleasedList_IuRelComp_t *ranaP_RAB_ReleasedList_IuRelComp,
    RANAP_RAB_ReleasedItem_IuRelComp_IEs_t *raB_ReleasedItem_IuRelComp_IEs);

/** \brief Decode function for EnhancedRelocationCompleteResponseIEs ies.
 * \param enhancedRelocationCompleteResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_enhancedrelocationcompleteresponseies(
    RANAP_EnhancedRelocationCompleteResponseIEs_t *enhancedRelocationCompleteResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for EnhancedRelocationCompleteResponseIEs ies.
 *  \param ranaP_EnhancedRelocationCompleteResponse Pointer to the ASN1 structure.
 *  \param enhancedRelocationCompleteResponseIEs Pointer to the IES structure.
 **/
int ranap_encode_enhancedrelocationcompleteresponseies(
    RANAP_EnhancedRelocationCompleteResponse_t *ranaP_EnhancedRelocationCompleteResponse,
    RANAP_EnhancedRelocationCompleteResponseIEs_t *enhancedRelocationCompleteResponseIEs);

/** \brief Decode function for LocationReportIEs ies.
 * \param locationReportIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_locationreporties(
    RANAP_LocationReportIEs_t *locationReportIEs,
    ANY_t *any_p);

/** \brief Encode function for LocationReportIEs ies.
 *  \param ranaP_LocationReport Pointer to the ASN1 structure.
 *  \param locationReportIEs Pointer to the IES structure.
 **/
int ranap_encode_locationreporties(
    RANAP_LocationReport_t *ranaP_LocationReport,
    RANAP_LocationReportIEs_t *locationReportIEs);

/** \brief Decode function for RAB-SetupItem-EnhancedRelocCompleteReq-IEs ies.
 * \param raB_SetupItem_EnhancedRelocCompleteReq_IEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_setupitem_enhancedreloccompletereq_ies(
    RANAP_RAB_SetupItem_EnhancedRelocCompleteReq_IEs_t *raB_SetupItem_EnhancedRelocCompleteReq_IEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-SetupItem-EnhancedRelocCompleteReq-IEs ies.
 *  \param ranaP_RAB_SetupList_EnhancedRelocCompleteReq Pointer to the ASN1 structure.
 *  \param raB_SetupItem_EnhancedRelocCompleteReq_IEs Pointer to the IES structure.
 **/
int ranap_encode_rab_setupitem_enhancedreloccompletereq_ies(
    RANAP_RAB_SetupList_EnhancedRelocCompleteReq_t *ranaP_RAB_SetupList_EnhancedRelocCompleteReq,
    RANAP_RAB_SetupItem_EnhancedRelocCompleteReq_IEs_t *raB_SetupItem_EnhancedRelocCompleteReq_IEs);

/** \brief Decode function for RAB-AssignmentResponseIEs ies.
 * \param raB_AssignmentResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_assignmentresponseies(
    RANAP_RAB_AssignmentResponseIEs_t *raB_AssignmentResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-AssignmentResponseIEs ies.
 *  \param ranaP_RAB_AssignmentResponse Pointer to the ASN1 structure.
 *  \param raB_AssignmentResponseIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_assignmentresponseies(
    RANAP_RAB_AssignmentResponse_t *ranaP_RAB_AssignmentResponse,
    RANAP_RAB_AssignmentResponseIEs_t *raB_AssignmentResponseIEs);

/** \brief Decode function for RAB-ContextItemIEs ies.
 * \param raB_ContextItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_contextitemies(
    RANAP_RAB_ContextItemIEs_t *raB_ContextItemIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-ContextItemIEs ies.
 *  \param ranaP_RAB_ContextList Pointer to the ASN1 structure.
 *  \param raB_ContextItemIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_contextitemies(
    RANAP_RAB_ContextList_t *ranaP_RAB_ContextList,
    RANAP_RAB_ContextItemIEs_t *raB_ContextItemIEs);

/** \brief Decode function for MBMSSessionUpdateResponseIEs ies.
 * \param mbmsSessionUpdateResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmssessionupdateresponseies(
    RANAP_MBMSSessionUpdateResponseIEs_t *mbmsSessionUpdateResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSSessionUpdateResponseIEs ies.
 *  \param ranaP_MBMSSessionUpdateResponse Pointer to the ASN1 structure.
 *  \param mbmsSessionUpdateResponseIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmssessionupdateresponseies(
    RANAP_MBMSSessionUpdateResponse_t *ranaP_MBMSSessionUpdateResponse,
    RANAP_MBMSSessionUpdateResponseIEs_t *mbmsSessionUpdateResponseIEs);

/** \brief Decode function for UeRadioCapabilityMatchResponseIEs ies.
 * \param ueRadioCapabilityMatchResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_ueradiocapabilitymatchresponseies(
    RANAP_UeRadioCapabilityMatchResponseIEs_t *ueRadioCapabilityMatchResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for UeRadioCapabilityMatchResponseIEs ies.
 *  \param ranaP_UeRadioCapabilityMatchResponse Pointer to the ASN1 structure.
 *  \param ueRadioCapabilityMatchResponseIEs Pointer to the IES structure.
 **/
int ranap_encode_ueradiocapabilitymatchresponseies(
    RANAP_UeRadioCapabilityMatchResponse_t *ranaP_UeRadioCapabilityMatchResponse,
    RANAP_UeRadioCapabilityMatchResponseIEs_t *ueRadioCapabilityMatchResponseIEs);

/** \brief Decode function for RAB-ReleaseRequestIEs ies.
 * \param raB_ReleaseRequestIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_releaserequesties(
    RANAP_RAB_ReleaseRequestIEs_t *raB_ReleaseRequestIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-ReleaseRequestIEs ies.
 *  \param ranaP_RAB_ReleaseRequest Pointer to the ASN1 structure.
 *  \param raB_ReleaseRequestIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_releaserequesties(
    RANAP_RAB_ReleaseRequest_t *ranaP_RAB_ReleaseRequest,
    RANAP_RAB_ReleaseRequestIEs_t *raB_ReleaseRequestIEs);

/** \brief Decode function for EnhancedRelocationCompleteConfirmIEs ies.
 * \param enhancedRelocationCompleteConfirmIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_enhancedrelocationcompleteconfirmies(
    RANAP_EnhancedRelocationCompleteConfirmIEs_t *enhancedRelocationCompleteConfirmIEs,
    ANY_t *any_p);

/** \brief Encode function for EnhancedRelocationCompleteConfirmIEs ies.
 *  \param ranaP_EnhancedRelocationCompleteConfirm Pointer to the ASN1 structure.
 *  \param enhancedRelocationCompleteConfirmIEs Pointer to the IES structure.
 **/
int ranap_encode_enhancedrelocationcompleteconfirmies(
    RANAP_EnhancedRelocationCompleteConfirm_t *ranaP_EnhancedRelocationCompleteConfirm,
    RANAP_EnhancedRelocationCompleteConfirmIEs_t *enhancedRelocationCompleteConfirmIEs);

/** \brief Decode function for MBMSSessionUpdateIEs ies.
 * \param mbmsSessionUpdateIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmssessionupdateies(
    RANAP_MBMSSessionUpdateIEs_t *mbmsSessionUpdateIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSSessionUpdateIEs ies.
 *  \param ranaP_MBMSSessionUpdate Pointer to the ASN1 structure.
 *  \param mbmsSessionUpdateIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmssessionupdateies(
    RANAP_MBMSSessionUpdate_t *ranaP_MBMSSessionUpdate,
    RANAP_MBMSSessionUpdateIEs_t *mbmsSessionUpdateIEs);

/** \brief Decode function for MBMSSessionStartIEs ies.
 * \param mbmsSessionStartIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_mbmssessionstarties(
    RANAP_MBMSSessionStartIEs_t *mbmsSessionStartIEs,
    ANY_t *any_p);

/** \brief Encode function for MBMSSessionStartIEs ies.
 *  \param ranaP_MBMSSessionStart Pointer to the ASN1 structure.
 *  \param mbmsSessionStartIEs Pointer to the IES structure.
 **/
int ranap_encode_mbmssessionstarties(
    RANAP_MBMSSessionStart_t *ranaP_MBMSSessionStart,
    RANAP_MBMSSessionStartIEs_t *mbmsSessionStartIEs);

/** \brief Decode function for LocationRelatedDataResponseIEs ies.
 * \param locationRelatedDataResponseIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_locationrelateddataresponseies(
    RANAP_LocationRelatedDataResponseIEs_t *locationRelatedDataResponseIEs,
    ANY_t *any_p);

/** \brief Encode function for LocationRelatedDataResponseIEs ies.
 *  \param ranaP_LocationRelatedDataResponse Pointer to the ASN1 structure.
 *  \param locationRelatedDataResponseIEs Pointer to the IES structure.
 **/
int ranap_encode_locationrelateddataresponseies(
    RANAP_LocationRelatedDataResponse_t *ranaP_LocationRelatedDataResponse,
    RANAP_LocationRelatedDataResponseIEs_t *locationRelatedDataResponseIEs);

/** \brief Decode function for RAB-SetupOrModifiedItemIEs ies.
 * \param raB_SetupOrModifiedItemIEs Pointer to ASN1 structure in which data will be stored
 *  \param any_p Pointer to the ANY value to decode.
 **/
int ranap_decode_rab_setupormodifieditemies(
    RANAP_RAB_SetupOrModifiedItemIEs_t *raB_SetupOrModifiedItemIEs,
    ANY_t *any_p);

/** \brief Encode function for RAB-SetupOrModifiedItemIEs ies.
 *  \param ranaP_RAB_SetupOrModifiedList Pointer to the ASN1 structure.
 *  \param raB_SetupOrModifiedItemIEs Pointer to the IES structure.
 **/
int ranap_encode_rab_setupormodifieditemies(
    RANAP_RAB_SetupOrModifiedList_t *ranaP_RAB_SetupOrModifiedList,
    RANAP_RAB_SetupOrModifiedItemIEs_t *raB_SetupOrModifiedItemIEs);

#endif /* RANAP_IES_DEFS_H_ */

