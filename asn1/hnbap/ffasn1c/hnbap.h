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

typedef int ProtocolIE_ID;

extern const ASN1CType asn1_type_ProtocolIE_ID[];

typedef enum TriggeringMessage {
  TriggeringMessage_initiating_message,
  TriggeringMessage_successful_outcome,
  TriggeringMessage_unsuccessful_outcome,
} TriggeringMessage;

extern const ASN1CType asn1_type_TriggeringMessage[];

typedef struct HNBAP_PROTOCOL_IES { /* object class definition */
  ASN1CType id;
  ASN1CType criticality;
  ASN1CType Value;
  ASN1CType presence;
} HNBAP_PROTOCOL_IES;


extern const ASN1CType asn1_type_HNBAP_PROTOCOL_IES[];

typedef struct HNBAP_PROTOCOL_EXTENSION { /* object class definition */
  ASN1CType id;
  ASN1CType criticality;
  ASN1CType Extension;
  ASN1CType presence;
} HNBAP_PROTOCOL_EXTENSION;


extern const ASN1CType asn1_type_HNBAP_PROTOCOL_EXTENSION[];

typedef struct HNBAP_PRIVATE_IES { /* object class definition */
  ASN1CType id;
  ASN1CType criticality;
  ASN1CType Value;
  ASN1CType presence;
} HNBAP_PRIVATE_IES;


extern const ASN1CType asn1_type_HNBAP_PRIVATE_IES[];

typedef enum Access_stratum_release_indicator {
  Access_stratum_release_indicator_r99,
  Access_stratum_release_indicator_rel_4,
  Access_stratum_release_indicator_rel_5,
  Access_stratum_release_indicator_rel_6,
  Access_stratum_release_indicator_rel_7,
  Access_stratum_release_indicator_rel_8_and_beyond,
} Access_stratum_release_indicator;

extern const ASN1CType asn1_type_Access_stratum_release_indicator[];

typedef enum AccessResult {
  AccessResult_allowed,
  AccessResult_notAllowed,
} AccessResult;

extern const ASN1CType asn1_type_AccessResult[];

typedef enum AltitudeAndDirection_1 {
  AltitudeAndDirection_1_height,
  AltitudeAndDirection_1_depth,
} AltitudeAndDirection_1;

extern const ASN1CType asn1_type_AltitudeAndDirection_1[];

typedef struct AltitudeAndDirection {
  AltitudeAndDirection_1 directionOfAltitude;
  int altitude;
} AltitudeAndDirection;


extern const ASN1CType asn1_type_AltitudeAndDirection[];

typedef int BackoffTimer;

extern const ASN1CType asn1_type_BackoffTimer[];

typedef ASN1String BindingID;

extern const ASN1CType asn1_type_BindingID[];

typedef enum CauseRadioNetwork {
  CauseRadioNetwork_overload,
  CauseRadioNetwork_unauthorised_Location,
  CauseRadioNetwork_unauthorised_HNB,
  CauseRadioNetwork_hNB_parameter_mismatch,
  CauseRadioNetwork_invalid_UE_identity,
  CauseRadioNetwork_uE_not_allowed_on_this_HNB,
  CauseRadioNetwork_uE_unauthorised,
  CauseRadioNetwork_connection_with_UE_lost,
  CauseRadioNetwork_ue_RRC_release,
  CauseRadioNetwork_hNB_not_registered,
  CauseRadioNetwork_unspecified,
  CauseRadioNetwork_normal,
  CauseRadioNetwork_uE_relocated,
  CauseRadioNetwork_ue_registered_in_another_HNB,
  CauseRadioNetwork_no_neighbour_information_available,
  CauseRadioNetwork_iurh_connection_to_that_neighbour_not_Allowed,
} CauseRadioNetwork;

extern const ASN1CType asn1_type_CauseRadioNetwork[];

typedef enum CauseTransport {
  CauseTransport_transport_resource_unavailable,
  CauseTransport_unspecified,
} CauseTransport;

extern const ASN1CType asn1_type_CauseTransport[];

typedef enum CauseProtocol {
  CauseProtocol_transfer_syntax_error,
  CauseProtocol_abstract_syntax_error_reject,
  CauseProtocol_abstract_syntax_error_ignore_and_notify,
  CauseProtocol_message_not_compatible_with_receiver_state,
  CauseProtocol_semantic_error,
  CauseProtocol_unspecified,
  CauseProtocol_abstract_syntax_error_falsely_constructed_message,
} CauseProtocol;

extern const ASN1CType asn1_type_CauseProtocol[];

typedef enum CauseMisc {
  CauseMisc_processing_overload,
  CauseMisc_hardware_failure,
  CauseMisc_o_and_m_intervention,
  CauseMisc_unspecified,
} CauseMisc;

extern const ASN1CType asn1_type_CauseMisc[];

