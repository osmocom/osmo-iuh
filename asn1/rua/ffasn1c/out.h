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

typedef int ProcedureCode;

extern const ASN1CType asn1_type_ProcedureCode[];

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

typedef int ProtocolIE_ID;

extern const ASN1CType asn1_type_ProtocolIE_ID[];

typedef enum TriggeringMessage {
  TriggeringMessage_initiating_message,
  TriggeringMessage_successful_outcome,
  TriggeringMessage_unsuccessful_outcome,
} TriggeringMessage;

extern const ASN1CType asn1_type_TriggeringMessage[];

typedef struct RUA_PRIVATE_IES { /* object class definition */
  ASN1CType id;
  ASN1CType criticality;
  ASN1CType Value;
  ASN1CType presence;
} RUA_PRIVATE_IES;


extern const ASN1CType asn1_type_RUA_PRIVATE_IES[];

typedef struct RUA_PROTOCOL_IES { /* object class definition */
  ASN1CType id;
  ASN1CType criticality;
  ASN1CType Value;
  ASN1CType presence;
} RUA_PROTOCOL_IES;


extern const ASN1CType asn1_type_RUA_PROTOCOL_IES[];

typedef struct RUA_PROTOCOL_EXTENSION { /* object class definition */
  ASN1CType id;
  ASN1CType criticality;
  ASN1CType Extension;
  ASN1CType presence;
} RUA_PROTOCOL_EXTENSION;


extern const ASN1CType asn1_type_RUA_PROTOCOL_EXTENSION[];

typedef enum CN_DomainIndicator {
  CN_DomainIndicator_cs_domain,
  CN_DomainIndicator_ps_domain,
} CN_DomainIndicator;

extern const ASN1CType asn1_type_CN_DomainIndicator[];

typedef enum CSGMembershipStatus {
  CSGMembershipStatus_member,
  CSGMembershipStatus_non_member,
} CSGMembershipStatus;

extern const ASN1CType asn1_type_CSGMembershipStatus[];

typedef enum Establishment_Cause {
  Establishment_Cause_emergency_call,
  Establishment_Cause_normal_call,
} Establishment_Cause;

extern const ASN1CType asn1_type_Establishment_Cause[];

typedef ASN1BitString Context_ID;

extern const ASN1CType asn1_type_Context_ID[];

typedef ASN1BitString RoutingParameter;

extern const ASN1CType asn1_type_RoutingParameter[];

typedef struct Gsm_map_IDNNS_1 {
  RoutingParameter routingparameter;
} Gsm_map_IDNNS_1;


extern const ASN1CType asn1_type_Gsm_map_IDNNS_1[];

typedef struct Gsm_map_IDNNS_2 {
  RoutingParameter routingparameter;
} Gsm_map_IDNNS_2;


extern const ASN1CType asn1_type_Gsm_map_IDNNS_2[];

typedef struct Gsm_map_IDNNS_3 {
  RoutingParameter routingparameter;
} Gsm_map_IDNNS_3;


extern const ASN1CType asn1_type_Gsm_map_IDNNS_3[];

typedef struct Gsm_map_IDNNS_4 {
  RoutingParameter routingparameter;
} Gsm_map_IDNNS_4;


extern const ASN1CType asn1_type_Gsm_map_IDNNS_4[];

typedef struct Gsm_map_IDNNS_5 {
  RoutingParameter routingparameter;
} Gsm_map_IDNNS_5;


extern const ASN1CType asn1_type_Gsm_map_IDNNS_5[];

typedef struct Gsm_map_IDNNS_6 {
  RoutingParameter routingparameter;
} Gsm_map_IDNNS_6;


extern const ASN1CType asn1_type_Gsm_map_IDNNS_6[];

typedef struct Gsm_map_IDNNS_7 {
  RoutingParameter routingparameter;
} Gsm_map_IDNNS_7;


extern const ASN1CType asn1_type_Gsm_map_IDNNS_7[];

typedef struct Gsm_map_IDNNS_8 {
  RoutingParameter routingparameter;
} Gsm_map_IDNNS_8;


extern const ASN1CType asn1_type_Gsm_map_IDNNS_8[];

typedef enum {
  Gsm_map_IDNNS_9_localPTMSI,
  Gsm_map_IDNNS_9_tMSIofsamePLMN,
  Gsm_map_IDNNS_9_tMSIofdifferentPLMN,
  Gsm_map_IDNNS_9_iMSIresponsetopaging,
  Gsm_map_IDNNS_9_iMSIcauseUEinitiatedEvent,
  Gsm_map_IDNNS_9_iMEI,
  Gsm_map_IDNNS_9_spare2,
  Gsm_map_IDNNS_9_spare1,
} Gsm_map_IDNNS_9_choice;

typedef struct Gsm_map_IDNNS_9 {
  Gsm_map_IDNNS_9_choice choice;
  union {
    Gsm_map_IDNNS_1 localPTMSI;
    Gsm_map_IDNNS_2 tMSIofsamePLMN;
    Gsm_map_IDNNS_3 tMSIofdifferentPLMN;
    Gsm_map_IDNNS_4 iMSIresponsetopaging;
    Gsm_map_IDNNS_5 iMSIcauseUEinitiatedEvent;
    Gsm_map_IDNNS_6 iMEI;
    Gsm_map_IDNNS_7 spare2;
    Gsm_map_IDNNS_8 spare1;
  } u;
} Gsm_map_IDNNS_9;

