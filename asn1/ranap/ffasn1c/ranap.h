/* Automatically generated file - do not edit */
#ifndef _FFASN1_OUT_H
#define _FFASN1_OUT_H

#include "asn1defs.h"

#ifdef  __cplusplus
extern "C" {
#endif

typedef enum Criticality {
  Criticality_reject,
  Criticality_ignore,
  Criticality_notify,
} Criticality;

extern const ASN1CType asn1_type_Criticality[];

typedef enum Presence {
  Presence_optional,
  Presence_conditional,
  Presence_mandatory,
} Presence;

extern const ASN1CType asn1_type_Presence[];

typedef enum {
  PrivateIE_ID_local,
  PrivateIE_ID_global,
} PrivateIE_ID_choice;

typedef struct PrivateIE_ID {
  PrivateIE_ID_choice choice;
  union {
    int local;
    ASN1ObjectIdentifier global;
  } u;
} PrivateIE_ID;

extern const ASN1CType asn1_type_PrivateIE_ID[];

typedef int ProcedureCode;

extern const ASN1CType asn1_type_ProcedureCode[];

typedef int ProtocolExtensionID;

extern const ASN1CType asn1_type_ProtocolExtensionID[];

typedef int ProtocolIE_ID;

extern const ASN1CType asn1_type_ProtocolIE_ID[];

typedef enum TriggeringMessage {
  TriggeringMessage_initiating_message,
  TriggeringMessage_successful_outcome,
  TriggeringMessage_unsuccessfull_outcome,
  TriggeringMessage_outcome,
} TriggeringMessage;

extern const ASN1CType asn1_type_TriggeringMessage[];

typedef struct RANAP_PROTOCOL_IES { /* object class definition */
  ASN1CType id;
  ASN1CType criticality;
  ASN1CType Value;
  ASN1CType presence;
} RANAP_PROTOCOL_IES;


extern const ASN1CType asn1_type_RANAP_PROTOCOL_IES[];

typedef struct RANAP_PROTOCOL_IES_PAIR { /* object class definition */
  ASN1CType id;
  ASN1CType firstCriticality;
  ASN1CType FirstValue;
  ASN1CType secondCriticality;
  ASN1CType SecondValue;
  ASN1CType presence;
} RANAP_PROTOCOL_IES_PAIR;


extern const ASN1CType asn1_type_RANAP_PROTOCOL_IES_PAIR[];

typedef struct RANAP_PROTOCOL_EXTENSION { /* object class definition */
  ASN1CType id;
  ASN1CType criticality;
  ASN1CType Extension;
  ASN1CType presence;
} RANAP_PROTOCOL_EXTENSION;


extern const ASN1CType asn1_type_RANAP_PROTOCOL_EXTENSION[];

typedef struct RANAP_PRIVATE_IES { /* object class definition */
  ASN1CType id;
  ASN1CType criticality;
  ASN1CType Value;
  ASN1CType presence;
} RANAP_PRIVATE_IES;


extern const ASN1CType asn1_type_RANAP_PRIVATE_IES[];

typedef enum AccuracyFulfilmentIndicator {
  AccuracyFulfilmentIndicator_requested_Accuracy_Fulfilled,
  AccuracyFulfilmentIndicator_requested_Accuracy_Not_Fulfilled,
} AccuracyFulfilmentIndicator;

extern const ASN1CType asn1_type_AccuracyFulfilmentIndicator[];

typedef int PriorityLevel;

extern const ASN1CType asn1_type_PriorityLevel[];

typedef enum Pre_emptionCapability {
  Pre_emptionCapability_shall_not_trigger_pre_emption,
  Pre_emptionCapability_may_trigger_pre_emption,
} Pre_emptionCapability;

extern const ASN1CType asn1_type_Pre_emptionCapability[];

typedef enum Pre_emptionVulnerability {
  Pre_emptionVulnerability_not_pre_emptable,
  Pre_emptionVulnerability_pre_emptable,
} Pre_emptionVulnerability;

extern const ASN1CType asn1_type_Pre_emptionVulnerability[];

typedef enum QueuingAllowed {
  QueuingAllowed_queueing_not_allowed,
  QueuingAllowed_queueing_allowed,
} QueuingAllowed;

extern const ASN1CType asn1_type_QueuingAllowed[];

typedef struct ProtocolExtensionField_1 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_1;


extern const ASN1CType asn1_type_ProtocolExtensionField_1[];

typedef struct ProtocolExtensionContainer_1 {
  ProtocolExtensionField_1 *tab;
  int count;
} ProtocolExtensionContainer_1;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_1[];

typedef struct AllocationOrRetentionPriority {
  PriorityLevel priorityLevel;
  Pre_emptionCapability pre_emptionCapability;
  Pre_emptionVulnerability pre_emptionVulnerability;
  QueuingAllowed queuingAllowed;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_1 iE_Extensions;
} AllocationOrRetentionPriority;


extern const ASN1CType asn1_type_AllocationOrRetentionPriority[];

typedef enum Alt_RAB_Parameter_MaxBitrateType {
  Alt_RAB_Parameter_MaxBitrateType_unspecified,
  Alt_RAB_Parameter_MaxBitrateType_value_range,
  Alt_RAB_Parameter_MaxBitrateType_discrete_values,
} Alt_RAB_Parameter_MaxBitrateType;

extern const ASN1CType asn1_type_Alt_RAB_Parameter_MaxBitrateType[];

typedef int MaxBitrate;

extern const ASN1CType asn1_type_MaxBitrate[];

typedef struct Alt_RAB_Parameter_MaxBitrateList {
  MaxBitrate *tab;
  int count;
} Alt_RAB_Parameter_MaxBitrateList;

extern const ASN1CType asn1_type_Alt_RAB_Parameter_MaxBitrateList[];

typedef struct Alt_RAB_Parameter_MaxBitrates {
  Alt_RAB_Parameter_MaxBitrateList *tab;
  int count;
} Alt_RAB_Parameter_MaxBitrates;

extern const ASN1CType asn1_type_Alt_RAB_Parameter_MaxBitrates[];

typedef struct Alt_RAB_Parameter_MaxBitrateInf {
  Alt_RAB_Parameter_MaxBitrateType altMaxBitrateType;
  BOOL altMaxBitrates_option;
  Alt_RAB_Parameter_MaxBitrates altMaxBitrates;
} Alt_RAB_Parameter_MaxBitrateInf;


extern const ASN1CType asn1_type_Alt_RAB_Parameter_MaxBitrateInf[];

typedef enum Alt_RAB_Parameter_GuaranteedBitrateType {
  Alt_RAB_Parameter_GuaranteedBitrateType_unspecified,
  Alt_RAB_Parameter_GuaranteedBitrateType_value_range,
  Alt_RAB_Parameter_GuaranteedBitrateType_discrete_values,
} Alt_RAB_Parameter_GuaranteedBitrateType;

extern const ASN1CType asn1_type_Alt_RAB_Parameter_GuaranteedBitrateType[];

typedef int GuaranteedBitrate;

extern const ASN1CType asn1_type_GuaranteedBitrate[];

typedef struct Alt_RAB_Parameter_GuaranteedBitrateList {
  GuaranteedBitrate *tab;
  int count;
} Alt_RAB_Parameter_GuaranteedBitrateList;

extern const ASN1CType asn1_type_Alt_RAB_Parameter_GuaranteedBitrateList[];

typedef struct Alt_RAB_Parameter_GuaranteedBitrates {
  Alt_RAB_Parameter_GuaranteedBitrateList *tab;
  int count;
} Alt_RAB_Parameter_GuaranteedBitrates;

extern const ASN1CType asn1_type_Alt_RAB_Parameter_GuaranteedBitrates[];

typedef struct Alt_RAB_Parameter_GuaranteedBitrateInf {
  Alt_RAB_Parameter_GuaranteedBitrateType altGuaranteedBitrateType;
  BOOL altGuaranteedBitrates_option;
  Alt_RAB_Parameter_GuaranteedBitrates altGuaranteedBitrates;
} Alt_RAB_Parameter_GuaranteedBitrateInf;


extern const ASN1CType asn1_type_Alt_RAB_Parameter_GuaranteedBitrateInf[];

typedef struct ProtocolExtensionField_2 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_2;


extern const ASN1CType asn1_type_ProtocolExtensionField_2[];

typedef struct ProtocolExtensionContainer_2 {
  ProtocolExtensionField_2 *tab;
  int count;
} ProtocolExtensionContainer_2;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_2[];

typedef struct Alt_RAB_Parameters {
  BOOL altMaxBitrateInf_option;
  Alt_RAB_Parameter_MaxBitrateInf altMaxBitrateInf;
  BOOL altGuaranteedBitRateInf_option;
  Alt_RAB_Parameter_GuaranteedBitrateInf altGuaranteedBitRateInf;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_2 iE_Extensions;
} Alt_RAB_Parameters;


extern const ASN1CType asn1_type_Alt_RAB_Parameters[];

typedef enum TrafficClass {
  TrafficClass_conversational,
  TrafficClass_streaming,
  TrafficClass_interactive,
  TrafficClass_background,
} TrafficClass;

extern const ASN1CType asn1_type_TrafficClass[];

typedef enum RAB_AsymmetryIndicator {
  RAB_AsymmetryIndicator_symmetric_bidirectional,
  RAB_AsymmetryIndicator_asymmetric_unidirectional_downlink,
  RAB_AsymmetryIndicator_asymmetric_unidirectional_uplink,
  RAB_AsymmetryIndicator_asymmetric_bidirectional,
} RAB_AsymmetryIndicator;

extern const ASN1CType asn1_type_RAB_AsymmetryIndicator[];

typedef struct RAB_Parameter_MaxBitrateList {
  MaxBitrate *tab;
  int count;
} RAB_Parameter_MaxBitrateList;

extern const ASN1CType asn1_type_RAB_Parameter_MaxBitrateList[];

typedef struct RAB_Parameter_GuaranteedBitrateList {
  GuaranteedBitrate *tab;
  int count;
} RAB_Parameter_GuaranteedBitrateList;

extern const ASN1CType asn1_type_RAB_Parameter_GuaranteedBitrateList[];

typedef enum DeliveryOrder {
  DeliveryOrder_delivery_order_requested,
  DeliveryOrder_delivery_order_not_requested,
} DeliveryOrder;

extern const ASN1CType asn1_type_DeliveryOrder[];

typedef int MaxSDU_Size;

extern const ASN1CType asn1_type_MaxSDU_Size[];

typedef struct ProtocolExtensionField_62 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_62;


extern const ASN1CType asn1_type_ProtocolExtensionField_62[];

typedef struct ProtocolExtensionContainer_62 {
  ProtocolExtensionField_62 *tab;
  int count;
} ProtocolExtensionContainer_62;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_62[];

typedef struct SDU_ErrorRatio {
  int mantissa;
  int exponent;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_62 iE_Extensions;
} SDU_ErrorRatio;


extern const ASN1CType asn1_type_SDU_ErrorRatio[];

typedef struct ProtocolExtensionField_55 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_55;


extern const ASN1CType asn1_type_ProtocolExtensionField_55[];

typedef struct ProtocolExtensionContainer_55 {
  ProtocolExtensionField_55 *tab;
  int count;
} ProtocolExtensionContainer_55;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_55[];

typedef struct ResidualBitErrorRatio {
  int mantissa;
  int exponent;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_55 iE_Extensions;
} ResidualBitErrorRatio;


extern const ASN1CType asn1_type_ResidualBitErrorRatio[];

typedef enum DeliveryOfErroneousSDU {
  DeliveryOfErroneousSDU_yes,
  DeliveryOfErroneousSDU_no,
  DeliveryOfErroneousSDU_no_error_detection_consideration,
} DeliveryOfErroneousSDU;

extern const ASN1CType asn1_type_DeliveryOfErroneousSDU[];

typedef int SubflowSDU_Size;

extern const ASN1CType asn1_type_SubflowSDU_Size[];

typedef int RAB_SubflowCombinationBitRate;

extern const ASN1CType asn1_type_RAB_SubflowCombinationBitRate[];

typedef struct ProtocolExtensionField_63 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_63;


extern const ASN1CType asn1_type_ProtocolExtensionField_63[];

typedef struct ProtocolExtensionContainer_63 {
  ProtocolExtensionField_63 *tab;
  int count;
} ProtocolExtensionContainer_63;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_63[];

typedef struct SDU_FormatInformationParameters_1 {
  BOOL subflowSDU_Size_option;
  SubflowSDU_Size subflowSDU_Size;
  BOOL rAB_SubflowCombinationBitRate_option;
  RAB_SubflowCombinationBitRate rAB_SubflowCombinationBitRate;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_63 iE_Extensions;
} SDU_FormatInformationParameters_1;


extern const ASN1CType asn1_type_SDU_FormatInformationParameters_1[];

typedef struct SDU_FormatInformationParameters {
  SDU_FormatInformationParameters_1 *tab;
  int count;
} SDU_FormatInformationParameters;

extern const ASN1CType asn1_type_SDU_FormatInformationParameters[];

typedef struct ProtocolExtensionField_64 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_64;


extern const ASN1CType asn1_type_ProtocolExtensionField_64[];

typedef struct ProtocolExtensionContainer_64 {
  ProtocolExtensionField_64 *tab;
  int count;
} ProtocolExtensionContainer_64;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_64[];

typedef struct SDU_Parameters_1 {
  BOOL sDU_ErrorRatio_option;
  SDU_ErrorRatio sDU_ErrorRatio;
  ResidualBitErrorRatio residualBitErrorRatio;
  DeliveryOfErroneousSDU deliveryOfErroneousSDU;
  BOOL sDU_FormatInformationParameters_option;
  SDU_FormatInformationParameters sDU_FormatInformationParameters;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_64 iE_Extensions;
} SDU_Parameters_1;


extern const ASN1CType asn1_type_SDU_Parameters_1[];

typedef struct SDU_Parameters {
  SDU_Parameters_1 *tab;
  int count;
} SDU_Parameters;

extern const ASN1CType asn1_type_SDU_Parameters[];

typedef int TransferDelay;

extern const ASN1CType asn1_type_TransferDelay[];

typedef int TrafficHandlingPriority;

extern const ASN1CType asn1_type_TrafficHandlingPriority[];

typedef enum SourceStatisticsDescriptor {
  SourceStatisticsDescriptor_speech,
  SourceStatisticsDescriptor_unknown,
} SourceStatisticsDescriptor;

extern const ASN1CType asn1_type_SourceStatisticsDescriptor[];

typedef enum RelocationRequirement {
  RelocationRequirement_lossless,
  RelocationRequirement_none,
  RelocationRequirement_realtime,
} RelocationRequirement;

extern const ASN1CType asn1_type_RelocationRequirement[];

typedef struct ProtocolExtensionField_48 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_48;


extern const ASN1CType asn1_type_ProtocolExtensionField_48[];

typedef struct ProtocolExtensionContainer_48 {
  ProtocolExtensionField_48 *tab;
  int count;
} ProtocolExtensionContainer_48;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_48[];

typedef struct RAB_Parameters {
  TrafficClass trafficClass;
  RAB_AsymmetryIndicator rAB_AsymmetryIndicator;
  RAB_Parameter_MaxBitrateList maxBitrate;
  BOOL guaranteedBitRate_option;
  RAB_Parameter_GuaranteedBitrateList guaranteedBitRate;
  DeliveryOrder deliveryOrder;
  MaxSDU_Size maxSDU_Size;
  SDU_Parameters sDU_Parameters;
  BOOL transferDelay_option;
  TransferDelay transferDelay;
  BOOL trafficHandlingPriority_option;
  TrafficHandlingPriority trafficHandlingPriority;
  BOOL allocationOrRetentionPriority_option;
  AllocationOrRetentionPriority allocationOrRetentionPriority;
  BOOL sourceStatisticsDescriptor_option;
  SourceStatisticsDescriptor sourceStatisticsDescriptor;
  BOOL relocationRequirement_option;
  RelocationRequirement relocationRequirement;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_48 iE_Extensions;
} RAB_Parameters;


extern const ASN1CType asn1_type_RAB_Parameters[];

typedef int ExtendedGuaranteedBitrate;

extern const ASN1CType asn1_type_ExtendedGuaranteedBitrate[];

typedef struct Alt_RAB_Parameter_ExtendedGuaranteedBitrateList {
  ExtendedGuaranteedBitrate *tab;
  int count;
} Alt_RAB_Parameter_ExtendedGuaranteedBitrateList;

extern const ASN1CType asn1_type_Alt_RAB_Parameter_ExtendedGuaranteedBitrateList[];

typedef struct Alt_RAB_Parameter_ExtendedGuaranteedBitrates {
  Alt_RAB_Parameter_ExtendedGuaranteedBitrateList *tab;
  int count;
} Alt_RAB_Parameter_ExtendedGuaranteedBitrates;

extern const ASN1CType asn1_type_Alt_RAB_Parameter_ExtendedGuaranteedBitrates[];

typedef struct Alt_RAB_Parameter_ExtendedGuaranteedBitrateInf {
  Alt_RAB_Parameter_GuaranteedBitrateType altExtendedGuaranteedBitrateType;
  BOOL altExtendedGuaranteedBitrates_option;
  Alt_RAB_Parameter_ExtendedGuaranteedBitrates altExtendedGuaranteedBitrates;
} Alt_RAB_Parameter_ExtendedGuaranteedBitrateInf;


extern const ASN1CType asn1_type_Alt_RAB_Parameter_ExtendedGuaranteedBitrateInf[];

typedef int ExtendedMaxBitrate;

extern const ASN1CType asn1_type_ExtendedMaxBitrate[];

typedef struct Alt_RAB_Parameter_ExtendedMaxBitrateList {
  ExtendedMaxBitrate *tab;
  int count;
} Alt_RAB_Parameter_ExtendedMaxBitrateList;

extern const ASN1CType asn1_type_Alt_RAB_Parameter_ExtendedMaxBitrateList[];

typedef struct Alt_RAB_Parameter_ExtendedMaxBitrates {
  Alt_RAB_Parameter_ExtendedMaxBitrateList *tab;
  int count;
} Alt_RAB_Parameter_ExtendedMaxBitrates;

extern const ASN1CType asn1_type_Alt_RAB_Parameter_ExtendedMaxBitrates[];

typedef struct Alt_RAB_Parameter_ExtendedMaxBitrateInf {
  Alt_RAB_Parameter_MaxBitrateType altExtendedMaxBitrateType;
  BOOL altExtendedMaxBitrates_option;
  Alt_RAB_Parameter_ExtendedMaxBitrates altExtendedMaxBitrates;
} Alt_RAB_Parameter_ExtendedMaxBitrateInf;


extern const ASN1CType asn1_type_Alt_RAB_Parameter_ExtendedMaxBitrateInf[];

typedef int SupportedBitrate;

extern const ASN1CType asn1_type_SupportedBitrate[];

typedef struct SupportedRAB_ParameterBitrateList {
  SupportedBitrate *tab;
  int count;
} SupportedRAB_ParameterBitrateList;

extern const ASN1CType asn1_type_SupportedRAB_ParameterBitrateList[];

typedef struct Alt_RAB_Parameter_SupportedMaxBitrates {
  SupportedRAB_ParameterBitrateList *tab;
  int count;
} Alt_RAB_Parameter_SupportedMaxBitrates;

extern const ASN1CType asn1_type_Alt_RAB_Parameter_SupportedMaxBitrates[];

typedef struct ProtocolExtensionField_4 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_4;


extern const ASN1CType asn1_type_ProtocolExtensionField_4[];

typedef struct ProtocolExtensionContainer_4 {
  ProtocolExtensionField_4 *tab;
  int count;
} ProtocolExtensionContainer_4;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_4[];

typedef struct Alt_RAB_Parameter_SupportedMaxBitrateInf {
  Alt_RAB_Parameter_MaxBitrateType altSupportedMaxBitrateType;
  BOOL altSupportedMaxBitrates_option;
  Alt_RAB_Parameter_SupportedMaxBitrates altSupportedMaxBitrates;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_4 iE_Extensions;
} Alt_RAB_Parameter_SupportedMaxBitrateInf;


extern const ASN1CType asn1_type_Alt_RAB_Parameter_SupportedMaxBitrateInf[];

typedef struct Alt_RAB_Parameter_SupportedGuaranteedBitrates {
  SupportedRAB_ParameterBitrateList *tab;
  int count;
} Alt_RAB_Parameter_SupportedGuaranteedBitrates;

extern const ASN1CType asn1_type_Alt_RAB_Parameter_SupportedGuaranteedBitrates[];

typedef struct ProtocolExtensionField_3 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_3;


extern const ASN1CType asn1_type_ProtocolExtensionField_3[];

typedef struct ProtocolExtensionContainer_3 {
  ProtocolExtensionField_3 *tab;
  int count;
} ProtocolExtensionContainer_3;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_3[];

typedef struct Alt_RAB_Parameter_SupportedGuaranteedBitrateInf {
  Alt_RAB_Parameter_GuaranteedBitrateType altSupportedGuaranteedBitrateType;
  BOOL altSupportedGuaranteedBitrates_option;
  Alt_RAB_Parameter_SupportedGuaranteedBitrates altSupportedGuaranteedBitrates;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_3 iE_Extensions;
} Alt_RAB_Parameter_SupportedGuaranteedBitrateInf;


extern const ASN1CType asn1_type_Alt_RAB_Parameter_SupportedGuaranteedBitrateInf[];

typedef enum AlternativeRABConfigurationRequest {
  AlternativeRABConfigurationRequest_alternative_RAB_configuration_Requested,
} AlternativeRABConfigurationRequest;

extern const ASN1CType asn1_type_AlternativeRABConfigurationRequest[];

typedef ASN1String APN;

extern const ASN1CType asn1_type_APN[];

typedef ASN1String TBCD_STRING_2;

extern const ASN1CType asn1_type_TBCD_STRING_2[];

typedef TBCD_STRING_2 PLMNidentity;

#define asn1_type_PLMNidentity asn1_type_TBCD_STRING_2

typedef ASN1String LAC;

extern const ASN1CType asn1_type_LAC[];

typedef ASN1String SAC;

extern const ASN1CType asn1_type_SAC[];

typedef struct ProtocolExtensionField_60 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_60;


extern const ASN1CType asn1_type_ProtocolExtensionField_60[];

typedef struct ProtocolExtensionContainer_60 {
  ProtocolExtensionField_60 *tab;
  int count;
} ProtocolExtensionContainer_60;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_60[];

typedef struct SAI {
  PLMNidentity pLMNidentity;
  LAC lAC;
  SAC sAC;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_60 iE_Extensions;
} SAI;


extern const ASN1CType asn1_type_SAI[];

typedef enum GeographicalCoordinates_1 {
  GeographicalCoordinates_1_north,
  GeographicalCoordinates_1_south,
} GeographicalCoordinates_1;

extern const ASN1CType asn1_type_GeographicalCoordinates_1[];

typedef struct ProtocolExtensionField_16 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_16;


extern const ASN1CType asn1_type_ProtocolExtensionField_16[];

typedef struct ProtocolExtensionContainer_16 {
  ProtocolExtensionField_16 *tab;
  int count;
} ProtocolExtensionContainer_16;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_16[];

typedef struct GeographicalCoordinates {
  GeographicalCoordinates_1 latitudeSign;
  int latitude;
  int longitude;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_16 iE_Extensions;
} GeographicalCoordinates;


extern const ASN1CType asn1_type_GeographicalCoordinates[];

typedef struct ProtocolExtensionField_18 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_18;


extern const ASN1CType asn1_type_ProtocolExtensionField_18[];

typedef struct ProtocolExtensionContainer_18 {
  ProtocolExtensionField_18 *tab;
  int count;
} ProtocolExtensionContainer_18;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_18[];

typedef struct GA_Point {
  GeographicalCoordinates geographicalCoordinates;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_18 iE_Extensions;
} GA_Point;


extern const ASN1CType asn1_type_GA_Point[];

typedef struct ProtocolExtensionField_21 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_21;


extern const ASN1CType asn1_type_ProtocolExtensionField_21[];

typedef struct ProtocolExtensionContainer_21 {
  ProtocolExtensionField_21 *tab;
  int count;
} ProtocolExtensionContainer_21;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_21[];

typedef struct GA_PointWithUnCertainty {
  GeographicalCoordinates geographicalCoordinates;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_21 iE_Extensions;
  int uncertaintyCode;
} GA_PointWithUnCertainty;


extern const ASN1CType asn1_type_GA_PointWithUnCertainty[];

typedef struct ProtocolExtensionField_23 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_23;


extern const ASN1CType asn1_type_ProtocolExtensionField_23[];

typedef struct ProtocolExtensionContainer_23 {
  ProtocolExtensionField_23 *tab;
  int count;
} ProtocolExtensionContainer_23;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_23[];

typedef struct GA_Polygon_1 {
  GeographicalCoordinates geographicalCoordinates;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_23 iE_Extensions;
} GA_Polygon_1;


extern const ASN1CType asn1_type_GA_Polygon_1[];

typedef struct GA_Polygon {
  GA_Polygon_1 *tab;
  int count;
} GA_Polygon;

extern const ASN1CType asn1_type_GA_Polygon[];

typedef struct GA_UncertaintyEllipse {
  int uncertaintySemi_major;
  int uncertaintySemi_minor;
  int orientationOfMajorAxis;
} GA_UncertaintyEllipse;


extern const ASN1CType asn1_type_GA_UncertaintyEllipse[];

typedef struct ProtocolExtensionField_22 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_22;


extern const ASN1CType asn1_type_ProtocolExtensionField_22[];

typedef struct ProtocolExtensionContainer_22 {
  ProtocolExtensionField_22 *tab;
  int count;
} ProtocolExtensionContainer_22;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_22[];

typedef struct GA_PointWithUnCertaintyEllipse {
  GeographicalCoordinates geographicalCoordinates;
  GA_UncertaintyEllipse uncertaintyEllipse;
  int confidence;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_22 iE_Extensions;
} GA_PointWithUnCertaintyEllipse;


extern const ASN1CType asn1_type_GA_PointWithUnCertaintyEllipse[];

typedef enum GA_AltitudeAndDirection_1 {
  GA_AltitudeAndDirection_1_height,
  GA_AltitudeAndDirection_1_depth,
} GA_AltitudeAndDirection_1;

extern const ASN1CType asn1_type_GA_AltitudeAndDirection_1[];

typedef struct GA_AltitudeAndDirection {
  GA_AltitudeAndDirection_1 directionOfAltitude;
  int altitude;
} GA_AltitudeAndDirection;


extern const ASN1CType asn1_type_GA_AltitudeAndDirection[];

typedef struct ProtocolExtensionField_19 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_19;


extern const ASN1CType asn1_type_ProtocolExtensionField_19[];

typedef struct ProtocolExtensionContainer_19 {
  ProtocolExtensionField_19 *tab;
  int count;
} ProtocolExtensionContainer_19;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_19[];

typedef struct GA_PointWithAltitude {
  GeographicalCoordinates geographicalCoordinates;
  GA_AltitudeAndDirection altitudeAndDirection;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_19 iE_Extensions;
} GA_PointWithAltitude;


extern const ASN1CType asn1_type_GA_PointWithAltitude[];

typedef struct ProtocolExtensionField_20 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_20;


extern const ASN1CType asn1_type_ProtocolExtensionField_20[];

typedef struct ProtocolExtensionContainer_20 {
  ProtocolExtensionField_20 *tab;
  int count;
} ProtocolExtensionContainer_20;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_20[];

typedef struct GA_PointWithAltitudeAndUncertaintyEllipsoid {
  GeographicalCoordinates geographicalCoordinates;
  GA_AltitudeAndDirection altitudeAndDirection;
  GA_UncertaintyEllipse uncertaintyEllipse;
  int uncertaintyAltitude;
  int confidence;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_20 iE_Extensions;
} GA_PointWithAltitudeAndUncertaintyEllipsoid;


extern const ASN1CType asn1_type_GA_PointWithAltitudeAndUncertaintyEllipsoid[];

typedef struct ProtocolExtensionField_17 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_17;


extern const ASN1CType asn1_type_ProtocolExtensionField_17[];

typedef struct ProtocolExtensionContainer_17 {
  ProtocolExtensionField_17 *tab;
  int count;
} ProtocolExtensionContainer_17;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_17[];

typedef struct GA_EllipsoidArc {
  GeographicalCoordinates geographicalCoordinates;
  int innerRadius;
  int uncertaintyRadius;
  int offsetAngle;
  int includedAngle;
  int confidence;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_17 iE_Extensions;
} GA_EllipsoidArc;


extern const ASN1CType asn1_type_GA_EllipsoidArc[];

typedef enum {
  GeographicalArea_point,
  GeographicalArea_pointWithUnCertainty,
  GeographicalArea_polygon,
  GeographicalArea_pointWithUncertaintyEllipse,
  GeographicalArea_pointWithAltitude,
  GeographicalArea_pointWithAltitudeAndUncertaintyEllipsoid,
  GeographicalArea_ellipsoidArc,
} GeographicalArea_choice;

typedef struct GeographicalArea {
  GeographicalArea_choice choice;
  union {
    GA_Point point;
    GA_PointWithUnCertainty pointWithUnCertainty;
    GA_Polygon polygon;
    GA_PointWithUnCertaintyEllipse pointWithUncertaintyEllipse;
    GA_PointWithAltitude pointWithAltitude;
    GA_PointWithAltitudeAndUncertaintyEllipsoid pointWithAltitudeAndUncertaintyEllipsoid;
    GA_EllipsoidArc ellipsoidArc;
  } u;
} GeographicalArea;

extern const ASN1CType asn1_type_GeographicalArea[];

typedef enum {
  AreaIdentity_sAI,
  AreaIdentity_geographicalArea,
} AreaIdentity_choice;

typedef struct AreaIdentity {
  AreaIdentity_choice choice;
  union {
    SAI sAI;
    GeographicalArea geographicalArea;
  } u;
} AreaIdentity;

extern const ASN1CType asn1_type_AreaIdentity[];

typedef struct Ass_RAB_Parameter_MaxBitrateList {
  MaxBitrate *tab;
  int count;
} Ass_RAB_Parameter_MaxBitrateList;

extern const ASN1CType asn1_type_Ass_RAB_Parameter_MaxBitrateList[];

typedef struct Ass_RAB_Parameter_GuaranteedBitrateList {
  GuaranteedBitrate *tab;
  int count;
} Ass_RAB_Parameter_GuaranteedBitrateList;

extern const ASN1CType asn1_type_Ass_RAB_Parameter_GuaranteedBitrateList[];

typedef struct ProtocolExtensionField_5 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_5;


extern const ASN1CType asn1_type_ProtocolExtensionField_5[];

typedef struct ProtocolExtensionContainer_5 {
  ProtocolExtensionField_5 *tab;
  int count;
} ProtocolExtensionContainer_5;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_5[];

typedef struct Ass_RAB_Parameters {
  BOOL assMaxBitrateInf_option;
  Ass_RAB_Parameter_MaxBitrateList assMaxBitrateInf;
  BOOL assGuaranteedBitRateInf_option;
  Ass_RAB_Parameter_GuaranteedBitrateList assGuaranteedBitRateInf;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_5 iE_Extensions;
} Ass_RAB_Parameters;


extern const ASN1CType asn1_type_Ass_RAB_Parameters[];

typedef struct Ass_RAB_Parameter_ExtendedGuaranteedBitrateList {
  ExtendedGuaranteedBitrate *tab;
  int count;
} Ass_RAB_Parameter_ExtendedGuaranteedBitrateList;

extern const ASN1CType asn1_type_Ass_RAB_Parameter_ExtendedGuaranteedBitrateList[];

typedef struct Ass_RAB_Parameter_ExtendedMaxBitrateList {
  ExtendedMaxBitrate *tab;
  int count;
} Ass_RAB_Parameter_ExtendedMaxBitrateList;

extern const ASN1CType asn1_type_Ass_RAB_Parameter_ExtendedMaxBitrateList[];

typedef int SNAC;

extern const ASN1CType asn1_type_SNAC[];

typedef struct AuthorisedSNAs {
  SNAC *tab;
  int count;
} AuthorisedSNAs;

extern const ASN1CType asn1_type_AuthorisedSNAs[];

typedef struct ProtocolExtensionField_6 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_6;


extern const ASN1CType asn1_type_ProtocolExtensionField_6[];

typedef struct ProtocolExtensionContainer_6 {
  ProtocolExtensionField_6 *tab;
  int count;
} ProtocolExtensionContainer_6;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_6[];

typedef struct AuthorisedPLMNs_1 {
  PLMNidentity pLMNidentity;
  BOOL authorisedSNAsList_option;
  AuthorisedSNAs authorisedSNAsList;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_6 iE_Extensions;
} AuthorisedPLMNs_1;


extern const ASN1CType asn1_type_AuthorisedPLMNs_1[];

typedef struct AuthorisedPLMNs {
  AuthorisedPLMNs_1 *tab;
  int count;
} AuthorisedPLMNs;

extern const ASN1CType asn1_type_AuthorisedPLMNs[];

typedef ASN1String BindingID;

extern const ASN1CType asn1_type_BindingID[];

typedef struct BroadcastAssistanceDataDecipheringKeys {
  ASN1BitString cipheringKeyFlag;
  ASN1BitString currentDecipheringKey;
  ASN1BitString nextDecipheringKey;
} BroadcastAssistanceDataDecipheringKeys;


extern const ASN1CType asn1_type_BroadcastAssistanceDataDecipheringKeys[];

typedef int CauseRadioNetwork;

extern const ASN1CType asn1_type_CauseRadioNetwork[];

typedef int CauseTransmissionNetwork;

extern const ASN1CType asn1_type_CauseTransmissionNetwork[];

typedef int CauseNAS;

extern const ASN1CType asn1_type_CauseNAS[];

typedef int CauseProtocol;

extern const ASN1CType asn1_type_CauseProtocol[];

typedef int CauseMisc;

extern const ASN1CType asn1_type_CauseMisc[];

typedef int CauseNon_Standard;

extern const ASN1CType asn1_type_CauseNon_Standard[];

typedef int CauseRadioNetworkExtension;

extern const ASN1CType asn1_type_CauseRadioNetworkExtension[];

typedef enum {
  Cause_radioNetwork,
  Cause_transmissionNetwork,
  Cause_nAS,
  Cause_protocol,
  Cause_misc,
  Cause_non_Standard,
  Cause_radioNetworkExtension,
} Cause_choice;

typedef struct Cause {
  Cause_choice choice;
  union {
    CauseRadioNetwork radioNetwork;
    CauseTransmissionNetwork transmissionNetwork;
    CauseNAS nAS;
    CauseProtocol protocol;
    CauseMisc misc;
    CauseNon_Standard non_Standard;
    CauseRadioNetworkExtension radioNetworkExtension;
  } u;
} Cause;

extern const ASN1CType asn1_type_Cause[];

typedef enum Cell_Access_Mode {
  Cell_Access_Mode_hybrid,
} Cell_Access_Mode;

extern const ASN1CType asn1_type_Cell_Access_Mode[];

typedef int Cell_Id;

extern const ASN1CType asn1_type_Cell_Id[];

typedef struct CellIdList {
  Cell_Id *tab;
  int count;
} CellIdList;

extern const ASN1CType asn1_type_CellIdList[];

typedef struct ProtocolExtensionField_7 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_7;


extern const ASN1CType asn1_type_ProtocolExtensionField_7[];

typedef struct ProtocolExtensionContainer_7 {
  ProtocolExtensionField_7 *tab;
  int count;
} ProtocolExtensionContainer_7;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_7[];

typedef struct CellBased {
  CellIdList cellIdList;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_7 iE_Extensions;
} CellBased;


extern const ASN1CType asn1_type_CellBased[];

typedef int Cell_Capacity_Class_Value;

extern const ASN1CType asn1_type_Cell_Capacity_Class_Value[];

typedef int LoadValue;

extern const ASN1CType asn1_type_LoadValue[];

typedef int RTLoadValue;

extern const ASN1CType asn1_type_RTLoadValue[];

typedef int NRTLoadInformationValue;

extern const ASN1CType asn1_type_NRTLoadInformationValue[];

typedef struct ProtocolExtensionField_8 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_8;


extern const ASN1CType asn1_type_ProtocolExtensionField_8[];

typedef struct ProtocolExtensionContainer_8 {
  ProtocolExtensionField_8 *tab;
  int count;
} ProtocolExtensionContainer_8;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_8[];

typedef struct CellLoadInformation {
  Cell_Capacity_Class_Value cell_Capacity_Class_Value;
  LoadValue loadValue;
  BOOL rTLoadValue_option;
  RTLoadValue rTLoadValue;
  BOOL nRTLoadInformationValue_option;
  NRTLoadInformationValue nRTLoadInformationValue;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_8 iE_Extensions;
} CellLoadInformation;


extern const ASN1CType asn1_type_CellLoadInformation[];

typedef int TargetCellId;

extern const ASN1CType asn1_type_TargetCellId[];

typedef struct ProtocolExtensionField_71 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_71;


extern const ASN1CType asn1_type_ProtocolExtensionField_71[];

typedef struct ProtocolExtensionContainer_71 {
  ProtocolExtensionField_71 *tab;
  int count;
} ProtocolExtensionContainer_71;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_71[];

typedef struct SourceUTRANCellID {
  PLMNidentity pLMNidentity;
  TargetCellId uTRANcellID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_71 iE_Extensions;
} SourceUTRANCellID;


extern const ASN1CType asn1_type_SourceUTRANCellID[];

typedef ASN1String CI;

extern const ASN1CType asn1_type_CI[];

typedef struct ProtocolExtensionField_13 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_13;


extern const ASN1CType asn1_type_ProtocolExtensionField_13[];

typedef struct ProtocolExtensionContainer_13 {
  ProtocolExtensionField_13 *tab;
  int count;
} ProtocolExtensionContainer_13;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_13[];

typedef struct CGI {
  PLMNidentity pLMNidentity;
  LAC lAC;
  CI cI;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_13 iE_Extensions;
} CGI;


extern const ASN1CType asn1_type_CGI[];

typedef enum {
  SourceCellID_sourceUTRANCellID,
  SourceCellID_sourceGERANCellID,
} SourceCellID_choice;

typedef struct SourceCellID {
  SourceCellID_choice choice;
  union {
    SourceUTRANCellID sourceUTRANCellID;
    CGI sourceGERANCellID;
  } u;
} SourceCellID;

extern const ASN1CType asn1_type_SourceCellID[];

typedef struct ProtocolExtensionField_9 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_9;


extern const ASN1CType asn1_type_ProtocolExtensionField_9[];

typedef struct ProtocolExtensionContainer_9 {
  ProtocolExtensionField_9 *tab;
  int count;
} ProtocolExtensionContainer_9;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_9[];

typedef struct CellLoadInformationGroup {
  SourceCellID sourceCellID;
  BOOL uplinkCellLoadInformation_option;
  CellLoadInformation uplinkCellLoadInformation;
  BOOL downlinkCellLoadInformation_option;
  CellLoadInformation downlinkCellLoadInformation;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_9 iE_Extensions;
} CellLoadInformationGroup;


extern const ASN1CType asn1_type_CellLoadInformationGroup[];

typedef enum CellType {
  CellType_macro,
  CellType_micro,
  CellType_pico,
  CellType_femto,
} CellType;

extern const ASN1CType asn1_type_CellType[];

typedef enum ClientType {
  ClientType_emergency_Services,
  ClientType_value_Added_Services,
  ClientType_pLMN_Operator_Services,
  ClientType_lawful_Intercept_Services,
  ClientType_pLMN_Operator_Broadcast_Services,
  ClientType_pLMN_Operator_O_et_M,
  ClientType_pLMN_Operator_Anonymous_Statistics,
  ClientType_pLMN_Operator_Target_MS_Service_Support,
} ClientType;

extern const ASN1CType asn1_type_ClientType[];

typedef int RepetitionNumber0;

extern const ASN1CType asn1_type_RepetitionNumber0[];

typedef struct ProtocolExtensionField_11 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_11;


extern const ASN1CType asn1_type_ProtocolExtensionField_11[];

typedef struct ProtocolExtensionContainer_11 {
  ProtocolExtensionField_11 *tab;
  int count;
} ProtocolExtensionContainer_11;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_11[];

typedef struct CriticalityDiagnostics_IE_List_1 {
  Criticality iECriticality;
  ProtocolIE_ID iE_ID;
  BOOL repetitionNumber_option;
  RepetitionNumber0 repetitionNumber;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_11 iE_Extensions;
} CriticalityDiagnostics_IE_List_1;


extern const ASN1CType asn1_type_CriticalityDiagnostics_IE_List_1[];

typedef struct CriticalityDiagnostics_IE_List {
  CriticalityDiagnostics_IE_List_1 *tab;
  int count;
} CriticalityDiagnostics_IE_List;

extern const ASN1CType asn1_type_CriticalityDiagnostics_IE_List[];

typedef struct ProtocolExtensionField_10 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_10;


extern const ASN1CType asn1_type_ProtocolExtensionField_10[];

typedef struct ProtocolExtensionContainer_10 {
  ProtocolExtensionField_10 *tab;
  int count;
} ProtocolExtensionContainer_10;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_10[];

typedef struct CriticalityDiagnostics {
  BOOL procedureCode_option;
  ProcedureCode procedureCode;
  BOOL triggeringMessage_option;
  TriggeringMessage triggeringMessage;
  BOOL procedureCriticality_option;
  Criticality procedureCriticality;
  BOOL iEsCriticalityDiagnostics_option;
  CriticalityDiagnostics_IE_List iEsCriticalityDiagnostics;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_10 iE_Extensions;
} CriticalityDiagnostics;


extern const ASN1CType asn1_type_CriticalityDiagnostics[];

typedef int RepetitionNumber1;

extern const ASN1CType asn1_type_RepetitionNumber1[];

typedef struct ProtocolExtensionField_12 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_12;


extern const ASN1CType asn1_type_ProtocolExtensionField_12[];

typedef struct ProtocolExtensionContainer_12 {
  ProtocolExtensionField_12 *tab;
  int count;
} ProtocolExtensionContainer_12;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_12[];

typedef struct MessageStructure_1 {
  ProtocolIE_ID iE_ID;
  BOOL repetitionNumber_option;
  RepetitionNumber1 repetitionNumber;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_12 iE_Extensions;
} MessageStructure_1;


extern const ASN1CType asn1_type_MessageStructure_1[];

typedef struct MessageStructure {
  MessageStructure_1 *tab;
  int count;
} MessageStructure;

extern const ASN1CType asn1_type_MessageStructure[];

typedef enum TypeOfError {
  TypeOfError_not_understood,
  TypeOfError_missing,
} TypeOfError;

extern const ASN1CType asn1_type_TypeOfError[];

typedef ASN1String RAC;

extern const ASN1CType asn1_type_RAC[];

typedef int EncryptionAlgorithm;

extern const ASN1CType asn1_type_EncryptionAlgorithm[];

typedef EncryptionAlgorithm ChosenEncryptionAlgorithm;

#define asn1_type_ChosenEncryptionAlgorithm asn1_type_EncryptionAlgorithm

typedef int IntegrityProtectionAlgorithm;

extern const ASN1CType asn1_type_IntegrityProtectionAlgorithm[];

typedef IntegrityProtectionAlgorithm ChosenIntegrityProtectionAlgorithm;

#define asn1_type_ChosenIntegrityProtectionAlgorithm asn1_type_IntegrityProtectionAlgorithm

typedef ASN1String ClassmarkInformation2;

extern const ASN1CType asn1_type_ClassmarkInformation2[];

typedef ASN1String ClassmarkInformation3;

extern const ASN1CType asn1_type_ClassmarkInformation3[];

typedef enum CN_DomainIndicator {
  CN_DomainIndicator_cs_domain,
  CN_DomainIndicator_ps_domain,
} CN_DomainIndicator;

extern const ASN1CType asn1_type_CN_DomainIndicator[];

typedef int CN_ID;

extern const ASN1CType asn1_type_CN_ID[];

typedef ASN1String Correlation_ID;

extern const ASN1CType asn1_type_Correlation_ID[];

typedef enum CSFB_Information {
  CSFB_Information_csfb,
  CSFB_Information_csfb_high_priority,
} CSFB_Information;

extern const ASN1CType asn1_type_CSFB_Information[];

typedef ASN1BitString CSG_Id;

extern const ASN1CType asn1_type_CSG_Id[];

typedef struct CSG_Id_List {
  CSG_Id *tab;
  int count;
} CSG_Id_List;

extern const ASN1CType asn1_type_CSG_Id_List[];

typedef enum CSG_Membership_Status {
  CSG_Membership_Status_member,
  CSG_Membership_Status_non_member,
} CSG_Membership_Status;

extern const ASN1CType asn1_type_CSG_Membership_Status[];

typedef enum DataPDUType {
  DataPDUType_pDUtype0,
  DataPDUType_pDUtype1,
} DataPDUType;

extern const ASN1CType asn1_type_DataPDUType[];

typedef int DataVolumeReference;

extern const ASN1CType asn1_type_DataVolumeReference[];

typedef enum DataVolumeReportingIndication {
  DataVolumeReportingIndication_do_report,
  DataVolumeReportingIndication_do_not_report,
} DataVolumeReportingIndication;

extern const ASN1CType asn1_type_DataVolumeReportingIndication[];

typedef int DCH_ID;

extern const ASN1CType asn1_type_DCH_ID[];

typedef struct NewRAListofIdleModeUEs {
  RAC *tab;
  int count;
} NewRAListofIdleModeUEs;

extern const ASN1CType asn1_type_NewRAListofIdleModeUEs[];

typedef struct RAListwithNoIdleModeUEsAnyMore {
  RAC *tab;
  int count;
} RAListwithNoIdleModeUEsAnyMore;

extern const ASN1CType asn1_type_RAListwithNoIdleModeUEsAnyMore[];

typedef struct ProtocolExtensionField_14 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_14;


extern const ASN1CType asn1_type_ProtocolExtensionField_14[];

typedef struct ProtocolExtensionContainer_14 {
  ProtocolExtensionField_14 *tab;
  int count;
} ProtocolExtensionContainer_14;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_14[];

typedef struct DeltaRAListofIdleModeUEs {
  BOOL newRAListofIdleModeUEs_option;
  NewRAListofIdleModeUEs newRAListofIdleModeUEs;
  BOOL rAListwithNoIdleModeUEsAnyMore_option;
  RAListwithNoIdleModeUEsAnyMore rAListwithNoIdleModeUEsAnyMore;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_14 iE_Extensions;
} DeltaRAListofIdleModeUEs;


extern const ASN1CType asn1_type_DeltaRAListofIdleModeUEs[];

typedef struct ProtocolExtensionField_31 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_31;


extern const ASN1CType asn1_type_ProtocolExtensionField_31[];

typedef struct ProtocolExtensionContainer_31 {
  ProtocolExtensionField_31 *tab;
  int count;
} ProtocolExtensionContainer_31;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_31[];

typedef struct LAI {
  PLMNidentity pLMNidentity;
  LAC lAC;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_31 iE_Extensions;
} LAI;


extern const ASN1CType asn1_type_LAI[];

typedef struct LAListofIdleModeUEs {
  LAI *tab;
  int count;
} LAListofIdleModeUEs;

extern const ASN1CType asn1_type_LAListofIdleModeUEs[];

typedef enum ForwardingIndication {
  ForwardingIndication_forwarding_admitted,
} ForwardingIndication;

extern const ASN1CType asn1_type_ForwardingIndication[];

typedef int DL_GTP_PDU_SequenceNumber;

extern const ASN1CType asn1_type_DL_GTP_PDU_SequenceNumber[];

typedef int DL_N_PDU_SequenceNumber;

extern const ASN1CType asn1_type_DL_N_PDU_SequenceNumber[];

typedef int D_RNTI;

extern const ASN1CType asn1_type_D_RNTI[];

typedef int DRX_CycleLengthCoefficient;

extern const ASN1CType asn1_type_DRX_CycleLengthCoefficient[];

typedef int DSCH_ID;

extern const ASN1CType asn1_type_DSCH_ID[];

typedef int EARFCN_Extended;

extern const ASN1CType asn1_type_EARFCN_Extended[];

typedef int E_DCH_MAC_d_Flow_ID;

extern const ASN1CType asn1_type_E_DCH_MAC_d_Flow_ID[];

typedef enum {
  ENB_ID_macroENB_ID,
  ENB_ID_homeENB_ID,
} ENB_ID_choice;

typedef struct ENB_ID {
  ENB_ID_choice choice;
  union {
    ASN1BitString macroENB_ID;
    ASN1BitString homeENB_ID;
  } u;
} ENB_ID;

extern const ASN1CType asn1_type_ENB_ID[];

typedef struct PermittedEncryptionAlgorithms {
  EncryptionAlgorithm *tab;
  int count;
} PermittedEncryptionAlgorithms;

extern const ASN1CType asn1_type_PermittedEncryptionAlgorithms[];

typedef ASN1BitString EncryptionKey;

extern const ASN1CType asn1_type_EncryptionKey[];

typedef struct ProtocolExtensionField_15 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_15;


extern const ASN1CType asn1_type_ProtocolExtensionField_15[];

typedef struct ProtocolExtensionContainer_15 {
  ProtocolExtensionField_15 *tab;
  int count;
} ProtocolExtensionContainer_15;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_15[];

typedef struct EncryptionInformation {
  PermittedEncryptionAlgorithms permittedAlgorithms;
  EncryptionKey key;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_15 iE_Extensions;
} EncryptionInformation;


extern const ASN1CType asn1_type_EncryptionInformation[];

typedef enum End_Of_CSFB {
  End_Of_CSFB_end_of_CSFB,
} End_Of_CSFB;

extern const ASN1CType asn1_type_End_Of_CSFB[];

typedef ASN1String IMEI;

extern const ASN1CType asn1_type_IMEI[];

typedef struct IMEIList {
  IMEI *tab;
  int count;
} IMEIList;

extern const ASN1CType asn1_type_IMEIList[];

typedef ASN1String IMEISV;

extern const ASN1CType asn1_type_IMEISV[];

typedef struct IMEISVList {
  IMEISV *tab;
  int count;
} IMEISVList;

extern const ASN1CType asn1_type_IMEISVList[];

typedef struct ProtocolExtensionField_25 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_25;


extern const ASN1CType asn1_type_ProtocolExtensionField_25[];

typedef struct ProtocolExtensionContainer_25 {
  ProtocolExtensionField_25 *tab;
  int count;
} ProtocolExtensionContainer_25;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_25[];

typedef struct IMEIGroup {
  IMEI iMEI;
  ASN1BitString iMEIMask;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_25 iE_Extensions;
} IMEIGroup;


extern const ASN1CType asn1_type_IMEIGroup[];

typedef struct ProtocolExtensionField_26 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_26;


extern const ASN1CType asn1_type_ProtocolExtensionField_26[];

typedef struct ProtocolExtensionContainer_26 {
  ProtocolExtensionField_26 *tab;
  int count;
} ProtocolExtensionContainer_26;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_26[];

typedef struct IMEISVGroup {
  IMEISV iMEISV;
  ASN1BitString iMEISVMask;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_26 iE_Extensions;
} IMEISVGroup;


extern const ASN1CType asn1_type_IMEISVGroup[];

typedef enum {
  EquipmentsToBeTraced_iMEIlist,
  EquipmentsToBeTraced_iMEISVlist,
  EquipmentsToBeTraced_iMEIgroup,
  EquipmentsToBeTraced_iMEISVgroup,
} EquipmentsToBeTraced_choice;

typedef struct EquipmentsToBeTraced {
  EquipmentsToBeTraced_choice choice;
  union {
    IMEIList iMEIlist;
    IMEISVList iMEISVlist;
    IMEIGroup iMEIgroup;
    IMEISVGroup iMEISVgroup;
  } u;
} EquipmentsToBeTraced;

extern const ASN1CType asn1_type_EquipmentsToBeTraced[];

typedef enum E_UTRAN_Service_Handover {
  E_UTRAN_Service_Handover_handover_to_E_UTRAN_shall_not_be_performed,
} E_UTRAN_Service_Handover;

extern const ASN1CType asn1_type_E_UTRAN_Service_Handover[];

typedef enum Event {
  Event_stop_change_of_service_area,
  Event_direct,
  Event_change_of_servicearea,
  Event_stop_direct,
  Event_periodic,
  Event_stop_periodic,
} Event;

extern const ASN1CType asn1_type_Event[];

typedef enum MeasurementQuantity {
  MeasurementQuantity_cpichEcNo,
  MeasurementQuantity_cpichRSCP,
  MeasurementQuantity_pathloss,
} MeasurementQuantity;

extern const ASN1CType asn1_type_MeasurementQuantity[];

typedef struct Event1F_Parameters {
  MeasurementQuantity measurementQuantity;
  int threshold;
} Event1F_Parameters;


extern const ASN1CType asn1_type_Event1F_Parameters[];

typedef struct Event1I_Parameters {
  int threshold;
} Event1I_Parameters;


extern const ASN1CType asn1_type_Event1I_Parameters[];

typedef int ExtendedRNC_ID;

extern const ASN1CType asn1_type_ExtendedRNC_ID[];

typedef int FrameSequenceNumber;

extern const ASN1CType asn1_type_FrameSequenceNumber[];

typedef enum FrequenceLayerConvergenceFlag {
  FrequenceLayerConvergenceFlag_no_FLC_flag,
} FrequenceLayerConvergenceFlag;

extern const ASN1CType asn1_type_FrequenceLayerConvergenceFlag[];

typedef ASN1String GANSS_PositioningMethodAndUsage;

extern const ASN1CType asn1_type_GANSS_PositioningMethodAndUsage[];

typedef struct GANSS_PositioningDataSet {
  GANSS_PositioningMethodAndUsage *tab;
  int count;
} GANSS_PositioningDataSet;

extern const ASN1CType asn1_type_GANSS_PositioningDataSet[];

typedef ASN1String GERAN_BSC_Container;

extern const ASN1CType asn1_type_GERAN_BSC_Container[];

typedef struct ProtocolExtensionField_24 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_24;


extern const ASN1CType asn1_type_ProtocolExtensionField_24[];

typedef struct ProtocolExtensionContainer_24 {
  ProtocolExtensionField_24 *tab;
  int count;
} ProtocolExtensionContainer_24;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_24[];

typedef struct GERAN_Cell_ID {
  LAI lAI;
  RAC rAC;
  CI cI;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_24 iE_Extensions;
} GERAN_Cell_ID;


extern const ASN1CType asn1_type_GERAN_Cell_ID[];

typedef ASN1String GERAN_Classmark;

extern const ASN1CType asn1_type_GERAN_Classmark[];

typedef struct GlobalCN_ID {
  PLMNidentity pLMNidentity;
  CN_ID cN_ID;
} GlobalCN_ID;


extern const ASN1CType asn1_type_GlobalCN_ID[];

typedef int RNC_ID;

extern const ASN1CType asn1_type_RNC_ID[];

typedef struct GlobalRNC_ID {
  PLMNidentity pLMNidentity;
  RNC_ID rNC_ID;
} GlobalRNC_ID;


extern const ASN1CType asn1_type_GlobalRNC_ID[];

typedef ASN1String GTP_TEI;

extern const ASN1CType asn1_type_GTP_TEI[];

typedef enum HigherBitratesThan16MbpsFlag {
  HigherBitratesThan16MbpsFlag_allowed,
  HigherBitratesThan16MbpsFlag_not_allowed,
} HigherBitratesThan16MbpsFlag;

extern const ASN1CType asn1_type_HigherBitratesThan16MbpsFlag[];

typedef int HS_DSCH_MAC_d_Flow_ID;

extern const ASN1CType asn1_type_HS_DSCH_MAC_d_Flow_ID[];

typedef ASN1BitString MeasurementsToActivate;

extern const ASN1CType asn1_type_MeasurementsToActivate[];

typedef enum ReportInterval {
  ReportInterval_ms250,
  ReportInterval_ms500,
  ReportInterval_ms1000,
  ReportInterval_ms2000,
  ReportInterval_ms3000,
  ReportInterval_ms4000,
  ReportInterval_ms6000,
  ReportInterval_ms12000,
  ReportInterval_ms16000,
  ReportInterval_ms20000,
  ReportInterval_ms24000,
  ReportInterval_ms32000,
  ReportInterval_ms64000,
  ReportInterval_ms8000,
  ReportInterval_ms28000,
} ReportInterval;

extern const ASN1CType asn1_type_ReportInterval[];

typedef enum ReportAmount {
  ReportAmount_n1,
  ReportAmount_n2,
  ReportAmount_n4,
  ReportAmount_n8,
  ReportAmount_n16,
  ReportAmount_n32,
  ReportAmount_n64,
  ReportAmount_infinity,
} ReportAmount;

extern const ASN1CType asn1_type_ReportAmount[];

typedef struct MDT_Report_Parameters {
  ReportInterval reportInterval;
  ReportAmount reportAmount;
} MDT_Report_Parameters;


extern const ASN1CType asn1_type_MDT_Report_Parameters[];

typedef enum {
  M1Report_periodic,
  M1Report_event1F,
} M1Report_choice;

typedef struct M1Report {
  M1Report_choice choice;
  union {
    MDT_Report_Parameters periodic;
    Event1F_Parameters event1F;
  } u;
} M1Report;

extern const ASN1CType asn1_type_M1Report[];

typedef enum {
  M2Report_periodic,
  M2Report_event1I,
} M2Report_choice;

typedef struct M2Report {
  M2Report_choice choice;
  union {
    MDT_Report_Parameters periodic;
    Event1I_Parameters event1I;
  } u;
} M2Report;

extern const ASN1CType asn1_type_M2Report[];

typedef struct ProtocolExtensionField_27 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_27;


extern const ASN1CType asn1_type_ProtocolExtensionField_27[];

typedef struct ProtocolExtensionContainer_27 {
  ProtocolExtensionField_27 *tab;
  int count;
} ProtocolExtensionContainer_27;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_27[];

typedef struct ImmediateMDT {
  MeasurementsToActivate measurementsToActivate;
  BOOL m1report_option;
  M1Report m1report;
  BOOL m2report_option;
  M2Report m2report;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_27 iE_Extensions;
} ImmediateMDT;


extern const ASN1CType asn1_type_ImmediateMDT[];

typedef enum M4_Period {
  M4_Period_ms100,
  M4_Period_ms250,
  M4_Period_ms500,
  M4_Period_ms1000,
  M4_Period_ms2000,
  M4_Period_ms3000,
  M4_Period_ms4000,
  M4_Period_ms6000,
} M4_Period;

extern const ASN1CType asn1_type_M4_Period[];

typedef int M4_Threshold;

extern const ASN1CType asn1_type_M4_Threshold[];

typedef struct ProtocolExtensionField_36 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_36;


extern const ASN1CType asn1_type_ProtocolExtensionField_36[];

typedef struct ProtocolExtensionContainer_36 {
  ProtocolExtensionField_36 *tab;
  int count;
} ProtocolExtensionContainer_36;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_36[];

typedef struct M4_Collection_Parameters {
  M4_Period m4_period;
  BOOL m4_threshold_option;
  M4_Threshold m4_threshold;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_36 iE_Extensions;
} M4_Collection_Parameters;


extern const ASN1CType asn1_type_M4_Collection_Parameters[];

typedef enum {
  M4Report_all,
  M4Report_m4_collection_parameters,
} M4Report_choice;

typedef struct M4Report {
  M4Report_choice choice;
  union {
    M4_Collection_Parameters m4_collection_parameters;
  } u;
} M4Report;

extern const ASN1CType asn1_type_M4Report[];

typedef enum M5_Period {
  M5_Period_ms100,
  M5_Period_ms250,
  M5_Period_ms500,
  M5_Period_ms1000,
  M5_Period_ms2000,
  M5_Period_ms3000,
  M5_Period_ms4000,
  M5_Period_ms6000,
} M5_Period;

extern const ASN1CType asn1_type_M5_Period[];

typedef enum {
  M5Report_when_available,
  M5Report_m5_period,
} M5Report_choice;

typedef struct M5Report {
  M5Report_choice choice;
  union {
    M5_Period m5_period;
  } u;
} M5Report;

extern const ASN1CType asn1_type_M5Report[];

typedef enum M6_Period {
  M6_Period_ms1000,
  M6_Period_ms2000,
  M6_Period_ms3000,
  M6_Period_ms4000,
  M6_Period_ms6000,
  M6_Period_ms8000,
  M6_Period_ms12000,
  M6_Period_ms16000,
  M6_Period_ms20000,
  M6_Period_ms24000,
  M6_Period_ms28000,
  M6_Period_ms32000,
  M6_Period_ms64000,
} M6_Period;

extern const ASN1CType asn1_type_M6_Period[];

typedef enum Links_to_log {
  Links_to_log_uplink,
  Links_to_log_downlink,
  Links_to_log_both_uplink_and_downlink,
} Links_to_log;

extern const ASN1CType asn1_type_Links_to_log[];

typedef struct ProtocolExtensionField_37 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_37;


extern const ASN1CType asn1_type_ProtocolExtensionField_37[];

typedef struct ProtocolExtensionContainer_37 {
  ProtocolExtensionField_37 *tab;
  int count;
} ProtocolExtensionContainer_37;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_37[];

typedef struct M6Report {
  M6_Period m6_period;
  Links_to_log m6_links_to_log;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_37 iE_Extensions;
} M6Report;


extern const ASN1CType asn1_type_M6Report[];

typedef enum M7_Period {
  M7_Period_ms1000,
  M7_Period_ms2000,
  M7_Period_ms3000,
  M7_Period_ms4000,
  M7_Period_ms6000,
  M7_Period_ms8000,
  M7_Period_ms12000,
  M7_Period_ms16000,
  M7_Period_ms20000,
  M7_Period_ms24000,
  M7_Period_ms28000,
  M7_Period_ms32000,
  M7_Period_ms64000,
} M7_Period;

extern const ASN1CType asn1_type_M7_Period[];

typedef struct ProtocolExtensionField_38 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_38;


extern const ASN1CType asn1_type_ProtocolExtensionField_38[];

typedef struct ProtocolExtensionContainer_38 {
  ProtocolExtensionField_38 *tab;
  int count;
} ProtocolExtensionContainer_38;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_38[];

typedef struct M7Report {
  M7_Period m7_period;
  Links_to_log m7_links_to_log;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_38 iE_Extensions;
} M7Report;


extern const ASN1CType asn1_type_M7Report[];

typedef ASN1String TBCD_STRING_1;

extern const ASN1CType asn1_type_TBCD_STRING_1[];

typedef TBCD_STRING_1 IMSI;

#define asn1_type_IMSI asn1_type_TBCD_STRING_1

typedef enum IncludeVelocity {
  IncludeVelocity_requested,
} IncludeVelocity;

extern const ASN1CType asn1_type_IncludeVelocity[];

typedef int InformationExchangeID;

extern const ASN1CType asn1_type_InformationExchangeID[];

typedef enum InformationExchangeType {
  InformationExchangeType_transfer,
  InformationExchangeType_request,
} InformationExchangeType;

extern const ASN1CType asn1_type_InformationExchangeType[];

typedef struct ProtocolExtensionField_78 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_78;


extern const ASN1CType asn1_type_ProtocolExtensionField_78[];

typedef struct ProtocolExtensionContainer_78 {
  ProtocolExtensionField_78 *tab;
  int count;
} ProtocolExtensionContainer_78;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_78[];

typedef struct TMGI {
  PLMNidentity pLMNidentity;
  ASN1String serviceID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_78 iE_Extensions;
} TMGI;


extern const ASN1CType asn1_type_TMGI[];

typedef ASN1String IPMulticastAddress;

extern const ASN1CType asn1_type_IPMulticastAddress[];

typedef struct ProtocolExtensionField_53 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_53;


extern const ASN1CType asn1_type_ProtocolExtensionField_53[];

typedef struct ProtocolExtensionContainer_53 {
  ProtocolExtensionField_53 *tab;
  int count;
} ProtocolExtensionContainer_53;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_53[];

typedef struct MBMSIPMulticastAddressandAPNlist {
  TMGI tMGI;
  IPMulticastAddress iPMulticastAddress;
  APN aPN;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_53 iE_Extensions;
} MBMSIPMulticastAddressandAPNlist;


extern const ASN1CType asn1_type_MBMSIPMulticastAddressandAPNlist[];

typedef struct RequestedMBMSIPMulticastAddressandAPNRequest {
  MBMSIPMulticastAddressandAPNlist *tab;
  int count;
} RequestedMBMSIPMulticastAddressandAPNRequest;

extern const ASN1CType asn1_type_RequestedMBMSIPMulticastAddressandAPNRequest[];

typedef struct RequestedMulticastServiceList {
  TMGI *tab;
  int count;
} RequestedMulticastServiceList;

extern const ASN1CType asn1_type_RequestedMulticastServiceList[];

typedef enum {
  InformationRequested_requestedMBMSIPMulticastAddressandAPNRequest,
  InformationRequested_requestedMulticastServiceList,
} InformationRequested_choice;

typedef struct InformationRequested {
  InformationRequested_choice choice;
  union {
    RequestedMBMSIPMulticastAddressandAPNRequest requestedMBMSIPMulticastAddressandAPNRequest;
    RequestedMulticastServiceList requestedMulticastServiceList;
  } u;
} InformationRequested;

extern const ASN1CType asn1_type_InformationRequested[];

typedef struct MBMSIPMulticastAddressandAPNRequest {
  TMGI *tab;
  int count;
} MBMSIPMulticastAddressandAPNRequest;

extern const ASN1CType asn1_type_MBMSIPMulticastAddressandAPNRequest[];

typedef enum {
  PermanentNAS_UE_ID_iMSI,
} PermanentNAS_UE_ID_choice;

typedef struct PermanentNAS_UE_ID {
  PermanentNAS_UE_ID_choice choice;
  union {
    IMSI iMSI;
  } u;
} PermanentNAS_UE_ID;

extern const ASN1CType asn1_type_PermanentNAS_UE_ID[];

typedef enum {
  InformationRequestType_mBMSIPMulticastAddressandAPNRequest,
  InformationRequestType_permanentNAS_UE_ID,
} InformationRequestType_choice;

typedef struct InformationRequestType {
  InformationRequestType_choice choice;
  union {
    MBMSIPMulticastAddressandAPNRequest mBMSIPMulticastAddressandAPNRequest;
    PermanentNAS_UE_ID permanentNAS_UE_ID;
  } u;
} InformationRequestType;

extern const ASN1CType asn1_type_InformationRequestType[];

typedef int InformationTransferID;

extern const ASN1CType asn1_type_InformationTransferID[];

typedef ASN1String TraceReference;

extern const ASN1CType asn1_type_TraceReference[];

typedef enum RNCTraceInformation_1 {
  RNCTraceInformation_1_activated,
  RNCTraceInformation_1_deactivated,
} RNCTraceInformation_1;

extern const ASN1CType asn1_type_RNCTraceInformation_1[];

typedef struct ProtocolExtensionField_57 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_57;


extern const ASN1CType asn1_type_ProtocolExtensionField_57[];

typedef struct ProtocolExtensionContainer_57 {
  ProtocolExtensionField_57 *tab;
  int count;
} ProtocolExtensionContainer_57;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_57[];

typedef struct RNCTraceInformation {
  TraceReference traceReference;
  RNCTraceInformation_1 traceActivationIndicato;
  BOOL equipmentsToBeTraced_option;
  EquipmentsToBeTraced equipmentsToBeTraced;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_57 iE_Extensions;
} RNCTraceInformation;


extern const ASN1CType asn1_type_RNCTraceInformation[];

typedef enum {
  InformationTransferType_rNCTraceInformation,
} InformationTransferType_choice;

typedef struct InformationTransferType {
  InformationTransferType_choice choice;
  union {
    RNCTraceInformation rNCTraceInformation;
  } u;
} InformationTransferType;

extern const ASN1CType asn1_type_InformationTransferType[];

typedef struct PermittedIntegrityProtectionAlgorithms {
  IntegrityProtectionAlgorithm *tab;
  int count;
} PermittedIntegrityProtectionAlgorithms;

extern const ASN1CType asn1_type_PermittedIntegrityProtectionAlgorithms[];

typedef ASN1BitString IntegrityProtectionKey;

extern const ASN1CType asn1_type_IntegrityProtectionKey[];

typedef struct ProtocolExtensionField_28 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_28;


extern const ASN1CType asn1_type_ProtocolExtensionField_28[];

typedef struct ProtocolExtensionContainer_28 {
  ProtocolExtensionField_28 *tab;
  int count;
} ProtocolExtensionContainer_28;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_28[];

typedef struct IntegrityProtectionInformation {
  PermittedIntegrityProtectionAlgorithms permittedAlgorithms;
  IntegrityProtectionKey key;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_28 iE_Extensions;
} IntegrityProtectionInformation;


extern const ASN1CType asn1_type_IntegrityProtectionInformation[];

typedef ASN1String RIMInformation;

extern const ASN1CType asn1_type_RIMInformation[];

typedef struct ProtocolExtensionField_76 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_76;


extern const ASN1CType asn1_type_ProtocolExtensionField_76[];

typedef struct ProtocolExtensionContainer_76 {
  ProtocolExtensionField_76 *tab;
  int count;
} ProtocolExtensionContainer_76;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_76[];

typedef struct TargetRNC_ID {
  LAI lAI;
  BOOL rAC_option;
  RAC rAC;
  RNC_ID rNC_ID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_76 iE_Extensions;
} TargetRNC_ID;


extern const ASN1CType asn1_type_TargetRNC_ID[];

typedef struct ProtocolExtensionField_75 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_75;


extern const ASN1CType asn1_type_ProtocolExtensionField_75[];

typedef struct ProtocolExtensionContainer_75 {
  ProtocolExtensionField_75 *tab;
  int count;
} ProtocolExtensionContainer_75;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_75[];

typedef ASN1String TAC;

extern const ASN1CType asn1_type_TAC[];

typedef struct ProtocolExtensionField_74 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_74;


extern const ASN1CType asn1_type_ProtocolExtensionField_74[];

typedef struct ProtocolExtensionContainer_74 {
  ProtocolExtensionField_74 *tab;
  int count;
} ProtocolExtensionContainer_74;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_74[];

typedef struct TAI {
  PLMNidentity pLMNidentity;
  TAC tAC;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_74 iE_Extensions;
} TAI;


extern const ASN1CType asn1_type_TAI[];

typedef struct TargetENB_ID {
  PLMNidentity pLMNidentity;
  ENB_ID eNB_ID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_75 iE_Extensions;
  TAI selectedTAI;
} TargetENB_ID;


extern const ASN1CType asn1_type_TargetENB_ID[];

typedef enum {
  RIMRoutingAddress_targetRNC_ID,
  RIMRoutingAddress_gERAN_Cell_ID,
  RIMRoutingAddress_targeteNB_ID,
} RIMRoutingAddress_choice;

typedef struct RIMRoutingAddress {
  RIMRoutingAddress_choice choice;
  union {
    TargetRNC_ID targetRNC_ID;
    GERAN_Cell_ID gERAN_Cell_ID;
    TargetENB_ID targeteNB_ID;
  } u;
} RIMRoutingAddress;

extern const ASN1CType asn1_type_RIMRoutingAddress[];

typedef struct ProtocolExtensionField_56 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_56;


extern const ASN1CType asn1_type_ProtocolExtensionField_56[];

typedef struct ProtocolExtensionContainer_56 {
  ProtocolExtensionField_56 *tab;
  int count;
} ProtocolExtensionContainer_56;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_56[];

typedef struct RIM_Transfer {
  RIMInformation rIMInformation;
  BOOL rIMRoutingAddress_option;
  RIMRoutingAddress rIMRoutingAddress;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_56 iE_Extensions;
} RIM_Transfer;


extern const ASN1CType asn1_type_RIM_Transfer[];

typedef enum {
  InterSystemInformationTransferType_rIM_Transfer,
} InterSystemInformationTransferType_choice;

typedef struct InterSystemInformationTransferType {
  InterSystemInformationTransferType_choice choice;
  union {
    RIM_Transfer rIM_Transfer;
  } u;
} InterSystemInformationTransferType;

extern const ASN1CType asn1_type_InterSystemInformationTransferType[];

typedef struct ProtocolExtensionField_29 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_29;


extern const ASN1CType asn1_type_ProtocolExtensionField_29[];

typedef struct ProtocolExtensionContainer_29 {
  ProtocolExtensionField_29 *tab;
  int count;
} ProtocolExtensionContainer_29;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_29[];

typedef struct InterSystemInformation_TransparentContainer {
  BOOL downlinkCellLoadInformation_option;
  CellLoadInformation downlinkCellLoadInformation;
  BOOL uplinkCellLoadInformation_option;
  CellLoadInformation uplinkCellLoadInformation;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_29 iE_Extensions;
} InterSystemInformation_TransparentContainer;


extern const ASN1CType asn1_type_InterSystemInformation_TransparentContainer[];

typedef ASN1BitString IuSignallingConnectionIdentifier;

extern const ASN1CType asn1_type_IuSignallingConnectionIdentifier[];

typedef enum {
  IuTransportAssociation_gTP_TEI,
  IuTransportAssociation_bindingID,
} IuTransportAssociation_choice;

typedef struct IuTransportAssociation {
  IuTransportAssociation_choice choice;
  union {
    GTP_TEI gTP_TEI;
    BindingID bindingID;
  } u;
} IuTransportAssociation;

extern const ASN1CType asn1_type_IuTransportAssociation[];

typedef enum KeyStatus {
  KeyStatus_old,
  KeyStatus_New,
} KeyStatus;

extern const ASN1CType asn1_type_KeyStatus[];

typedef struct ListOF_SNAs {
  SNAC *tab;
  int count;
} ListOF_SNAs;

extern const ASN1CType asn1_type_ListOF_SNAs[];

typedef struct ProtocolExtensionField_30 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_30;


extern const ASN1CType asn1_type_ProtocolExtensionField_30[];

typedef struct ProtocolExtensionContainer_30 {
  ProtocolExtensionField_30 *tab;
  int count;
} ProtocolExtensionContainer_30;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_30[];

typedef struct LA_LIST_1 {
  LAC lAC;
  ListOF_SNAs listOF_SNAs;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_30 iE_Extensions;
} LA_LIST_1;


extern const ASN1CType asn1_type_LA_LIST_1[];

typedef struct LA_LIST {
  LA_LIST_1 *tab;
  int count;
} LA_LIST;

extern const ASN1CType asn1_type_LA_LIST[];

typedef struct ProtocolExtensionField_32 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_32;


extern const ASN1CType asn1_type_ProtocolExtensionField_32[];

typedef struct ProtocolExtensionContainer_32 {
  ProtocolExtensionField_32 *tab;
  int count;
} ProtocolExtensionContainer_32;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_32[];

typedef struct LastKnownServiceArea {
  SAI sAI;
  int ageOfSAI;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_32 iE_Extensions;
} LastKnownServiceArea;


extern const ASN1CType asn1_type_LastKnownServiceArea[];

typedef struct ProtocolExtensionField_86 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_86;


extern const ASN1CType asn1_type_ProtocolExtensionField_86[];

typedef struct ProtocolExtensionContainer_86 {
  ProtocolExtensionField_86 *tab;
  int count;
} ProtocolExtensionContainer_86;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_86[];

typedef struct UTRAN_CellID {
  PLMNidentity pLMNidentity;
  TargetCellId cellID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_86 iE_Extensions;
} UTRAN_CellID;


extern const ASN1CType asn1_type_UTRAN_CellID[];

typedef int Time_UE_StayedInCell;

extern const ASN1CType asn1_type_Time_UE_StayedInCell[];

typedef struct ProtocolExtensionField_33 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_33;


extern const ASN1CType asn1_type_ProtocolExtensionField_33[];

typedef struct ProtocolExtensionContainer_33 {
  ProtocolExtensionField_33 *tab;
  int count;
} ProtocolExtensionContainer_33;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_33[];

typedef struct LastVisitedUTRANCell_Item {
  UTRAN_CellID uTRAN_CellID;
  CellType cellType;
  Time_UE_StayedInCell time_UE_StayedInCell;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_33 iE_Extensions;
} LastVisitedUTRANCell_Item;


extern const ASN1CType asn1_type_LastVisitedUTRANCell_Item[];

typedef int Time_UE_StayedInCell_EnhancedGranularity;

extern const ASN1CType asn1_type_Time_UE_StayedInCell_EnhancedGranularity[];

typedef ASN1String LHN_ID;

extern const ASN1CType asn1_type_LHN_ID[];

typedef enum InterfacesToTraceItem_1 {
  InterfacesToTraceItem_1_iu_cs,
  InterfacesToTraceItem_1_iu_ps,
  InterfacesToTraceItem_1_iur,
  InterfacesToTraceItem_1_iub,
  InterfacesToTraceItem_1_uu,
} InterfacesToTraceItem_1;

extern const ASN1CType asn1_type_InterfacesToTraceItem_1[];

typedef struct ProtocolExtensionField_34 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_34;


extern const ASN1CType asn1_type_ProtocolExtensionField_34[];

typedef struct ProtocolExtensionContainer_34 {
  ProtocolExtensionField_34 *tab;
  int count;
} ProtocolExtensionContainer_34;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_34[];

typedef struct InterfacesToTraceItem {
  InterfacesToTraceItem_1 interface;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_34 iE_Extensions;
} InterfacesToTraceItem;


extern const ASN1CType asn1_type_InterfacesToTraceItem[];

typedef struct ListOfInterfacesToTrace {
  InterfacesToTraceItem *tab;
  int count;
} ListOfInterfacesToTrace;

extern const ASN1CType asn1_type_ListOfInterfacesToTrace[];

typedef enum RequestedLocationRelatedDataType {
  RequestedLocationRelatedDataType_decipheringKeysUEBasedOTDOA,
  RequestedLocationRelatedDataType_decipheringKeysAssistedGPS,
  RequestedLocationRelatedDataType_dedicatedAssistanceDataUEBasedOTDOA,
  RequestedLocationRelatedDataType_dedicatedAssistanceDataAssistedGPS,
  RequestedLocationRelatedDataType_decipheringKeysAssistedGANSS,
  RequestedLocationRelatedDataType_dedicatedAssistanceDataAssistedGANSS,
  RequestedLocationRelatedDataType_decipheringKeysAssistedGPSandGANSS,
  RequestedLocationRelatedDataType_dedicatedAssistanceDataAssistedGPSandGANSS,
} RequestedLocationRelatedDataType;

extern const ASN1CType asn1_type_RequestedLocationRelatedDataType[];

typedef ASN1String RequestedGPSAssistanceData;

extern const ASN1CType asn1_type_RequestedGPSAssistanceData[];

typedef struct LocationRelatedDataRequestType {
  RequestedLocationRelatedDataType requestedLocationRelatedDataType;
  BOOL requestedGPSAssistanceData_option;
  RequestedGPSAssistanceData requestedGPSAssistanceData;
} LocationRelatedDataRequestType;


extern const ASN1CType asn1_type_LocationRelatedDataRequestType[];

typedef enum LocationRelatedDataRequestTypeSpecificToGERANIuMode {
  LocationRelatedDataRequestTypeSpecificToGERANIuMode_decipheringKeysEOTD,
  LocationRelatedDataRequestTypeSpecificToGERANIuMode_dedicatedMobileAssistedEOTDAssistanceData,
  LocationRelatedDataRequestTypeSpecificToGERANIuMode_dedicatedMobileBasedEOTDAssistanceData,
} LocationRelatedDataRequestTypeSpecificToGERANIuMode;

extern const ASN1CType asn1_type_LocationRelatedDataRequestTypeSpecificToGERANIuMode[];

typedef enum ReportChangeOfSAI {
  ReportChangeOfSAI_requested,
} ReportChangeOfSAI;

extern const ASN1CType asn1_type_ReportChangeOfSAI[];

typedef enum PeriodicReportingIndicator {
  PeriodicReportingIndicator_periodicSAI,
  PeriodicReportingIndicator_periodicGeo,
} PeriodicReportingIndicator;

extern const ASN1CType asn1_type_PeriodicReportingIndicator[];

typedef enum DirectReportingIndicator {
  DirectReportingIndicator_directSAI,
  DirectReportingIndicator_directGeo,
} DirectReportingIndicator;

extern const ASN1CType asn1_type_DirectReportingIndicator[];

typedef int VerticalAccuracyCode;

extern const ASN1CType asn1_type_VerticalAccuracyCode[];

typedef enum PositioningPriority {
  PositioningPriority_high_Priority,
  PositioningPriority_normal_Priority,
} PositioningPriority;

extern const ASN1CType asn1_type_PositioningPriority[];

typedef enum ResponseTime {
  ResponseTime_lowdelay,
  ResponseTime_delaytolerant,
} ResponseTime;

extern const ASN1CType asn1_type_ResponseTime[];

typedef struct ProtocolExtensionField_41 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_41;


extern const ASN1CType asn1_type_ProtocolExtensionField_41[];

typedef struct ProtocolExtensionContainer_41 {
  ProtocolExtensionField_41 *tab;
  int count;
} ProtocolExtensionContainer_41;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_41[];

typedef struct PeriodicLocationInfo {
  int reportingAmount;
  int reportingInterval;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_41 iE_Extensions;
} PeriodicLocationInfo;


extern const ASN1CType asn1_type_PeriodicLocationInfo[];

typedef struct ProtocolExtensionField_35 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_35;


extern const ASN1CType asn1_type_ProtocolExtensionField_35[];

typedef struct ProtocolExtensionContainer_35 {
  ProtocolExtensionField_35 *tab;
  int count;
} ProtocolExtensionContainer_35;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_35[];

typedef struct LocationReportingTransferInformation {
  BOOL reportChangeOfSAI_option;
  ReportChangeOfSAI reportChangeOfSAI;
  BOOL periodicReportingIndicator_option;
  PeriodicReportingIndicator periodicReportingIndicator;
  BOOL directReportingIndicator_option;
  DirectReportingIndicator directReportingIndicator;
  BOOL verticalAccuracyCode_option;
  VerticalAccuracyCode verticalAccuracyCode;
  BOOL positioningPriorityChangeSAI_option;
  PositioningPriority positioningPriorityChangeSAI;
  BOOL positioningPriorityDirect_option;
  PositioningPriority positioningPriorityDirect;
  BOOL clientTypePeriodic_option;
  ClientType clientTypePeriodic;
  BOOL clientTypeDirect_option;
  ClientType clientTypeDirect;
  BOOL responseTime_option;
  ResponseTime responseTime;
  BOOL includeVelocity_option;
  IncludeVelocity includeVelocity;
  BOOL periodicLocationInfo_option;
  PeriodicLocationInfo periodicLocationInfo;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_35 iE_Extensions;
} LocationReportingTransferInformation;


extern const ASN1CType asn1_type_LocationReportingTransferInformation[];

typedef ASN1String L3_Information;

extern const ASN1CType asn1_type_L3_Information[];

typedef enum Management_Based_MDT_Allowed {
  Management_Based_MDT_Allowed_allowed,
} Management_Based_MDT_Allowed;

extern const ASN1CType asn1_type_Management_Based_MDT_Allowed[];

typedef ASN1BitString MBMS_PTP_RAB_ID;

extern const ASN1CType asn1_type_MBMS_PTP_RAB_ID[];

typedef enum MBMSBearerServiceType {
  MBMSBearerServiceType_multicast,
  MBMSBearerServiceType_broadcast,
} MBMSBearerServiceType;

extern const ASN1CType asn1_type_MBMSBearerServiceType[];

typedef enum MBMSCNDe_Registration {
  MBMSCNDe_Registration_normalsessionstop,
  MBMSCNDe_Registration_deregister,
} MBMSCNDe_Registration;

extern const ASN1CType asn1_type_MBMSCNDe_Registration[];

typedef enum MBMSCountingInformation {
  MBMSCountingInformation_counting,
  MBMSCountingInformation_notcounting,
} MBMSCountingInformation;

extern const ASN1CType asn1_type_MBMSCountingInformation[];

typedef enum MBMSHCIndicator {
  MBMSHCIndicator_uncompressed_header,
  MBMSHCIndicator_compressed_header,
} MBMSHCIndicator;

extern const ASN1CType asn1_type_MBMSHCIndicator[];

typedef enum MBMSLinkingInformation {
  MBMSLinkingInformation_uE_has_joined_multicast_services,
} MBMSLinkingInformation;

extern const ASN1CType asn1_type_MBMSLinkingInformation[];

typedef enum MBMSRegistrationRequestType {
  MBMSRegistrationRequestType_Register,
  MBMSRegistrationRequestType_deregister,
} MBMSRegistrationRequestType;

extern const ASN1CType asn1_type_MBMSRegistrationRequestType[];

typedef ASN1String MBMSServiceArea;

extern const ASN1CType asn1_type_MBMSServiceArea[];

typedef ASN1String MBMSSessionDuration;

extern const ASN1CType asn1_type_MBMSSessionDuration[];

typedef ASN1String MBMSSessionIdentity;

extern const ASN1CType asn1_type_MBMSSessionIdentity[];

typedef ASN1String MBMSSessionRepetitionNumber;

extern const ASN1CType asn1_type_MBMSSessionRepetitionNumber[];

typedef enum MDT_Activation {
  MDT_Activation_immediateMDTonly,
  MDT_Activation_loggedMDTonly,
  MDT_Activation_immediateMDTandTrace,
} MDT_Activation;

extern const ASN1CType asn1_type_MDT_Activation[];

typedef struct LAI_List {
  LAI *tab;
  int count;
} LAI_List;

extern const ASN1CType asn1_type_LAI_List[];

typedef struct ProtocolExtensionField_42 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_42;


extern const ASN1CType asn1_type_ProtocolExtensionField_42[];

typedef struct ProtocolExtensionContainer_42 {
  ProtocolExtensionField_42 *tab;
  int count;
} ProtocolExtensionContainer_42;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_42[];

typedef struct LABased {
  LAI_List laiList;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_42 iE_Extensions;
} LABased;


extern const ASN1CType asn1_type_LABased[];

typedef struct ProtocolExtensionField_51 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_51;


extern const ASN1CType asn1_type_ProtocolExtensionField_51[];

typedef struct ProtocolExtensionContainer_51 {
  ProtocolExtensionField_51 *tab;
  int count;
} ProtocolExtensionContainer_51;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_51[];

typedef struct RAI {
  LAI lAI;
  RAC rAC;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_51 iE_Extensions;
} RAI;


extern const ASN1CType asn1_type_RAI[];

typedef struct RAI_List {
  RAI *tab;
  int count;
} RAI_List;

extern const ASN1CType asn1_type_RAI_List[];

typedef struct ProtocolExtensionField_46 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_46;


extern const ASN1CType asn1_type_ProtocolExtensionField_46[];

typedef struct ProtocolExtensionContainer_46 {
  ProtocolExtensionField_46 *tab;
  int count;
} ProtocolExtensionContainer_46;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_46[];

typedef struct RABased {
  RAI_List raiList;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_46 iE_Extensions;
} RABased;


extern const ASN1CType asn1_type_RABased[];

typedef enum {
  MDTAreaScope_cellbased,
  MDTAreaScope_labased,
  MDTAreaScope_rabased,
  MDTAreaScope_plmn_area_based,
} MDTAreaScope_choice;

typedef struct MDTAreaScope {
  MDTAreaScope_choice choice;
  union {
    CellBased cellbased;
    LABased labased;
    RABased rabased;
  } u;
} MDTAreaScope;

extern const ASN1CType asn1_type_MDTAreaScope[];

typedef enum LoggingInterval {
  LoggingInterval_s1d28,
  LoggingInterval_s2d56,
  LoggingInterval_s5d12,
  LoggingInterval_s10d24,
  LoggingInterval_s20d48,
  LoggingInterval_s30d72,
  LoggingInterval_s40d96,
  LoggingInterval_s61d44,
} LoggingInterval;

extern const ASN1CType asn1_type_LoggingInterval[];

typedef enum LoggingDuration {
  LoggingDuration_min10,
  LoggingDuration_min20,
  LoggingDuration_min40,
  LoggingDuration_min60,
  LoggingDuration_min90,
  LoggingDuration_min120,
} LoggingDuration;

extern const ASN1CType asn1_type_LoggingDuration[];

typedef struct ProtocolExtensionField_43 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_43;


extern const ASN1CType asn1_type_ProtocolExtensionField_43[];

typedef struct ProtocolExtensionContainer_43 {
  ProtocolExtensionField_43 *tab;
  int count;
} ProtocolExtensionContainer_43;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_43[];

typedef struct LoggedMDT {
  LoggingInterval loggingInterval;
  LoggingDuration loggingDuration;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_43 iE_Extensions;
} LoggedMDT;


extern const ASN1CType asn1_type_LoggedMDT[];

typedef enum {
  MDTMode_immediateMDT,
  MDTMode_loggedMDT,
} MDTMode_choice;

typedef struct MDTMode {
  MDTMode_choice choice;
  union {
    ImmediateMDT immediateMDT;
    LoggedMDT loggedMDT;
  } u;
} MDTMode;

extern const ASN1CType asn1_type_MDTMode[];

typedef struct ProtocolExtensionField_39 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_39;


extern const ASN1CType asn1_type_ProtocolExtensionField_39[];

typedef struct ProtocolExtensionContainer_39 {
  ProtocolExtensionField_39 *tab;
  int count;
} ProtocolExtensionContainer_39;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_39[];

typedef struct MDT_Configuration {
  MDT_Activation mdtActivation;
  MDTAreaScope mdtAreaScope;
  MDTMode mdtMode;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_39 iE_Extensions;
} MDT_Configuration;


extern const ASN1CType asn1_type_MDT_Configuration[];

typedef struct MDT_PLMN_List {
  PLMNidentity *tab;
  int count;
} MDT_PLMN_List;

extern const ASN1CType asn1_type_MDT_PLMN_List[];

typedef ASN1String MSISDN;

extern const ASN1CType asn1_type_MSISDN[];

typedef ASN1String NAS_PDU;

extern const ASN1CType asn1_type_NAS_PDU[];

typedef ASN1BitString NAS_SequenceNumber;

extern const ASN1CType asn1_type_NAS_SequenceNumber[];

typedef ASN1BitString NAS_SynchronisationIndicator;

extern const ASN1CType asn1_type_NAS_SynchronisationIndicator[];

typedef ASN1String NewBSS_To_OldBSS_Information;

extern const ASN1CType asn1_type_NewBSS_To_OldBSS_Information[];

typedef enum NonSearchingIndication {
  NonSearchingIndication_non_searching,
  NonSearchingIndication_searching,
} NonSearchingIndication;

extern const ASN1CType asn1_type_NonSearchingIndication[];

typedef int NumberOfIuInstances;

extern const ASN1CType asn1_type_NumberOfIuInstances[];

typedef int NumberOfSteps;

extern const ASN1CType asn1_type_NumberOfSteps[];

typedef ASN1String Offload_RAB_Parameters_APN;

extern const ASN1CType asn1_type_Offload_RAB_Parameters_APN[];

typedef ASN1String Offload_RAB_Parameters_ChargingCharacteristics;

extern const ASN1CType asn1_type_Offload_RAB_Parameters_ChargingCharacteristics[];

typedef struct ProtocolExtensionField_40 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_40;


extern const ASN1CType asn1_type_ProtocolExtensionField_40[];

typedef struct ProtocolExtensionContainer_40 {
  ProtocolExtensionField_40 *tab;
  int count;
} ProtocolExtensionContainer_40;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_40[];

typedef struct Offload_RAB_Parameters {
  Offload_RAB_Parameters_APN accessPointName;
  Offload_RAB_Parameters_ChargingCharacteristics chargingCharacteristics;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_40 iE_Extensions;
} Offload_RAB_Parameters;


extern const ASN1CType asn1_type_Offload_RAB_Parameters[];

typedef ASN1String OldBSS_ToNewBSS_Information;

extern const ASN1CType asn1_type_OldBSS_ToNewBSS_Information[];

typedef ASN1String OMC_ID;

extern const ASN1CType asn1_type_OMC_ID[];

typedef enum Out_Of_UTRAN {
  Out_Of_UTRAN_cell_reselection_to_EUTRAN,
} Out_Of_UTRAN;

extern const ASN1CType asn1_type_Out_Of_UTRAN[];

typedef enum {
  PagingAreaID_lAI,
  PagingAreaID_rAI,
} PagingAreaID_choice;

typedef struct PagingAreaID {
  PagingAreaID_choice choice;
  union {
    LAI lAI;
    RAI rAI;
  } u;
} PagingAreaID;

extern const ASN1CType asn1_type_PagingAreaID[];

typedef enum PagingCause {
  PagingCause_terminating_conversational_call,
  PagingCause_terminating_streaming_call,
  PagingCause_terminating_interactive_call,
  PagingCause_terminating_background_call,
  PagingCause_terminating_low_priority_signalling,
  PagingCause_terminating_high_priority_signalling,
} PagingCause;

extern const ASN1CType asn1_type_PagingCause[];

typedef enum PDP_Type {
  PDP_Type_empty,
  PDP_Type_ppp,
  PDP_Type_osp_ihoss,
  PDP_Type_ipv4,
  PDP_Type_ipv6,
} PDP_Type;

extern const ASN1CType asn1_type_PDP_Type[];

typedef struct PDP_TypeInformation {
  PDP_Type *tab;
  int count;
} PDP_TypeInformation;

extern const ASN1CType asn1_type_PDP_TypeInformation[];

typedef enum PDP_Type_extension {
  PDP_Type_extension_ipv4_and_ipv6,
} PDP_Type_extension;

extern const ASN1CType asn1_type_PDP_Type_extension[];

typedef struct PDP_TypeInformation_extension {
  PDP_Type_extension *tab;
  int count;
} PDP_TypeInformation_extension;

extern const ASN1CType asn1_type_PDP_TypeInformation_extension[];

typedef int PDUType14FrameSequenceNumber;

extern const ASN1CType asn1_type_PDUType14FrameSequenceNumber[];

typedef struct ProtocolExtensionField_44 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_44;


extern const ASN1CType asn1_type_ProtocolExtensionField_44[];

typedef struct ProtocolExtensionContainer_44 {
  ProtocolExtensionField_44 *tab;
  int count;
} ProtocolExtensionContainer_44;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_44[];

typedef struct PLMNs_in_shared_network_1 {
  PLMNidentity pLMNidentity;
  LA_LIST lA_LIST;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_44 iE_Extensions;
} PLMNs_in_shared_network_1;


extern const ASN1CType asn1_type_PLMNs_in_shared_network_1[];

typedef struct PLMNs_in_shared_network {
  PLMNs_in_shared_network_1 *tab;
  int count;
} PLMNs_in_shared_network;

extern const ASN1CType asn1_type_PLMNs_in_shared_network[];

typedef ASN1String Port_Number;

extern const ASN1CType asn1_type_Port_Number[];

typedef ASN1BitString PositioningDataDiscriminator;

extern const ASN1CType asn1_type_PositioningDataDiscriminator[];

typedef ASN1String PositioningMethodAndUsage;

extern const ASN1CType asn1_type_PositioningMethodAndUsage[];

typedef struct PositioningDataSet {
  PositioningMethodAndUsage *tab;
  int count;
} PositioningDataSet;

extern const ASN1CType asn1_type_PositioningDataSet[];

typedef struct ProtocolExtensionField_45 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_45;


extern const ASN1CType asn1_type_ProtocolExtensionField_45[];

typedef struct ProtocolExtensionContainer_45 {
  ProtocolExtensionField_45 *tab;
  int count;
} ProtocolExtensionContainer_45;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_45[];

typedef struct PositionData {
  PositioningDataDiscriminator positioningDataDiscriminator;
  BOOL positioningDataSet_option;
  PositioningDataSet positioningDataSet;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_45 iE_Extensions;
} PositionData;


extern const ASN1CType asn1_type_PositionData[];

typedef ASN1String PositionDataSpecificToGERANIuMode;

extern const ASN1CType asn1_type_PositionDataSpecificToGERANIuMode[];

typedef ASN1BitString Priority_Class_Indicator;

extern const ASN1CType asn1_type_Priority_Class_Indicator[];

typedef struct ProtocolExtensionField_61 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_61;


extern const ASN1CType asn1_type_ProtocolExtensionField_61[];

typedef struct ProtocolExtensionContainer_61 {
  ProtocolExtensionField_61 *tab;
  int count;
} ProtocolExtensionContainer_61;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_61[];

typedef struct Shared_Network_Information {
  PLMNs_in_shared_network pLMNs_in_shared_network;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_61 iE_Extensions;
} Shared_Network_Information;


extern const ASN1CType asn1_type_Shared_Network_Information[];

typedef enum {
  ProvidedData_shared_network_information,
} ProvidedData_choice;

typedef struct ProvidedData {
  ProvidedData_choice choice;
  union {
    Shared_Network_Information shared_network_information;
  } u;
} ProvidedData;

extern const ASN1CType asn1_type_ProvidedData[];

typedef ASN1String P_TMSI;

extern const ASN1CType asn1_type_P_TMSI[];

typedef unsigned int UnsuccessfullyTransmittedDataVolume;

extern const ASN1CType asn1_type_UnsuccessfullyTransmittedDataVolume[];

typedef struct ProtocolExtensionField_47 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_47;


extern const ASN1CType asn1_type_ProtocolExtensionField_47[];

typedef struct ProtocolExtensionContainer_47 {
  ProtocolExtensionField_47 *tab;
  int count;
} ProtocolExtensionContainer_47;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_47[];

typedef struct RABDataVolumeReport_1 {
  UnsuccessfullyTransmittedDataVolume dl_UnsuccessfullyTransmittedDataVolume;
  BOOL dataVolumeReference_option;
  DataVolumeReference dataVolumeReference;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_47 iE_Extensions;
} RABDataVolumeReport_1;


extern const ASN1CType asn1_type_RABDataVolumeReport_1[];

typedef struct RABDataVolumeReport {
  RABDataVolumeReport_1 *tab;
  int count;
} RABDataVolumeReport;

extern const ASN1CType asn1_type_RABDataVolumeReport[];

typedef ASN1BitString RAB_ID;

extern const ASN1CType asn1_type_RAB_ID[];

typedef struct RAB_Parameter_ExtendedGuaranteedBitrateList {
  ExtendedGuaranteedBitrate *tab;
  int count;
} RAB_Parameter_ExtendedGuaranteedBitrateList;

extern const ASN1CType asn1_type_RAB_Parameter_ExtendedGuaranteedBitrateList[];

typedef struct RAB_Parameter_ExtendedMaxBitrateList {
  ExtendedMaxBitrate *tab;
  int count;
} RAB_Parameter_ExtendedMaxBitrateList;

extern const ASN1CType asn1_type_RAB_Parameter_ExtendedMaxBitrateList[];

typedef enum SignallingIndication {
  SignallingIndication_signalling,
} SignallingIndication;

extern const ASN1CType asn1_type_SignallingIndication[];

typedef ASN1String UPInitialisationFrame;

extern const ASN1CType asn1_type_UPInitialisationFrame[];

typedef struct ProtocolExtensionField_85 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_85;


extern const ASN1CType asn1_type_ProtocolExtensionField_85[];

typedef struct ProtocolExtensionContainer_85 {
  ProtocolExtensionField_85 *tab;
  int count;
} ProtocolExtensionContainer_85;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_85[];

typedef struct UPInformation {
  FrameSequenceNumber frameSeqNoUL;
  FrameSequenceNumber frameSeqNoDL;
  PDUType14FrameSequenceNumber pdu14FrameSeqNoUL;
  PDUType14FrameSequenceNumber pdu14FrameSeqNoDL;
  DataPDUType dataPDUType;
  UPInitialisationFrame upinitialisationFrame;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_85 iE_Extensions;
} UPInformation;


extern const ASN1CType asn1_type_UPInformation[];

typedef struct ProtocolExtensionField_49 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_49;


extern const ASN1CType asn1_type_ProtocolExtensionField_49[];

typedef struct ProtocolExtensionContainer_49 {
  ProtocolExtensionField_49 *tab;
  int count;
} ProtocolExtensionContainer_49;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_49[];

typedef struct RABParametersList_1 {
  RAB_ID rab_Id;
  CN_DomainIndicator cn_domain;
  BOOL rabDataVolumeReport_option;
  RABDataVolumeReport rabDataVolumeReport;
  BOOL upInformation_option;
  UPInformation upInformation;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_49 iE_Extensions;
} RABParametersList_1;


extern const ASN1CType asn1_type_RABParametersList_1[];

typedef struct RABParametersList {
  RABParametersList_1 *tab;
  int count;
} RABParametersList;

extern const ASN1CType asn1_type_RABParametersList[];

typedef int USCH_ID;

extern const ASN1CType asn1_type_USCH_ID[];

typedef struct ProtocolExtensionField_82 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_82;


extern const ASN1CType asn1_type_ProtocolExtensionField_82[];

typedef struct ProtocolExtensionContainer_82 {
  ProtocolExtensionField_82 *tab;
  int count;
} ProtocolExtensionContainer_82;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_82[];

typedef struct TrCH_ID {
  BOOL dCH_ID_option;
  DCH_ID dCH_ID;
  BOOL dSCH_ID_option;
  DSCH_ID dSCH_ID;
  BOOL uSCH_ID_option;
  USCH_ID uSCH_ID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_82 iE_Extensions;
} TrCH_ID;


extern const ASN1CType asn1_type_TrCH_ID[];

typedef struct TrCH_ID_List {
  TrCH_ID *tab;
  int count;
} TrCH_ID_List;

extern const ASN1CType asn1_type_TrCH_ID_List[];

typedef struct ProtocolExtensionField_50 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_50;


extern const ASN1CType asn1_type_ProtocolExtensionField_50[];

typedef struct ProtocolExtensionContainer_50 {
  ProtocolExtensionField_50 *tab;
  int count;
} ProtocolExtensionContainer_50;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_50[];

typedef struct RAB_TrCH_MappingItem {
  RAB_ID rAB_ID;
  TrCH_ID_List trCH_ID_List;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_50 iE_Extensions;
} RAB_TrCH_MappingItem;


extern const ASN1CType asn1_type_RAB_TrCH_MappingItem[];

typedef struct RAB_TrCH_Mapping {
  RAB_TrCH_MappingItem *tab;
  int count;
} RAB_TrCH_Mapping;

extern const ASN1CType asn1_type_RAB_TrCH_Mapping[];

typedef struct RAofIdleModeUEs {
  RAC *tab;
  int count;
} RAofIdleModeUEs;

extern const ASN1CType asn1_type_RAofIdleModeUEs[];

typedef struct ProtocolExtensionField_52 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_52;


extern const ASN1CType asn1_type_ProtocolExtensionField_52[];

typedef struct ProtocolExtensionContainer_52 {
  ProtocolExtensionField_52 *tab;
  int count;
} ProtocolExtensionContainer_52;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_52[];

typedef struct NotEmptyRAListofIdleModeUEs {
  RAofIdleModeUEs rAofIdleModeUEs;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_52 iE_Extensions;
} NotEmptyRAListofIdleModeUEs;


extern const ASN1CType asn1_type_NotEmptyRAListofIdleModeUEs[];

typedef enum RAListofIdleModeUEs_1 {
  RAListofIdleModeUEs_1_emptylist,
  RAListofIdleModeUEs_1_fulllist,
} RAListofIdleModeUEs_1;

extern const ASN1CType asn1_type_RAListofIdleModeUEs_1[];

typedef enum {
  RAListofIdleModeUEs_notEmptyRAListofIdleModeUEs,
  RAListofIdleModeUEs_emptyFullRAListofIdleModeUEs,
} RAListofIdleModeUEs_choice;

typedef struct RAListofIdleModeUEs {
  RAListofIdleModeUEs_choice choice;
  union {
    NotEmptyRAListofIdleModeUEs notEmptyRAListofIdleModeUEs;
    RAListofIdleModeUEs_1 emptyFullRAListofIdleModeUEs;
  } u;
} RAListofIdleModeUEs;

extern const ASN1CType asn1_type_RAListofIdleModeUEs[];

typedef enum RAT_Type {
  RAT_Type_utran,
  RAT_Type_geran,
} RAT_Type;

extern const ASN1CType asn1_type_RAT_Type[];

typedef enum RateControlAllowed {
  RateControlAllowed_not_allowed,
  RateControlAllowed_allowed,
} RateControlAllowed;

extern const ASN1CType asn1_type_RateControlAllowed[];

typedef ASN1Null RedirectAttemptFlag;

extern const ASN1CType asn1_type_RedirectAttemptFlag[];

typedef enum RedirectionCompleted {
  RedirectionCompleted_redirection_completed,
} RedirectionCompleted;

extern const ASN1CType asn1_type_RedirectionCompleted[];

typedef enum RejectCauseValue {
  RejectCauseValue_pLMN_Not_Allowed,
  RejectCauseValue_location_Area_Not_Allowed,
  RejectCauseValue_roaming_Not_Allowed_In_This_Location_Area,
  RejectCauseValue_no_Suitable_Cell_In_Location_Area,
  RejectCauseValue_gPRS_Services_Not_Allowed_In_This_PLMN,
  RejectCauseValue_cS_PS_coordination_required,
  RejectCauseValue_network_failure,
  RejectCauseValue_not_authorized_for_this_CSG,
} RejectCauseValue;

extern const ASN1CType asn1_type_RejectCauseValue[];

typedef enum RelocationType {
  RelocationType_ue_not_involved,
  RelocationType_ue_involved,
} RelocationType;

extern const ASN1CType asn1_type_RelocationType[];

typedef enum ReportArea {
  ReportArea_service_area,
  ReportArea_geographical_area,
} ReportArea;

extern const ASN1CType asn1_type_ReportArea[];

typedef ASN1String RequestedGANSSAssistanceData;

extern const ASN1CType asn1_type_RequestedGANSSAssistanceData[];

typedef struct Requested_RAB_Parameter_MaxBitrateList {
  MaxBitrate *tab;
  int count;
} Requested_RAB_Parameter_MaxBitrateList;

extern const ASN1CType asn1_type_Requested_RAB_Parameter_MaxBitrateList[];

typedef struct Requested_RAB_Parameter_GuaranteedBitrateList {
  GuaranteedBitrate *tab;
  int count;
} Requested_RAB_Parameter_GuaranteedBitrateList;

extern const ASN1CType asn1_type_Requested_RAB_Parameter_GuaranteedBitrateList[];

typedef struct ProtocolExtensionField_54 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_54;


extern const ASN1CType asn1_type_ProtocolExtensionField_54[];

typedef struct ProtocolExtensionContainer_54 {
  ProtocolExtensionField_54 *tab;
  int count;
} ProtocolExtensionContainer_54;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_54[];

typedef struct Requested_RAB_Parameter_Values {
  BOOL requestedMaxBitrates_option;
  Requested_RAB_Parameter_MaxBitrateList requestedMaxBitrates;
  BOOL requestedGuaranteedBitrates_option;
  Requested_RAB_Parameter_GuaranteedBitrateList requestedGuaranteedBitrates;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_54 iE_Extensions;
} Requested_RAB_Parameter_Values;


extern const ASN1CType asn1_type_Requested_RAB_Parameter_Values[];

typedef struct Requested_RAB_Parameter_ExtendedMaxBitrateList {
  ExtendedMaxBitrate *tab;
  int count;
} Requested_RAB_Parameter_ExtendedMaxBitrateList;

extern const ASN1CType asn1_type_Requested_RAB_Parameter_ExtendedMaxBitrateList[];

typedef struct Requested_RAB_Parameter_ExtendedGuaranteedBitrateList {
  ExtendedGuaranteedBitrate *tab;
  int count;
} Requested_RAB_Parameter_ExtendedGuaranteedBitrateList;

extern const ASN1CType asn1_type_Requested_RAB_Parameter_ExtendedGuaranteedBitrateList[];

typedef struct RequestType {
  Event event;
  ReportArea reportArea;
  BOOL accuracyCode_option;
  int accuracyCode;
} RequestType;


extern const ASN1CType asn1_type_RequestType[];

typedef int TraceRecordingSessionReference;

extern const ASN1CType asn1_type_TraceRecordingSessionReference[];

typedef ASN1BitString TransportLayerAddress;

extern const ASN1CType asn1_type_TransportLayerAddress[];

typedef enum {
  UE_ID_imsi,
  UE_ID_imei,
  UE_ID_imeisv,
} UE_ID_choice;

typedef struct UE_ID {
  UE_ID_choice choice;
  union {
    IMSI imsi;
    IMEI imei;
    IMEISV imeisv;
  } u;
} UE_ID;

extern const ASN1CType asn1_type_UE_ID[];

typedef enum TraceDepth {
  TraceDepth_minimum,
  TraceDepth_medium,
  TraceDepth_maximum,
} TraceDepth;

extern const ASN1CType asn1_type_TraceDepth[];

typedef struct ProtocolExtensionField_80 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_80;


extern const ASN1CType asn1_type_ProtocolExtensionField_80[];

typedef struct ProtocolExtensionContainer_80 {
  ProtocolExtensionField_80 *tab;
  int count;
} ProtocolExtensionContainer_80;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_80[];

typedef struct TracePropagationParameters {
  TraceRecordingSessionReference traceRecordingSessionReference;
  TraceDepth traceDepth;
  BOOL listOfInterfacesToTrace_option;
  ListOfInterfacesToTrace listOfInterfacesToTrace;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_80 iE_Extensions;
} TracePropagationParameters;


extern const ASN1CType asn1_type_TracePropagationParameters[];

typedef struct ProtocolExtensionField_79 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_79;


extern const ASN1CType asn1_type_ProtocolExtensionField_79[];

typedef struct ProtocolExtensionContainer_79 {
  ProtocolExtensionField_79 *tab;
  int count;
} ProtocolExtensionContainer_79;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_79[];

typedef struct TraceInformation {
  TraceReference traceReference;
  UE_ID ue_identity;
  BOOL tracePropagationParameters_option;
  TracePropagationParameters tracePropagationParameters;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_79 iE_Extensions;
} TraceInformation;


extern const ASN1CType asn1_type_TraceInformation[];

typedef struct ProtocolExtensionField_58 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_58;


extern const ASN1CType asn1_type_ProtocolExtensionField_58[];

typedef struct ProtocolExtensionContainer_58 {
  ProtocolExtensionField_58 *tab;
  int count;
} ProtocolExtensionContainer_58;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_58[];

typedef struct RNSAPRelocationParameters {
  BOOL rabParmetersList_option;
  RABParametersList rabParmetersList;
  BOOL locationReporting_option;
  LocationReportingTransferInformation locationReporting;
  BOOL traceInformation_option;
  TraceInformation traceInformation;
  BOOL sourceSAI_option;
  SAI sourceSAI;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_58 iE_Extensions;
} RNSAPRelocationParameters;


extern const ASN1CType asn1_type_RNSAPRelocationParameters[];

typedef ASN1String RRC_Container;

extern const ASN1CType asn1_type_RRC_Container[];

typedef enum RSRVCC_HO_Indication {
  RSRVCC_HO_Indication_ps_only,
} RSRVCC_HO_Indication;

extern const ASN1CType asn1_type_RSRVCC_HO_Indication[];

typedef struct ProtocolExtensionField_59 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_59;


extern const ASN1CType asn1_type_ProtocolExtensionField_59[];

typedef struct ProtocolExtensionContainer_59 {
  ProtocolExtensionField_59 *tab;
  int count;
} ProtocolExtensionContainer_59;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_59[];

typedef struct RSRVCC_Information {
  ASN1BitString nonce;
  ASN1String iMSInformation;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_59 iE_Extensions;
} RSRVCC_Information;


extern const ASN1CType asn1_type_RSRVCC_Information[];

typedef enum RSRVCC_Operation_Possible {
  RSRVCC_Operation_Possible_rsrvcc_possible,
} RSRVCC_Operation_Possible;

extern const ASN1CType asn1_type_RSRVCC_Operation_Possible[];

typedef enum SAPI {
  SAPI_sapi_0,
  SAPI_sapi_3,
} SAPI;

extern const ASN1CType asn1_type_SAPI[];

typedef int SessionUpdateID;

extern const ASN1CType asn1_type_SessionUpdateID[];

typedef enum Session_Re_establishment_Indicator {
  Session_Re_establishment_Indicator_True,
} Session_Re_establishment_Indicator;

extern const ASN1CType asn1_type_Session_Re_establishment_Indicator[];

typedef struct ProtocolExtensionField_65 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_65;


extern const ASN1CType asn1_type_ProtocolExtensionField_65[];

typedef struct ProtocolExtensionContainer_65 {
  ProtocolExtensionField_65 *tab;
  int count;
} ProtocolExtensionContainer_65;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_65[];

typedef struct SNA_Access_Information {
  AuthorisedPLMNs authorisedPLMNs;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_65 iE_Extensions;
} SNA_Access_Information;


extern const ASN1CType asn1_type_SNA_Access_Information[];

typedef enum Service_Handover {
  Service_Handover_handover_to_GSM_should_be_performed,
  Service_Handover_handover_to_GSM_should_not_be_performed,
  Service_Handover_handover_to_GSM_shall_not_be_performed,
} Service_Handover;

extern const ASN1CType asn1_type_Service_Handover[];

typedef ASN1String Source_ToTarget_TransparentContainer;

extern const ASN1CType asn1_type_Source_ToTarget_TransparentContainer[];

typedef ASN1String SourceeNodeB_ToTargeteNodeB_TransparentContainer;

extern const ASN1CType asn1_type_SourceeNodeB_ToTargeteNodeB_TransparentContainer[];

typedef ASN1String SourceBSS_ToTargetBSS_TransparentContainer;

extern const ASN1CType asn1_type_SourceBSS_ToTargetBSS_TransparentContainer[];

typedef struct ProtocolExtensionField_66 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_66;


extern const ASN1CType asn1_type_ProtocolExtensionField_66[];

typedef struct ProtocolExtensionContainer_66 {
  ProtocolExtensionField_66 *tab;
  int count;
} ProtocolExtensionContainer_66;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_66[];

typedef struct SourceRNC_ID {
  PLMNidentity pLMNidentity;
  RNC_ID rNC_ID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_66 iE_Extensions;
} SourceRNC_ID;


extern const ASN1CType asn1_type_SourceRNC_ID[];

typedef enum {
  SourceID_sourceRNC_ID,
  SourceID_sAI,
} SourceID_choice;

typedef struct SourceID {
  SourceID_choice choice;
  union {
    SourceRNC_ID sourceRNC_ID;
    SAI sAI;
  } u;
} SourceID;

extern const ASN1CType asn1_type_SourceID[];

typedef struct ProtocolExtensionField_67 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_67;


extern const ASN1CType asn1_type_ProtocolExtensionField_67[];

typedef struct ProtocolExtensionContainer_67 {
  ProtocolExtensionField_67 *tab;
  int count;
} ProtocolExtensionContainer_67;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_67[];

typedef struct SourceRNC_ToTargetRNC_TransparentContainer {
  RRC_Container rRC_Container;
  NumberOfIuInstances numberOfIuInstances;
  RelocationType relocationType;
  BOOL chosenIntegrityProtectionAlgorithm_option;
  ChosenIntegrityProtectionAlgorithm chosenIntegrityProtectionAlgorithm;
  BOOL integrityProtectionKey_option;
  IntegrityProtectionKey integrityProtectionKey;
  BOOL chosenEncryptionAlgorithForSignalling_option;
  ChosenEncryptionAlgorithm chosenEncryptionAlgorithForSignalling;
  BOOL cipheringKey_option;
  EncryptionKey cipheringKey;
  BOOL chosenEncryptionAlgorithForCS_option;
  ChosenEncryptionAlgorithm chosenEncryptionAlgorithForCS;
  BOOL chosenEncryptionAlgorithForPS_option;
  ChosenEncryptionAlgorithm chosenEncryptionAlgorithForPS;
  BOOL d_RNTI_option;
  D_RNTI d_RNTI;
  BOOL targetCellId_option;
  TargetCellId targetCellId;
  BOOL rAB_TrCH_Mapping_option;
  RAB_TrCH_Mapping rAB_TrCH_Mapping;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_67 iE_Extensions;
} SourceRNC_ToTargetRNC_TransparentContainer;


extern const ASN1CType asn1_type_SourceRNC_ToTargetRNC_TransparentContainer[];

typedef int SRB_ID;

extern const ASN1CType asn1_type_SRB_ID[];

typedef struct ProtocolExtensionField_72 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_72;


extern const ASN1CType asn1_type_ProtocolExtensionField_72[];

typedef struct ProtocolExtensionContainer_72 {
  ProtocolExtensionField_72 *tab;
  int count;
} ProtocolExtensionContainer_72;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_72[];

typedef struct SRB_TrCH_MappingItem {
  SRB_ID sRB_ID;
  TrCH_ID trCH_ID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_72 iE_Extensions;
} SRB_TrCH_MappingItem;


extern const ASN1CType asn1_type_SRB_TrCH_MappingItem[];

typedef struct SRB_TrCH_Mapping {
  SRB_TrCH_MappingItem *tab;
  int count;
} SRB_TrCH_Mapping;

extern const ASN1CType asn1_type_SRB_TrCH_Mapping[];

typedef struct ProtocolExtensionField_81 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_81;


extern const ASN1CType asn1_type_ProtocolExtensionField_81[];

typedef struct ProtocolExtensionContainer_81 {
  ProtocolExtensionField_81 *tab;
  int count;
} ProtocolExtensionContainer_81;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_81[];

typedef struct TraceRecordingSessionInformation {
  TraceReference traceReference;
  TraceRecordingSessionReference traceRecordingSessionReference;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_81 iE_Extensions;
} TraceRecordingSessionInformation;


extern const ASN1CType asn1_type_TraceRecordingSessionInformation[];

typedef ASN1String UE_History_Information;

extern const ASN1CType asn1_type_UE_History_Information[];

typedef int SubscriberProfileIDforRFP;

extern const ASN1CType asn1_type_SubscriberProfileIDforRFP[];

typedef struct ProtocolExtensionField_73 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_73;


extern const ASN1CType asn1_type_ProtocolExtensionField_73[];

typedef struct ProtocolExtensionContainer_73 {
  ProtocolExtensionField_73 *tab;
  int count;
} ProtocolExtensionContainer_73;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_73[];

typedef struct SRVCC_Information {
  ASN1BitString nonce;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_73 iE_Extensions;
} SRVCC_Information;


extern const ASN1CType asn1_type_SRVCC_Information[];

typedef enum MeasBand {
  MeasBand_v6,
  MeasBand_v15,
  MeasBand_v25,
  MeasBand_v50,
  MeasBand_v75,
  MeasBand_v100,
} MeasBand;

extern const ASN1CType asn1_type_MeasBand[];

typedef struct ProtocolExtensionField_70 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_70;


extern const ASN1CType asn1_type_ProtocolExtensionField_70[];

typedef struct ProtocolExtensionContainer_70 {
  ProtocolExtensionField_70 *tab;
  int count;
} ProtocolExtensionContainer_70;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_70[];

typedef struct EUTRANFrequencies_1 {
  int earfcn;
  BOOL measBand_option;
  MeasBand measBand;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_70 iE_Extensions;
} EUTRANFrequencies_1;


extern const ASN1CType asn1_type_EUTRANFrequencies_1[];

typedef struct EUTRANFrequencies {
  EUTRANFrequencies_1 *tab;
  int count;
} EUTRANFrequencies;

extern const ASN1CType asn1_type_EUTRANFrequencies[];

typedef struct ProtocolExtensionField_69 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_69;


extern const ASN1CType asn1_type_ProtocolExtensionField_69[];

typedef struct ProtocolExtensionContainer_69 {
  ProtocolExtensionField_69 *tab;
  int count;
} ProtocolExtensionContainer_69;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_69[];

typedef struct IRATmeasurementParameters {
  int measurementDuration;
  BOOL eUTRANFrequencies_option;
  EUTRANFrequencies eUTRANFrequencies;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_69 iE_Extensions;
} IRATmeasurementParameters;


extern const ASN1CType asn1_type_IRATmeasurementParameters[];

typedef struct ProtocolExtensionField_68 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_68;


extern const ASN1CType asn1_type_ProtocolExtensionField_68[];

typedef struct ProtocolExtensionContainer_68 {
  ProtocolExtensionField_68 *tab;
  int count;
} ProtocolExtensionContainer_68;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_68[];

typedef struct IRAT_Measurement_Configuration {
  BOOL rSRP_option;
  int rSRP;
  BOOL rSRQ_option;
  int rSRQ;
  IRATmeasurementParameters iRATmeasurementParameters;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_68 iE_Extensions;
} IRAT_Measurement_Configuration;


extern const ASN1CType asn1_type_IRAT_Measurement_Configuration[];

typedef struct RSRQ_Type {
  BOOL allSymbols;
  BOOL wideBand;
} RSRQ_Type;


extern const ASN1CType asn1_type_RSRQ_Type[];

typedef int RSRQ_Extension;

extern const ASN1CType asn1_type_RSRQ_Extension[];

typedef enum SRVCC_HO_Indication {
  SRVCC_HO_Indication_ps_and_cs,
  SRVCC_HO_Indication_cs_only,
} SRVCC_HO_Indication;

extern const ASN1CType asn1_type_SRVCC_HO_Indication[];

typedef enum SRVCC_Operation_Possible {
  SRVCC_Operation_Possible_srvcc_possible,
} SRVCC_Operation_Possible;

extern const ASN1CType asn1_type_SRVCC_Operation_Possible[];

typedef ASN1String Target_ToSource_TransparentContainer;

extern const ASN1CType asn1_type_Target_ToSource_TransparentContainer[];

typedef ASN1String TargeteNodeB_ToSourceeNodeB_TransparentContainer;

extern const ASN1CType asn1_type_TargeteNodeB_ToSourceeNodeB_TransparentContainer[];

typedef ASN1String TargetBSS_ToSourceBSS_TransparentContainer;

extern const ASN1CType asn1_type_TargetBSS_ToSourceBSS_TransparentContainer[];

typedef enum {
  TargetID_targetRNC_ID,
  TargetID_cGI,
  TargetID_targeteNB_ID,
} TargetID_choice;

typedef struct TargetID {
  TargetID_choice choice;
  union {
    TargetRNC_ID targetRNC_ID;
    CGI cGI;
    TargetENB_ID targeteNB_ID;
  } u;
} TargetID;

extern const ASN1CType asn1_type_TargetID[];

typedef struct ProtocolExtensionField_77 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_77;


extern const ASN1CType asn1_type_ProtocolExtensionField_77[];

typedef struct ProtocolExtensionContainer_77 {
  ProtocolExtensionField_77 *tab;
  int count;
} ProtocolExtensionContainer_77;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_77[];

typedef struct TargetRNC_ToSourceRNC_TransparentContainer {
  RRC_Container rRC_Container;
  BOOL d_RNTI_option;
  D_RNTI d_RNTI;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_77 iE_Extensions;
} TargetRNC_ToSourceRNC_TransparentContainer;


extern const ASN1CType asn1_type_TargetRNC_ToSourceRNC_TransparentContainer[];

typedef ASN1String TBCD_STRING;

extern const ASN1CType asn1_type_TBCD_STRING[];

typedef ASN1String TMSI;

extern const ASN1CType asn1_type_TMSI[];

typedef enum {
  TemporaryUE_ID_tMSI,
  TemporaryUE_ID_p_TMSI,
} TemporaryUE_ID_choice;

typedef struct TemporaryUE_ID {
  TemporaryUE_ID_choice choice;
  union {
    TMSI tMSI;
    P_TMSI p_TMSI;
  } u;
} TemporaryUE_ID;

extern const ASN1CType asn1_type_TemporaryUE_ID[];

typedef ASN1String TimeToMBMSDataTransfer;

extern const ASN1CType asn1_type_TimeToMBMSDataTransfer[];

typedef ASN1String TimingDifferenceULDL;

extern const ASN1CType asn1_type_TimingDifferenceULDL[];

typedef ASN1String TraceType;

extern const ASN1CType asn1_type_TraceType[];

typedef ASN1String TriggerID;

extern const ASN1CType asn1_type_TriggerID[];

typedef struct ProtocolExtensionField_83 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_83;


extern const ASN1CType asn1_type_ProtocolExtensionField_83[];

typedef struct ProtocolExtensionContainer_83 {
  ProtocolExtensionField_83 *tab;
  int count;
} ProtocolExtensionContainer_83;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_83[];

typedef struct TunnelInformation {
  TransportLayerAddress transportLayerAddress;
  BOOL uDP_Port_Number_option;
  Port_Number uDP_Port_Number;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_83 iE_Extensions;
} TunnelInformation;


extern const ASN1CType asn1_type_TunnelInformation[];

typedef int UE_AggregateMaximumBitRateDownlink;

extern const ASN1CType asn1_type_UE_AggregateMaximumBitRateDownlink[];

typedef int UE_AggregateMaximumBitRateUplink;

extern const ASN1CType asn1_type_UE_AggregateMaximumBitRateUplink[];

typedef struct UE_AggregateMaximumBitRate {
  BOOL uE_AggregateMaximumBitRateDownlink_option;
  UE_AggregateMaximumBitRateDownlink uE_AggregateMaximumBitRateDownlink;
  BOOL uE_AggregateMaximumBitRateUplink_option;
  UE_AggregateMaximumBitRateUplink uE_AggregateMaximumBitRateUplink;
} UE_AggregateMaximumBitRate;


extern const ASN1CType asn1_type_UE_AggregateMaximumBitRate[];

typedef ASN1BitString UESBI_IuA;

extern const ASN1CType asn1_type_UESBI_IuA[];

typedef ASN1BitString UESBI_IuB;

extern const ASN1CType asn1_type_UESBI_IuB[];

typedef struct ProtocolExtensionField_84 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_84;


extern const ASN1CType asn1_type_ProtocolExtensionField_84[];

typedef struct ProtocolExtensionContainer_84 {
  ProtocolExtensionField_84 *tab;
  int count;
} ProtocolExtensionContainer_84;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_84[];

typedef struct UESBI_Iu {
  BOOL uESBI_IuA_option;
  UESBI_IuA uESBI_IuA;
  BOOL uESBI_IuB_option;
  UESBI_IuB uESBI_IuB;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_84 iE_Extensions;
} UESBI_Iu;


extern const ASN1CType asn1_type_UESBI_Iu[];

typedef int UL_GTP_PDU_SequenceNumber;

extern const ASN1CType asn1_type_UL_GTP_PDU_SequenceNumber[];

typedef int UL_N_PDU_SequenceNumber;

extern const ASN1CType asn1_type_UL_N_PDU_SequenceNumber[];

typedef ASN1BitString UP_ModeVersions;

extern const ASN1CType asn1_type_UP_ModeVersions[];

typedef enum UserPlaneMode {
  UserPlaneMode_transparent_mode,
  UserPlaneMode_support_mode_for_predefined_SDU_sizes,
} UserPlaneMode;

extern const ASN1CType asn1_type_UserPlaneMode[];

typedef struct HorizontalSpeedAndBearing {
  int bearing;
  int horizontalSpeed;
} HorizontalSpeedAndBearing;


extern const ASN1CType asn1_type_HorizontalSpeedAndBearing[];

typedef struct ProtocolExtensionField_87 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_87;


extern const ASN1CType asn1_type_ProtocolExtensionField_87[];

typedef struct ProtocolExtensionContainer_87 {
  ProtocolExtensionField_87 *tab;
  int count;
} ProtocolExtensionContainer_87;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_87[];

typedef struct HorizontalVelocity {
  HorizontalSpeedAndBearing horizontalSpeedAndBearing;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_87 iE_Extensions;
} HorizontalVelocity;


extern const ASN1CType asn1_type_HorizontalVelocity[];

typedef enum VerticalSpeedDirection {
  VerticalSpeedDirection_upward,
  VerticalSpeedDirection_downward,
} VerticalSpeedDirection;

extern const ASN1CType asn1_type_VerticalSpeedDirection[];

typedef struct VerticalVelocity {
  int veritcalSpeed;
  VerticalSpeedDirection veritcalSpeedDirection;
} VerticalVelocity;


extern const ASN1CType asn1_type_VerticalVelocity[];

typedef struct ProtocolExtensionField_88 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_88;


extern const ASN1CType asn1_type_ProtocolExtensionField_88[];

typedef struct ProtocolExtensionContainer_88 {
  ProtocolExtensionField_88 *tab;
  int count;
} ProtocolExtensionContainer_88;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_88[];

typedef struct HorizontalWithVerticalVelocity {
  HorizontalSpeedAndBearing horizontalSpeedAndBearing;
  VerticalVelocity veritcalVelocity;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_88 iE_Extensions;
} HorizontalWithVerticalVelocity;


extern const ASN1CType asn1_type_HorizontalWithVerticalVelocity[];

typedef struct ProtocolExtensionField_89 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_89;


extern const ASN1CType asn1_type_ProtocolExtensionField_89[];

typedef struct ProtocolExtensionContainer_89 {
  ProtocolExtensionField_89 *tab;
  int count;
} ProtocolExtensionContainer_89;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_89[];

typedef struct HorizontalVelocityWithUncertainty {
  HorizontalSpeedAndBearing horizontalSpeedAndBearing;
  int uncertaintySpeed;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_89 iE_Extensions;
} HorizontalVelocityWithUncertainty;


extern const ASN1CType asn1_type_HorizontalVelocityWithUncertainty[];

typedef struct ProtocolExtensionField_90 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_90;


extern const ASN1CType asn1_type_ProtocolExtensionField_90[];

typedef struct ProtocolExtensionContainer_90 {
  ProtocolExtensionField_90 *tab;
  int count;
} ProtocolExtensionContainer_90;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_90[];

typedef struct HorizontalWithVerticalVelocityAndUncertainty {
  HorizontalSpeedAndBearing horizontalSpeedAndBearing;
  VerticalVelocity veritcalVelocity;
  int horizontalUncertaintySpeed;
  int verticalUncertaintySpeed;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_90 iE_Extensions;
} HorizontalWithVerticalVelocityAndUncertainty;


extern const ASN1CType asn1_type_HorizontalWithVerticalVelocityAndUncertainty[];

typedef enum {
  VelocityEstimate_horizontalVelocity,
  VelocityEstimate_horizontalWithVerticalVelocity,
  VelocityEstimate_horizontalVelocityWithUncertainty,
  VelocityEstimate_horizontalWithVeritcalVelocityAndUncertainty,
} VelocityEstimate_choice;

typedef struct VelocityEstimate {
  VelocityEstimate_choice choice;
  union {
    HorizontalVelocity horizontalVelocity;
    HorizontalWithVerticalVelocity horizontalWithVerticalVelocity;
    HorizontalVelocityWithUncertainty horizontalVelocityWithUncertainty;
    HorizontalWithVerticalVelocityAndUncertainty horizontalWithVeritcalVelocityAndUncertainty;
  } u;
} VelocityEstimate;

extern const ASN1CType asn1_type_VelocityEstimate[];

typedef enum VoiceSupportMatchIndicator {
  VoiceSupportMatchIndicator_supported,
  VoiceSupportMatchIndicator_not_supported,
} VoiceSupportMatchIndicator;

extern const ASN1CType asn1_type_VoiceSupportMatchIndicator[];

typedef struct ProtocolIE_Field_1 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_1;


extern const ASN1CType asn1_type_ProtocolIE_Field_1[];

typedef struct ProtocolIE_Container_1 {
  ProtocolIE_Field_1 *tab;
  int count;
} ProtocolIE_Container_1;

extern const ASN1CType asn1_type_ProtocolIE_Container_1[];

typedef struct ProtocolExtensionField_91 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_91;


extern const ASN1CType asn1_type_ProtocolExtensionField_91[];

typedef struct ProtocolExtensionContainer_91 {
  ProtocolExtensionField_91 *tab;
  int count;
} ProtocolExtensionContainer_91;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_91[];

typedef struct Iu_ReleaseCommand {
  ProtocolIE_Container_1 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_91 protocolExtensions;
} Iu_ReleaseCommand;


extern const ASN1CType asn1_type_Iu_ReleaseCommand[];

typedef struct ProtocolIE_Field_2 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_2;


extern const ASN1CType asn1_type_ProtocolIE_Field_2[];

typedef struct ProtocolIE_Container_2 {
  ProtocolIE_Field_2 *tab;
  int count;
} ProtocolIE_Container_2;

extern const ASN1CType asn1_type_ProtocolIE_Container_2[];

typedef struct ProtocolExtensionField_92 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_92;


extern const ASN1CType asn1_type_ProtocolExtensionField_92[];

typedef struct ProtocolExtensionContainer_92 {
  ProtocolExtensionField_92 *tab;
  int count;
} ProtocolExtensionContainer_92;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_92[];

typedef struct Iu_ReleaseComplete {
  ProtocolIE_Container_2 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_92 protocolExtensions;
} Iu_ReleaseComplete;


extern const ASN1CType asn1_type_Iu_ReleaseComplete[];

typedef struct ProtocolIE_Field_3 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_3;


extern const ASN1CType asn1_type_ProtocolIE_Field_3[];

typedef struct ProtocolIE_Container_3 {
  ProtocolIE_Field_3 *tab;
  int count;
} ProtocolIE_Container_3;

extern const ASN1CType asn1_type_ProtocolIE_Container_3[];

typedef struct ProtocolIE_ContainerList_1 {
  ProtocolIE_Container_3 *tab;
  int count;
} ProtocolIE_ContainerList_1;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_1[];

typedef ProtocolIE_ContainerList_1 RAB_DataVolumeReportList;

#define asn1_type_RAB_DataVolumeReportList asn1_type_ProtocolIE_ContainerList_1

typedef struct ProtocolIE_Field_4 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_4;


extern const ASN1CType asn1_type_ProtocolIE_Field_4[];

typedef struct ProtocolIE_Container_4 {
  ProtocolIE_Field_4 *tab;
  int count;
} ProtocolIE_Container_4;

extern const ASN1CType asn1_type_ProtocolIE_Container_4[];

typedef struct ProtocolIE_ContainerList_2 {
  ProtocolIE_Container_4 *tab;
  int count;
} ProtocolIE_ContainerList_2;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_2[];

typedef ProtocolIE_ContainerList_2 RAB_ReleasedList_IuRelComp;

#define asn1_type_RAB_ReleasedList_IuRelComp asn1_type_ProtocolIE_ContainerList_2

typedef struct ProtocolExtensionField_160 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_160;


extern const ASN1CType asn1_type_ProtocolExtensionField_160[];

typedef struct ProtocolExtensionContainer_160 {
  ProtocolExtensionField_160 *tab;
  int count;
} ProtocolExtensionContainer_160;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_160[];

typedef struct DataVolumeList_1 {
  UnsuccessfullyTransmittedDataVolume dl_UnsuccessfullyTransmittedDataVolume;
  BOOL dataVolumeReference_option;
  DataVolumeReference dataVolumeReference;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_160 iE_Extensions;
} DataVolumeList_1;


extern const ASN1CType asn1_type_DataVolumeList_1[];

typedef struct DataVolumeList {
  DataVolumeList_1 *tab;
  int count;
} DataVolumeList;

extern const ASN1CType asn1_type_DataVolumeList[];

typedef struct ProtocolExtensionField_93 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_93;


extern const ASN1CType asn1_type_ProtocolExtensionField_93[];

typedef struct ProtocolExtensionContainer_93 {
  ProtocolExtensionField_93 *tab;
  int count;
} ProtocolExtensionContainer_93;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_93[];

typedef struct RAB_DataVolumeReportItem {
  RAB_ID rAB_ID;
  BOOL dl_UnsuccessfullyTransmittedDataVolume_option;
  DataVolumeList dl_UnsuccessfullyTransmittedDataVolume;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_93 iE_Extensions;
} RAB_DataVolumeReportItem;


extern const ASN1CType asn1_type_RAB_DataVolumeReportItem[];

typedef struct ProtocolExtensionField_94 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_94;


extern const ASN1CType asn1_type_ProtocolExtensionField_94[];

typedef struct ProtocolExtensionContainer_94 {
  ProtocolExtensionField_94 *tab;
  int count;
} ProtocolExtensionContainer_94;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_94[];

typedef struct RAB_ReleasedItem_IuRelComp {
  RAB_ID rAB_ID;
  BOOL dL_GTP_PDU_SequenceNumber_option;
  DL_GTP_PDU_SequenceNumber dL_GTP_PDU_SequenceNumber;
  BOOL uL_GTP_PDU_SequenceNumber_option;
  UL_GTP_PDU_SequenceNumber uL_GTP_PDU_SequenceNumber;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_94 iE_Extensions;
} RAB_ReleasedItem_IuRelComp;


extern const ASN1CType asn1_type_RAB_ReleasedItem_IuRelComp[];

typedef struct ProtocolIE_Field_5 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_5;


extern const ASN1CType asn1_type_ProtocolIE_Field_5[];

typedef struct ProtocolIE_Container_5 {
  ProtocolIE_Field_5 *tab;
  int count;
} ProtocolIE_Container_5;

extern const ASN1CType asn1_type_ProtocolIE_Container_5[];

typedef struct ProtocolExtensionField_95 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_95;


extern const ASN1CType asn1_type_ProtocolExtensionField_95[];

typedef struct ProtocolExtensionContainer_95 {
  ProtocolExtensionField_95 *tab;
  int count;
} ProtocolExtensionContainer_95;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_95[];

typedef struct RelocationRequired {
  ProtocolIE_Container_5 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_95 protocolExtensions;
} RelocationRequired;


extern const ASN1CType asn1_type_RelocationRequired[];

typedef struct ProtocolIE_Field_6 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_6;


extern const ASN1CType asn1_type_ProtocolIE_Field_6[];

typedef struct ProtocolIE_Container_6 {
  ProtocolIE_Field_6 *tab;
  int count;
} ProtocolIE_Container_6;

extern const ASN1CType asn1_type_ProtocolIE_Container_6[];

typedef struct ProtocolExtensionField_96 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_96;


extern const ASN1CType asn1_type_ProtocolExtensionField_96[];

typedef struct ProtocolExtensionContainer_96 {
  ProtocolExtensionField_96 *tab;
  int count;
} ProtocolExtensionContainer_96;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_96[];

typedef struct RelocationCommand {
  ProtocolIE_Container_6 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_96 protocolExtensions;
} RelocationCommand;


extern const ASN1CType asn1_type_RelocationCommand[];

typedef struct ProtocolIE_Field_7 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_7;


extern const ASN1CType asn1_type_ProtocolIE_Field_7[];

typedef struct ProtocolIE_Container_7 {
  ProtocolIE_Field_7 *tab;
  int count;
} ProtocolIE_Container_7;

extern const ASN1CType asn1_type_ProtocolIE_Container_7[];

typedef struct ProtocolIE_ContainerList_3 {
  ProtocolIE_Container_7 *tab;
  int count;
} ProtocolIE_ContainerList_3;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_3[];

typedef ProtocolIE_ContainerList_3 RAB_RelocationReleaseList;

#define asn1_type_RAB_RelocationReleaseList asn1_type_ProtocolIE_ContainerList_3

typedef struct ProtocolIE_Field_8 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_8;


extern const ASN1CType asn1_type_ProtocolIE_Field_8[];

typedef struct ProtocolIE_Container_8 {
  ProtocolIE_Field_8 *tab;
  int count;
} ProtocolIE_Container_8;

extern const ASN1CType asn1_type_ProtocolIE_Container_8[];

typedef struct ProtocolIE_ContainerList_4 {
  ProtocolIE_Container_8 *tab;
  int count;
} ProtocolIE_ContainerList_4;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_4[];

typedef ProtocolIE_ContainerList_4 RAB_DataForwardingList;

#define asn1_type_RAB_DataForwardingList asn1_type_ProtocolIE_ContainerList_4

typedef struct ProtocolExtensionField_97 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_97;


extern const ASN1CType asn1_type_ProtocolExtensionField_97[];

typedef struct ProtocolExtensionContainer_97 {
  ProtocolExtensionField_97 *tab;
  int count;
} ProtocolExtensionContainer_97;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_97[];

typedef struct RAB_RelocationReleaseItem {
  RAB_ID rAB_ID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_97 iE_Extensions;
} RAB_RelocationReleaseItem;


extern const ASN1CType asn1_type_RAB_RelocationReleaseItem[];

typedef struct ProtocolExtensionField_98 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_98;


extern const ASN1CType asn1_type_ProtocolExtensionField_98[];

typedef struct ProtocolExtensionContainer_98 {
  ProtocolExtensionField_98 *tab;
  int count;
} ProtocolExtensionContainer_98;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_98[];

typedef struct RAB_DataForwardingItem {
  RAB_ID rAB_ID;
  TransportLayerAddress transportLayerAddress;
  IuTransportAssociation iuTransportAssociation;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_98 iE_Extensions;
} RAB_DataForwardingItem;


extern const ASN1CType asn1_type_RAB_DataForwardingItem[];

typedef struct ProtocolIE_Field_9 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_9;


extern const ASN1CType asn1_type_ProtocolIE_Field_9[];

typedef struct ProtocolIE_Container_9 {
  ProtocolIE_Field_9 *tab;
  int count;
} ProtocolIE_Container_9;

extern const ASN1CType asn1_type_ProtocolIE_Container_9[];

typedef struct ProtocolExtensionField_99 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_99;


extern const ASN1CType asn1_type_ProtocolExtensionField_99[];

typedef struct ProtocolExtensionContainer_99 {
  ProtocolExtensionField_99 *tab;
  int count;
} ProtocolExtensionContainer_99;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_99[];

typedef struct RelocationPreparationFailure {
  ProtocolIE_Container_9 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_99 protocolExtensions;
} RelocationPreparationFailure;


extern const ASN1CType asn1_type_RelocationPreparationFailure[];

typedef struct ProtocolIE_Field_10 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_10;


extern const ASN1CType asn1_type_ProtocolIE_Field_10[];

typedef struct ProtocolIE_Container_10 {
  ProtocolIE_Field_10 *tab;
  int count;
} ProtocolIE_Container_10;

extern const ASN1CType asn1_type_ProtocolIE_Container_10[];

typedef struct ProtocolExtensionField_100 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_100;


extern const ASN1CType asn1_type_ProtocolExtensionField_100[];

typedef struct ProtocolExtensionContainer_100 {
  ProtocolExtensionField_100 *tab;
  int count;
} ProtocolExtensionContainer_100;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_100[];

typedef struct RelocationRequest {
  ProtocolIE_Container_10 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_100 protocolExtensions;
} RelocationRequest;


extern const ASN1CType asn1_type_RelocationRequest[];

typedef struct ProtocolIE_Field_11 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_11;


extern const ASN1CType asn1_type_ProtocolIE_Field_11[];

typedef struct ProtocolIE_Container_11 {
  ProtocolIE_Field_11 *tab;
  int count;
} ProtocolIE_Container_11;

extern const ASN1CType asn1_type_ProtocolIE_Container_11[];

typedef struct ProtocolIE_ContainerList_5 {
  ProtocolIE_Container_11 *tab;
  int count;
} ProtocolIE_ContainerList_5;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_5[];

typedef ProtocolIE_ContainerList_5 RAB_SetupList_RelocReq;

#define asn1_type_RAB_SetupList_RelocReq asn1_type_ProtocolIE_ContainerList_5

typedef struct ProtocolExtensionField_102 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_102;


extern const ASN1CType asn1_type_ProtocolExtensionField_102[];

typedef struct ProtocolExtensionContainer_102 {
  ProtocolExtensionField_102 *tab;
  int count;
} ProtocolExtensionContainer_102;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_102[];

typedef struct UserPlaneInformation {
  UserPlaneMode userPlaneMode;
  UP_ModeVersions uP_ModeVersions;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_102 iE_Extensions;
} UserPlaneInformation;


extern const ASN1CType asn1_type_UserPlaneInformation[];

typedef struct ProtocolExtensionField_101 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_101;


extern const ASN1CType asn1_type_ProtocolExtensionField_101[];

typedef struct ProtocolExtensionContainer_101 {
  ProtocolExtensionField_101 *tab;
  int count;
} ProtocolExtensionContainer_101;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_101[];

typedef struct RAB_SetupItem_RelocReq {
  RAB_ID rAB_ID;
  BOOL nAS_SynchronisationIndicator_option;
  NAS_SynchronisationIndicator nAS_SynchronisationIndicator;
  RAB_Parameters rAB_Parameters;
  BOOL dataVolumeReportingIndication_option;
  DataVolumeReportingIndication dataVolumeReportingIndication;
  BOOL pDP_TypeInformation_option;
  PDP_TypeInformation pDP_TypeInformation;
  UserPlaneInformation userPlaneInformation;
  TransportLayerAddress transportLayerAddress;
  IuTransportAssociation iuTransportAssociation;
  BOOL service_Handover_option;
  Service_Handover service_Handover;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_101 iE_Extensions;
} RAB_SetupItem_RelocReq;


extern const ASN1CType asn1_type_RAB_SetupItem_RelocReq[];

typedef struct ProtocolExtensionField_104 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_104;


extern const ASN1CType asn1_type_ProtocolExtensionField_104[];

typedef struct ProtocolExtensionContainer_104 {
  ProtocolExtensionField_104 *tab;
  int count;
} ProtocolExtensionContainer_104;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_104[];

typedef struct JoinedMBMSBearerService_IEs_1 {
  TMGI tMGI;
  MBMS_PTP_RAB_ID mBMS_PTP_RAB_ID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_104 iE_Extensions;
} JoinedMBMSBearerService_IEs_1;


extern const ASN1CType asn1_type_JoinedMBMSBearerService_IEs_1[];

typedef struct JoinedMBMSBearerService_IEs {
  JoinedMBMSBearerService_IEs_1 *tab;
  int count;
} JoinedMBMSBearerService_IEs;

extern const ASN1CType asn1_type_JoinedMBMSBearerService_IEs[];

typedef struct ProtocolExtensionField_103 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_103;


extern const ASN1CType asn1_type_ProtocolExtensionField_103[];

typedef struct ProtocolExtensionContainer_103 {
  ProtocolExtensionField_103 *tab;
  int count;
} ProtocolExtensionContainer_103;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_103[];

typedef struct CNMBMSLinkingInformation {
  JoinedMBMSBearerService_IEs joinedMBMSBearerService_IEs;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_103 iE_Extensions;
} CNMBMSLinkingInformation;


extern const ASN1CType asn1_type_CNMBMSLinkingInformation[];

typedef struct ProtocolIE_Field_12 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_12;


extern const ASN1CType asn1_type_ProtocolIE_Field_12[];

typedef struct ProtocolIE_Container_12 {
  ProtocolIE_Field_12 *tab;
  int count;
} ProtocolIE_Container_12;

extern const ASN1CType asn1_type_ProtocolIE_Container_12[];

typedef struct ProtocolExtensionField_105 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_105;


extern const ASN1CType asn1_type_ProtocolExtensionField_105[];

typedef struct ProtocolExtensionContainer_105 {
  ProtocolExtensionField_105 *tab;
  int count;
} ProtocolExtensionContainer_105;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_105[];

typedef struct RelocationRequestAcknowledge {
  ProtocolIE_Container_12 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_105 protocolExtensions;
} RelocationRequestAcknowledge;


extern const ASN1CType asn1_type_RelocationRequestAcknowledge[];

typedef struct ProtocolIE_Field_13 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_13;


extern const ASN1CType asn1_type_ProtocolIE_Field_13[];

typedef struct ProtocolIE_Container_13 {
  ProtocolIE_Field_13 *tab;
  int count;
} ProtocolIE_Container_13;

extern const ASN1CType asn1_type_ProtocolIE_Container_13[];

typedef struct ProtocolIE_ContainerList_6 {
  ProtocolIE_Container_13 *tab;
  int count;
} ProtocolIE_ContainerList_6;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_6[];

typedef ProtocolIE_ContainerList_6 RAB_SetupList_RelocReqAck;

#define asn1_type_RAB_SetupList_RelocReqAck asn1_type_ProtocolIE_ContainerList_6

typedef struct ProtocolIE_Field_14 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_14;


extern const ASN1CType asn1_type_ProtocolIE_Field_14[];

typedef struct ProtocolIE_Container_14 {
  ProtocolIE_Field_14 *tab;
  int count;
} ProtocolIE_Container_14;

extern const ASN1CType asn1_type_ProtocolIE_Container_14[];

typedef struct ProtocolIE_ContainerList_7 {
  ProtocolIE_Container_14 *tab;
  int count;
} ProtocolIE_ContainerList_7;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_7[];

typedef ProtocolIE_ContainerList_7 RAB_FailedList;

#define asn1_type_RAB_FailedList asn1_type_ProtocolIE_ContainerList_7

typedef struct ProtocolExtensionField_106 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_106;


extern const ASN1CType asn1_type_ProtocolExtensionField_106[];

typedef struct ProtocolExtensionContainer_106 {
  ProtocolExtensionField_106 *tab;
  int count;
} ProtocolExtensionContainer_106;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_106[];

typedef struct RAB_SetupItem_RelocReqAck {
  RAB_ID rAB_ID;
  BOOL transportLayerAddress_option;
  TransportLayerAddress transportLayerAddress;
  BOOL iuTransportAssociation_option;
  IuTransportAssociation iuTransportAssociation;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_106 iE_Extensions;
} RAB_SetupItem_RelocReqAck;


extern const ASN1CType asn1_type_RAB_SetupItem_RelocReqAck[];

typedef struct ProtocolExtensionField_107 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_107;


extern const ASN1CType asn1_type_ProtocolExtensionField_107[];

typedef struct ProtocolExtensionContainer_107 {
  ProtocolExtensionField_107 *tab;
  int count;
} ProtocolExtensionContainer_107;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_107[];

typedef struct RAB_FailedItem {
  RAB_ID rAB_ID;
  Cause cause;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_107 iE_Extensions;
} RAB_FailedItem;


extern const ASN1CType asn1_type_RAB_FailedItem[];

typedef struct ProtocolIE_Field_15 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_15;


extern const ASN1CType asn1_type_ProtocolIE_Field_15[];

typedef struct ProtocolIE_Container_15 {
  ProtocolIE_Field_15 *tab;
  int count;
} ProtocolIE_Container_15;

extern const ASN1CType asn1_type_ProtocolIE_Container_15[];

typedef struct ProtocolExtensionField_108 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_108;


extern const ASN1CType asn1_type_ProtocolExtensionField_108[];

typedef struct ProtocolExtensionContainer_108 {
  ProtocolExtensionField_108 *tab;
  int count;
} ProtocolExtensionContainer_108;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_108[];

typedef struct RelocationFailure {
  ProtocolIE_Container_15 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_108 protocolExtensions;
} RelocationFailure;


extern const ASN1CType asn1_type_RelocationFailure[];

typedef struct ProtocolIE_Field_16 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_16;


extern const ASN1CType asn1_type_ProtocolIE_Field_16[];

typedef struct ProtocolIE_Container_16 {
  ProtocolIE_Field_16 *tab;
  int count;
} ProtocolIE_Container_16;

extern const ASN1CType asn1_type_ProtocolIE_Container_16[];

typedef struct ProtocolExtensionField_109 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_109;


extern const ASN1CType asn1_type_ProtocolExtensionField_109[];

typedef struct ProtocolExtensionContainer_109 {
  ProtocolExtensionField_109 *tab;
  int count;
} ProtocolExtensionContainer_109;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_109[];

typedef struct RelocationCancel {
  ProtocolIE_Container_16 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_109 protocolExtensions;
} RelocationCancel;


extern const ASN1CType asn1_type_RelocationCancel[];

typedef struct ProtocolIE_Field_17 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_17;


extern const ASN1CType asn1_type_ProtocolIE_Field_17[];

typedef struct ProtocolIE_Container_17 {
  ProtocolIE_Field_17 *tab;
  int count;
} ProtocolIE_Container_17;

extern const ASN1CType asn1_type_ProtocolIE_Container_17[];

typedef struct ProtocolExtensionField_110 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_110;


extern const ASN1CType asn1_type_ProtocolExtensionField_110[];

typedef struct ProtocolExtensionContainer_110 {
  ProtocolExtensionField_110 *tab;
  int count;
} ProtocolExtensionContainer_110;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_110[];

typedef struct RelocationCancelAcknowledge {
  ProtocolIE_Container_17 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_110 protocolExtensions;
} RelocationCancelAcknowledge;


extern const ASN1CType asn1_type_RelocationCancelAcknowledge[];

typedef struct ProtocolIE_Field_18 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_18;


extern const ASN1CType asn1_type_ProtocolIE_Field_18[];

typedef struct ProtocolIE_Container_18 {
  ProtocolIE_Field_18 *tab;
  int count;
} ProtocolIE_Container_18;

extern const ASN1CType asn1_type_ProtocolIE_Container_18[];

typedef struct ProtocolExtensionField_111 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_111;


extern const ASN1CType asn1_type_ProtocolExtensionField_111[];

typedef struct ProtocolExtensionContainer_111 {
  ProtocolExtensionField_111 *tab;
  int count;
} ProtocolExtensionContainer_111;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_111[];

typedef struct SRNS_ContextRequest {
  ProtocolIE_Container_18 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_111 protocolExtensions;
} SRNS_ContextRequest;


extern const ASN1CType asn1_type_SRNS_ContextRequest[];

typedef struct ProtocolIE_Field_19 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_19;


extern const ASN1CType asn1_type_ProtocolIE_Field_19[];

typedef struct ProtocolIE_Container_19 {
  ProtocolIE_Field_19 *tab;
  int count;
} ProtocolIE_Container_19;

extern const ASN1CType asn1_type_ProtocolIE_Container_19[];

typedef struct ProtocolIE_ContainerList_8 {
  ProtocolIE_Container_19 *tab;
  int count;
} ProtocolIE_ContainerList_8;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_8[];

typedef ProtocolIE_ContainerList_8 RAB_DataForwardingList_SRNS_CtxReq;

#define asn1_type_RAB_DataForwardingList_SRNS_CtxReq asn1_type_ProtocolIE_ContainerList_8

typedef struct ProtocolExtensionField_112 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_112;


extern const ASN1CType asn1_type_ProtocolExtensionField_112[];

typedef struct ProtocolExtensionContainer_112 {
  ProtocolExtensionField_112 *tab;
  int count;
} ProtocolExtensionContainer_112;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_112[];

typedef struct RAB_DataForwardingItem_SRNS_CtxReq {
  RAB_ID rAB_ID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_112 iE_Extensions;
} RAB_DataForwardingItem_SRNS_CtxReq;


extern const ASN1CType asn1_type_RAB_DataForwardingItem_SRNS_CtxReq[];

typedef struct ProtocolIE_Field_20 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_20;


extern const ASN1CType asn1_type_ProtocolIE_Field_20[];

typedef struct ProtocolIE_Container_20 {
  ProtocolIE_Field_20 *tab;
  int count;
} ProtocolIE_Container_20;

extern const ASN1CType asn1_type_ProtocolIE_Container_20[];

typedef struct ProtocolExtensionField_113 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_113;


extern const ASN1CType asn1_type_ProtocolExtensionField_113[];

typedef struct ProtocolExtensionContainer_113 {
  ProtocolExtensionField_113 *tab;
  int count;
} ProtocolExtensionContainer_113;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_113[];

typedef struct SRNS_ContextResponse {
  ProtocolIE_Container_20 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_113 protocolExtensions;
} SRNS_ContextResponse;


extern const ASN1CType asn1_type_SRNS_ContextResponse[];

typedef struct ProtocolIE_Field_21 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_21;


extern const ASN1CType asn1_type_ProtocolIE_Field_21[];

typedef struct ProtocolIE_Container_21 {
  ProtocolIE_Field_21 *tab;
  int count;
} ProtocolIE_Container_21;

extern const ASN1CType asn1_type_ProtocolIE_Container_21[];

typedef struct ProtocolIE_ContainerList_9 {
  ProtocolIE_Container_21 *tab;
  int count;
} ProtocolIE_ContainerList_9;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_9[];

typedef ProtocolIE_ContainerList_9 RAB_ContextList;

#define asn1_type_RAB_ContextList asn1_type_ProtocolIE_ContainerList_9

typedef struct ProtocolIE_Field_22 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_22;


extern const ASN1CType asn1_type_ProtocolIE_Field_22[];

typedef struct ProtocolIE_Container_22 {
  ProtocolIE_Field_22 *tab;
  int count;
} ProtocolIE_Container_22;

extern const ASN1CType asn1_type_ProtocolIE_Container_22[];

typedef struct ProtocolIE_ContainerList_10 {
  ProtocolIE_Container_22 *tab;
  int count;
} ProtocolIE_ContainerList_10;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_10[];

typedef ProtocolIE_ContainerList_10 RAB_ContextFailedtoTransferList;

#define asn1_type_RAB_ContextFailedtoTransferList asn1_type_ProtocolIE_ContainerList_10

typedef struct ProtocolExtensionField_114 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_114;


extern const ASN1CType asn1_type_ProtocolExtensionField_114[];

typedef struct ProtocolExtensionContainer_114 {
  ProtocolExtensionField_114 *tab;
  int count;
} ProtocolExtensionContainer_114;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_114[];

typedef struct RAB_ContextItem {
  RAB_ID rAB_ID;
  BOOL dl_GTP_PDU_SequenceNumber_option;
  DL_GTP_PDU_SequenceNumber dl_GTP_PDU_SequenceNumber;
  BOOL ul_GTP_PDU_SequenceNumber_option;
  UL_GTP_PDU_SequenceNumber ul_GTP_PDU_SequenceNumber;
  BOOL dl_N_PDU_SequenceNumber_option;
  DL_N_PDU_SequenceNumber dl_N_PDU_SequenceNumber;
  BOOL ul_N_PDU_SequenceNumber_option;
  UL_N_PDU_SequenceNumber ul_N_PDU_SequenceNumber;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_114 iE_Extensions;
} RAB_ContextItem;


extern const ASN1CType asn1_type_RAB_ContextItem[];

typedef struct ProtocolExtensionField_115 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_115;


extern const ASN1CType asn1_type_ProtocolExtensionField_115[];

typedef struct ProtocolExtensionContainer_115 {
  ProtocolExtensionField_115 *tab;
  int count;
} ProtocolExtensionContainer_115;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_115[];

typedef struct RABs_ContextFailedtoTransferItem {
  RAB_ID rAB_ID;
  Cause cause;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_115 iE_Extensions;
} RABs_ContextFailedtoTransferItem;


extern const ASN1CType asn1_type_RABs_ContextFailedtoTransferItem[];

typedef struct ProtocolIE_Field_23 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_23;


extern const ASN1CType asn1_type_ProtocolIE_Field_23[];

typedef struct ProtocolIE_Container_23 {
  ProtocolIE_Field_23 *tab;
  int count;
} ProtocolIE_Container_23;

extern const ASN1CType asn1_type_ProtocolIE_Container_23[];

typedef struct ProtocolExtensionField_116 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_116;


extern const ASN1CType asn1_type_ProtocolExtensionField_116[];

typedef struct ProtocolExtensionContainer_116 {
  ProtocolExtensionField_116 *tab;
  int count;
} ProtocolExtensionContainer_116;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_116[];

typedef struct SecurityModeCommand {
  ProtocolIE_Container_23 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_116 protocolExtensions;
} SecurityModeCommand;


extern const ASN1CType asn1_type_SecurityModeCommand[];

typedef struct ProtocolIE_Field_24 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_24;


extern const ASN1CType asn1_type_ProtocolIE_Field_24[];

typedef struct ProtocolIE_Container_24 {
  ProtocolIE_Field_24 *tab;
  int count;
} ProtocolIE_Container_24;

extern const ASN1CType asn1_type_ProtocolIE_Container_24[];

typedef struct ProtocolExtensionField_117 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_117;


extern const ASN1CType asn1_type_ProtocolExtensionField_117[];

typedef struct ProtocolExtensionContainer_117 {
  ProtocolExtensionField_117 *tab;
  int count;
} ProtocolExtensionContainer_117;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_117[];

typedef struct SecurityModeComplete {
  ProtocolIE_Container_24 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_117 protocolExtensions;
} SecurityModeComplete;


extern const ASN1CType asn1_type_SecurityModeComplete[];

typedef struct ProtocolIE_Field_25 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_25;


extern const ASN1CType asn1_type_ProtocolIE_Field_25[];

typedef struct ProtocolIE_Container_25 {
  ProtocolIE_Field_25 *tab;
  int count;
} ProtocolIE_Container_25;

extern const ASN1CType asn1_type_ProtocolIE_Container_25[];

typedef struct ProtocolExtensionField_118 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_118;


extern const ASN1CType asn1_type_ProtocolExtensionField_118[];

typedef struct ProtocolExtensionContainer_118 {
  ProtocolExtensionField_118 *tab;
  int count;
} ProtocolExtensionContainer_118;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_118[];

typedef struct SecurityModeReject {
  ProtocolIE_Container_25 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_118 protocolExtensions;
} SecurityModeReject;


extern const ASN1CType asn1_type_SecurityModeReject[];

typedef struct ProtocolIE_Field_26 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_26;


extern const ASN1CType asn1_type_ProtocolIE_Field_26[];

typedef struct ProtocolIE_Container_26 {
  ProtocolIE_Field_26 *tab;
  int count;
} ProtocolIE_Container_26;

extern const ASN1CType asn1_type_ProtocolIE_Container_26[];

typedef struct ProtocolExtensionField_119 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_119;


extern const ASN1CType asn1_type_ProtocolExtensionField_119[];

typedef struct ProtocolExtensionContainer_119 {
  ProtocolExtensionField_119 *tab;
  int count;
} ProtocolExtensionContainer_119;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_119[];

typedef struct DataVolumeReportRequest {
  ProtocolIE_Container_26 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_119 protocolExtensions;
} DataVolumeReportRequest;


extern const ASN1CType asn1_type_DataVolumeReportRequest[];

typedef struct ProtocolIE_Field_27 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_27;


extern const ASN1CType asn1_type_ProtocolIE_Field_27[];

typedef struct ProtocolIE_Container_27 {
  ProtocolIE_Field_27 *tab;
  int count;
} ProtocolIE_Container_27;

extern const ASN1CType asn1_type_ProtocolIE_Container_27[];

typedef struct ProtocolIE_ContainerList_11 {
  ProtocolIE_Container_27 *tab;
  int count;
} ProtocolIE_ContainerList_11;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_11[];

typedef ProtocolIE_ContainerList_11 RAB_DataVolumeReportRequestList;

#define asn1_type_RAB_DataVolumeReportRequestList asn1_type_ProtocolIE_ContainerList_11

typedef struct ProtocolExtensionField_120 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_120;


extern const ASN1CType asn1_type_ProtocolExtensionField_120[];

typedef struct ProtocolExtensionContainer_120 {
  ProtocolExtensionField_120 *tab;
  int count;
} ProtocolExtensionContainer_120;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_120[];

typedef struct RAB_DataVolumeReportRequestItem {
  RAB_ID rAB_ID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_120 iE_Extensions;
} RAB_DataVolumeReportRequestItem;


extern const ASN1CType asn1_type_RAB_DataVolumeReportRequestItem[];

typedef struct ProtocolIE_Field_28 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_28;


extern const ASN1CType asn1_type_ProtocolIE_Field_28[];

typedef struct ProtocolIE_Container_28 {
  ProtocolIE_Field_28 *tab;
  int count;
} ProtocolIE_Container_28;

extern const ASN1CType asn1_type_ProtocolIE_Container_28[];

typedef struct ProtocolExtensionField_121 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_121;


extern const ASN1CType asn1_type_ProtocolExtensionField_121[];

typedef struct ProtocolExtensionContainer_121 {
  ProtocolExtensionField_121 *tab;
  int count;
} ProtocolExtensionContainer_121;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_121[];

typedef struct DataVolumeReport {
  ProtocolIE_Container_28 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_121 protocolExtensions;
} DataVolumeReport;


extern const ASN1CType asn1_type_DataVolumeReport[];

typedef struct ProtocolIE_Field_29 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_29;


extern const ASN1CType asn1_type_ProtocolIE_Field_29[];

typedef struct ProtocolIE_Container_29 {
  ProtocolIE_Field_29 *tab;
  int count;
} ProtocolIE_Container_29;

extern const ASN1CType asn1_type_ProtocolIE_Container_29[];

typedef struct ProtocolIE_ContainerList_12 {
  ProtocolIE_Container_29 *tab;
  int count;
} ProtocolIE_ContainerList_12;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_12[];

typedef ProtocolIE_ContainerList_12 RAB_FailedtoReportList;

#define asn1_type_RAB_FailedtoReportList asn1_type_ProtocolIE_ContainerList_12

typedef struct ProtocolExtensionField_122 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_122;


extern const ASN1CType asn1_type_ProtocolExtensionField_122[];

typedef struct ProtocolExtensionContainer_122 {
  ProtocolExtensionField_122 *tab;
  int count;
} ProtocolExtensionContainer_122;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_122[];

typedef struct RABs_failed_to_reportItem {
  RAB_ID rAB_ID;
  Cause cause;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_122 iE_Extensions;
} RABs_failed_to_reportItem;


extern const ASN1CType asn1_type_RABs_failed_to_reportItem[];

typedef struct ProtocolIE_Field_30 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_30;


extern const ASN1CType asn1_type_ProtocolIE_Field_30[];

typedef struct ProtocolIE_Container_30 {
  ProtocolIE_Field_30 *tab;
  int count;
} ProtocolIE_Container_30;

extern const ASN1CType asn1_type_ProtocolIE_Container_30[];

typedef struct ProtocolExtensionField_123 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_123;


extern const ASN1CType asn1_type_ProtocolExtensionField_123[];

typedef struct ProtocolExtensionContainer_123 {
  ProtocolExtensionField_123 *tab;
  int count;
} ProtocolExtensionContainer_123;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_123[];

typedef struct Reset {
  ProtocolIE_Container_30 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_123 protocolExtensions;
} Reset;


extern const ASN1CType asn1_type_Reset[];

typedef struct ProtocolIE_Field_31 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_31;


extern const ASN1CType asn1_type_ProtocolIE_Field_31[];

typedef struct ProtocolIE_Container_31 {
  ProtocolIE_Field_31 *tab;
  int count;
} ProtocolIE_Container_31;

extern const ASN1CType asn1_type_ProtocolIE_Container_31[];

typedef struct ProtocolExtensionField_124 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_124;


extern const ASN1CType asn1_type_ProtocolExtensionField_124[];

typedef struct ProtocolExtensionContainer_124 {
  ProtocolExtensionField_124 *tab;
  int count;
} ProtocolExtensionContainer_124;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_124[];

typedef struct ResetAcknowledge {
  ProtocolIE_Container_31 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_124 protocolExtensions;
} ResetAcknowledge;


extern const ASN1CType asn1_type_ResetAcknowledge[];

typedef struct ProtocolIE_Field_32 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_32;


extern const ASN1CType asn1_type_ProtocolIE_Field_32[];

typedef struct ProtocolIE_Container_32 {
  ProtocolIE_Field_32 *tab;
  int count;
} ProtocolIE_Container_32;

extern const ASN1CType asn1_type_ProtocolIE_Container_32[];

typedef struct ProtocolExtensionField_125 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_125;


extern const ASN1CType asn1_type_ProtocolExtensionField_125[];

typedef struct ProtocolExtensionContainer_125 {
  ProtocolExtensionField_125 *tab;
  int count;
} ProtocolExtensionContainer_125;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_125[];

typedef struct ResetResource {
  ProtocolIE_Container_32 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_125 protocolExtensions;
} ResetResource;


extern const ASN1CType asn1_type_ResetResource[];

typedef struct ProtocolIE_Field_33 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_33;


extern const ASN1CType asn1_type_ProtocolIE_Field_33[];

typedef struct ProtocolIE_Container_33 {
  ProtocolIE_Field_33 *tab;
  int count;
} ProtocolIE_Container_33;

extern const ASN1CType asn1_type_ProtocolIE_Container_33[];

typedef struct ProtocolIE_ContainerList_13 {
  ProtocolIE_Container_33 *tab;
  int count;
} ProtocolIE_ContainerList_13;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_13[];

typedef ProtocolIE_ContainerList_13 ResetResourceList;

#define asn1_type_ResetResourceList asn1_type_ProtocolIE_ContainerList_13

typedef struct ProtocolExtensionField_126 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_126;


extern const ASN1CType asn1_type_ProtocolExtensionField_126[];

typedef struct ProtocolExtensionContainer_126 {
  ProtocolExtensionField_126 *tab;
  int count;
} ProtocolExtensionContainer_126;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_126[];

typedef struct ResetResourceItem {
  IuSignallingConnectionIdentifier iuSigConId;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_126 iE_Extensions;
} ResetResourceItem;


extern const ASN1CType asn1_type_ResetResourceItem[];

typedef struct ProtocolIE_Field_34 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_34;


extern const ASN1CType asn1_type_ProtocolIE_Field_34[];

typedef struct ProtocolIE_Container_34 {
  ProtocolIE_Field_34 *tab;
  int count;
} ProtocolIE_Container_34;

extern const ASN1CType asn1_type_ProtocolIE_Container_34[];

typedef struct ProtocolExtensionField_127 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_127;


extern const ASN1CType asn1_type_ProtocolExtensionField_127[];

typedef struct ProtocolExtensionContainer_127 {
  ProtocolExtensionField_127 *tab;
  int count;
} ProtocolExtensionContainer_127;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_127[];

typedef struct ResetResourceAcknowledge {
  ProtocolIE_Container_34 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_127 protocolExtensions;
} ResetResourceAcknowledge;


extern const ASN1CType asn1_type_ResetResourceAcknowledge[];

typedef struct ProtocolIE_Field_35 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_35;


extern const ASN1CType asn1_type_ProtocolIE_Field_35[];

typedef struct ProtocolIE_Container_35 {
  ProtocolIE_Field_35 *tab;
  int count;
} ProtocolIE_Container_35;

extern const ASN1CType asn1_type_ProtocolIE_Container_35[];

typedef struct ProtocolIE_ContainerList_14 {
  ProtocolIE_Container_35 *tab;
  int count;
} ProtocolIE_ContainerList_14;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_14[];

typedef ProtocolIE_ContainerList_14 ResetResourceAckList;

#define asn1_type_ResetResourceAckList asn1_type_ProtocolIE_ContainerList_14

typedef struct ProtocolExtensionField_128 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_128;


extern const ASN1CType asn1_type_ProtocolExtensionField_128[];

typedef struct ProtocolExtensionContainer_128 {
  ProtocolExtensionField_128 *tab;
  int count;
} ProtocolExtensionContainer_128;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_128[];

typedef struct ResetResourceAckItem {
  IuSignallingConnectionIdentifier iuSigConId;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_128 iE_Extensions;
} ResetResourceAckItem;


extern const ASN1CType asn1_type_ResetResourceAckItem[];

typedef struct ProtocolIE_Field_36 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_36;


extern const ASN1CType asn1_type_ProtocolIE_Field_36[];

typedef struct ProtocolIE_Container_36 {
  ProtocolIE_Field_36 *tab;
  int count;
} ProtocolIE_Container_36;

extern const ASN1CType asn1_type_ProtocolIE_Container_36[];

typedef struct ProtocolExtensionField_129 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_129;


extern const ASN1CType asn1_type_ProtocolExtensionField_129[];

typedef struct ProtocolExtensionContainer_129 {
  ProtocolExtensionField_129 *tab;
  int count;
} ProtocolExtensionContainer_129;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_129[];

typedef struct RAB_ReleaseRequest {
  ProtocolIE_Container_36 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_129 protocolExtensions;
} RAB_ReleaseRequest;


extern const ASN1CType asn1_type_RAB_ReleaseRequest[];

typedef struct ProtocolIE_Field_37 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_37;


extern const ASN1CType asn1_type_ProtocolIE_Field_37[];

typedef struct ProtocolIE_Container_37 {
  ProtocolIE_Field_37 *tab;
  int count;
} ProtocolIE_Container_37;

extern const ASN1CType asn1_type_ProtocolIE_Container_37[];

typedef struct ProtocolIE_ContainerList_15 {
  ProtocolIE_Container_37 *tab;
  int count;
} ProtocolIE_ContainerList_15;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_15[];

typedef ProtocolIE_ContainerList_15 RAB_ReleaseList;

#define asn1_type_RAB_ReleaseList asn1_type_ProtocolIE_ContainerList_15

typedef struct ProtocolExtensionField_130 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_130;


extern const ASN1CType asn1_type_ProtocolExtensionField_130[];

typedef struct ProtocolExtensionContainer_130 {
  ProtocolExtensionField_130 *tab;
  int count;
} ProtocolExtensionContainer_130;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_130[];

typedef struct RAB_ReleaseItem {
  RAB_ID rAB_ID;
  Cause cause;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_130 iE_Extensions;
} RAB_ReleaseItem;


extern const ASN1CType asn1_type_RAB_ReleaseItem[];

typedef struct ProtocolIE_Field_38 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_38;


extern const ASN1CType asn1_type_ProtocolIE_Field_38[];

typedef struct ProtocolIE_Container_38 {
  ProtocolIE_Field_38 *tab;
  int count;
} ProtocolIE_Container_38;

extern const ASN1CType asn1_type_ProtocolIE_Container_38[];

typedef struct ProtocolExtensionField_131 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_131;


extern const ASN1CType asn1_type_ProtocolExtensionField_131[];

typedef struct ProtocolExtensionContainer_131 {
  ProtocolExtensionField_131 *tab;
  int count;
} ProtocolExtensionContainer_131;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_131[];

typedef struct Iu_ReleaseRequest {
  ProtocolIE_Container_38 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_131 protocolExtensions;
} Iu_ReleaseRequest;


extern const ASN1CType asn1_type_Iu_ReleaseRequest[];

typedef struct ProtocolIE_Field_39 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_39;


extern const ASN1CType asn1_type_ProtocolIE_Field_39[];

typedef struct ProtocolIE_Container_39 {
  ProtocolIE_Field_39 *tab;
  int count;
} ProtocolIE_Container_39;

extern const ASN1CType asn1_type_ProtocolIE_Container_39[];

typedef struct ProtocolExtensionField_132 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_132;


extern const ASN1CType asn1_type_ProtocolExtensionField_132[];

typedef struct ProtocolExtensionContainer_132 {
  ProtocolExtensionField_132 *tab;
  int count;
} ProtocolExtensionContainer_132;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_132[];

typedef struct RelocationDetect {
  ProtocolIE_Container_39 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_132 protocolExtensions;
} RelocationDetect;


extern const ASN1CType asn1_type_RelocationDetect[];

typedef struct ProtocolIE_Field_40 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_40;


extern const ASN1CType asn1_type_ProtocolIE_Field_40[];

typedef struct ProtocolIE_Container_40 {
  ProtocolIE_Field_40 *tab;
  int count;
} ProtocolIE_Container_40;

extern const ASN1CType asn1_type_ProtocolIE_Container_40[];

typedef struct ProtocolExtensionField_133 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_133;


extern const ASN1CType asn1_type_ProtocolExtensionField_133[];

typedef struct ProtocolExtensionContainer_133 {
  ProtocolExtensionField_133 *tab;
  int count;
} ProtocolExtensionContainer_133;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_133[];

typedef struct RelocationComplete {
  ProtocolIE_Container_40 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_133 protocolExtensions;
} RelocationComplete;


extern const ASN1CType asn1_type_RelocationComplete[];

typedef struct ProtocolIE_Field_41 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_41;


extern const ASN1CType asn1_type_ProtocolIE_Field_41[];

typedef struct ProtocolIE_Container_41 {
  ProtocolIE_Field_41 *tab;
  int count;
} ProtocolIE_Container_41;

extern const ASN1CType asn1_type_ProtocolIE_Container_41[];

typedef struct ProtocolExtensionField_134 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_134;


extern const ASN1CType asn1_type_ProtocolExtensionField_134[];

typedef struct ProtocolExtensionContainer_134 {
  ProtocolExtensionField_134 *tab;
  int count;
} ProtocolExtensionContainer_134;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_134[];

typedef struct EnhancedRelocationCompleteRequest {
  ProtocolIE_Container_41 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_134 protocolExtensions;
} EnhancedRelocationCompleteRequest;


extern const ASN1CType asn1_type_EnhancedRelocationCompleteRequest[];

typedef struct ProtocolIE_Field_42 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_42;


extern const ASN1CType asn1_type_ProtocolIE_Field_42[];

typedef struct ProtocolIE_Container_42 {
  ProtocolIE_Field_42 *tab;
  int count;
} ProtocolIE_Container_42;

extern const ASN1CType asn1_type_ProtocolIE_Container_42[];

typedef struct ProtocolIE_ContainerList_16 {
  ProtocolIE_Container_42 *tab;
  int count;
} ProtocolIE_ContainerList_16;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_16[];

typedef ProtocolIE_ContainerList_16 RAB_SetupList_EnhancedRelocCompleteReq;

#define asn1_type_RAB_SetupList_EnhancedRelocCompleteReq asn1_type_ProtocolIE_ContainerList_16

typedef struct ProtocolExtensionField_135 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_135;


extern const ASN1CType asn1_type_ProtocolExtensionField_135[];

typedef struct ProtocolExtensionContainer_135 {
  ProtocolExtensionField_135 *tab;
  int count;
} ProtocolExtensionContainer_135;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_135[];

typedef struct RAB_SetupItem_EnhancedRelocCompleteReq {
  RAB_ID rAB_ID;
  BOOL transportLayerAddressReq1_option;
  TransportLayerAddress transportLayerAddressReq1;
  BOOL iuTransportAssociationReq1_option;
  IuTransportAssociation iuTransportAssociationReq1;
  BOOL ass_RAB_Parameters_option;
  Ass_RAB_Parameters ass_RAB_Parameters;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_135 iE_Extensions;
} RAB_SetupItem_EnhancedRelocCompleteReq;


extern const ASN1CType asn1_type_RAB_SetupItem_EnhancedRelocCompleteReq[];

typedef struct ProtocolIE_Field_43 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_43;


extern const ASN1CType asn1_type_ProtocolIE_Field_43[];

typedef struct ProtocolIE_Container_43 {
  ProtocolIE_Field_43 *tab;
  int count;
} ProtocolIE_Container_43;

extern const ASN1CType asn1_type_ProtocolIE_Container_43[];

typedef struct ProtocolExtensionField_136 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_136;


extern const ASN1CType asn1_type_ProtocolExtensionField_136[];

typedef struct ProtocolExtensionContainer_136 {
  ProtocolExtensionField_136 *tab;
  int count;
} ProtocolExtensionContainer_136;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_136[];

typedef struct EnhancedRelocationCompleteResponse {
  ProtocolIE_Container_43 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_136 protocolExtensions;
} EnhancedRelocationCompleteResponse;


extern const ASN1CType asn1_type_EnhancedRelocationCompleteResponse[];

typedef struct ProtocolIE_Field_44 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_44;


extern const ASN1CType asn1_type_ProtocolIE_Field_44[];

typedef struct ProtocolIE_Container_44 {
  ProtocolIE_Field_44 *tab;
  int count;
} ProtocolIE_Container_44;

extern const ASN1CType asn1_type_ProtocolIE_Container_44[];

typedef struct ProtocolIE_ContainerList_17 {
  ProtocolIE_Container_44 *tab;
  int count;
} ProtocolIE_ContainerList_17;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_17[];

typedef ProtocolIE_ContainerList_17 RAB_SetupList_EnhancedRelocCompleteRes;

#define asn1_type_RAB_SetupList_EnhancedRelocCompleteRes asn1_type_ProtocolIE_ContainerList_17

typedef struct ProtocolIE_Field_45 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_45;


extern const ASN1CType asn1_type_ProtocolIE_Field_45[];

typedef struct ProtocolIE_Container_45 {
  ProtocolIE_Field_45 *tab;
  int count;
} ProtocolIE_Container_45;

extern const ASN1CType asn1_type_ProtocolIE_Container_45[];

typedef struct ProtocolIE_ContainerList_18 {
  ProtocolIE_Container_45 *tab;
  int count;
} ProtocolIE_ContainerList_18;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_18[];

typedef ProtocolIE_ContainerList_18 RAB_ToBeReleasedList_EnhancedRelocCompleteRes;

#define asn1_type_RAB_ToBeReleasedList_EnhancedRelocCompleteRes asn1_type_ProtocolIE_ContainerList_18

typedef struct ProtocolExtensionField_137 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_137;


extern const ASN1CType asn1_type_ProtocolExtensionField_137[];

typedef struct ProtocolExtensionContainer_137 {
  ProtocolExtensionField_137 *tab;
  int count;
} ProtocolExtensionContainer_137;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_137[];

typedef struct RAB_SetupItem_EnhancedRelocCompleteRes {
  RAB_ID rAB_ID;
  BOOL rAB_Parameters_option;
  RAB_Parameters rAB_Parameters;
  UserPlaneInformation userPlaneInformation;
  BOOL transportLayerAddressRes1_option;
  TransportLayerAddress transportLayerAddressRes1;
  BOOL iuTransportAssociationRes1_option;
  IuTransportAssociation iuTransportAssociationRes1;
  BOOL rab2beReleasedList_option;
  RAB_ToBeReleasedList_EnhancedRelocCompleteRes rab2beReleasedList;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_137 iE_Extensions;
} RAB_SetupItem_EnhancedRelocCompleteRes;


extern const ASN1CType asn1_type_RAB_SetupItem_EnhancedRelocCompleteRes[];

typedef struct ProtocolExtensionField_138 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_138;


extern const ASN1CType asn1_type_ProtocolExtensionField_138[];

typedef struct ProtocolExtensionContainer_138 {
  ProtocolExtensionField_138 *tab;
  int count;
} ProtocolExtensionContainer_138;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_138[];

typedef struct RAB_ToBeReleasedItem_EnhancedRelocCompleteRes {
  RAB_ID rAB_ID;
  Cause cause;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_138 iE_Extensions;
} RAB_ToBeReleasedItem_EnhancedRelocCompleteRes;


extern const ASN1CType asn1_type_RAB_ToBeReleasedItem_EnhancedRelocCompleteRes[];

typedef struct ProtocolIE_Field_46 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_46;


extern const ASN1CType asn1_type_ProtocolIE_Field_46[];

typedef struct ProtocolIE_Container_46 {
  ProtocolIE_Field_46 *tab;
  int count;
} ProtocolIE_Container_46;

extern const ASN1CType asn1_type_ProtocolIE_Container_46[];

typedef struct ProtocolExtensionField_139 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_139;


extern const ASN1CType asn1_type_ProtocolExtensionField_139[];

typedef struct ProtocolExtensionContainer_139 {
  ProtocolExtensionField_139 *tab;
  int count;
} ProtocolExtensionContainer_139;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_139[];

typedef struct EnhancedRelocationCompleteFailure {
  ProtocolIE_Container_46 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_139 protocolExtensions;
} EnhancedRelocationCompleteFailure;


extern const ASN1CType asn1_type_EnhancedRelocationCompleteFailure[];

typedef struct ProtocolIE_Field_47 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_47;


extern const ASN1CType asn1_type_ProtocolIE_Field_47[];

typedef struct ProtocolIE_Container_47 {
  ProtocolIE_Field_47 *tab;
  int count;
} ProtocolIE_Container_47;

extern const ASN1CType asn1_type_ProtocolIE_Container_47[];

typedef struct ProtocolExtensionField_140 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_140;


extern const ASN1CType asn1_type_ProtocolExtensionField_140[];

typedef struct ProtocolExtensionContainer_140 {
  ProtocolExtensionField_140 *tab;
  int count;
} ProtocolExtensionContainer_140;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_140[];

typedef struct EnhancedRelocationCompleteConfirm {
  ProtocolIE_Container_47 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_140 protocolExtensions;
} EnhancedRelocationCompleteConfirm;


extern const ASN1CType asn1_type_EnhancedRelocationCompleteConfirm[];

typedef struct ProtocolIE_Field_48 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_48;


extern const ASN1CType asn1_type_ProtocolIE_Field_48[];

typedef struct ProtocolIE_Container_48 {
  ProtocolIE_Field_48 *tab;
  int count;
} ProtocolIE_Container_48;

extern const ASN1CType asn1_type_ProtocolIE_Container_48[];

typedef struct ProtocolExtensionField_141 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_141;


extern const ASN1CType asn1_type_ProtocolExtensionField_141[];

typedef struct ProtocolExtensionContainer_141 {
  ProtocolExtensionField_141 *tab;
  int count;
} ProtocolExtensionContainer_141;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_141[];

typedef struct Paging {
  ProtocolIE_Container_48 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_141 protocolExtensions;
} Paging;


extern const ASN1CType asn1_type_Paging[];

typedef struct ProtocolIE_Field_49 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_49;


extern const ASN1CType asn1_type_ProtocolIE_Field_49[];

typedef struct ProtocolIE_Container_49 {
  ProtocolIE_Field_49 *tab;
  int count;
} ProtocolIE_Container_49;

extern const ASN1CType asn1_type_ProtocolIE_Container_49[];

typedef struct ProtocolExtensionField_142 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_142;


extern const ASN1CType asn1_type_ProtocolExtensionField_142[];

typedef struct ProtocolExtensionContainer_142 {
  ProtocolExtensionField_142 *tab;
  int count;
} ProtocolExtensionContainer_142;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_142[];

typedef struct CommonID {
  ProtocolIE_Container_49 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_142 protocolExtensions;
} CommonID;


extern const ASN1CType asn1_type_CommonID[];

typedef struct ProtocolIE_Field_50 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_50;


extern const ASN1CType asn1_type_ProtocolIE_Field_50[];

typedef struct ProtocolIE_Container_50 {
  ProtocolIE_Field_50 *tab;
  int count;
} ProtocolIE_Container_50;

extern const ASN1CType asn1_type_ProtocolIE_Container_50[];

typedef struct ProtocolExtensionField_143 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_143;


extern const ASN1CType asn1_type_ProtocolExtensionField_143[];

typedef struct ProtocolExtensionContainer_143 {
  ProtocolExtensionField_143 *tab;
  int count;
} ProtocolExtensionContainer_143;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_143[];

typedef struct CN_InvokeTrace {
  ProtocolIE_Container_50 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_143 protocolExtensions;
} CN_InvokeTrace;


extern const ASN1CType asn1_type_CN_InvokeTrace[];

typedef struct ProtocolIE_Field_51 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_51;


extern const ASN1CType asn1_type_ProtocolIE_Field_51[];

typedef struct ProtocolIE_Container_51 {
  ProtocolIE_Field_51 *tab;
  int count;
} ProtocolIE_Container_51;

extern const ASN1CType asn1_type_ProtocolIE_Container_51[];

typedef struct ProtocolExtensionField_144 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_144;


extern const ASN1CType asn1_type_ProtocolExtensionField_144[];

typedef struct ProtocolExtensionContainer_144 {
  ProtocolExtensionField_144 *tab;
  int count;
} ProtocolExtensionContainer_144;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_144[];

typedef struct CN_DeactivateTrace {
  ProtocolIE_Container_51 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_144 protocolExtensions;
} CN_DeactivateTrace;


extern const ASN1CType asn1_type_CN_DeactivateTrace[];

typedef struct ProtocolIE_Field_52 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_52;


extern const ASN1CType asn1_type_ProtocolIE_Field_52[];

typedef struct ProtocolIE_Container_52 {
  ProtocolIE_Field_52 *tab;
  int count;
} ProtocolIE_Container_52;

extern const ASN1CType asn1_type_ProtocolIE_Container_52[];

typedef struct ProtocolExtensionField_145 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_145;


extern const ASN1CType asn1_type_ProtocolExtensionField_145[];

typedef struct ProtocolExtensionContainer_145 {
  ProtocolExtensionField_145 *tab;
  int count;
} ProtocolExtensionContainer_145;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_145[];

typedef struct LocationReportingControl {
  ProtocolIE_Container_52 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_145 protocolExtensions;
} LocationReportingControl;


extern const ASN1CType asn1_type_LocationReportingControl[];

typedef struct ProtocolIE_Field_53 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_53;


extern const ASN1CType asn1_type_ProtocolIE_Field_53[];

typedef struct ProtocolIE_Container_53 {
  ProtocolIE_Field_53 *tab;
  int count;
} ProtocolIE_Container_53;

extern const ASN1CType asn1_type_ProtocolIE_Container_53[];

typedef struct ProtocolExtensionField_146 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_146;


extern const ASN1CType asn1_type_ProtocolExtensionField_146[];

typedef struct ProtocolExtensionContainer_146 {
  ProtocolExtensionField_146 *tab;
  int count;
} ProtocolExtensionContainer_146;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_146[];

typedef struct LocationReport {
  ProtocolIE_Container_53 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_146 protocolExtensions;
} LocationReport;


extern const ASN1CType asn1_type_LocationReport[];

typedef struct ProtocolIE_Field_54 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_54;


extern const ASN1CType asn1_type_ProtocolIE_Field_54[];

typedef struct ProtocolIE_Container_54 {
  ProtocolIE_Field_54 *tab;
  int count;
} ProtocolIE_Container_54;

extern const ASN1CType asn1_type_ProtocolIE_Container_54[];

typedef struct ProtocolExtensionField_147 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_147;


extern const ASN1CType asn1_type_ProtocolExtensionField_147[];

typedef struct ProtocolExtensionContainer_147 {
  ProtocolExtensionField_147 *tab;
  int count;
} ProtocolExtensionContainer_147;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_147[];

typedef struct InitialUE_Message {
  ProtocolIE_Container_54 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_147 protocolExtensions;
} InitialUE_Message;


extern const ASN1CType asn1_type_InitialUE_Message[];

typedef struct ProtocolIE_Field_55 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_55;


extern const ASN1CType asn1_type_ProtocolIE_Field_55[];

typedef struct ProtocolIE_Container_55 {
  ProtocolIE_Field_55 *tab;
  int count;
} ProtocolIE_Container_55;

extern const ASN1CType asn1_type_ProtocolIE_Container_55[];

typedef struct ProtocolExtensionField_148 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_148;


extern const ASN1CType asn1_type_ProtocolExtensionField_148[];

typedef struct ProtocolExtensionContainer_148 {
  ProtocolExtensionField_148 *tab;
  int count;
} ProtocolExtensionContainer_148;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_148[];

typedef struct DirectTransfer {
  ProtocolIE_Container_55 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_148 protocolExtensions;
} DirectTransfer;


extern const ASN1CType asn1_type_DirectTransfer[];

typedef struct ProtocolIE_Field_56 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_56;


extern const ASN1CType asn1_type_ProtocolIE_Field_56[];

typedef struct RedirectionIndication {
  ProtocolIE_Field_56 *tab;
  int count;
} RedirectionIndication;

extern const ASN1CType asn1_type_RedirectionIndication[];

typedef struct ProtocolIE_Field_57 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_57;


extern const ASN1CType asn1_type_ProtocolIE_Field_57[];

typedef struct ProtocolIE_Container_56 {
  ProtocolIE_Field_57 *tab;
  int count;
} ProtocolIE_Container_56;

extern const ASN1CType asn1_type_ProtocolIE_Container_56[];

typedef struct ProtocolExtensionField_149 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_149;


extern const ASN1CType asn1_type_ProtocolExtensionField_149[];

typedef struct ProtocolExtensionContainer_149 {
  ProtocolExtensionField_149 *tab;
  int count;
} ProtocolExtensionContainer_149;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_149[];

typedef struct Overload {
  ProtocolIE_Container_56 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_149 protocolExtensions;
} Overload;


extern const ASN1CType asn1_type_Overload[];

typedef struct ProtocolIE_Field_58 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_58;


extern const ASN1CType asn1_type_ProtocolIE_Field_58[];

typedef struct ProtocolIE_Container_57 {
  ProtocolIE_Field_58 *tab;
  int count;
} ProtocolIE_Container_57;

extern const ASN1CType asn1_type_ProtocolIE_Container_57[];

typedef struct ProtocolExtensionField_150 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_150;


extern const ASN1CType asn1_type_ProtocolExtensionField_150[];

typedef struct ProtocolExtensionContainer_150 {
  ProtocolExtensionField_150 *tab;
  int count;
} ProtocolExtensionContainer_150;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_150[];

typedef struct ErrorIndication {
  ProtocolIE_Container_57 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_150 protocolExtensions;
} ErrorIndication;


extern const ASN1CType asn1_type_ErrorIndication[];

typedef struct ProtocolIE_Field_59 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_59;


extern const ASN1CType asn1_type_ProtocolIE_Field_59[];

typedef struct ProtocolIE_Container_58 {
  ProtocolIE_Field_59 *tab;
  int count;
} ProtocolIE_Container_58;

extern const ASN1CType asn1_type_ProtocolIE_Container_58[];

typedef struct ProtocolExtensionField_151 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_151;


extern const ASN1CType asn1_type_ProtocolExtensionField_151[];

typedef struct ProtocolExtensionContainer_151 {
  ProtocolExtensionField_151 *tab;
  int count;
} ProtocolExtensionContainer_151;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_151[];

typedef struct SRNS_DataForwardCommand {
  ProtocolIE_Container_58 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_151 protocolExtensions;
} SRNS_DataForwardCommand;


extern const ASN1CType asn1_type_SRNS_DataForwardCommand[];

typedef struct ProtocolIE_Field_60 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_60;


extern const ASN1CType asn1_type_ProtocolIE_Field_60[];

typedef struct ProtocolIE_Container_59 {
  ProtocolIE_Field_60 *tab;
  int count;
} ProtocolIE_Container_59;

extern const ASN1CType asn1_type_ProtocolIE_Container_59[];

typedef struct ProtocolExtensionField_152 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_152;


extern const ASN1CType asn1_type_ProtocolExtensionField_152[];

typedef struct ProtocolExtensionContainer_152 {
  ProtocolExtensionField_152 *tab;
  int count;
} ProtocolExtensionContainer_152;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_152[];

typedef struct ForwardSRNS_Context {
  ProtocolIE_Container_59 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_152 protocolExtensions;
} ForwardSRNS_Context;


extern const ASN1CType asn1_type_ForwardSRNS_Context[];

typedef struct ProtocolIE_Field_61 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_61;


extern const ASN1CType asn1_type_ProtocolIE_Field_61[];

typedef struct ProtocolIE_Container_60 {
  ProtocolIE_Field_61 *tab;
  int count;
} ProtocolIE_Container_60;

extern const ASN1CType asn1_type_ProtocolIE_Container_60[];

typedef struct ProtocolExtensionField_153 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_153;


extern const ASN1CType asn1_type_ProtocolExtensionField_153[];

typedef struct ProtocolExtensionContainer_153 {
  ProtocolExtensionField_153 *tab;
  int count;
} ProtocolExtensionContainer_153;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_153[];

typedef struct RAB_AssignmentRequest {
  ProtocolIE_Container_60 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_153 protocolExtensions;
} RAB_AssignmentRequest;


extern const ASN1CType asn1_type_RAB_AssignmentRequest[];

typedef struct ProtocolIE_FieldPair_1 {
  ProtocolIE_ID id;
  Criticality firstCriticality;
  ASN1OpenType firstValue;
  Criticality secondCriticality;
  ASN1OpenType secondValue;
} ProtocolIE_FieldPair_1;


extern const ASN1CType asn1_type_ProtocolIE_FieldPair_1[];

typedef struct ProtocolIE_ContainerPair_1 {
  ProtocolIE_FieldPair_1 *tab;
  int count;
} ProtocolIE_ContainerPair_1;

extern const ASN1CType asn1_type_ProtocolIE_ContainerPair_1[];

typedef struct ProtocolIE_ContainerPairList_1 {
  ProtocolIE_ContainerPair_1 *tab;
  int count;
} ProtocolIE_ContainerPairList_1;

extern const ASN1CType asn1_type_ProtocolIE_ContainerPairList_1[];

typedef ProtocolIE_ContainerPairList_1 RAB_SetupOrModifyList;

#define asn1_type_RAB_SetupOrModifyList asn1_type_ProtocolIE_ContainerPairList_1

typedef struct ProtocolExtensionField_155 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_155;


extern const ASN1CType asn1_type_ProtocolExtensionField_155[];

typedef struct ProtocolExtensionContainer_155 {
  ProtocolExtensionField_155 *tab;
  int count;
} ProtocolExtensionContainer_155;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_155[];

typedef struct TransportLayerInformation {
  TransportLayerAddress transportLayerAddress;
  IuTransportAssociation iuTransportAssociation;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_155 iE_Extensions;
} TransportLayerInformation;


extern const ASN1CType asn1_type_TransportLayerInformation[];

typedef struct ProtocolExtensionField_154 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_154;


extern const ASN1CType asn1_type_ProtocolExtensionField_154[];

typedef struct ProtocolExtensionContainer_154 {
  ProtocolExtensionField_154 *tab;
  int count;
} ProtocolExtensionContainer_154;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_154[];

typedef struct RAB_SetupOrModifyItemFirst {
  RAB_ID rAB_ID;
  BOOL nAS_SynchronisationIndicator_option;
  NAS_SynchronisationIndicator nAS_SynchronisationIndicator;
  BOOL rAB_Parameters_option;
  RAB_Parameters rAB_Parameters;
  BOOL userPlaneInformation_option;
  UserPlaneInformation userPlaneInformation;
  BOOL transportLayerInformation_option;
  TransportLayerInformation transportLayerInformation;
  BOOL service_Handover_option;
  Service_Handover service_Handover;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_154 iE_Extensions;
} RAB_SetupOrModifyItemFirst;


extern const ASN1CType asn1_type_RAB_SetupOrModifyItemFirst[];

typedef struct ProtocolExtensionField_156 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_156;


extern const ASN1CType asn1_type_ProtocolExtensionField_156[];

typedef struct ProtocolExtensionContainer_156 {
  ProtocolExtensionField_156 *tab;
  int count;
} ProtocolExtensionContainer_156;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_156[];

typedef struct RAB_SetupOrModifyItemSecond {
  BOOL pDP_TypeInformation_option;
  PDP_TypeInformation pDP_TypeInformation;
  BOOL dataVolumeReportingIndication_option;
  DataVolumeReportingIndication dataVolumeReportingIndication;
  BOOL dl_GTP_PDU_SequenceNumber_option;
  DL_GTP_PDU_SequenceNumber dl_GTP_PDU_SequenceNumber;
  BOOL ul_GTP_PDU_SequenceNumber_option;
  UL_GTP_PDU_SequenceNumber ul_GTP_PDU_SequenceNumber;
  BOOL dl_N_PDU_SequenceNumber_option;
  DL_N_PDU_SequenceNumber dl_N_PDU_SequenceNumber;
  BOOL ul_N_PDU_SequenceNumber_option;
  UL_N_PDU_SequenceNumber ul_N_PDU_SequenceNumber;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_156 iE_Extensions;
} RAB_SetupOrModifyItemSecond;


extern const ASN1CType asn1_type_RAB_SetupOrModifyItemSecond[];

typedef struct ProtocolIE_Field_62 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_62;


extern const ASN1CType asn1_type_ProtocolIE_Field_62[];

typedef struct ProtocolIE_Container_61 {
  ProtocolIE_Field_62 *tab;
  int count;
} ProtocolIE_Container_61;

extern const ASN1CType asn1_type_ProtocolIE_Container_61[];

typedef struct ProtocolExtensionField_157 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_157;


extern const ASN1CType asn1_type_ProtocolExtensionField_157[];

typedef struct ProtocolExtensionContainer_157 {
  ProtocolExtensionField_157 *tab;
  int count;
} ProtocolExtensionContainer_157;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_157[];

typedef struct RAB_AssignmentResponse {
  ProtocolIE_Container_61 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_157 protocolExtensions;
} RAB_AssignmentResponse;


extern const ASN1CType asn1_type_RAB_AssignmentResponse[];

typedef struct ProtocolIE_Field_63 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_63;


extern const ASN1CType asn1_type_ProtocolIE_Field_63[];

typedef struct ProtocolIE_Container_62 {
  ProtocolIE_Field_63 *tab;
  int count;
} ProtocolIE_Container_62;

extern const ASN1CType asn1_type_ProtocolIE_Container_62[];

typedef struct ProtocolIE_ContainerList_19 {
  ProtocolIE_Container_62 *tab;
  int count;
} ProtocolIE_ContainerList_19;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_19[];

typedef ProtocolIE_ContainerList_19 RAB_SetupOrModifiedList;

#define asn1_type_RAB_SetupOrModifiedList asn1_type_ProtocolIE_ContainerList_19

typedef struct ProtocolIE_Field_64 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_64;


extern const ASN1CType asn1_type_ProtocolIE_Field_64[];

typedef struct ProtocolIE_Container_63 {
  ProtocolIE_Field_64 *tab;
  int count;
} ProtocolIE_Container_63;

extern const ASN1CType asn1_type_ProtocolIE_Container_63[];

typedef struct ProtocolIE_ContainerList_20 {
  ProtocolIE_Container_63 *tab;
  int count;
} ProtocolIE_ContainerList_20;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_20[];

typedef ProtocolIE_ContainerList_20 RAB_ReleasedList;

#define asn1_type_RAB_ReleasedList asn1_type_ProtocolIE_ContainerList_20

typedef struct ProtocolIE_Field_65 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_65;


extern const ASN1CType asn1_type_ProtocolIE_Field_65[];

typedef struct ProtocolIE_Container_64 {
  ProtocolIE_Field_65 *tab;
  int count;
} ProtocolIE_Container_64;

extern const ASN1CType asn1_type_ProtocolIE_Container_64[];

typedef struct ProtocolIE_ContainerList_21 {
  ProtocolIE_Container_64 *tab;
  int count;
} ProtocolIE_ContainerList_21;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_21[];

typedef ProtocolIE_ContainerList_21 RAB_QueuedList;

#define asn1_type_RAB_QueuedList asn1_type_ProtocolIE_ContainerList_21

typedef RAB_FailedList RAB_ReleaseFailedList;

#define asn1_type_RAB_ReleaseFailedList asn1_type_RAB_FailedList

typedef struct ProtocolExtensionField_158 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_158;


extern const ASN1CType asn1_type_ProtocolExtensionField_158[];

typedef struct ProtocolExtensionContainer_158 {
  ProtocolExtensionField_158 *tab;
  int count;
} ProtocolExtensionContainer_158;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_158[];

typedef struct RAB_SetupOrModifiedItem {
  RAB_ID rAB_ID;
  BOOL transportLayerAddress_option;
  TransportLayerAddress transportLayerAddress;
  BOOL iuTransportAssociation_option;
  IuTransportAssociation iuTransportAssociation;
  BOOL dl_dataVolumes_option;
  DataVolumeList dl_dataVolumes;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_158 iE_Extensions;
} RAB_SetupOrModifiedItem;


extern const ASN1CType asn1_type_RAB_SetupOrModifiedItem[];

typedef struct ProtocolExtensionField_159 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_159;


extern const ASN1CType asn1_type_ProtocolExtensionField_159[];

typedef struct ProtocolExtensionContainer_159 {
  ProtocolExtensionField_159 *tab;
  int count;
} ProtocolExtensionContainer_159;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_159[];

typedef struct RAB_ReleasedItem {
  RAB_ID rAB_ID;
  BOOL dl_dataVolumes_option;
  DataVolumeList dl_dataVolumes;
  BOOL dL_GTP_PDU_SequenceNumber_option;
  DL_GTP_PDU_SequenceNumber dL_GTP_PDU_SequenceNumber;
  BOOL uL_GTP_PDU_SequenceNumber_option;
  UL_GTP_PDU_SequenceNumber uL_GTP_PDU_SequenceNumber;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_159 iE_Extensions;
} RAB_ReleasedItem;


extern const ASN1CType asn1_type_RAB_ReleasedItem[];

typedef struct ProtocolExtensionField_161 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_161;


extern const ASN1CType asn1_type_ProtocolExtensionField_161[];

typedef struct ProtocolExtensionContainer_161 {
  ProtocolExtensionField_161 *tab;
  int count;
} ProtocolExtensionContainer_161;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_161[];

typedef struct RAB_QueuedItem {
  RAB_ID rAB_ID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_161 iE_Extensions;
} RAB_QueuedItem;


extern const ASN1CType asn1_type_RAB_QueuedItem[];

typedef struct ProtocolIE_Field_66 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_66;


extern const ASN1CType asn1_type_ProtocolIE_Field_66[];

typedef struct ProtocolIE_Container_65 {
  ProtocolIE_Field_66 *tab;
  int count;
} ProtocolIE_Container_65;

extern const ASN1CType asn1_type_ProtocolIE_Container_65[];

typedef struct ProtocolIE_ContainerList_22 {
  ProtocolIE_Container_65 *tab;
  int count;
} ProtocolIE_ContainerList_22;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_22[];

typedef ProtocolIE_ContainerList_22 GERAN_Iumode_RAB_FailedList_RABAssgntResponse;

#define asn1_type_GERAN_Iumode_RAB_FailedList_RABAssgntResponse asn1_type_ProtocolIE_ContainerList_22

typedef struct ProtocolExtensionField_162 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_162;


extern const ASN1CType asn1_type_ProtocolExtensionField_162[];

typedef struct ProtocolExtensionContainer_162 {
  ProtocolExtensionField_162 *tab;
  int count;
} ProtocolExtensionContainer_162;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_162[];

typedef struct GERAN_Iumode_RAB_Failed_RABAssgntResponse_Item {
  RAB_ID rAB_ID;
  Cause cause;
  BOOL gERAN_Classmark_option;
  GERAN_Classmark gERAN_Classmark;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_162 iE_Extensions;
} GERAN_Iumode_RAB_Failed_RABAssgntResponse_Item;


extern const ASN1CType asn1_type_GERAN_Iumode_RAB_Failed_RABAssgntResponse_Item[];

typedef struct PrivateIE_Field_1 {
  PrivateIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} PrivateIE_Field_1;


extern const ASN1CType asn1_type_PrivateIE_Field_1[];

typedef struct PrivateIE_Container_1 {
  PrivateIE_Field_1 *tab;
  int count;
} PrivateIE_Container_1;

extern const ASN1CType asn1_type_PrivateIE_Container_1[];

typedef struct PrivateMessage {
  PrivateIE_Container_1 privateIEs;
} PrivateMessage;


extern const ASN1CType asn1_type_PrivateMessage[];

typedef struct ProtocolIE_Field_67 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_67;


extern const ASN1CType asn1_type_ProtocolIE_Field_67[];

typedef struct ProtocolIE_Container_66 {
  ProtocolIE_Field_67 *tab;
  int count;
} ProtocolIE_Container_66;

extern const ASN1CType asn1_type_ProtocolIE_Container_66[];

typedef struct ProtocolExtensionField_163 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_163;


extern const ASN1CType asn1_type_ProtocolExtensionField_163[];

typedef struct ProtocolExtensionContainer_163 {
  ProtocolExtensionField_163 *tab;
  int count;
} ProtocolExtensionContainer_163;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_163[];

typedef struct RANAP_RelocationInformation {
  ProtocolIE_Container_66 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_163 protocolExtensions;
} RANAP_RelocationInformation;


extern const ASN1CType asn1_type_RANAP_RelocationInformation[];

typedef struct ProtocolIE_Field_68 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_68;


extern const ASN1CType asn1_type_ProtocolIE_Field_68[];

typedef struct ProtocolIE_Container_67 {
  ProtocolIE_Field_68 *tab;
  int count;
} ProtocolIE_Container_67;

extern const ASN1CType asn1_type_ProtocolIE_Container_67[];

typedef struct ProtocolIE_ContainerList_23 {
  ProtocolIE_Container_67 *tab;
  int count;
} ProtocolIE_ContainerList_23;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_23[];

typedef ProtocolIE_ContainerList_23 DirectTransferInformationList_RANAP_RelocInf;

#define asn1_type_DirectTransferInformationList_RANAP_RelocInf asn1_type_ProtocolIE_ContainerList_23

typedef struct ProtocolIE_Field_69 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_69;


extern const ASN1CType asn1_type_ProtocolIE_Field_69[];

typedef struct ProtocolIE_Container_68 {
  ProtocolIE_Field_69 *tab;
  int count;
} ProtocolIE_Container_68;

extern const ASN1CType asn1_type_ProtocolIE_Container_68[];

typedef struct ProtocolIE_ContainerList_24 {
  ProtocolIE_Container_68 *tab;
  int count;
} ProtocolIE_ContainerList_24;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_24[];

typedef ProtocolIE_ContainerList_24 RAB_ContextList_RANAP_RelocInf;

#define asn1_type_RAB_ContextList_RANAP_RelocInf asn1_type_ProtocolIE_ContainerList_24

typedef struct ProtocolExtensionField_164 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_164;


extern const ASN1CType asn1_type_ProtocolExtensionField_164[];

typedef struct ProtocolExtensionContainer_164 {
  ProtocolExtensionField_164 *tab;
  int count;
} ProtocolExtensionContainer_164;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_164[];

typedef struct DirectTransferInformationItem_RANAP_RelocInf {
  NAS_PDU nAS_PDU;
  SAPI sAPI;
  CN_DomainIndicator cN_DomainIndicator;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_164 iE_Extensions;
} DirectTransferInformationItem_RANAP_RelocInf;


extern const ASN1CType asn1_type_DirectTransferInformationItem_RANAP_RelocInf[];

typedef struct ProtocolExtensionField_165 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_165;


extern const ASN1CType asn1_type_ProtocolExtensionField_165[];

typedef struct ProtocolExtensionContainer_165 {
  ProtocolExtensionField_165 *tab;
  int count;
} ProtocolExtensionContainer_165;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_165[];

typedef struct RAB_ContextItem_RANAP_RelocInf {
  RAB_ID rAB_ID;
  BOOL dl_GTP_PDU_SequenceNumber_option;
  DL_GTP_PDU_SequenceNumber dl_GTP_PDU_SequenceNumber;
  BOOL ul_GTP_PDU_SequenceNumber_option;
  UL_GTP_PDU_SequenceNumber ul_GTP_PDU_SequenceNumber;
  BOOL dl_N_PDU_SequenceNumber_option;
  DL_N_PDU_SequenceNumber dl_N_PDU_SequenceNumber;
  BOOL ul_N_PDU_SequenceNumber_option;
  UL_N_PDU_SequenceNumber ul_N_PDU_SequenceNumber;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_165 iE_Extensions;
} RAB_ContextItem_RANAP_RelocInf;


extern const ASN1CType asn1_type_RAB_ContextItem_RANAP_RelocInf[];

typedef struct ProtocolIE_Field_70 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_70;


extern const ASN1CType asn1_type_ProtocolIE_Field_70[];

typedef struct ProtocolIE_Container_69 {
  ProtocolIE_Field_70 *tab;
  int count;
} ProtocolIE_Container_69;

extern const ASN1CType asn1_type_ProtocolIE_Container_69[];

typedef struct ProtocolExtensionField_166 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_166;


extern const ASN1CType asn1_type_ProtocolExtensionField_166[];

typedef struct ProtocolExtensionContainer_166 {
  ProtocolExtensionField_166 *tab;
  int count;
} ProtocolExtensionContainer_166;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_166[];

typedef struct RANAP_EnhancedRelocationInformationRequest {
  ProtocolIE_Container_69 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_166 protocolExtensions;
} RANAP_EnhancedRelocationInformationRequest;


extern const ASN1CType asn1_type_RANAP_EnhancedRelocationInformationRequest[];

typedef struct ProtocolIE_Field_71 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_71;


extern const ASN1CType asn1_type_ProtocolIE_Field_71[];

typedef struct ProtocolIE_Container_70 {
  ProtocolIE_Field_71 *tab;
  int count;
} ProtocolIE_Container_70;

extern const ASN1CType asn1_type_ProtocolIE_Container_70[];

typedef struct ProtocolIE_ContainerList_25 {
  ProtocolIE_Container_70 *tab;
  int count;
} ProtocolIE_ContainerList_25;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_25[];

typedef ProtocolIE_ContainerList_25 RAB_SetupList_EnhRelocInfoReq;

#define asn1_type_RAB_SetupList_EnhRelocInfoReq asn1_type_ProtocolIE_ContainerList_25

typedef struct ProtocolExtensionField_168 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_168;


extern const ASN1CType asn1_type_ProtocolExtensionField_168[];

typedef struct ProtocolExtensionContainer_168 {
  ProtocolExtensionField_168 *tab;
  int count;
} ProtocolExtensionContainer_168;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_168[];

typedef struct TNLInformationEnhRelInfoReq {
  TransportLayerAddress transportLayerAddress;
  IuTransportAssociation iuTransportAssociation;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_168 iE_Extensions;
} TNLInformationEnhRelInfoReq;


extern const ASN1CType asn1_type_TNLInformationEnhRelInfoReq[];

typedef struct ProtocolExtensionField_167 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_167;


extern const ASN1CType asn1_type_ProtocolExtensionField_167[];

typedef struct ProtocolExtensionContainer_167 {
  ProtocolExtensionField_167 *tab;
  int count;
} ProtocolExtensionContainer_167;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_167[];

typedef struct RAB_SetupItem_EnhRelocInfoReq {
  RAB_ID rAB_ID;
  CN_DomainIndicator cN_DomainIndicator;
  RAB_Parameters rAB_Parameters;
  BOOL dataVolumeReportingIndication_option;
  DataVolumeReportingIndication dataVolumeReportingIndication;
  BOOL pDP_TypeInformation_option;
  PDP_TypeInformation pDP_TypeInformation;
  UserPlaneInformation userPlaneInformation;
  BOOL dataForwardingInformation_option;
  TNLInformationEnhRelInfoReq dataForwardingInformation;
  BOOL sourceSideIuULTNLInfo_option;
  TNLInformationEnhRelInfoReq sourceSideIuULTNLInfo;
  BOOL service_Handover_option;
  Service_Handover service_Handover;
  BOOL alt_RAB_Parameters_option;
  Alt_RAB_Parameters alt_RAB_Parameters;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_167 iE_Extensions;
} RAB_SetupItem_EnhRelocInfoReq;


extern const ASN1CType asn1_type_RAB_SetupItem_EnhRelocInfoReq[];

typedef struct ProtocolIE_Field_72 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_72;


extern const ASN1CType asn1_type_ProtocolIE_Field_72[];

typedef struct ProtocolIE_Container_71 {
  ProtocolIE_Field_72 *tab;
  int count;
} ProtocolIE_Container_71;

extern const ASN1CType asn1_type_ProtocolIE_Container_71[];

typedef struct ProtocolExtensionField_169 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_169;


extern const ASN1CType asn1_type_ProtocolExtensionField_169[];

typedef struct ProtocolExtensionContainer_169 {
  ProtocolExtensionField_169 *tab;
  int count;
} ProtocolExtensionContainer_169;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_169[];

typedef struct RANAP_EnhancedRelocationInformationResponse {
  ProtocolIE_Container_71 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_169 protocolExtensions;
} RANAP_EnhancedRelocationInformationResponse;


extern const ASN1CType asn1_type_RANAP_EnhancedRelocationInformationResponse[];

typedef struct ProtocolIE_Field_73 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_73;


extern const ASN1CType asn1_type_ProtocolIE_Field_73[];

typedef struct ProtocolIE_Container_72 {
  ProtocolIE_Field_73 *tab;
  int count;
} ProtocolIE_Container_72;

extern const ASN1CType asn1_type_ProtocolIE_Container_72[];

typedef struct ProtocolIE_ContainerList_26 {
  ProtocolIE_Container_72 *tab;
  int count;
} ProtocolIE_ContainerList_26;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_26[];

typedef ProtocolIE_ContainerList_26 RAB_SetupList_EnhRelocInfoRes;

#define asn1_type_RAB_SetupList_EnhRelocInfoRes asn1_type_ProtocolIE_ContainerList_26

typedef struct ProtocolIE_Field_74 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_74;


extern const ASN1CType asn1_type_ProtocolIE_Field_74[];

typedef struct ProtocolIE_Container_73 {
  ProtocolIE_Field_74 *tab;
  int count;
} ProtocolIE_Container_73;

extern const ASN1CType asn1_type_ProtocolIE_Container_73[];

typedef struct ProtocolIE_ContainerList_27 {
  ProtocolIE_Container_73 *tab;
  int count;
} ProtocolIE_ContainerList_27;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_27[];

typedef ProtocolIE_ContainerList_27 RAB_FailedList_EnhRelocInfoRes;

#define asn1_type_RAB_FailedList_EnhRelocInfoRes asn1_type_ProtocolIE_ContainerList_27

typedef struct ProtocolExtensionField_172 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_172;


extern const ASN1CType asn1_type_ProtocolExtensionField_172[];

typedef struct ProtocolExtensionContainer_172 {
  ProtocolExtensionField_172 *tab;
  int count;
} ProtocolExtensionContainer_172;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_172[];

typedef struct TNLInformationEnhRelInfoRes {
  TransportLayerAddress dl_forwardingTransportLayerAddress;
  IuTransportAssociation dl_forwardingTransportAssociation;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_172 iE_Extensions;
} TNLInformationEnhRelInfoRes;


extern const ASN1CType asn1_type_TNLInformationEnhRelInfoRes[];

typedef struct ProtocolExtensionField_170 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_170;


extern const ASN1CType asn1_type_ProtocolExtensionField_170[];

typedef struct ProtocolExtensionContainer_170 {
  ProtocolExtensionField_170 *tab;
  int count;
} ProtocolExtensionContainer_170;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_170[];

typedef struct RAB_SetupItem_EnhRelocInfoRes {
  CN_DomainIndicator cN_DomainIndicator;
  RAB_ID rAB_ID;
  BOOL dataForwardingInformation_option;
  TNLInformationEnhRelInfoRes dataForwardingInformation;
  BOOL ass_RAB_Parameters_option;
  Ass_RAB_Parameters ass_RAB_Parameters;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_170 iE_Extensions;
} RAB_SetupItem_EnhRelocInfoRes;


extern const ASN1CType asn1_type_RAB_SetupItem_EnhRelocInfoRes[];

typedef struct ProtocolExtensionField_171 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_171;


extern const ASN1CType asn1_type_ProtocolExtensionField_171[];

typedef struct ProtocolExtensionContainer_171 {
  ProtocolExtensionField_171 *tab;
  int count;
} ProtocolExtensionContainer_171;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_171[];

typedef struct RAB_FailedItem_EnhRelocInfoRes {
  CN_DomainIndicator cN_DomainIndicator;
  RAB_ID rAB_ID;
  Cause cause;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_171 iE_Extensions;
} RAB_FailedItem_EnhRelocInfoRes;


extern const ASN1CType asn1_type_RAB_FailedItem_EnhRelocInfoRes[];

typedef struct ProtocolIE_Field_75 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_75;


extern const ASN1CType asn1_type_ProtocolIE_Field_75[];

typedef struct ProtocolIE_Container_74 {
  ProtocolIE_Field_75 *tab;
  int count;
} ProtocolIE_Container_74;

extern const ASN1CType asn1_type_ProtocolIE_Container_74[];

typedef struct ProtocolExtensionField_173 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_173;


extern const ASN1CType asn1_type_ProtocolExtensionField_173[];

typedef struct ProtocolExtensionContainer_173 {
  ProtocolExtensionField_173 *tab;
  int count;
} ProtocolExtensionContainer_173;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_173[];

typedef struct RAB_ModifyRequest {
  ProtocolIE_Container_74 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_173 protocolExtensions;
} RAB_ModifyRequest;


extern const ASN1CType asn1_type_RAB_ModifyRequest[];

typedef struct ProtocolIE_Field_76 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_76;


extern const ASN1CType asn1_type_ProtocolIE_Field_76[];

typedef struct ProtocolIE_Container_75 {
  ProtocolIE_Field_76 *tab;
  int count;
} ProtocolIE_Container_75;

extern const ASN1CType asn1_type_ProtocolIE_Container_75[];

typedef struct ProtocolIE_ContainerList_28 {
  ProtocolIE_Container_75 *tab;
  int count;
} ProtocolIE_ContainerList_28;

extern const ASN1CType asn1_type_ProtocolIE_ContainerList_28[];

typedef ProtocolIE_ContainerList_28 RAB_ModifyList;

#define asn1_type_RAB_ModifyList asn1_type_ProtocolIE_ContainerList_28

typedef struct ProtocolExtensionField_174 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_174;


extern const ASN1CType asn1_type_ProtocolExtensionField_174[];

typedef struct ProtocolExtensionContainer_174 {
  ProtocolExtensionField_174 *tab;
  int count;
} ProtocolExtensionContainer_174;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_174[];

typedef struct RAB_ModifyItem {
  RAB_ID rAB_ID;
  Requested_RAB_Parameter_Values requested_RAB_Parameter_Values;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_174 iE_Extensions;
} RAB_ModifyItem;


extern const ASN1CType asn1_type_RAB_ModifyItem[];

typedef struct ProtocolIE_Field_77 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_77;


extern const ASN1CType asn1_type_ProtocolIE_Field_77[];

typedef struct ProtocolIE_Container_76 {
  ProtocolIE_Field_77 *tab;
  int count;
} ProtocolIE_Container_76;

extern const ASN1CType asn1_type_ProtocolIE_Container_76[];

typedef struct ProtocolExtensionField_175 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_175;


extern const ASN1CType asn1_type_ProtocolExtensionField_175[];

typedef struct ProtocolExtensionContainer_175 {
  ProtocolExtensionField_175 *tab;
  int count;
} ProtocolExtensionContainer_175;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_175[];

typedef struct LocationRelatedDataRequest {
  ProtocolIE_Container_76 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_175 protocolExtensions;
} LocationRelatedDataRequest;


extern const ASN1CType asn1_type_LocationRelatedDataRequest[];

typedef struct ProtocolIE_Field_78 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_78;


extern const ASN1CType asn1_type_ProtocolIE_Field_78[];

typedef struct ProtocolIE_Container_77 {
  ProtocolIE_Field_78 *tab;
  int count;
} ProtocolIE_Container_77;

extern const ASN1CType asn1_type_ProtocolIE_Container_77[];

typedef struct ProtocolExtensionField_176 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_176;


extern const ASN1CType asn1_type_ProtocolExtensionField_176[];

typedef struct ProtocolExtensionContainer_176 {
  ProtocolExtensionField_176 *tab;
  int count;
} ProtocolExtensionContainer_176;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_176[];

typedef struct LocationRelatedDataResponse {
  ProtocolIE_Container_77 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_176 protocolExtensions;
} LocationRelatedDataResponse;


extern const ASN1CType asn1_type_LocationRelatedDataResponse[];

typedef struct ProtocolIE_Field_79 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_79;


extern const ASN1CType asn1_type_ProtocolIE_Field_79[];

typedef struct ProtocolIE_Container_78 {
  ProtocolIE_Field_79 *tab;
  int count;
} ProtocolIE_Container_78;

extern const ASN1CType asn1_type_ProtocolIE_Container_78[];

typedef struct ProtocolExtensionField_177 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_177;


extern const ASN1CType asn1_type_ProtocolExtensionField_177[];

typedef struct ProtocolExtensionContainer_177 {
  ProtocolExtensionField_177 *tab;
  int count;
} ProtocolExtensionContainer_177;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_177[];

typedef struct LocationRelatedDataFailure {
  ProtocolIE_Container_78 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_177 protocolExtensions;
} LocationRelatedDataFailure;


extern const ASN1CType asn1_type_LocationRelatedDataFailure[];

typedef struct ProtocolIE_Field_80 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_80;


extern const ASN1CType asn1_type_ProtocolIE_Field_80[];

typedef struct ProtocolIE_Container_79 {
  ProtocolIE_Field_80 *tab;
  int count;
} ProtocolIE_Container_79;

extern const ASN1CType asn1_type_ProtocolIE_Container_79[];

typedef struct ProtocolExtensionField_178 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_178;


extern const ASN1CType asn1_type_ProtocolExtensionField_178[];

typedef struct ProtocolExtensionContainer_178 {
  ProtocolExtensionField_178 *tab;
  int count;
} ProtocolExtensionContainer_178;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_178[];

typedef struct InformationTransferIndication {
  ProtocolIE_Container_79 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_178 protocolExtensions;
} InformationTransferIndication;


extern const ASN1CType asn1_type_InformationTransferIndication[];

typedef struct ProtocolIE_Field_81 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_81;


extern const ASN1CType asn1_type_ProtocolIE_Field_81[];

typedef struct ProtocolIE_Container_80 {
  ProtocolIE_Field_81 *tab;
  int count;
} ProtocolIE_Container_80;

extern const ASN1CType asn1_type_ProtocolIE_Container_80[];

typedef struct ProtocolExtensionField_179 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_179;


extern const ASN1CType asn1_type_ProtocolExtensionField_179[];

typedef struct ProtocolExtensionContainer_179 {
  ProtocolExtensionField_179 *tab;
  int count;
} ProtocolExtensionContainer_179;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_179[];

typedef struct InformationTransferConfirmation {
  ProtocolIE_Container_80 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_179 protocolExtensions;
} InformationTransferConfirmation;


extern const ASN1CType asn1_type_InformationTransferConfirmation[];

typedef struct ProtocolIE_Field_82 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_82;


extern const ASN1CType asn1_type_ProtocolIE_Field_82[];

typedef struct ProtocolIE_Container_81 {
  ProtocolIE_Field_82 *tab;
  int count;
} ProtocolIE_Container_81;

extern const ASN1CType asn1_type_ProtocolIE_Container_81[];

typedef struct ProtocolExtensionField_180 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_180;


extern const ASN1CType asn1_type_ProtocolExtensionField_180[];

typedef struct ProtocolExtensionContainer_180 {
  ProtocolExtensionField_180 *tab;
  int count;
} ProtocolExtensionContainer_180;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_180[];

typedef struct InformationTransferFailure {
  ProtocolIE_Container_81 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_180 protocolExtensions;
} InformationTransferFailure;


extern const ASN1CType asn1_type_InformationTransferFailure[];

typedef struct ProtocolIE_Field_83 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_83;


extern const ASN1CType asn1_type_ProtocolIE_Field_83[];

typedef struct ProtocolIE_Container_82 {
  ProtocolIE_Field_83 *tab;
  int count;
} ProtocolIE_Container_82;

extern const ASN1CType asn1_type_ProtocolIE_Container_82[];

typedef struct ProtocolExtensionField_181 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_181;


extern const ASN1CType asn1_type_ProtocolExtensionField_181[];

typedef struct ProtocolExtensionContainer_181 {
  ProtocolExtensionField_181 *tab;
  int count;
} ProtocolExtensionContainer_181;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_181[];

typedef struct UESpecificInformationIndication {
  ProtocolIE_Container_82 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_181 protocolExtensions;
} UESpecificInformationIndication;


extern const ASN1CType asn1_type_UESpecificInformationIndication[];

typedef struct ProtocolIE_Field_84 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_84;


extern const ASN1CType asn1_type_ProtocolIE_Field_84[];

typedef struct ProtocolIE_Container_83 {
  ProtocolIE_Field_84 *tab;
  int count;
} ProtocolIE_Container_83;

extern const ASN1CType asn1_type_ProtocolIE_Container_83[];

typedef struct ProtocolExtensionField_182 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_182;


extern const ASN1CType asn1_type_ProtocolExtensionField_182[];

typedef struct ProtocolExtensionContainer_182 {
  ProtocolExtensionField_182 *tab;
  int count;
} ProtocolExtensionContainer_182;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_182[];

typedef struct DirectInformationTransfer {
  ProtocolIE_Container_83 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_182 protocolExtensions;
} DirectInformationTransfer;


extern const ASN1CType asn1_type_DirectInformationTransfer[];

typedef struct ProtocolIE_Field_85 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_85;


extern const ASN1CType asn1_type_ProtocolIE_Field_85[];

typedef struct ProtocolIE_Container_84 {
  ProtocolIE_Field_85 *tab;
  int count;
} ProtocolIE_Container_84;

extern const ASN1CType asn1_type_ProtocolIE_Container_84[];

typedef struct ProtocolExtensionField_183 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_183;


extern const ASN1CType asn1_type_ProtocolExtensionField_183[];

typedef struct ProtocolExtensionContainer_183 {
  ProtocolExtensionField_183 *tab;
  int count;
} ProtocolExtensionContainer_183;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_183[];

typedef struct UplinkInformationExchangeRequest {
  ProtocolIE_Container_84 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_183 protocolExtensions;
} UplinkInformationExchangeRequest;


extern const ASN1CType asn1_type_UplinkInformationExchangeRequest[];

typedef struct ProtocolIE_Field_86 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_86;


extern const ASN1CType asn1_type_ProtocolIE_Field_86[];

typedef struct ProtocolIE_Container_85 {
  ProtocolIE_Field_86 *tab;
  int count;
} ProtocolIE_Container_85;

extern const ASN1CType asn1_type_ProtocolIE_Container_85[];

typedef struct ProtocolExtensionField_184 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_184;


extern const ASN1CType asn1_type_ProtocolExtensionField_184[];

typedef struct ProtocolExtensionContainer_184 {
  ProtocolExtensionField_184 *tab;
  int count;
} ProtocolExtensionContainer_184;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_184[];

typedef struct UplinkInformationExchangeResponse {
  ProtocolIE_Container_85 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_184 protocolExtensions;
} UplinkInformationExchangeResponse;


extern const ASN1CType asn1_type_UplinkInformationExchangeResponse[];

typedef struct ProtocolIE_Field_87 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_87;


extern const ASN1CType asn1_type_ProtocolIE_Field_87[];

typedef struct ProtocolIE_Container_86 {
  ProtocolIE_Field_87 *tab;
  int count;
} ProtocolIE_Container_86;

extern const ASN1CType asn1_type_ProtocolIE_Container_86[];

typedef struct ProtocolExtensionField_185 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_185;


extern const ASN1CType asn1_type_ProtocolExtensionField_185[];

typedef struct ProtocolExtensionContainer_185 {
  ProtocolExtensionField_185 *tab;
  int count;
} ProtocolExtensionContainer_185;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_185[];

typedef struct UplinkInformationExchangeFailure {
  ProtocolIE_Container_86 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_185 protocolExtensions;
} UplinkInformationExchangeFailure;


extern const ASN1CType asn1_type_UplinkInformationExchangeFailure[];

typedef struct ProtocolIE_Field_88 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_88;


extern const ASN1CType asn1_type_ProtocolIE_Field_88[];

typedef struct ProtocolIE_Container_87 {
  ProtocolIE_Field_88 *tab;
  int count;
} ProtocolIE_Container_87;

extern const ASN1CType asn1_type_ProtocolIE_Container_87[];

typedef struct ProtocolExtensionField_186 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_186;


extern const ASN1CType asn1_type_ProtocolExtensionField_186[];

typedef struct ProtocolExtensionContainer_186 {
  ProtocolExtensionField_186 *tab;
  int count;
} ProtocolExtensionContainer_186;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_186[];

typedef struct MBMSSessionStart {
  ProtocolIE_Container_87 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_186 protocolExtensions;
} MBMSSessionStart;


extern const ASN1CType asn1_type_MBMSSessionStart[];

typedef struct ProtocolExtensionField_187 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_187;


extern const ASN1CType asn1_type_ProtocolExtensionField_187[];

typedef struct ProtocolExtensionContainer_187 {
  ProtocolExtensionField_187 *tab;
  int count;
} ProtocolExtensionContainer_187;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_187[];

typedef struct MBMSSynchronisationInformation {
  MBMSHCIndicator mBMSHCIndicator;
  IPMulticastAddress iPMulticastAddress;
  GTP_TEI gTPDLTEID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_187 iE_Extensions;
} MBMSSynchronisationInformation;


extern const ASN1CType asn1_type_MBMSSynchronisationInformation[];

typedef struct ProtocolIE_Field_89 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_89;


extern const ASN1CType asn1_type_ProtocolIE_Field_89[];

typedef struct ProtocolIE_Container_88 {
  ProtocolIE_Field_89 *tab;
  int count;
} ProtocolIE_Container_88;

extern const ASN1CType asn1_type_ProtocolIE_Container_88[];

typedef struct ProtocolExtensionField_188 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_188;


extern const ASN1CType asn1_type_ProtocolExtensionField_188[];

typedef struct ProtocolExtensionContainer_188 {
  ProtocolExtensionField_188 *tab;
  int count;
} ProtocolExtensionContainer_188;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_188[];

typedef struct MBMSSessionStartResponse {
  ProtocolIE_Container_88 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_188 protocolExtensions;
} MBMSSessionStartResponse;


extern const ASN1CType asn1_type_MBMSSessionStartResponse[];

typedef struct ProtocolIE_Field_90 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_90;


extern const ASN1CType asn1_type_ProtocolIE_Field_90[];

typedef struct ProtocolIE_Container_89 {
  ProtocolIE_Field_90 *tab;
  int count;
} ProtocolIE_Container_89;

extern const ASN1CType asn1_type_ProtocolIE_Container_89[];

typedef struct ProtocolExtensionField_189 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_189;


extern const ASN1CType asn1_type_ProtocolExtensionField_189[];

typedef struct ProtocolExtensionContainer_189 {
  ProtocolExtensionField_189 *tab;
  int count;
} ProtocolExtensionContainer_189;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_189[];

typedef struct MBMSSessionStartFailure {
  ProtocolIE_Container_89 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_189 protocolExtensions;
} MBMSSessionStartFailure;


extern const ASN1CType asn1_type_MBMSSessionStartFailure[];

typedef struct ProtocolIE_Field_91 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_91;


extern const ASN1CType asn1_type_ProtocolIE_Field_91[];

typedef struct ProtocolIE_Container_90 {
  ProtocolIE_Field_91 *tab;
  int count;
} ProtocolIE_Container_90;

extern const ASN1CType asn1_type_ProtocolIE_Container_90[];

typedef struct ProtocolExtensionField_190 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_190;


extern const ASN1CType asn1_type_ProtocolExtensionField_190[];

typedef struct ProtocolExtensionContainer_190 {
  ProtocolExtensionField_190 *tab;
  int count;
} ProtocolExtensionContainer_190;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_190[];

typedef struct MBMSSessionUpdate {
  ProtocolIE_Container_90 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_190 protocolExtensions;
} MBMSSessionUpdate;


extern const ASN1CType asn1_type_MBMSSessionUpdate[];

typedef struct ProtocolIE_Field_92 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_92;


extern const ASN1CType asn1_type_ProtocolIE_Field_92[];

typedef struct ProtocolIE_Container_91 {
  ProtocolIE_Field_92 *tab;
  int count;
} ProtocolIE_Container_91;

extern const ASN1CType asn1_type_ProtocolIE_Container_91[];

typedef struct ProtocolExtensionField_191 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_191;


extern const ASN1CType asn1_type_ProtocolExtensionField_191[];

typedef struct ProtocolExtensionContainer_191 {
  ProtocolExtensionField_191 *tab;
  int count;
} ProtocolExtensionContainer_191;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_191[];

typedef struct MBMSSessionUpdateResponse {
  ProtocolIE_Container_91 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_191 protocolExtensions;
} MBMSSessionUpdateResponse;


extern const ASN1CType asn1_type_MBMSSessionUpdateResponse[];

typedef struct ProtocolIE_Field_93 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_93;


extern const ASN1CType asn1_type_ProtocolIE_Field_93[];

typedef struct ProtocolIE_Container_92 {
  ProtocolIE_Field_93 *tab;
  int count;
} ProtocolIE_Container_92;

extern const ASN1CType asn1_type_ProtocolIE_Container_92[];

typedef struct ProtocolExtensionField_192 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_192;


extern const ASN1CType asn1_type_ProtocolExtensionField_192[];

typedef struct ProtocolExtensionContainer_192 {
  ProtocolExtensionField_192 *tab;
  int count;
} ProtocolExtensionContainer_192;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_192[];

typedef struct MBMSSessionUpdateFailure {
  ProtocolIE_Container_92 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_192 protocolExtensions;
} MBMSSessionUpdateFailure;


extern const ASN1CType asn1_type_MBMSSessionUpdateFailure[];

typedef struct ProtocolIE_Field_94 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_94;


extern const ASN1CType asn1_type_ProtocolIE_Field_94[];

typedef struct ProtocolIE_Container_93 {
  ProtocolIE_Field_94 *tab;
  int count;
} ProtocolIE_Container_93;

extern const ASN1CType asn1_type_ProtocolIE_Container_93[];

typedef struct ProtocolExtensionField_193 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_193;


extern const ASN1CType asn1_type_ProtocolExtensionField_193[];

typedef struct ProtocolExtensionContainer_193 {
  ProtocolExtensionField_193 *tab;
  int count;
} ProtocolExtensionContainer_193;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_193[];

typedef struct MBMSSessionStop {
  ProtocolIE_Container_93 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_193 protocolExtensions;
} MBMSSessionStop;


extern const ASN1CType asn1_type_MBMSSessionStop[];

typedef struct ProtocolIE_Field_95 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_95;


extern const ASN1CType asn1_type_ProtocolIE_Field_95[];

typedef struct ProtocolIE_Container_94 {
  ProtocolIE_Field_95 *tab;
  int count;
} ProtocolIE_Container_94;

extern const ASN1CType asn1_type_ProtocolIE_Container_94[];

typedef struct ProtocolExtensionField_194 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_194;


extern const ASN1CType asn1_type_ProtocolExtensionField_194[];

typedef struct ProtocolExtensionContainer_194 {
  ProtocolExtensionField_194 *tab;
  int count;
} ProtocolExtensionContainer_194;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_194[];

typedef struct MBMSSessionStopResponse {
  ProtocolIE_Container_94 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_194 protocolExtensions;
} MBMSSessionStopResponse;


extern const ASN1CType asn1_type_MBMSSessionStopResponse[];

typedef struct ProtocolIE_Field_96 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_96;


extern const ASN1CType asn1_type_ProtocolIE_Field_96[];

typedef struct ProtocolIE_Container_95 {
  ProtocolIE_Field_96 *tab;
  int count;
} ProtocolIE_Container_95;

extern const ASN1CType asn1_type_ProtocolIE_Container_95[];

typedef struct ProtocolExtensionField_195 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_195;


extern const ASN1CType asn1_type_ProtocolExtensionField_195[];

typedef struct ProtocolExtensionContainer_195 {
  ProtocolExtensionField_195 *tab;
  int count;
} ProtocolExtensionContainer_195;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_195[];

typedef struct MBMSUELinkingRequest {
  ProtocolIE_Container_95 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_195 protocolExtensions;
} MBMSUELinkingRequest;


extern const ASN1CType asn1_type_MBMSUELinkingRequest[];

typedef struct ProtocolExtensionField_196 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_196;


extern const ASN1CType asn1_type_ProtocolExtensionField_196[];

typedef struct ProtocolExtensionContainer_196 {
  ProtocolExtensionField_196 *tab;
  int count;
} ProtocolExtensionContainer_196;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_196[];

typedef struct LeftMBMSBearerService_IEs_1 {
  TMGI tMGI;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_196 iE_Extensions;
} LeftMBMSBearerService_IEs_1;


extern const ASN1CType asn1_type_LeftMBMSBearerService_IEs_1[];

typedef struct LeftMBMSBearerService_IEs {
  LeftMBMSBearerService_IEs_1 *tab;
  int count;
} LeftMBMSBearerService_IEs;

extern const ASN1CType asn1_type_LeftMBMSBearerService_IEs[];

typedef struct ProtocolIE_Field_97 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_97;


extern const ASN1CType asn1_type_ProtocolIE_Field_97[];

typedef struct ProtocolIE_Container_96 {
  ProtocolIE_Field_97 *tab;
  int count;
} ProtocolIE_Container_96;

extern const ASN1CType asn1_type_ProtocolIE_Container_96[];

typedef struct ProtocolExtensionField_197 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_197;


extern const ASN1CType asn1_type_ProtocolExtensionField_197[];

typedef struct ProtocolExtensionContainer_197 {
  ProtocolExtensionField_197 *tab;
  int count;
} ProtocolExtensionContainer_197;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_197[];

typedef struct MBMSUELinkingResponse {
  ProtocolIE_Container_96 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_197 protocolExtensions;
} MBMSUELinkingResponse;


extern const ASN1CType asn1_type_MBMSUELinkingResponse[];

typedef struct ProtocolExtensionField_198 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_198;


extern const ASN1CType asn1_type_ProtocolExtensionField_198[];

typedef struct ProtocolExtensionContainer_198 {
  ProtocolExtensionField_198 *tab;
  int count;
} ProtocolExtensionContainer_198;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_198[];

typedef struct UnsuccessfulLinking_IEs_1 {
  TMGI tMGI;
  Cause cause;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_198 iE_Extensions;
} UnsuccessfulLinking_IEs_1;


extern const ASN1CType asn1_type_UnsuccessfulLinking_IEs_1[];

typedef struct UnsuccessfulLinking_IEs {
  UnsuccessfulLinking_IEs_1 *tab;
  int count;
} UnsuccessfulLinking_IEs;

extern const ASN1CType asn1_type_UnsuccessfulLinking_IEs[];

typedef struct ProtocolIE_Field_98 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_98;


extern const ASN1CType asn1_type_ProtocolIE_Field_98[];

typedef struct ProtocolIE_Container_97 {
  ProtocolIE_Field_98 *tab;
  int count;
} ProtocolIE_Container_97;

extern const ASN1CType asn1_type_ProtocolIE_Container_97[];

typedef struct ProtocolExtensionField_199 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_199;


extern const ASN1CType asn1_type_ProtocolExtensionField_199[];

typedef struct ProtocolExtensionContainer_199 {
  ProtocolExtensionField_199 *tab;
  int count;
} ProtocolExtensionContainer_199;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_199[];

typedef struct MBMSRegistrationRequest {
  ProtocolIE_Container_97 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_199 protocolExtensions;
} MBMSRegistrationRequest;


extern const ASN1CType asn1_type_MBMSRegistrationRequest[];

typedef struct ProtocolIE_Field_99 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_99;


extern const ASN1CType asn1_type_ProtocolIE_Field_99[];

typedef struct ProtocolIE_Container_98 {
  ProtocolIE_Field_99 *tab;
  int count;
} ProtocolIE_Container_98;

extern const ASN1CType asn1_type_ProtocolIE_Container_98[];

typedef struct ProtocolExtensionField_200 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_200;


extern const ASN1CType asn1_type_ProtocolExtensionField_200[];

typedef struct ProtocolExtensionContainer_200 {
  ProtocolExtensionField_200 *tab;
  int count;
} ProtocolExtensionContainer_200;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_200[];

typedef struct MBMSRegistrationResponse {
  ProtocolIE_Container_98 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_200 protocolExtensions;
} MBMSRegistrationResponse;


extern const ASN1CType asn1_type_MBMSRegistrationResponse[];

typedef struct ProtocolIE_Field_100 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_100;


extern const ASN1CType asn1_type_ProtocolIE_Field_100[];

typedef struct ProtocolIE_Container_99 {
  ProtocolIE_Field_100 *tab;
  int count;
} ProtocolIE_Container_99;

extern const ASN1CType asn1_type_ProtocolIE_Container_99[];

typedef struct ProtocolExtensionField_201 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_201;


extern const ASN1CType asn1_type_ProtocolExtensionField_201[];

typedef struct ProtocolExtensionContainer_201 {
  ProtocolExtensionField_201 *tab;
  int count;
} ProtocolExtensionContainer_201;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_201[];

typedef struct MBMSRegistrationFailure {
  ProtocolIE_Container_99 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_201 protocolExtensions;
} MBMSRegistrationFailure;


extern const ASN1CType asn1_type_MBMSRegistrationFailure[];

typedef struct ProtocolIE_Field_101 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_101;


extern const ASN1CType asn1_type_ProtocolIE_Field_101[];

typedef struct ProtocolIE_Container_100 {
  ProtocolIE_Field_101 *tab;
  int count;
} ProtocolIE_Container_100;

extern const ASN1CType asn1_type_ProtocolIE_Container_100[];

typedef struct ProtocolExtensionField_202 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_202;


extern const ASN1CType asn1_type_ProtocolExtensionField_202[];

typedef struct ProtocolExtensionContainer_202 {
  ProtocolExtensionField_202 *tab;
  int count;
} ProtocolExtensionContainer_202;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_202[];

typedef struct MBMSCNDe_RegistrationRequest {
  ProtocolIE_Container_100 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_202 protocolExtensions;
} MBMSCNDe_RegistrationRequest;


extern const ASN1CType asn1_type_MBMSCNDe_RegistrationRequest[];

typedef struct ProtocolIE_Field_102 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_102;


extern const ASN1CType asn1_type_ProtocolIE_Field_102[];

typedef struct ProtocolIE_Container_101 {
  ProtocolIE_Field_102 *tab;
  int count;
} ProtocolIE_Container_101;

extern const ASN1CType asn1_type_ProtocolIE_Container_101[];

typedef struct ProtocolExtensionField_203 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_203;


extern const ASN1CType asn1_type_ProtocolExtensionField_203[];

typedef struct ProtocolExtensionContainer_203 {
  ProtocolExtensionField_203 *tab;
  int count;
} ProtocolExtensionContainer_203;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_203[];

typedef struct MBMSCNDe_RegistrationResponse {
  ProtocolIE_Container_101 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_203 protocolExtensions;
} MBMSCNDe_RegistrationResponse;


extern const ASN1CType asn1_type_MBMSCNDe_RegistrationResponse[];

typedef struct ProtocolIE_Field_103 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_103;


extern const ASN1CType asn1_type_ProtocolIE_Field_103[];

typedef struct ProtocolIE_Container_102 {
  ProtocolIE_Field_103 *tab;
  int count;
} ProtocolIE_Container_102;

extern const ASN1CType asn1_type_ProtocolIE_Container_102[];

typedef struct ProtocolExtensionField_204 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_204;


extern const ASN1CType asn1_type_ProtocolExtensionField_204[];

typedef struct ProtocolExtensionContainer_204 {
  ProtocolExtensionField_204 *tab;
  int count;
} ProtocolExtensionContainer_204;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_204[];

typedef struct MBMSRABEstablishmentIndication {
  ProtocolIE_Container_102 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_204 protocolExtensions;
} MBMSRABEstablishmentIndication;


extern const ASN1CType asn1_type_MBMSRABEstablishmentIndication[];

typedef struct ProtocolIE_Field_104 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_104;


extern const ASN1CType asn1_type_ProtocolIE_Field_104[];

typedef struct ProtocolIE_Container_103 {
  ProtocolIE_Field_104 *tab;
  int count;
} ProtocolIE_Container_103;

extern const ASN1CType asn1_type_ProtocolIE_Container_103[];

typedef struct ProtocolExtensionField_205 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_205;


extern const ASN1CType asn1_type_ProtocolExtensionField_205[];

typedef struct ProtocolExtensionContainer_205 {
  ProtocolExtensionField_205 *tab;
  int count;
} ProtocolExtensionContainer_205;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_205[];

typedef struct MBMSRABReleaseRequest {
  ProtocolIE_Container_103 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_205 protocolExtensions;
} MBMSRABReleaseRequest;


extern const ASN1CType asn1_type_MBMSRABReleaseRequest[];

typedef struct ProtocolIE_Field_105 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_105;


extern const ASN1CType asn1_type_ProtocolIE_Field_105[];

typedef struct ProtocolIE_Container_104 {
  ProtocolIE_Field_105 *tab;
  int count;
} ProtocolIE_Container_104;

extern const ASN1CType asn1_type_ProtocolIE_Container_104[];

typedef struct ProtocolExtensionField_206 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_206;


extern const ASN1CType asn1_type_ProtocolExtensionField_206[];

typedef struct ProtocolExtensionContainer_206 {
  ProtocolExtensionField_206 *tab;
  int count;
} ProtocolExtensionContainer_206;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_206[];

typedef struct MBMSRABRelease {
  ProtocolIE_Container_104 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_206 protocolExtensions;
} MBMSRABRelease;


extern const ASN1CType asn1_type_MBMSRABRelease[];

typedef struct ProtocolIE_Field_106 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_106;


extern const ASN1CType asn1_type_ProtocolIE_Field_106[];

typedef struct ProtocolIE_Container_105 {
  ProtocolIE_Field_106 *tab;
  int count;
} ProtocolIE_Container_105;

extern const ASN1CType asn1_type_ProtocolIE_Container_105[];

typedef struct ProtocolExtensionField_207 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_207;


extern const ASN1CType asn1_type_ProtocolExtensionField_207[];

typedef struct ProtocolExtensionContainer_207 {
  ProtocolExtensionField_207 *tab;
  int count;
} ProtocolExtensionContainer_207;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_207[];

typedef struct MBMSRABReleaseFailure {
  ProtocolIE_Container_105 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_207 protocolExtensions;
} MBMSRABReleaseFailure;


extern const ASN1CType asn1_type_MBMSRABReleaseFailure[];

typedef struct ProtocolIE_Field_107 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_107;


extern const ASN1CType asn1_type_ProtocolIE_Field_107[];

typedef struct ProtocolIE_Container_106 {
  ProtocolIE_Field_107 *tab;
  int count;
} ProtocolIE_Container_106;

extern const ASN1CType asn1_type_ProtocolIE_Container_106[];

typedef struct ProtocolExtensionField_208 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_208;


extern const ASN1CType asn1_type_ProtocolExtensionField_208[];

typedef struct ProtocolExtensionContainer_208 {
  ProtocolExtensionField_208 *tab;
  int count;
} ProtocolExtensionContainer_208;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_208[];

typedef struct SRVCC_CSKeysRequest {
  ProtocolIE_Container_106 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_208 protocolExtensions;
} SRVCC_CSKeysRequest;


extern const ASN1CType asn1_type_SRVCC_CSKeysRequest[];

typedef struct ProtocolIE_Field_108 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_108;


extern const ASN1CType asn1_type_ProtocolIE_Field_108[];

typedef struct ProtocolIE_Container_107 {
  ProtocolIE_Field_108 *tab;
  int count;
} ProtocolIE_Container_107;

extern const ASN1CType asn1_type_ProtocolIE_Container_107[];

typedef struct ProtocolExtensionField_209 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_209;


extern const ASN1CType asn1_type_ProtocolExtensionField_209[];

typedef struct ProtocolExtensionContainer_209 {
  ProtocolExtensionField_209 *tab;
  int count;
} ProtocolExtensionContainer_209;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_209[];

typedef struct SRVCC_CSKeysResponse {
  ProtocolIE_Container_107 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_209 protocolExtensions;
} SRVCC_CSKeysResponse;


extern const ASN1CType asn1_type_SRVCC_CSKeysResponse[];

typedef struct ProtocolIE_Field_109 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_109;


extern const ASN1CType asn1_type_ProtocolIE_Field_109[];

typedef struct ProtocolIE_Container_108 {
  ProtocolIE_Field_109 *tab;
  int count;
} ProtocolIE_Container_108;

extern const ASN1CType asn1_type_ProtocolIE_Container_108[];

typedef struct ProtocolExtensionField_210 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_210;


extern const ASN1CType asn1_type_ProtocolExtensionField_210[];

typedef struct ProtocolExtensionContainer_210 {
  ProtocolExtensionField_210 *tab;
  int count;
} ProtocolExtensionContainer_210;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_210[];

typedef struct UeRadioCapabilityMatchRequest {
  ProtocolIE_Container_108 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_210 protocolExtensions;
} UeRadioCapabilityMatchRequest;


extern const ASN1CType asn1_type_UeRadioCapabilityMatchRequest[];

typedef struct ProtocolIE_Field_110 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType value;
} ProtocolIE_Field_110;