typedef enum {
  Cause_radioNetwork,
  Cause_transport,
  Cause_protocol,
  Cause_misc,
} Cause_choice;

typedef struct Cause {
  Cause_choice choice;
  union {
    CauseRadioNetwork radioNetwork;
    CauseTransport transport;
    CauseProtocol protocol;
    CauseMisc misc;
  } u;
} Cause;

extern const ASN1CType asn1_type_Cause[];

typedef ASN1BitString CellIdentity;

extern const ASN1CType asn1_type_CellIdentity[];

typedef enum CELL_FACHMobilitySupport {
  CELL_FACHMobilitySupport_supported,
} CELL_FACHMobilitySupport;

extern const ASN1CType asn1_type_CELL_FACHMobilitySupport[];

typedef ASN1BitString Context_ID;

extern const ASN1CType asn1_type_Context_ID[];

typedef enum TypeOfError {
  TypeOfError_not_understood,
  TypeOfError_missing,
} TypeOfError;

extern const ASN1CType asn1_type_TypeOfError[];

typedef struct ProtocolExtensionField_2 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_2;


extern const ASN1CType asn1_type_ProtocolExtensionField_2[];

typedef struct ProtocolExtensionContainer_2 {
  ProtocolExtensionField_2 *tab;
  int count;
} ProtocolExtensionContainer_2;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_2[];

typedef struct CriticalityDiagnostics_IE_List_1 {
  Criticality iECriticality;
  ProtocolIE_ID iE_ID;
  TypeOfError typeOfError;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_2 iE_Extensions;
} CriticalityDiagnostics_IE_List_1;


extern const ASN1CType asn1_type_CriticalityDiagnostics_IE_List_1[];

typedef struct CriticalityDiagnostics_IE_List {
  CriticalityDiagnostics_IE_List_1 *tab;
  int count;
} CriticalityDiagnostics_IE_List;

extern const ASN1CType asn1_type_CriticalityDiagnostics_IE_List[];

typedef struct ProtocolExtensionField_1 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_1;


extern const ASN1CType asn1_type_ProtocolExtensionField_1[];

typedef struct ProtocolExtensionContainer_1 {
  ProtocolExtensionField_1 *tab;
  int count;
} ProtocolExtensionContainer_1;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_1[];

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
  ProtocolExtensionContainer_1 iE_Extensions;
} CriticalityDiagnostics;


extern const ASN1CType asn1_type_CriticalityDiagnostics[];

typedef ASN1BitString CSG_ID;

extern const ASN1CType asn1_type_CSG_ID[];

typedef enum CSG_Capability {
  CSG_Capability_csg_capable,
  CSG_Capability_not_csg_capable,
} CSG_Capability;

extern const ASN1CType asn1_type_CSG_Capability[];

typedef enum CSGMembershipStatus {
  CSGMembershipStatus_member,
  CSGMembershipStatus_non_member,
} CSGMembershipStatus;

extern const ASN1CType asn1_type_CSGMembershipStatus[];

typedef ASN1String PLMNidentity;

extern const ASN1CType asn1_type_PLMNidentity[];

typedef ASN1String LAC;

extern const ASN1CType asn1_type_LAC[];

typedef ASN1String CI;

extern const ASN1CType asn1_type_CI[];

typedef struct ProtocolExtensionField_3 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_3;


extern const ASN1CType asn1_type_ProtocolExtensionField_3[];

typedef struct ProtocolExtensionContainer_3 {
  ProtocolExtensionField_3 *tab;
  int count;
} ProtocolExtensionContainer_3;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_3[];

typedef struct CGI {
  PLMNidentity pLMNidentity;
  LAC lAC;
  CI cI;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_3 iE_Extensions;
} CGI;


extern const ASN1CType asn1_type_CGI[];

typedef enum CN_DomainIndicator {
  CN_DomainIndicator_cs_domain,
  CN_DomainIndicator_ps_domain,
} CN_DomainIndicator;

extern const ASN1CType asn1_type_CN_DomainIndicator[];

typedef ASN1BitString ESN;

extern const ASN1CType asn1_type_ESN[];

typedef enum GeographicalCoordinates_1 {
  GeographicalCoordinates_1_north,
  GeographicalCoordinates_1_south,
} GeographicalCoordinates_1;

extern const ASN1CType asn1_type_GeographicalCoordinates_1[];

typedef struct ProtocolExtensionField_5 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_5;


extern const ASN1CType asn1_type_ProtocolExtensionField_5[];

typedef struct ProtocolExtensionContainer_5 {
  ProtocolExtensionField_5 *tab;
  int count;
} ProtocolExtensionContainer_5;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_5[];

typedef struct GeographicalCoordinates {
  GeographicalCoordinates_1 latitudeSign;
  int latitude;
  int longitude;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_5 iE_Extensions;
} GeographicalCoordinates;