extern const ASN1CType asn1_type_Gsm_map_IDNNS_9[];

typedef struct Gsm_map_IDNNS {
  Gsm_map_IDNNS_9 routingbasis;
  BOOL dummy;
} Gsm_map_IDNNS;


extern const ASN1CType asn1_type_Gsm_map_IDNNS[];

typedef ASN1BitString Ansi_41_IDNNS;

extern const ASN1CType asn1_type_Ansi_41_IDNNS[];

typedef enum {
  IntraDomainNasNodeSelector_1_gsm_Map_IDNNS,
  IntraDomainNasNodeSelector_1_ansi_41_IDNNS,
} IntraDomainNasNodeSelector_1_choice;

typedef struct IntraDomainNasNodeSelector_1 {
  IntraDomainNasNodeSelector_1_choice choice;
  union {
    Gsm_map_IDNNS gsm_Map_IDNNS;
    Ansi_41_IDNNS ansi_41_IDNNS;
  } u;
} IntraDomainNasNodeSelector_1;

extern const ASN1CType asn1_type_IntraDomainNasNodeSelector_1[];

typedef struct IntraDomainNasNodeSelector_2 {
  IntraDomainNasNodeSelector_1 cn_Type;
} IntraDomainNasNodeSelector_2;


extern const ASN1CType asn1_type_IntraDomainNasNodeSelector_2[];

typedef struct IntraDomainNasNodeSelector_3 {
  ASN1BitString futurecoding;
} IntraDomainNasNodeSelector_3;


extern const ASN1CType asn1_type_IntraDomainNasNodeSelector_3[];

typedef enum {
  IntraDomainNasNodeSelector_4_release99,
  IntraDomainNasNodeSelector_4_later,
} IntraDomainNasNodeSelector_4_choice;

typedef struct IntraDomainNasNodeSelector_4 {
  IntraDomainNasNodeSelector_4_choice choice;
  union {
    IntraDomainNasNodeSelector_2 release99;
    IntraDomainNasNodeSelector_3 later;
  } u;
} IntraDomainNasNodeSelector_4;

extern const ASN1CType asn1_type_IntraDomainNasNodeSelector_4[];

typedef struct IntraDomainNasNodeSelector {
  IntraDomainNasNodeSelector_4 version;
} IntraDomainNasNodeSelector;


extern const ASN1CType asn1_type_IntraDomainNasNodeSelector[];

typedef ASN1String RANAP_Message;

extern const ASN1CType asn1_type_RANAP_Message[];

typedef enum CauseRadioNetwork {
  CauseRadioNetwork_normal,
  CauseRadioNetwork_connect_failed,
  CauseRadioNetwork_network_release,
  CauseRadioNetwork_unspecified,
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

typedef struct Connect {
  ProtocolIE_Container_1 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_3 protocolExtensions;
} Connect;


extern const ASN1CType asn1_type_Connect[];

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

typedef struct DirectTransfer {
  ProtocolIE_Container_2 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_4 protocolExtensions;
} DirectTransfer;


extern const ASN1CType asn1_type_DirectTransfer[];

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

typedef struct Disconnect {
  ProtocolIE_Container_3 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_5 protocolExtensions;
} Disconnect;


extern const ASN1CType asn1_type_Disconnect[];

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

typedef struct ConnectionlessTransfer {
  ProtocolIE_Container_4 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_6 protocolExtensions;
} ConnectionlessTransfer;


extern const ASN1CType asn1_type_ConnectionlessTransfer[];

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

typedef struct ErrorIndication {
  ProtocolIE_Container_5 protocolIEs;
  BOOL protocolExtensions_option;
  ProtocolExtensionContainer_7 protocolExtensions;
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

typedef struct RUA_ELEMENTARY_PROCEDURE { /* object class definition */
  ASN1CType InitiatingMessage;
  ASN1CType SuccessfulOutcome;
  ASN1CType UnsuccessfulOutcome;
  ASN1CType procedureCode;
  ASN1CType criticality;
} RUA_ELEMENTARY_PROCEDURE;


extern const ASN1CType asn1_type_RUA_ELEMENTARY_PROCEDURE[];

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
  RUA_PDU_initiatingMessage,
  RUA_PDU_successfulOutcome,
  RUA_PDU_unsuccessfulOutcome,
} RUA_PDU_choice;

typedef struct RUA_PDU {
  RUA_PDU_choice choice;
  union {
    InitiatingMessage initiatingMessage;
    SuccessfulOutcome successfulOutcome;
    UnsuccessfulOutcome unsuccessfulOutcome;
  } u;
} RUA_PDU;

extern const ASN1CType asn1_type_RUA_PDU[];

#ifdef  __cplusplus
}
#endif

#endif /* _FFASN1_OUT_H */
