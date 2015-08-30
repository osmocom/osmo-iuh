/* Automatically generated file - do not edit */

#include "asn1defs.h"
#include "rua.h"

const ASN1CType asn1_type_Criticality[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0xa,
  3,
  (intptr_t)"reject",
  (intptr_t)"ignore",
  (intptr_t)"notify",
  (intptr_t)"Criticality",
};

const ASN1CType asn1_type_Presence[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0xa,
  3,
  (intptr_t)"optional",
  (intptr_t)"conditional",
  (intptr_t)"mandatory",
  (intptr_t)"Presence",
};

const ASN1CType asn1_type_ProcedureCode[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xff,
  (intptr_t)"ProcedureCode",
};

static const ASN1CType asn1_type__local_0[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
};

static const ASN1CType asn1_type__local_1[] = {
  (ASN1_CTYPE_OBJECT_IDENTIFIER << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
};

const ASN1CType asn1_type_PrivateIE_ID[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x0,
  2,
  sizeof(PrivateIE_ID),
  offsetof(PrivateIE_ID, choice),
  offsetof(PrivateIE_ID, u),
  (intptr_t)asn1_type__local_0,
  (intptr_t)"local",
  (intptr_t)asn1_type__local_1,
  (intptr_t)"global",
  (intptr_t)"PrivateIE-ID",
};

const ASN1CType asn1_type_ProtocolIE_ID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xffff,
  (intptr_t)"ProtocolIE-ID",
};

const ASN1CType asn1_type_TriggeringMessage[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  3,
  (intptr_t)"initiating-message",
  (intptr_t)"successful-outcome",
  (intptr_t)"unsuccessful-outcome",
  (intptr_t)"TriggeringMessage",
};