extern const ASN1CType asn1_type_GeographicalCoordinates[];

typedef struct ProtocolExtensionField_4 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_4;


extern const ASN1CType asn1_type_ProtocolExtensionField_4[];

typedef struct ProtocolExtensionContainer_4 {
  ProtocolExtensionField_4 *tab;
  int count;
} ProtocolExtensionContainer_4;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_4[];

typedef struct GeographicalLocation {
  GeographicalCoordinates geographicalCoordinates;
  AltitudeAndDirection altitudeAndDirection;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_4 iE_Extensions;
} GeographicalLocation;


extern const ASN1CType asn1_type_GeographicalLocation[];

typedef ASN1String GTP_TEI;

extern const ASN1CType asn1_type_GTP_TEI[];

typedef int HNBCapacity;

extern const ASN1CType asn1_type_HNBCapacity[];

typedef enum HNB_Cell_Access_Mode {
  HNB_Cell_Access_Mode_closed,
  HNB_Cell_Access_Mode_hybrid,
  HNB_Cell_Access_Mode_open,
} HNB_Cell_Access_Mode;

extern const ASN1CType asn1_type_HNB_Cell_Access_Mode[];

typedef struct ProtocolExtensionField_6 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_6;


extern const ASN1CType asn1_type_ProtocolExtensionField_6[];

typedef struct ProtocolExtensionContainer_6 {
  ProtocolExtensionField_6 *tab;
  int count;
} ProtocolExtensionContainer_6;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_6[];

typedef struct HNB_Cell_Identifier {
  PLMNidentity pLMNidentity;
  CellIdentity cellIdentity;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_6 iE_Extensions;
} HNB_Cell_Identifier;


extern const ASN1CType asn1_type_HNB_Cell_Identifier[];

typedef enum {
  HNB_RNL_Identity_hNB_Identity_as_Cell_Identifier,
} HNB_RNL_Identity_choice;

typedef struct HNB_RNL_Identity {
  HNB_RNL_Identity_choice choice;
  union {
    HNB_Cell_Identifier hNB_Identity_as_Cell_Identifier;
  } u;
} HNB_RNL_Identity;

extern const ASN1CType asn1_type_HNB_RNL_Identity[];

typedef ASN1BitString PSC;

extern const ASN1CType asn1_type_PSC[];

typedef ASN1String Ipv4Address;

extern const ASN1CType asn1_type_Ipv4Address[];

typedef ASN1String Ipv6Address;

extern const ASN1CType asn1_type_Ipv6Address[];

typedef enum {
  IP_Address_1_ipv4info,
  IP_Address_1_ipv6info,
} IP_Address_1_choice;

typedef struct IP_Address_1 {
  IP_Address_1_choice choice;
  union {
    Ipv4Address ipv4info;
    Ipv6Address ipv6info;
  } u;
} IP_Address_1;

extern const ASN1CType asn1_type_IP_Address_1[];

typedef struct ProtocolExtensionField_12 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_12;


extern const ASN1CType asn1_type_ProtocolExtensionField_12[];

typedef struct ProtocolExtensionContainer_12 {
  ProtocolExtensionField_12 *tab;
  int count;
} ProtocolExtensionContainer_12;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_12[];

typedef struct IP_Address {
  IP_Address_1 ipaddress;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_12 iE_Extensions;
} IP_Address;


extern const ASN1CType asn1_type_IP_Address[];

typedef struct Iurh_Signalling_TNL_AddressList {
  IP_Address *tab;
  int count;
} Iurh_Signalling_TNL_AddressList;

extern const ASN1CType asn1_type_Iurh_Signalling_TNL_AddressList[];

typedef struct ProtocolExtensionField_8 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_8;


extern const ASN1CType asn1_type_ProtocolExtensionField_8[];

typedef struct ProtocolExtensionContainer_8 {
  ProtocolExtensionField_8 *tab;
  int count;
} ProtocolExtensionContainer_8;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_8[];

typedef struct HNBConfigurationInformationProvided {
  BOOL psc_option;
  PSC psc;
  BOOL cSG_ID_option;
  CSG_ID cSG_ID;
  HNB_Cell_Access_Mode hNB_Cell_Access_Mode;
  Iurh_Signalling_TNL_AddressList iurh_Signalling_TNL_AddressList;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_8 iE_Extensions;
} HNBConfigurationInformationProvided;


extern const ASN1CType asn1_type_HNBConfigurationInformationProvided[];

typedef struct ProtocolExtensionField_9 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_9;


extern const ASN1CType asn1_type_ProtocolExtensionField_9[];

typedef struct ProtocolExtensionContainer_9 {
  ProtocolExtensionField_9 *tab;
  int count;
} ProtocolExtensionContainer_9;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_9[];