extern const ASN1CType asn1_type_ProtocolIE_Field_110[];

typedef struct ProtocolIE_Container_109 {
  ProtocolIE_Field_110 *tab;
  int count;
} ProtocolIE_Container_109;

extern const ASN1CType asn1_type_ProtocolIE_Container_109[];

typedef struct ProtocolExtensionField_211 {
  ProtocolExtensionID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_211;


extern const ASN1CType asn1_type_ProtocolExtensionField_211[];

typedef struct ProtocolExtensionContainer_211 {
  ProtocolExtensionField_211 *tab;
  int count;
} ProtocolExtensionContainer_211;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_211[];

typedef struct UeRadioCapabilityMatchResponse {
  ProtocolIE_Container_109 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_211 protocolExtensions;
} UeRadioCapabilityMatchResponse;


extern const ASN1CType asn1_type_UeRadioCapabilityMatchResponse[];

typedef struct RANAP_ELEMENTARY_PROCEDURE { /* object class definition */
  ASN1CType InitiatingMessage;
  ASN1CType SuccessfulOutcome;
  ASN1CType UnsuccessfulOutcome;
  ASN1CType Outcome;
  ASN1CType procedureCode;
  ASN1CType criticality;
} RANAP_ELEMENTARY_PROCEDURE;


extern const ASN1CType asn1_type_RANAP_ELEMENTARY_PROCEDURE[];

typedef struct InitiatingMessage {
  ProcedureCode procedureCode;
  Criticality criticality;
  ASN1OpenType value;
} InitiatingMessage;


extern const ASN1CType asn1_type_InitiatingMessage[];

typedef struct SuccessfulOutcome {
  ProcedureCode procedureCode;
  Criticality criticality;
  ASN1OpenType value;
} SuccessfulOutcome;


extern const ASN1CType asn1_type_SuccessfulOutcome[];

typedef struct UnsuccessfulOutcome {
  ProcedureCode procedureCode;
  Criticality criticality;
  ASN1OpenType value;
} UnsuccessfulOutcome;


extern const ASN1CType asn1_type_UnsuccessfulOutcome[];

typedef struct Outcome {
  ProcedureCode procedureCode;
  Criticality criticality;
  ASN1OpenType value;
} Outcome;


extern const ASN1CType asn1_type_Outcome[];

typedef enum {
  RANAP_PDU_initiatingMessage,
  RANAP_PDU_successfulOutcome,
  RANAP_PDU_unsuccessfulOutcome,
  RANAP_PDU_outcome,
} RANAP_PDU_choice;

typedef struct RANAP_PDU {
  RANAP_PDU_choice choice;
  union {
    InitiatingMessage initiatingMessage;
    SuccessfulOutcome successfulOutcome;
    UnsuccessfulOutcome unsuccessfulOutcome;
    Outcome outcome;
  } u;
} RANAP_PDU;

extern const ASN1CType asn1_type_RANAP_PDU[];

#ifdef  __cplusplus
}
#endif

#endif /* _FFASN1_OUT_H */