const ASN1CType asn1_type_RUA_PRIVATE_IES[] = {
  (ASN1_CTYPE_OBJECT_CLASS << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x0,
  4,

  0x1,
  (intptr_t)asn1_type_PrivateIE_ID,
  0,
  (intptr_t)"&id",

  0x1,
  (intptr_t)asn1_type_Criticality,
  0,
  (intptr_t)"&criticality",

  0x0,
  0,
  0,
  (intptr_t)"&Value",

  0x1,
  (intptr_t)asn1_type_Presence,
  0,
  (intptr_t)"&presence",
  (intptr_t)"RUA-PRIVATE-IES",
};

const ASN1CType asn1_type_RUA_PROTOCOL_IES[] = {
  (ASN1_CTYPE_OBJECT_CLASS << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x0,
  4,

  0x1,
  (intptr_t)asn1_type_ProtocolIE_ID,
  0,
  (intptr_t)"&id",

  0x1,
  (intptr_t)asn1_type_Criticality,
  0,
  (intptr_t)"&criticality",

  0x0,
  0,
  0,
  (intptr_t)"&Value",

  0x1,
  (intptr_t)asn1_type_Presence,
  0,
  (intptr_t)"&presence",
  (intptr_t)"RUA-PROTOCOL-IES",
};

const ASN1CType asn1_type_RUA_PROTOCOL_EXTENSION[] = {
  (ASN1_CTYPE_OBJECT_CLASS << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x0,
  4,

  0x1,
  (intptr_t)asn1_type_ProtocolIE_ID,
  0,
  (intptr_t)"&id",

  0x1,
  (intptr_t)asn1_type_Criticality,
  0,
  (intptr_t)"&criticality",

  0x0,
  0,
  0,
  (intptr_t)"&Extension",

  0x1,
  (intptr_t)asn1_type_Presence,
  0,
  (intptr_t)"&presence",
  (intptr_t)"RUA-PROTOCOL-EXTENSION",
};

const ASN1CType asn1_type_ProtocolIE_Container_1[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_1),
  (intptr_t)asn1_type_ProtocolIE_Field_1,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_2[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_2),
  (intptr_t)asn1_type_ProtocolIE_Field_2,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_3[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_3),
  (intptr_t)asn1_type_ProtocolIE_Field_3,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_4[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_4),
  (intptr_t)asn1_type_ProtocolIE_Field_4,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_5[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_5),
  (intptr_t)asn1_type_ProtocolIE_Field_5,
  0,
};

static const ASN1CType asn1_type__local_2[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_3[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_7 = 7;

static const Criticality asn1_value__local_8 = 0;

static const Presence asn1_value__local_9 = 2;

static const ProtocolIE_ID asn1_value__local_10 = 3;

static const Criticality asn1_value__local_11 = 0;

static const Presence asn1_value__local_12 = 2;

static const ProtocolIE_ID asn1_value__local_13 = 5;

static const Criticality asn1_value__local_14 = 1;

static const Presence asn1_value__local_15 = 0;

static const ProtocolIE_ID asn1_value__local_16 = 6;

static const Criticality asn1_value__local_17 = 0;

static const Presence asn1_value__local_18 = 2;

static const ProtocolIE_ID asn1_value__local_19 = 4;

static const Criticality asn1_value__local_20 = 0;

static const Presence asn1_value__local_21 = 2;

static const RUA_PROTOCOL_IES asn1_value__local_6[] = {
{
  (intptr_t)&asn1_value__local_7,
  (intptr_t)&asn1_value__local_8,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_9,
},
{
  (intptr_t)&asn1_value__local_10,
  (intptr_t)&asn1_value__local_11,
  (intptr_t)asn1_type_Context_ID,
  (intptr_t)&asn1_value__local_12,
},
{
  (intptr_t)&asn1_value__local_13,
  (intptr_t)&asn1_value__local_14,
  (intptr_t)asn1_type_IntraDomainNasNodeSelector,
  (intptr_t)&asn1_value__local_15,
},
{
  (intptr_t)&asn1_value__local_16,
  (intptr_t)&asn1_value__local_17,
  (intptr_t)asn1_type_Establishment_Cause,
  (intptr_t)&asn1_value__local_18,
},
{
  (intptr_t)&asn1_value__local_19,
  (intptr_t)&asn1_value__local_20,
  (intptr_t)asn1_type_RANAP_Message,
  (intptr_t)&asn1_value__local_21,
},
};

static const ASN1CType asn1_constraint__local_5[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_6,
  5,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_4[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_5,
};

const ASN1CType asn1_type_ProtocolIE_Field_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_1),

  offsetof(ProtocolIE_Field_1, id) | 0x0,
  (intptr_t)asn1_type__local_2,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_1, criticality) | 0x0,
  (intptr_t)asn1_type__local_3,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_1, value) | 0x0,
  (intptr_t)asn1_type__local_4,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_22[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_23[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_27 = 7;

static const Criticality asn1_value__local_28 = 0;

static const Presence asn1_value__local_29 = 2;

static const ProtocolIE_ID asn1_value__local_30 = 3;

static const Criticality asn1_value__local_31 = 0;

static const Presence asn1_value__local_32 = 2;

static const ProtocolIE_ID asn1_value__local_33 = 4;

static const Criticality asn1_value__local_34 = 0;

static const Presence asn1_value__local_35 = 2;

static const RUA_PROTOCOL_IES asn1_value__local_26[] = {
{
  (intptr_t)&asn1_value__local_27,
  (intptr_t)&asn1_value__local_28,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_29,
},
{
  (intptr_t)&asn1_value__local_30,
  (intptr_t)&asn1_value__local_31,
  (intptr_t)asn1_type_Context_ID,
  (intptr_t)&asn1_value__local_32,
},
{
  (intptr_t)&asn1_value__local_33,
  (intptr_t)&asn1_value__local_34,
  (intptr_t)asn1_type_RANAP_Message,
  (intptr_t)&asn1_value__local_35,
},
};

static const ASN1CType asn1_constraint__local_25[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_26,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_24[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_25,
};

const ASN1CType asn1_type_ProtocolIE_Field_2[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_2),

  offsetof(ProtocolIE_Field_2, id) | 0x0,
  (intptr_t)asn1_type__local_22,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_2, criticality) | 0x0,
  (intptr_t)asn1_type__local_23,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_2, value) | 0x0,
  (intptr_t)asn1_type__local_24,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_36[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_37[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_41 = 7;

static const Criticality asn1_value__local_42 = 0;

static const Presence asn1_value__local_43 = 2;

static const ProtocolIE_ID asn1_value__local_44 = 3;

static const Criticality asn1_value__local_45 = 0;

static const Presence asn1_value__local_46 = 2;

static const ProtocolIE_ID asn1_value__local_47 = 1;

static const Criticality asn1_value__local_48 = 0;

static const Presence asn1_value__local_49 = 2;

static const ProtocolIE_ID asn1_value__local_50 = 4;

static const Criticality asn1_value__local_51 = 0;

static const Presence asn1_value__local_52 = 1;

static const RUA_PROTOCOL_IES asn1_value__local_40[] = {
{
  (intptr_t)&asn1_value__local_41,
  (intptr_t)&asn1_value__local_42,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_43,
},
{
  (intptr_t)&asn1_value__local_44,
  (intptr_t)&asn1_value__local_45,
  (intptr_t)asn1_type_Context_ID,
  (intptr_t)&asn1_value__local_46,
},
{
  (intptr_t)&asn1_value__local_47,
  (intptr_t)&asn1_value__local_48,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_49,
},
{
  (intptr_t)&asn1_value__local_50,
  (intptr_t)&asn1_value__local_51,
  (intptr_t)asn1_type_RANAP_Message,
  (intptr_t)&asn1_value__local_52,
},
};

static const ASN1CType asn1_constraint__local_39[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_40,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_38[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_39,
};

const ASN1CType asn1_type_ProtocolIE_Field_3[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_3),

  offsetof(ProtocolIE_Field_3, id) | 0x0,
  (intptr_t)asn1_type__local_36,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_3, criticality) | 0x0,
  (intptr_t)asn1_type__local_37,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_3, value) | 0x0,
  (intptr_t)asn1_type__local_38,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_53[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_54[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_58 = 4;

static const Criticality asn1_value__local_59 = 0;

static const Presence asn1_value__local_60 = 2;

static const RUA_PROTOCOL_IES asn1_value__local_57[] = {
{
  (intptr_t)&asn1_value__local_58,
  (intptr_t)&asn1_value__local_59,
  (intptr_t)asn1_type_RANAP_Message,
  (intptr_t)&asn1_value__local_60,
},
};

static const ASN1CType asn1_constraint__local_56[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_57,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_55[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_56,
};

const ASN1CType asn1_type_ProtocolIE_Field_4[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_4),

  offsetof(ProtocolIE_Field_4, id) | 0x0,
  (intptr_t)asn1_type__local_53,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_4, criticality) | 0x0,
  (intptr_t)asn1_type__local_54,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_4, value) | 0x0,
  (intptr_t)asn1_type__local_55,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_61[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_62[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_66 = 1;

static const Criticality asn1_value__local_67 = 1;

static const Presence asn1_value__local_68 = 2;

static const ProtocolIE_ID asn1_value__local_69 = 2;

static const Criticality asn1_value__local_70 = 1;

static const Presence asn1_value__local_71 = 0;

static const RUA_PROTOCOL_IES asn1_value__local_65[] = {
{
  (intptr_t)&asn1_value__local_66,
  (intptr_t)&asn1_value__local_67,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_68,
},
{
  (intptr_t)&asn1_value__local_69,
  (intptr_t)&asn1_value__local_70,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_71,
},
};

static const ASN1CType asn1_constraint__local_64[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_65,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_63[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_64,
};

const ASN1CType asn1_type_ProtocolIE_Field_5[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_5),

  offsetof(ProtocolIE_Field_5, id) | 0x0,
  (intptr_t)asn1_type__local_61,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_5, criticality) | 0x0,
  (intptr_t)asn1_type__local_62,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_5, value) | 0x0,
  (intptr_t)asn1_type__local_63,
  0,
  (intptr_t)"value",

};

const ASN1CType asn1_type_ProtocolExtensionContainer_1[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_1),
  (intptr_t)asn1_type_ProtocolExtensionField_1,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_2[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_2),
  (intptr_t)asn1_type_ProtocolExtensionField_2,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_3[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_3),
  (intptr_t)asn1_type_ProtocolExtensionField_3,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_4[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_4),
  (intptr_t)asn1_type_ProtocolExtensionField_4,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_5[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_5),
  (intptr_t)asn1_type_ProtocolExtensionField_5,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_6[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_6),
  (intptr_t)asn1_type_ProtocolExtensionField_6,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_7[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_7),
  (intptr_t)asn1_type_ProtocolExtensionField_7,
  0,
};

static const ASN1CType asn1_type__local_72[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_73[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_75[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_74[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_75,
};

const ASN1CType asn1_type_ProtocolExtensionField_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_1),

  offsetof(ProtocolExtensionField_1, id) | 0x0,
  (intptr_t)asn1_type__local_72,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_1, criticality) | 0x0,
  (intptr_t)asn1_type__local_73,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_1, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_74,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_77[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_78[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_80[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_79[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_80,
};

const ASN1CType asn1_type_ProtocolExtensionField_2[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_2),

  offsetof(ProtocolExtensionField_2, id) | 0x0,
  (intptr_t)asn1_type__local_77,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_2, criticality) | 0x0,
  (intptr_t)asn1_type__local_78,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_2, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_79,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_82[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_83[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_87 = 9;

static const Criticality asn1_value__local_88 = 1;

static const Presence asn1_value__local_89 = 0;

static const RUA_PROTOCOL_EXTENSION asn1_value__local_86[] = {
{
  (intptr_t)&asn1_value__local_87,
  (intptr_t)&asn1_value__local_88,
  (intptr_t)asn1_type_CSGMembershipStatus,
  (intptr_t)&asn1_value__local_89,
},
};

static const ASN1CType asn1_constraint__local_85[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_86,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_84[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_85,
};

const ASN1CType asn1_type_ProtocolExtensionField_3[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_3),

  offsetof(ProtocolExtensionField_3, id) | 0x0,
  (intptr_t)asn1_type__local_82,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_3, criticality) | 0x0,
  (intptr_t)asn1_type__local_83,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_3, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_84,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_90[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_91[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_93[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_92[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_93,
};

const ASN1CType asn1_type_ProtocolExtensionField_4[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_4),

  offsetof(ProtocolExtensionField_4, id) | 0x0,
  (intptr_t)asn1_type__local_90,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_4, criticality) | 0x0,
  (intptr_t)asn1_type__local_91,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_4, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_92,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_95[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_96[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_98[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_97[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_98,
};

const ASN1CType asn1_type_ProtocolExtensionField_5[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_5),

  offsetof(ProtocolExtensionField_5, id) | 0x0,
  (intptr_t)asn1_type__local_95,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_5, criticality) | 0x0,
  (intptr_t)asn1_type__local_96,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_5, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_97,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_100[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_101[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_103[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_102[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_103,
};

const ASN1CType asn1_type_ProtocolExtensionField_6[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_6),

  offsetof(ProtocolExtensionField_6, id) | 0x0,
  (intptr_t)asn1_type__local_100,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_6, criticality) | 0x0,
  (intptr_t)asn1_type__local_101,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_6, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_102,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_105[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_106[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_108[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_107[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_108,
};

const ASN1CType asn1_type_ProtocolExtensionField_7[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_7),

  offsetof(ProtocolExtensionField_7, id) | 0x0,
  (intptr_t)asn1_type__local_105,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_7, criticality) | 0x0,
  (intptr_t)asn1_type__local_106,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_7, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_107,
  0,
  (intptr_t)"extensionValue",

};

const ASN1CType asn1_type_PrivateIE_Container_1[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x1,
  0xffff,
  sizeof(PrivateIE_Field_1),
  (intptr_t)asn1_type_PrivateIE_Field_1,
  0,
};

static const ASN1CType asn1_type__local_110[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100000,
  (intptr_t)asn1_type_PrivateIE_ID,
};

static const ASN1CType asn1_type__local_111[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_113[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_PRIVATE_IES,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_112[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_113,
};

const ASN1CType asn1_type_PrivateIE_Field_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(PrivateIE_Field_1),

  offsetof(PrivateIE_Field_1, id) | 0x0,
  (intptr_t)asn1_type__local_110,
  0,
  (intptr_t)"id",

  offsetof(PrivateIE_Field_1, criticality) | 0x0,
  (intptr_t)asn1_type__local_111,
  0,
  (intptr_t)"criticality",

  offsetof(PrivateIE_Field_1, value) | 0x0,
  (intptr_t)asn1_type__local_112,
  0,
  (intptr_t)"value",

};

const ASN1CType asn1_type_CN_DomainIndicator[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0xa,
  2,
  (intptr_t)"cs-domain",
  (intptr_t)"ps-domain",
  (intptr_t)"CN-DomainIndicator",
};

const ASN1CType asn1_type_CSGMembershipStatus[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"member",
  (intptr_t)"non-member",
  (intptr_t)"CSGMembershipStatus",
};

const ASN1CType asn1_type_Establishment_Cause[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"emergency-call",
  (intptr_t)"normal-call",
  (intptr_t)"Establishment-Cause",
};

const ASN1CType asn1_type_Context_ID[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x3,
  0x18,
  0x18,
  (intptr_t)"Context-ID",
};

const ASN1CType asn1_type_IntraDomainNasNodeSelector[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x10,
  1,
  sizeof(IntraDomainNasNodeSelector),

  offsetof(IntraDomainNasNodeSelector, version) | 0x0,
  (intptr_t)asn1_type_IntraDomainNasNodeSelector_4,
  0,
  (intptr_t)"version",

  (intptr_t)"IntraDomainNasNodeSelector",
};

const ASN1CType asn1_type_IntraDomainNasNodeSelector_1[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  2,
  sizeof(IntraDomainNasNodeSelector_1),
  offsetof(IntraDomainNasNodeSelector_1, choice),
  offsetof(IntraDomainNasNodeSelector_1, u),
  (intptr_t)asn1_type_Gsm_map_IDNNS,
  (intptr_t)"gsm-Map-IDNNS",
  (intptr_t)asn1_type_Ansi_41_IDNNS,
  (intptr_t)"ansi-41-IDNNS",
};

const ASN1CType asn1_type_IntraDomainNasNodeSelector_2[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  1,
  sizeof(IntraDomainNasNodeSelector_2),

  offsetof(IntraDomainNasNodeSelector_2, cn_Type) | 0x0,
  (intptr_t)asn1_type_IntraDomainNasNodeSelector_1,
  0,
  (intptr_t)"cn-Type",

};

static const ASN1CType asn1_type__local_115[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0xf,
  0xf,
};

const ASN1CType asn1_type_IntraDomainNasNodeSelector_3[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  1,
  sizeof(IntraDomainNasNodeSelector_3),

  offsetof(IntraDomainNasNodeSelector_3, futurecoding) | 0x0,
  (intptr_t)asn1_type__local_115,
  0,
  (intptr_t)"futurecoding",

};

const ASN1CType asn1_type_IntraDomainNasNodeSelector_4[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  2,
  sizeof(IntraDomainNasNodeSelector_4),
  offsetof(IntraDomainNasNodeSelector_4, choice),
  offsetof(IntraDomainNasNodeSelector_4, u),
  (intptr_t)asn1_type_IntraDomainNasNodeSelector_2,
  (intptr_t)"release99",
  (intptr_t)asn1_type_IntraDomainNasNodeSelector_3,
  (intptr_t)"later",
};

static const ASN1CType asn1_type__local_116[] = {
  (ASN1_CTYPE_BOOLEAN << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
};

const ASN1CType asn1_type_Gsm_map_IDNNS[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100000,
  2,
  sizeof(Gsm_map_IDNNS),

  offsetof(Gsm_map_IDNNS, routingbasis) | 0x0,
  (intptr_t)asn1_type_Gsm_map_IDNNS_9,
  0,
  (intptr_t)"routingbasis",

  offsetof(Gsm_map_IDNNS, dummy) | 0x0,
  (intptr_t)asn1_type__local_116,
  0,
  (intptr_t)"dummy",

  (intptr_t)"Gsm-map-IDNNS",
};

const ASN1CType asn1_type_Gsm_map_IDNNS_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  1,
  sizeof(Gsm_map_IDNNS_1),

  offsetof(Gsm_map_IDNNS_1, routingparameter) | 0x0,
  (intptr_t)asn1_type_RoutingParameter,
  0,
  (intptr_t)"routingparameter",

};

const ASN1CType asn1_type_Gsm_map_IDNNS_2[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  1,
  sizeof(Gsm_map_IDNNS_2),

  offsetof(Gsm_map_IDNNS_2, routingparameter) | 0x0,
  (intptr_t)asn1_type_RoutingParameter,
  0,
  (intptr_t)"routingparameter",

};

const ASN1CType asn1_type_Gsm_map_IDNNS_3[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  1,
  sizeof(Gsm_map_IDNNS_3),

  offsetof(Gsm_map_IDNNS_3, routingparameter) | 0x0,
  (intptr_t)asn1_type_RoutingParameter,
  0,
  (intptr_t)"routingparameter",

};

const ASN1CType asn1_type_Gsm_map_IDNNS_4[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  1,
  sizeof(Gsm_map_IDNNS_4),

  offsetof(Gsm_map_IDNNS_4, routingparameter) | 0x0,
  (intptr_t)asn1_type_RoutingParameter,
  0,
  (intptr_t)"routingparameter",

};

const ASN1CType asn1_type_Gsm_map_IDNNS_5[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x100004,
  1,
  sizeof(Gsm_map_IDNNS_5),

  offsetof(Gsm_map_IDNNS_5, routingparameter) | 0x0,
  (intptr_t)asn1_type_RoutingParameter,
  0,
  (intptr_t)"routingparameter",

};

const ASN1CType asn1_type_Gsm_map_IDNNS_6[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x100005,
  1,
  sizeof(Gsm_map_IDNNS_6),

  offsetof(Gsm_map_IDNNS_6, routingparameter) | 0x0,
  (intptr_t)asn1_type_RoutingParameter,
  0,
  (intptr_t)"routingparameter",

};

const ASN1CType asn1_type_Gsm_map_IDNNS_7[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x100006,
  1,
  sizeof(Gsm_map_IDNNS_7),

  offsetof(Gsm_map_IDNNS_7, routingparameter) | 0x0,
  (intptr_t)asn1_type_RoutingParameter,
  0,
  (intptr_t)"routingparameter",

};

const ASN1CType asn1_type_Gsm_map_IDNNS_8[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x100007,
  1,
  sizeof(Gsm_map_IDNNS_8),

  offsetof(Gsm_map_IDNNS_8, routingparameter) | 0x0,
  (intptr_t)asn1_type_RoutingParameter,
  0,
  (intptr_t)"routingparameter",

};

const ASN1CType asn1_type_Gsm_map_IDNNS_9[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  8,
  sizeof(Gsm_map_IDNNS_9),
  offsetof(Gsm_map_IDNNS_9, choice),
  offsetof(Gsm_map_IDNNS_9, u),
  (intptr_t)asn1_type_Gsm_map_IDNNS_1,
  (intptr_t)"localPTMSI",
  (intptr_t)asn1_type_Gsm_map_IDNNS_2,
  (intptr_t)"tMSIofsamePLMN",
  (intptr_t)asn1_type_Gsm_map_IDNNS_3,
  (intptr_t)"tMSIofdifferentPLMN",
  (intptr_t)asn1_type_Gsm_map_IDNNS_4,
  (intptr_t)"iMSIresponsetopaging",
  (intptr_t)asn1_type_Gsm_map_IDNNS_5,
  (intptr_t)"iMSIcauseUEinitiatedEvent",
  (intptr_t)asn1_type_Gsm_map_IDNNS_6,
  (intptr_t)"iMEI",
  (intptr_t)asn1_type_Gsm_map_IDNNS_7,
  (intptr_t)"spare2",
  (intptr_t)asn1_type_Gsm_map_IDNNS_8,
  (intptr_t)"spare1",
};

const ASN1CType asn1_type_Ansi_41_IDNNS[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0xe,
  0xe,
  (intptr_t)"Ansi-41-IDNNS",
};

const ASN1CType asn1_type_RANAP_Message[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"RANAP-Message",
};

const ASN1CType asn1_type_RoutingParameter[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0xa,
  0xa,
  (intptr_t)"RoutingParameter",
};

const ASN1CType asn1_type_Cause[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  4,
  0,
  sizeof(Cause),
  offsetof(Cause, choice),
  offsetof(Cause, u),
  (intptr_t)asn1_type_CauseRadioNetwork,
  (intptr_t)"radioNetwork",
  (intptr_t)asn1_type_CauseTransport,
  (intptr_t)"transport",
  (intptr_t)asn1_type_CauseProtocol,
  (intptr_t)"protocol",
  (intptr_t)asn1_type_CauseMisc,
  (intptr_t)"misc",
  (intptr_t)"Cause",
};

const ASN1CType asn1_type_CauseRadioNetwork[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  4,
  0,
  (intptr_t)"normal",
  (intptr_t)"connect-failed",
  (intptr_t)"network-release",
  (intptr_t)"unspecified",
  (intptr_t)"CauseRadioNetwork",
};

const ASN1CType asn1_type_CauseTransport[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  0,
  (intptr_t)"transport-resource-unavailable",
  (intptr_t)"unspecified",
  (intptr_t)"CauseTransport",
};

const ASN1CType asn1_type_CauseProtocol[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100002,
  7,
  0,
  (intptr_t)"transfer-syntax-error",
  (intptr_t)"abstract-syntax-error-reject",
  (intptr_t)"abstract-syntax-error-ignore-and-notify",
  (intptr_t)"message-not-compatible-with-receiver-state",
  (intptr_t)"semantic-error",
  (intptr_t)"unspecified",
  (intptr_t)"abstract-syntax-error-falsely-constructed-message",
  (intptr_t)"CauseProtocol",
};

const ASN1CType asn1_type_CauseMisc[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100003,
  4,
  0,
  (intptr_t)"processing-overload",
  (intptr_t)"hardware-failure",
  (intptr_t)"o-and-m-intervention",
  (intptr_t)"unspecified",
  (intptr_t)"CauseMisc",
};

static const ASN1CType asn1_type__local_117[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProcedureCode,
};

static const ASN1CType asn1_type__local_118[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_Criticality,
};

const ASN1CType asn1_type_CriticalityDiagnostics[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  5,
  sizeof(CriticalityDiagnostics),

  offsetof(CriticalityDiagnostics, procedureCode) | 0x8000000,
  (intptr_t)asn1_type__local_117,
  offsetof(CriticalityDiagnostics, procedureCode_option),
  (intptr_t)"procedureCode",

  offsetof(CriticalityDiagnostics, triggeringMessage) | 0x8000000,
  (intptr_t)asn1_type_TriggeringMessage,
  offsetof(CriticalityDiagnostics, triggeringMessage_option),
  (intptr_t)"triggeringMessage",

  offsetof(CriticalityDiagnostics, procedureCriticality) | 0x8000000,
  (intptr_t)asn1_type__local_118,
  offsetof(CriticalityDiagnostics, procedureCriticality_option),
  (intptr_t)"procedureCriticality",

  offsetof(CriticalityDiagnostics, iEsCriticalityDiagnostics) | 0x8000000,
  (intptr_t)asn1_type_CriticalityDiagnostics_IE_List,
  offsetof(CriticalityDiagnostics, iEsCriticalityDiagnostics_option),
  (intptr_t)"iEsCriticalityDiagnostics",

  offsetof(CriticalityDiagnostics, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_1,
  offsetof(CriticalityDiagnostics, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"CriticalityDiagnostics",
};

const ASN1CType asn1_type_CriticalityDiagnostics_IE_List[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100003,
  0x1,
  0x100,
  sizeof(CriticalityDiagnostics_IE_List_1),
  (intptr_t)asn1_type_CriticalityDiagnostics_IE_List_1,
  0,
  (intptr_t)"CriticalityDiagnostics-IE-List",
};

static const ASN1CType asn1_type__local_119[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_type__local_120[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

const ASN1CType asn1_type_CriticalityDiagnostics_IE_List_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  4,
  sizeof(CriticalityDiagnostics_IE_List_1),

  offsetof(CriticalityDiagnostics_IE_List_1, iECriticality) | 0x0,
  (intptr_t)asn1_type__local_119,
  0,
  (intptr_t)"iECriticality",

  offsetof(CriticalityDiagnostics_IE_List_1, iE_ID) | 0x0,
  (intptr_t)asn1_type__local_120,
  0,
  (intptr_t)"iE-ID",

  offsetof(CriticalityDiagnostics_IE_List_1, typeOfError) | 0x0,
  (intptr_t)asn1_type_TypeOfError,
  0,
  (intptr_t)"typeOfError",

  offsetof(CriticalityDiagnostics_IE_List_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_2,
  offsetof(CriticalityDiagnostics_IE_List_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

const ASN1CType asn1_type_TypeOfError[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100002,
  2,
  0,
  (intptr_t)"not-understood",
  (intptr_t)"missing",
  (intptr_t)"TypeOfError",
};

const ASN1CType asn1_type_Connect[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(Connect),

  offsetof(Connect, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_1,
  0,
  (intptr_t)"protocolIEs",

  offsetof(Connect, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_3,
  offsetof(Connect, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"Connect",
};

const ASN1CType asn1_type_DirectTransfer[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(DirectTransfer),

  offsetof(DirectTransfer, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_2,
  0,
  (intptr_t)"protocolIEs",

  offsetof(DirectTransfer, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_4,
  offsetof(DirectTransfer, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"DirectTransfer",
};

const ASN1CType asn1_type_Disconnect[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(Disconnect),

  offsetof(Disconnect, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_3,
  0,
  (intptr_t)"protocolIEs",

  offsetof(Disconnect, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_5,
  offsetof(Disconnect, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"Disconnect",
};

const ASN1CType asn1_type_ConnectionlessTransfer[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(ConnectionlessTransfer),

  offsetof(ConnectionlessTransfer, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_4,
  0,
  (intptr_t)"protocolIEs",

  offsetof(ConnectionlessTransfer, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_6,
  offsetof(ConnectionlessTransfer, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"ConnectionlessTransfer",
};

const ASN1CType asn1_type_ErrorIndication[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(ErrorIndication),

  offsetof(ErrorIndication, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_5,
  0,
  (intptr_t)"protocolIEs",

  offsetof(ErrorIndication, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_7,
  offsetof(ErrorIndication, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"ErrorIndication",
};

const ASN1CType asn1_type_PrivateMessage[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  1,
  sizeof(PrivateMessage),

  offsetof(PrivateMessage, privateIEs) | 0x0,
  (intptr_t)asn1_type_PrivateIE_Container_1,
  0,
  (intptr_t)"privateIEs",

  (intptr_t)"PrivateMessage",
};

static const Criticality asn1_value__local_121 = 1;

const ASN1CType asn1_type_RUA_ELEMENTARY_PROCEDURE[] = {
  (ASN1_CTYPE_OBJECT_CLASS << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x0,
  5,

  0x0,
  0,
  0,
  (intptr_t)"&InitiatingMessage",

  0x8,
  0,
  0,
  (intptr_t)"&SuccessfulOutcome",

  0x8,
  0,
  0,
  (intptr_t)"&UnsuccessfulOutcome",

  0x1,
  (intptr_t)asn1_type_ProcedureCode,
  0,
  (intptr_t)"&procedureCode",

  0x11,
  (intptr_t)asn1_type_Criticality,
  (intptr_t)&asn1_value__local_121,
  (intptr_t)"&criticality",
  (intptr_t)"RUA-ELEMENTARY-PROCEDURE",
};

const ASN1CType asn1_type_RUA_PDU[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  3,
  0,
  sizeof(RUA_PDU),
  offsetof(RUA_PDU, choice),
  offsetof(RUA_PDU, u),
  (intptr_t)asn1_type_InitiatingMessage,
  (intptr_t)"initiatingMessage",
  (intptr_t)asn1_type_SuccessfulOutcome,
  (intptr_t)"successfulOutcome",
  (intptr_t)asn1_type_UnsuccessfulOutcome,
  (intptr_t)"unsuccessfulOutcome",
  (intptr_t)"RUA-PDU",
};

static const ASN1CType asn1_type__local_122[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProcedureCode,
};

static const ASN1CType asn1_type__local_123[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProcedureCode asn1_value__local_127 = 1;

static const Criticality asn1_value__local_128 = 1;

static const ProcedureCode asn1_value__local_129 = 2;

static const Criticality asn1_value__local_130 = 1;

static const ProcedureCode asn1_value__local_131 = 3;

static const Criticality asn1_value__local_132 = 1;

static const ProcedureCode asn1_value__local_133 = 4;

static const Criticality asn1_value__local_134 = 1;

static const ProcedureCode asn1_value__local_135 = 5;

static const Criticality asn1_value__local_136 = 1;

static const ProcedureCode asn1_value__local_137 = 6;

static const Criticality asn1_value__local_138 = 1;

static const RUA_ELEMENTARY_PROCEDURE asn1_value__local_126[] = {
{
  (intptr_t)asn1_type_Connect,
  0,
  0,
  (intptr_t)&asn1_value__local_127,
  (intptr_t)&asn1_value__local_128,
},
{
  (intptr_t)asn1_type_DirectTransfer,
  0,
  0,
  (intptr_t)&asn1_value__local_129,
  (intptr_t)&asn1_value__local_130,
},
{
  (intptr_t)asn1_type_Disconnect,
  0,
  0,
  (intptr_t)&asn1_value__local_131,
  (intptr_t)&asn1_value__local_132,
},
{
  (intptr_t)asn1_type_ConnectionlessTransfer,
  0,
  0,
  (intptr_t)&asn1_value__local_133,
  (intptr_t)&asn1_value__local_134,
},
{
  (intptr_t)asn1_type_ErrorIndication,
  0,
  0,
  (intptr_t)&asn1_value__local_135,
  (intptr_t)&asn1_value__local_136,
},
{
  (intptr_t)asn1_type_PrivateMessage,
  0,
  0,
  (intptr_t)&asn1_value__local_137,
  (intptr_t)&asn1_value__local_138,
},
};

static const ASN1CType asn1_constraint__local_125[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_ELEMENTARY_PROCEDURE,
  0,
  (intptr_t)asn1_value__local_126,
  6,
  1,
  0,
  0x80000000,
  3,
};

static const ASN1CType asn1_type__local_124[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_125,
};

const ASN1CType asn1_type_InitiatingMessage[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100000,
  3,
  sizeof(InitiatingMessage),

  offsetof(InitiatingMessage, procedureCode) | 0x0,
  (intptr_t)asn1_type__local_122,
  0,
  (intptr_t)"procedureCode",

  offsetof(InitiatingMessage, criticality) | 0x0,
  (intptr_t)asn1_type__local_123,
  0,
  (intptr_t)"criticality",

  offsetof(InitiatingMessage, value) | 0x0,
  (intptr_t)asn1_type__local_124,
  0,
  (intptr_t)"value",

  (intptr_t)"InitiatingMessage",
};

static const ASN1CType asn1_type__local_139[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProcedureCode,
};

static const ASN1CType asn1_type__local_140[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProcedureCode asn1_value__local_144 = 1;

static const Criticality asn1_value__local_145 = 1;

static const ProcedureCode asn1_value__local_146 = 2;

static const Criticality asn1_value__local_147 = 1;

static const ProcedureCode asn1_value__local_148 = 3;

static const Criticality asn1_value__local_149 = 1;

static const ProcedureCode asn1_value__local_150 = 4;

static const Criticality asn1_value__local_151 = 1;

static const ProcedureCode asn1_value__local_152 = 5;

static const Criticality asn1_value__local_153 = 1;

static const ProcedureCode asn1_value__local_154 = 6;

static const Criticality asn1_value__local_155 = 1;

static const RUA_ELEMENTARY_PROCEDURE asn1_value__local_143[] = {
{
  (intptr_t)asn1_type_Connect,
  0,
  0,
  (intptr_t)&asn1_value__local_144,
  (intptr_t)&asn1_value__local_145,
},
{
  (intptr_t)asn1_type_DirectTransfer,
  0,
  0,
  (intptr_t)&asn1_value__local_146,
  (intptr_t)&asn1_value__local_147,
},
{
  (intptr_t)asn1_type_Disconnect,
  0,
  0,
  (intptr_t)&asn1_value__local_148,
  (intptr_t)&asn1_value__local_149,
},
{
  (intptr_t)asn1_type_ConnectionlessTransfer,
  0,
  0,
  (intptr_t)&asn1_value__local_150,
  (intptr_t)&asn1_value__local_151,
},
{
  (intptr_t)asn1_type_ErrorIndication,
  0,
  0,
  (intptr_t)&asn1_value__local_152,
  (intptr_t)&asn1_value__local_153,
},
{
  (intptr_t)asn1_type_PrivateMessage,
  0,
  0,
  (intptr_t)&asn1_value__local_154,
  (intptr_t)&asn1_value__local_155,
},
};

static const ASN1CType asn1_constraint__local_142[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_ELEMENTARY_PROCEDURE,
  1,
  (intptr_t)asn1_value__local_143,
  6,
  1,
  0,
  0x80000000,
  3,
};

static const ASN1CType asn1_type__local_141[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_142,
};

const ASN1CType asn1_type_SuccessfulOutcome[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  3,
  sizeof(SuccessfulOutcome),

  offsetof(SuccessfulOutcome, procedureCode) | 0x0,
  (intptr_t)asn1_type__local_139,
  0,
  (intptr_t)"procedureCode",

  offsetof(SuccessfulOutcome, criticality) | 0x0,
  (intptr_t)asn1_type__local_140,
  0,
  (intptr_t)"criticality",

  offsetof(SuccessfulOutcome, value) | 0x0,
  (intptr_t)asn1_type__local_141,
  0,
  (intptr_t)"value",

  (intptr_t)"SuccessfulOutcome",
};

static const ASN1CType asn1_type__local_156[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProcedureCode,
};

static const ASN1CType asn1_type__local_157[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProcedureCode asn1_value__local_161 = 1;

static const Criticality asn1_value__local_162 = 1;

static const ProcedureCode asn1_value__local_163 = 2;

static const Criticality asn1_value__local_164 = 1;

static const ProcedureCode asn1_value__local_165 = 3;

static const Criticality asn1_value__local_166 = 1;

static const ProcedureCode asn1_value__local_167 = 4;

static const Criticality asn1_value__local_168 = 1;

static const ProcedureCode asn1_value__local_169 = 5;

static const Criticality asn1_value__local_170 = 1;

static const ProcedureCode asn1_value__local_171 = 6;

static const Criticality asn1_value__local_172 = 1;

static const RUA_ELEMENTARY_PROCEDURE asn1_value__local_160[] = {
{
  (intptr_t)asn1_type_Connect,
  0,
  0,
  (intptr_t)&asn1_value__local_161,
  (intptr_t)&asn1_value__local_162,
},
{
  (intptr_t)asn1_type_DirectTransfer,
  0,
  0,
  (intptr_t)&asn1_value__local_163,
  (intptr_t)&asn1_value__local_164,
},
{
  (intptr_t)asn1_type_Disconnect,
  0,
  0,
  (intptr_t)&asn1_value__local_165,
  (intptr_t)&asn1_value__local_166,
},
{
  (intptr_t)asn1_type_ConnectionlessTransfer,
  0,
  0,
  (intptr_t)&asn1_value__local_167,
  (intptr_t)&asn1_value__local_168,
},
{
  (intptr_t)asn1_type_ErrorIndication,
  0,
  0,
  (intptr_t)&asn1_value__local_169,
  (intptr_t)&asn1_value__local_170,
},
{
  (intptr_t)asn1_type_PrivateMessage,
  0,
  0,
  (intptr_t)&asn1_value__local_171,
  (intptr_t)&asn1_value__local_172,
},
};

static const ASN1CType asn1_constraint__local_159[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RUA_ELEMENTARY_PROCEDURE,
  2,
  (intptr_t)asn1_value__local_160,
  6,
  1,
  0,
  0x80000000,
  3,
};

static const ASN1CType asn1_type__local_158[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_159,
};

const ASN1CType asn1_type_UnsuccessfulOutcome[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100002,
  3,
  sizeof(UnsuccessfulOutcome),

  offsetof(UnsuccessfulOutcome, procedureCode) | 0x0,
  (intptr_t)asn1_type__local_156,
  0,
  (intptr_t)"procedureCode",

  offsetof(UnsuccessfulOutcome, criticality) | 0x0,
  (intptr_t)asn1_type__local_157,
  0,
  (intptr_t)"criticality",

  offsetof(UnsuccessfulOutcome, value) | 0x0,
  (intptr_t)asn1_type__local_158,
  0,
  (intptr_t)"value",

  (intptr_t)"UnsuccessfulOutcome",
};