typedef struct HNBConfigurationInformationMissing {
  Cause cause;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_9 iE_Extensions;
} HNBConfigurationInformationMissing;


extern const ASN1CType asn1_type_HNBConfigurationInformationMissing[];

typedef enum {
  ConfigurationInformation_provided,
  ConfigurationInformation_missing,
} ConfigurationInformation_choice;

typedef struct ConfigurationInformation {
  ConfigurationInformation_choice choice;
  union {
    HNBConfigurationInformationProvided provided;
    HNBConfigurationInformationMissing missing;
  } u;
} ConfigurationInformation;

extern const ASN1CType asn1_type_ConfigurationInformation[];

typedef struct ProtocolExtensionField_7 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_7;


extern const ASN1CType asn1_type_ProtocolExtensionField_7[];

typedef struct ProtocolExtensionContainer_7 {
  ProtocolExtensionField_7 *tab;
  int count;
} ProtocolExtensionContainer_7;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_7[];

typedef struct HNBConfigInfo {
  HNB_RNL_Identity hnb_RNL_Identity;
  ConfigurationInformation configurationInformation;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_7 iE_Extensions;
} HNBConfigInfo;


extern const ASN1CType asn1_type_HNBConfigInfo[];

typedef int RNC_ID;

extern const ASN1CType asn1_type_RNC_ID[];

typedef enum UnknownU_RNTIIndication {
  UnknownU_RNTIIndication_unknown,
} UnknownU_RNTIIndication;

extern const ASN1CType asn1_type_UnknownU_RNTIIndication[];

typedef enum {
  HNB_GWResponse_hNB,
  HNB_GWResponse_macroRNC,
  HNB_GWResponse_unknownU_RNTIIndication,
} HNB_GWResponse_choice;

typedef struct HNB_GWResponse {
  HNB_GWResponse_choice choice;
  union {
    HNBConfigInfo hNB;
    RNC_ID macroRNC;
    UnknownU_RNTIIndication unknownU_RNTIIndication;
  } u;
} HNB_GWResponse;

extern const ASN1CType asn1_type_HNB_GWResponse[];

typedef ASN1BitString S_RNTIPrefix;

extern const ASN1CType asn1_type_S_RNTIPrefix[];

typedef int URAIdentity;

extern const ASN1CType asn1_type_URAIdentity[];

typedef struct URAIdentityList {
  URAIdentity *tab;
  int count;
} URAIdentityList;

extern const ASN1CType asn1_type_URAIdentityList[];

typedef ASN1String RAC;

extern const ASN1CType asn1_type_RAC[];

typedef struct ProtocolExtensionField_19 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_19;


extern const ASN1CType asn1_type_ProtocolExtensionField_19[];

typedef struct ProtocolExtensionContainer_19 {
  ProtocolExtensionField_19 *tab;
  int count;
} ProtocolExtensionContainer_19;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_19[];

typedef struct UTRANCellID {
  LAC lAC;
  RAC rAC;
  PLMNidentity pLMNidentity;
  CellIdentity uTRANcellID;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_19 iE_Extensions;
} UTRANCellID;


extern const ASN1CType asn1_type_UTRANCellID[];

typedef enum {
  MacroCellID_uTRANCellID,
  MacroCellID_gERANCellID,
} MacroCellID_choice;

typedef struct MacroCellID {
  MacroCellID_choice choice;
  union {
    UTRANCellID uTRANCellID;
    CGI gERANCellID;
  } u;
} MacroCellID;

extern const ASN1CType asn1_type_MacroCellID[];

typedef struct ProtocolExtensionField_13 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_13;


extern const ASN1CType asn1_type_ProtocolExtensionField_13[];

typedef struct ProtocolExtensionContainer_13 {
  ProtocolExtensionField_13 *tab;
  int count;
} ProtocolExtensionContainer_13;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_13[];

typedef struct MacroCoverageInformation {
  MacroCellID cellIdentity;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_13 iE_Extensions;
} MacroCoverageInformation;


extern const ASN1CType asn1_type_MacroCoverageInformation[];

typedef struct ProtocolExtensionField_10 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_10;


extern const ASN1CType asn1_type_ProtocolExtensionField_10[];

typedef struct ProtocolExtensionContainer_10 {
  ProtocolExtensionField_10 *tab;
  int count;
} ProtocolExtensionContainer_10;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_10[];

typedef struct HNB_Location_Information {
  BOOL macroCoverageInfo_option;
  MacroCoverageInformation macroCoverageInfo;
  BOOL geographicalCoordinates_option;
  GeographicalLocation geographicalCoordinates;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_10 iE_Extensions;
} HNB_Location_Information;


extern const ASN1CType asn1_type_HNB_Location_Information[];

typedef ASN1String HNB_Identity_Info;

extern const ASN1CType asn1_type_HNB_Identity_Info[];

typedef struct ProtocolExtensionField_11 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_11;


extern const ASN1CType asn1_type_ProtocolExtensionField_11[];

typedef struct ProtocolExtensionContainer_11 {
  ProtocolExtensionField_11 *tab;
  int count;
} ProtocolExtensionContainer_11;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_11[];

typedef struct HNB_Identity {
  HNB_Identity_Info hNB_Identity_Info;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_11 iE_Extensions;
} HNB_Identity;


extern const ASN1CType asn1_type_HNB_Identity[];

typedef ASN1BitString IMEI;

extern const ASN1CType asn1_type_IMEI[];

typedef ASN1String IMSI;

extern const ASN1CType asn1_type_IMSI[];

typedef ASN1String IMSIDS41;

extern const ASN1CType asn1_type_IMSIDS41[];

typedef struct IMSIESN {
  IMSIDS41 iMSIDS41;
  ESN eSN;
} IMSIESN;


extern const ASN1CType asn1_type_IMSIESN[];

typedef struct LAI {
  PLMNidentity pLMNID;
  LAC lAC;
} LAI;


extern const ASN1CType asn1_type_LAI[];

typedef int MuxPortNumber;

extern const ASN1CType asn1_type_MuxPortNumber[];

typedef enum {
  NeighbourIdentity_hNB_RNL_Identity,
  NeighbourIdentity_cell_ID,
} NeighbourIdentity_choice;

typedef struct NeighbourIdentity {
  NeighbourIdentity_choice choice;
  union {
    HNB_RNL_Identity hNB_RNL_Identity;
    CellIdentity cell_ID;
  } u;
} NeighbourIdentity;

extern const ASN1CType asn1_type_NeighbourIdentity[];

typedef struct NeighbourCellIdentityList {
  NeighbourIdentity *tab;
  int count;
} NeighbourCellIdentityList;

extern const ASN1CType asn1_type_NeighbourCellIdentityList[];

typedef struct NeighbourInfoList {
  HNBConfigInfo *tab;
  int count;
} NeighbourInfoList;

extern const ASN1CType asn1_type_NeighbourInfoList[];

typedef struct AdditionalNeighbourInfoList {
  HNBConfigInfo *tab;
  int count;
} AdditionalNeighbourInfoList;

extern const ASN1CType asn1_type_AdditionalNeighbourInfoList[];

typedef struct ProtocolExtensionField_14 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_14;


extern const ASN1CType asn1_type_ProtocolExtensionField_14[];

typedef struct ProtocolExtensionContainer_14 {
  ProtocolExtensionField_14 *tab;
  int count;
} ProtocolExtensionContainer_14;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_14[];

typedef struct NeighbourInfoRequestItem {
  HNB_RNL_Identity hnb_RNL_Identity;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_14 iE_Extensions;
} NeighbourInfoRequestItem;


extern const ASN1CType asn1_type_NeighbourInfoRequestItem[];

typedef struct NeighbourInfoRequestList {
  NeighbourInfoRequestItem *tab;
  int count;
} NeighbourInfoRequestList;

extern const ASN1CType asn1_type_NeighbourInfoRequestList[];

typedef ASN1BitString PTMSI;

extern const ASN1CType asn1_type_PTMSI[];

typedef struct RAI {
  LAI lAI;
  RAC rAC;
} RAI;


extern const ASN1CType asn1_type_RAI[];

typedef struct PTMSIRAI {
  PTMSI pTMSI;
  RAI rAI;
} PTMSIRAI;


extern const ASN1CType asn1_type_PTMSIRAI[];

typedef ASN1BitString RAB_ID;

extern const ASN1CType asn1_type_RAB_ID[];

typedef ASN1BitString TransportLayerAddress;

extern const ASN1CType asn1_type_TransportLayerAddress[];

typedef enum {
  TransportInfo_1_gtp_TEI,
  TransportInfo_1_bindingID,
} TransportInfo_1_choice;

typedef struct TransportInfo_1 {
  TransportInfo_1_choice choice;
  union {
    GTP_TEI gtp_TEI;
    BindingID bindingID;
  } u;
} TransportInfo_1;

extern const ASN1CType asn1_type_TransportInfo_1[];

typedef struct ProtocolExtensionField_16 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_16;


extern const ASN1CType asn1_type_ProtocolExtensionField_16[];

typedef struct ProtocolExtensionContainer_16 {
  ProtocolExtensionField_16 *tab;
  int count;
} ProtocolExtensionContainer_16;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_16[];

typedef struct TransportInfo {
  TransportLayerAddress transportLayerAddress;
  TransportInfo_1 transportAssociation;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_16 iE_Extensions;
} TransportInfo;


extern const ASN1CType asn1_type_TransportInfo[];

typedef struct ProtocolExtensionField_15 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_15;


extern const ASN1CType asn1_type_ProtocolExtensionField_15[];

typedef struct ProtocolExtensionContainer_15 {
  ProtocolExtensionField_15 *tab;
  int count;
} ProtocolExtensionContainer_15;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_15[];

typedef struct RABListItem {
  RAB_ID rAB_ID;
  TransportInfo old_transport_Info;
  TransportInfo new_transport_Info;
  CN_DomainIndicator cn_domain_indicator;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_15 iE_Extensions;
} RABListItem;


extern const ASN1CType asn1_type_RABListItem[];

typedef struct RABList {
  RABListItem *tab;
  int count;
} RABList;

extern const ASN1CType asn1_type_RABList[];

typedef enum Registration_Cause {
  Registration_Cause_emergency_call,
  Registration_Cause_normal,
  Registration_Cause_ue_relocation,
} Registration_Cause;

extern const ASN1CType asn1_type_Registration_Cause[];

typedef ASN1String SAC;

extern const ASN1CType asn1_type_SAC[];

typedef struct TMSILAI {
  ASN1BitString tMSI;
  LAI lAI;
} TMSILAI;


extern const ASN1CType asn1_type_TMSILAI[];

typedef ASN1String TMSIDS41;

extern const ASN1CType asn1_type_TMSIDS41[];

typedef ASN1String UDP_Port_Number;

extern const ASN1CType asn1_type_UDP_Port_Number[];

typedef struct ProtocolExtensionField_17 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_17;


extern const ASN1CType asn1_type_ProtocolExtensionField_17[];

typedef struct ProtocolExtensionContainer_17 {
  ProtocolExtensionField_17 *tab;
  int count;
} ProtocolExtensionContainer_17;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_17[];

typedef struct Tunnel_Information {
  IP_Address iP_Address;
  BOOL uDP_Port_Number_option;
  UDP_Port_Number uDP_Port_Number;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_17 iE_Extensions;
} Tunnel_Information;


extern const ASN1CType asn1_type_Tunnel_Information[];

typedef struct ProtocolExtensionField_18 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_18;


extern const ASN1CType asn1_type_ProtocolExtensionField_18[];

typedef struct ProtocolExtensionContainer_18 {
  ProtocolExtensionField_18 *tab;
  int count;
} ProtocolExtensionContainer_18;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_18[];

typedef struct UE_Capabilities {
  Access_stratum_release_indicator access_stratum_release_indicator;
  CSG_Capability csg_capability;
  BOOL iE_Extensions_option;
  ProtocolExtensionContainer_18 iE_Extensions;
} UE_Capabilities;


extern const ASN1CType asn1_type_UE_Capabilities[];

typedef enum {
  UE_Identity_iMSI,
  UE_Identity_tMSILAI,
  UE_Identity_pTMSIRAI,
  UE_Identity_iMEI,
  UE_Identity_eSN,
  UE_Identity_iMSIDS41,
  UE_Identity_iMSIESN,
  UE_Identity_tMSIDS41,
} UE_Identity_choice;

typedef struct UE_Identity {
  UE_Identity_choice choice;
  union {
    IMSI iMSI;
    TMSILAI tMSILAI;
    PTMSIRAI pTMSIRAI;
    IMEI iMEI;
    ESN eSN;
    IMSIDS41 iMSIDS41;
    IMSIESN iMSIESN;
    TMSIDS41 tMSIDS41;
  } u;
} UE_Identity;

extern const ASN1CType asn1_type_UE_Identity[];

typedef enum Update_cause {
  Update_cause_relocation_preparation,
} Update_cause;

extern const ASN1CType asn1_type_Update_cause[];

typedef ASN1BitString U_RNTI;

extern const ASN1CType asn1_type_U_RNTI[];

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

typedef struct ProtocolExtensionField_20 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_20;


extern const ASN1CType asn1_type_ProtocolExtensionField_20[];

typedef struct ProtocolExtensionContainer_20 {
  ProtocolExtensionField_20 *tab;
  int count;
} ProtocolExtensionContainer_20;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_20[];

typedef struct HNBRegisterRequest {
  ProtocolIE_Container_1 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_20 protocolExtensions;
} HNBRegisterRequest;


extern const ASN1CType asn1_type_HNBRegisterRequest[];

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

typedef struct ProtocolExtensionField_21 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_21;


extern const ASN1CType asn1_type_ProtocolExtensionField_21[];

typedef struct ProtocolExtensionContainer_21 {
  ProtocolExtensionField_21 *tab;
  int count;
} ProtocolExtensionContainer_21;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_21[];

typedef struct HNBRegisterAccept {
  ProtocolIE_Container_2 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_21 protocolExtensions;
} HNBRegisterAccept;


extern const ASN1CType asn1_type_HNBRegisterAccept[];

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

typedef struct ProtocolExtensionField_22 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_22;


extern const ASN1CType asn1_type_ProtocolExtensionField_22[];

typedef struct ProtocolExtensionContainer_22 {
  ProtocolExtensionField_22 *tab;
  int count;
} ProtocolExtensionContainer_22;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_22[];

typedef struct HNBRegisterReject {
  ProtocolIE_Container_3 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_22 protocolExtensions;
} HNBRegisterReject;


extern const ASN1CType asn1_type_HNBRegisterReject[];

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

typedef struct ProtocolExtensionField_23 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_23;


extern const ASN1CType asn1_type_ProtocolExtensionField_23[];

typedef struct ProtocolExtensionContainer_23 {
  ProtocolExtensionField_23 *tab;
  int count;
} ProtocolExtensionContainer_23;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_23[];

typedef struct HNBDe_Register {
  ProtocolIE_Container_4 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_23 protocolExtensions;
} HNBDe_Register;


extern const ASN1CType asn1_type_HNBDe_Register[];

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

typedef struct ProtocolExtensionField_24 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_24;


extern const ASN1CType asn1_type_ProtocolExtensionField_24[];

typedef struct ProtocolExtensionContainer_24 {
  ProtocolExtensionField_24 *tab;
  int count;
} ProtocolExtensionContainer_24;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_24[];

typedef struct UERegisterRequest {
  ProtocolIE_Container_5 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_24 protocolExtensions;
} UERegisterRequest;


extern const ASN1CType asn1_type_UERegisterRequest[];

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

typedef struct ProtocolExtensionField_25 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_25;


extern const ASN1CType asn1_type_ProtocolExtensionField_25[];

typedef struct ProtocolExtensionContainer_25 {
  ProtocolExtensionField_25 *tab;
  int count;
} ProtocolExtensionContainer_25;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_25[];

typedef struct UERegisterAccept {
  ProtocolIE_Container_6 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_25 protocolExtensions;
} UERegisterAccept;


extern const ASN1CType asn1_type_UERegisterAccept[];

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

typedef struct ProtocolExtensionField_26 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_26;


extern const ASN1CType asn1_type_ProtocolExtensionField_26[];

typedef struct ProtocolExtensionContainer_26 {
  ProtocolExtensionField_26 *tab;
  int count;
} ProtocolExtensionContainer_26;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_26[];

typedef struct UERegisterReject {
  ProtocolIE_Container_7 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_26 protocolExtensions;
} UERegisterReject;


extern const ASN1CType asn1_type_UERegisterReject[];

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

typedef struct ProtocolExtensionField_27 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_27;


extern const ASN1CType asn1_type_ProtocolExtensionField_27[];

typedef struct ProtocolExtensionContainer_27 {
  ProtocolExtensionField_27 *tab;
  int count;
} ProtocolExtensionContainer_27;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_27[];

typedef struct UEDe_Register {
  ProtocolIE_Container_8 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_27 protocolExtensions;
} UEDe_Register;


extern const ASN1CType asn1_type_UEDe_Register[];

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

typedef struct ProtocolExtensionField_28 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_28;


extern const ASN1CType asn1_type_ProtocolExtensionField_28[];

typedef struct ProtocolExtensionContainer_28 {
  ProtocolExtensionField_28 *tab;
  int count;
} ProtocolExtensionContainer_28;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_28[];

typedef struct CSGMembershipUpdate {
  ProtocolIE_Container_9 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_28 protocolExtensions;
} CSGMembershipUpdate;


extern const ASN1CType asn1_type_CSGMembershipUpdate[];

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

typedef struct ProtocolExtensionField_29 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_29;


extern const ASN1CType asn1_type_ProtocolExtensionField_29[];

typedef struct ProtocolExtensionContainer_29 {
  ProtocolExtensionField_29 *tab;
  int count;
} ProtocolExtensionContainer_29;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_29[];

typedef struct TNLUpdateRequest {
  ProtocolIE_Container_10 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_29 protocolExtensions;
} TNLUpdateRequest;


extern const ASN1CType asn1_type_TNLUpdateRequest[];

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

typedef struct ProtocolExtensionField_30 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_30;


extern const ASN1CType asn1_type_ProtocolExtensionField_30[];

typedef struct ProtocolExtensionContainer_30 {
  ProtocolExtensionField_30 *tab;
  int count;
} ProtocolExtensionContainer_30;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_30[];

typedef struct TNLUpdateResponse {
  ProtocolIE_Container_11 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_30 protocolExtensions;
} TNLUpdateResponse;


extern const ASN1CType asn1_type_TNLUpdateResponse[];

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

typedef struct ProtocolExtensionField_31 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_31;


extern const ASN1CType asn1_type_ProtocolExtensionField_31[];

typedef struct ProtocolExtensionContainer_31 {
  ProtocolExtensionField_31 *tab;
  int count;
} ProtocolExtensionContainer_31;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_31[];

typedef struct TNLUpdateFailure {
  ProtocolIE_Container_12 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_31 protocolExtensions;
} TNLUpdateFailure;


extern const ASN1CType asn1_type_TNLUpdateFailure[];

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

typedef struct ProtocolExtensionField_32 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_32;


extern const ASN1CType asn1_type_ProtocolExtensionField_32[];

typedef struct ProtocolExtensionContainer_32 {
  ProtocolExtensionField_32 *tab;
  int count;
} ProtocolExtensionContainer_32;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_32[];

typedef struct HNBConfigTransferRequest {
  ProtocolIE_Container_13 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_32 protocolExtensions;
} HNBConfigTransferRequest;


extern const ASN1CType asn1_type_HNBConfigTransferRequest[];

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

typedef struct ProtocolExtensionField_33 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_33;


extern const ASN1CType asn1_type_ProtocolExtensionField_33[];

typedef struct ProtocolExtensionContainer_33 {
  ProtocolExtensionField_33 *tab;
  int count;
} ProtocolExtensionContainer_33;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_33[];

typedef struct HNBConfigTransferResponse {
  ProtocolIE_Container_14 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_33 protocolExtensions;
} HNBConfigTransferResponse;


extern const ASN1CType asn1_type_HNBConfigTransferResponse[];

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

typedef struct ProtocolExtensionField_34 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_34;


extern const ASN1CType asn1_type_ProtocolExtensionField_34[];

typedef struct ProtocolExtensionContainer_34 {
  ProtocolExtensionField_34 *tab;
  int count;
} ProtocolExtensionContainer_34;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_34[];

typedef struct RelocationComplete {
  ProtocolIE_Container_15 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_34 protocolExtensions;
} RelocationComplete;


extern const ASN1CType asn1_type_RelocationComplete[];

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

typedef struct ProtocolExtensionField_35 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_35;


extern const ASN1CType asn1_type_ProtocolExtensionField_35[];

typedef struct ProtocolExtensionContainer_35 {
  ProtocolExtensionField_35 *tab;
  int count;
} ProtocolExtensionContainer_35;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_35[];

typedef struct ErrorIndication {
  ProtocolIE_Container_16 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_35 protocolExtensions;
} ErrorIndication;


extern const ASN1CType asn1_type_ErrorIndication[];

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

typedef struct ProtocolExtensionField_36 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_36;


extern const ASN1CType asn1_type_ProtocolExtensionField_36[];

typedef struct ProtocolExtensionContainer_36 {
  ProtocolExtensionField_36 *tab;
  int count;
} ProtocolExtensionContainer_36;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_36[];

typedef struct U_RNTIQueryRequest {
  ProtocolIE_Container_17 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_36 protocolExtensions;
} U_RNTIQueryRequest;


extern const ASN1CType asn1_type_U_RNTIQueryRequest[];

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

typedef struct ProtocolExtensionField_37 {
  ProtocolIE_ID id;
  Criticality criticality;
  ASN1OpenType extensionValue;
} ProtocolExtensionField_37;


extern const ASN1CType asn1_type_ProtocolExtensionField_37[];

typedef struct ProtocolExtensionContainer_37 {
  ProtocolExtensionField_37 *tab;
  int count;
} ProtocolExtensionContainer_37;

extern const ASN1CType asn1_type_ProtocolExtensionContainer_37[];

typedef struct U_RNTIQueryResponse {
  ProtocolIE_Container_18 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_37 protocolExtensions;
} U_RNTIQueryResponse;


extern const ASN1CType asn1_type_U_RNTIQueryResponse[];

typedef struct HNBAP_ELEMENTARY_PROCEDURE { /* object class definition */
  ASN1CType InitiatingMessage;
  ASN1CType SuccessfulOutcome;
  ASN1CType UnsuccessfulOutcome;
  ASN1CType procedureCode;
  ASN1CType criticality;
} HNBAP_ELEMENTARY_PROCEDURE;


extern const ASN1CType asn1_type_HNBAP_ELEMENTARY_PROCEDURE[];

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

typedef enum {
  HNBAP_PDU_initiatingMessage,
  HNBAP_PDU_successfulOutcome,
  HNBAP_PDU_unsuccessfulOutcome,
} HNBAP_PDU_choice;

typedef struct HNBAP_PDU {
  HNBAP_PDU_choice choice;
  union {
    InitiatingMessage initiatingMessage;
    SuccessfulOutcome successfulOutcome;
    UnsuccessfulOutcome unsuccessfulOutcome;
  } u;
} HNBAP_PDU;

extern const ASN1CType asn1_type_HNBAP_PDU[];

#ifdef  __cplusplus
}
#endif

#endif /* _FFASN1_OUT_H */
