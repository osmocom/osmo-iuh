/* Automatically generated file - do not edit */

#include "asn1defs.h"
#include "hnbap.h"

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

const ASN1CType asn1_type_ProcedureCode[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xff,
  (intptr_t)"ProcedureCode",
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

const ASN1CType asn1_type_HNBAP_PROTOCOL_IES[] = {
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
  (intptr_t)"HNBAP-PROTOCOL-IES",
};

const ASN1CType asn1_type_HNBAP_PROTOCOL_EXTENSION[] = {
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
  (intptr_t)"HNBAP-PROTOCOL-EXTENSION",
};

const ASN1CType asn1_type_HNBAP_PRIVATE_IES[] = {
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
  (intptr_t)"HNBAP-PRIVATE-IES",
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

const ASN1CType asn1_type_ProtocolIE_Container_6[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_6),
  (intptr_t)asn1_type_ProtocolIE_Field_6,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_7[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_7),
  (intptr_t)asn1_type_ProtocolIE_Field_7,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_8[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_8),
  (intptr_t)asn1_type_ProtocolIE_Field_8,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_9[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_9),
  (intptr_t)asn1_type_ProtocolIE_Field_9,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_10[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_10),
  (intptr_t)asn1_type_ProtocolIE_Field_10,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_11[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_11),
  (intptr_t)asn1_type_ProtocolIE_Field_11,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_12[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_12),
  (intptr_t)asn1_type_ProtocolIE_Field_12,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_13[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_13),
  (intptr_t)asn1_type_ProtocolIE_Field_13,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_14[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_14),
  (intptr_t)asn1_type_ProtocolIE_Field_14,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_15[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_15),
  (intptr_t)asn1_type_ProtocolIE_Field_15,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_16[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_16),
  (intptr_t)asn1_type_ProtocolIE_Field_16,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_17[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_17),
  (intptr_t)asn1_type_ProtocolIE_Field_17,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_18[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_18),
  (intptr_t)asn1_type_ProtocolIE_Field_18,
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

static const ProtocolIE_ID asn1_value__local_7 = 3;

static const Criticality asn1_value__local_8 = 0;

static const Presence asn1_value__local_9 = 2;

static const ProtocolIE_ID asn1_value__local_10 = 8;

static const Criticality asn1_value__local_11 = 0;

static const Presence asn1_value__local_12 = 2;

static const ProtocolIE_ID asn1_value__local_13 = 9;

static const Criticality asn1_value__local_14 = 0;

static const Presence asn1_value__local_15 = 2;

static const ProtocolIE_ID asn1_value__local_16 = 11;

static const Criticality asn1_value__local_17 = 0;

static const Presence asn1_value__local_18 = 2;

static const ProtocolIE_ID asn1_value__local_19 = 6;

static const Criticality asn1_value__local_20 = 0;

static const Presence asn1_value__local_21 = 2;

static const ProtocolIE_ID asn1_value__local_22 = 7;

static const Criticality asn1_value__local_23 = 0;

static const Presence asn1_value__local_24 = 2;

static const ProtocolIE_ID asn1_value__local_25 = 10;

static const Criticality asn1_value__local_26 = 0;

static const Presence asn1_value__local_27 = 2;

static const ProtocolIE_ID asn1_value__local_28 = 15;

static const Criticality asn1_value__local_29 = 0;

static const Presence asn1_value__local_30 = 0;

static const HNBAP_PROTOCOL_IES asn1_value__local_6[] = {
{
  (intptr_t)&asn1_value__local_7,
  (intptr_t)&asn1_value__local_8,
  (intptr_t)asn1_type_HNB_Identity,
  (intptr_t)&asn1_value__local_9,
},
{
  (intptr_t)&asn1_value__local_10,
  (intptr_t)&asn1_value__local_11,
  (intptr_t)asn1_type_HNB_Location_Information,
  (intptr_t)&asn1_value__local_12,
},
{
  (intptr_t)&asn1_value__local_13,
  (intptr_t)&asn1_value__local_14,
  (intptr_t)asn1_type_PLMNidentity,
  (intptr_t)&asn1_value__local_15,
},
{
  (intptr_t)&asn1_value__local_16,
  (intptr_t)&asn1_value__local_17,
  (intptr_t)asn1_type_CellIdentity,
  (intptr_t)&asn1_value__local_18,
},
{
  (intptr_t)&asn1_value__local_19,
  (intptr_t)&asn1_value__local_20,
  (intptr_t)asn1_type_LAC,
  (intptr_t)&asn1_value__local_21,
},
{
  (intptr_t)&asn1_value__local_22,
  (intptr_t)&asn1_value__local_23,
  (intptr_t)asn1_type_RAC,
  (intptr_t)&asn1_value__local_24,
},
{
  (intptr_t)&asn1_value__local_25,
  (intptr_t)&asn1_value__local_26,
  (intptr_t)asn1_type_SAC,
  (intptr_t)&asn1_value__local_27,
},
{
  (intptr_t)&asn1_value__local_28,
  (intptr_t)&asn1_value__local_29,
  (intptr_t)asn1_type_CSG_ID,
  (intptr_t)&asn1_value__local_30,
},
};

static const ASN1CType asn1_constraint__local_5[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_6,
  8,
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

static const ASN1CType asn1_type__local_31[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_32[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_36 = 14;

static const Criticality asn1_value__local_37 = 0;

static const Presence asn1_value__local_38 = 2;

static const HNBAP_PROTOCOL_IES asn1_value__local_35[] = {
{
  (intptr_t)&asn1_value__local_36,
  (intptr_t)&asn1_value__local_37,
  (intptr_t)asn1_type_RNC_ID,
  (intptr_t)&asn1_value__local_38,
},
};

static const ASN1CType asn1_constraint__local_34[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_35,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_33[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_34,
};

const ASN1CType asn1_type_ProtocolIE_Field_2[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_2),

  offsetof(ProtocolIE_Field_2, id) | 0x0,
  (intptr_t)asn1_type__local_31,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_2, criticality) | 0x0,
  (intptr_t)asn1_type__local_32,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_2, value) | 0x0,
  (intptr_t)asn1_type__local_33,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_39[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_40[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_44 = 1;

static const Criticality asn1_value__local_45 = 1;

static const Presence asn1_value__local_46 = 2;

static const ProtocolIE_ID asn1_value__local_47 = 2;

static const Criticality asn1_value__local_48 = 1;

static const Presence asn1_value__local_49 = 0;

static const ProtocolIE_ID asn1_value__local_50 = 16;

static const Criticality asn1_value__local_51 = 0;

static const Presence asn1_value__local_52 = 1;

static const HNBAP_PROTOCOL_IES asn1_value__local_43[] = {
{
  (intptr_t)&asn1_value__local_44,
  (intptr_t)&asn1_value__local_45,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_46,
},
{
  (intptr_t)&asn1_value__local_47,
  (intptr_t)&asn1_value__local_48,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_49,
},
{
  (intptr_t)&asn1_value__local_50,
  (intptr_t)&asn1_value__local_51,
  (intptr_t)asn1_type_BackoffTimer,
  (intptr_t)&asn1_value__local_52,
},
};

static const ASN1CType asn1_constraint__local_42[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_43,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_41[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_42,
};

const ASN1CType asn1_type_ProtocolIE_Field_3[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_3),

  offsetof(ProtocolIE_Field_3, id) | 0x0,
  (intptr_t)asn1_type__local_39,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_3, criticality) | 0x0,
  (intptr_t)asn1_type__local_40,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_3, value) | 0x0,
  (intptr_t)asn1_type__local_41,
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

static const ProtocolIE_ID asn1_value__local_58 = 1;

static const Criticality asn1_value__local_59 = 1;

static const Presence asn1_value__local_60 = 2;

static const ProtocolIE_ID asn1_value__local_61 = 16;

static const Criticality asn1_value__local_62 = 0;

static const Presence asn1_value__local_63 = 1;

static const HNBAP_PROTOCOL_IES asn1_value__local_57[] = {
{
  (intptr_t)&asn1_value__local_58,
  (intptr_t)&asn1_value__local_59,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_60,
},
{
  (intptr_t)&asn1_value__local_61,
  (intptr_t)&asn1_value__local_62,
  (intptr_t)asn1_type_BackoffTimer,
  (intptr_t)&asn1_value__local_63,
},
};

static const ASN1CType asn1_constraint__local_56[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_57,
  2,
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

static const ASN1CType asn1_type__local_64[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_65[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_69 = 5;

static const Criticality asn1_value__local_70 = 0;

static const Presence asn1_value__local_71 = 2;

static const ProtocolIE_ID asn1_value__local_72 = 12;

static const Criticality asn1_value__local_73 = 1;

static const Presence asn1_value__local_74 = 2;

static const ProtocolIE_ID asn1_value__local_75 = 13;

static const Criticality asn1_value__local_76 = 0;

static const Presence asn1_value__local_77 = 2;

static const HNBAP_PROTOCOL_IES asn1_value__local_68[] = {
{
  (intptr_t)&asn1_value__local_69,
  (intptr_t)&asn1_value__local_70,
  (intptr_t)asn1_type_UE_Identity,
  (intptr_t)&asn1_value__local_71,
},
{
  (intptr_t)&asn1_value__local_72,
  (intptr_t)&asn1_value__local_73,
  (intptr_t)asn1_type_Registration_Cause,
  (intptr_t)&asn1_value__local_74,
},
{
  (intptr_t)&asn1_value__local_75,
  (intptr_t)&asn1_value__local_76,
  (intptr_t)asn1_type_UE_Capabilities,
  (intptr_t)&asn1_value__local_77,
},
};

static const ASN1CType asn1_constraint__local_67[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_68,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_66[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_67,
};

const ASN1CType asn1_type_ProtocolIE_Field_5[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_5),

  offsetof(ProtocolIE_Field_5, id) | 0x0,
  (intptr_t)asn1_type__local_64,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_5, criticality) | 0x0,
  (intptr_t)asn1_type__local_65,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_5, value) | 0x0,
  (intptr_t)asn1_type__local_66,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_78[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_79[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_83 = 5;

static const Criticality asn1_value__local_84 = 0;

static const Presence asn1_value__local_85 = 2;

static const ProtocolIE_ID asn1_value__local_86 = 4;

static const Criticality asn1_value__local_87 = 0;

static const Presence asn1_value__local_88 = 2;

static const HNBAP_PROTOCOL_IES asn1_value__local_82[] = {
{
  (intptr_t)&asn1_value__local_83,
  (intptr_t)&asn1_value__local_84,
  (intptr_t)asn1_type_UE_Identity,
  (intptr_t)&asn1_value__local_85,
},
{
  (intptr_t)&asn1_value__local_86,
  (intptr_t)&asn1_value__local_87,
  (intptr_t)asn1_type_Context_ID,
  (intptr_t)&asn1_value__local_88,
},
};

static const ASN1CType asn1_constraint__local_81[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_82,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_80[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_81,
};

const ASN1CType asn1_type_ProtocolIE_Field_6[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_6),

  offsetof(ProtocolIE_Field_6, id) | 0x0,
  (intptr_t)asn1_type__local_78,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_6, criticality) | 0x0,
  (intptr_t)asn1_type__local_79,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_6, value) | 0x0,
  (intptr_t)asn1_type__local_80,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_89[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_90[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_94 = 5;

static const Criticality asn1_value__local_95 = 0;

static const Presence asn1_value__local_96 = 2;

static const ProtocolIE_ID asn1_value__local_97 = 1;

static const Criticality asn1_value__local_98 = 1;

static const Presence asn1_value__local_99 = 2;

static const ProtocolIE_ID asn1_value__local_100 = 2;

static const Criticality asn1_value__local_101 = 1;

static const Presence asn1_value__local_102 = 0;

static const HNBAP_PROTOCOL_IES asn1_value__local_93[] = {
{
  (intptr_t)&asn1_value__local_94,
  (intptr_t)&asn1_value__local_95,
  (intptr_t)asn1_type_UE_Identity,
  (intptr_t)&asn1_value__local_96,
},
{
  (intptr_t)&asn1_value__local_97,
  (intptr_t)&asn1_value__local_98,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_99,
},
{
  (intptr_t)&asn1_value__local_100,
  (intptr_t)&asn1_value__local_101,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_102,
},
};

static const ASN1CType asn1_constraint__local_92[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_93,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_91[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_92,
};

const ASN1CType asn1_type_ProtocolIE_Field_7[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_7),

  offsetof(ProtocolIE_Field_7, id) | 0x0,
  (intptr_t)asn1_type__local_89,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_7, criticality) | 0x0,
  (intptr_t)asn1_type__local_90,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_7, value) | 0x0,
  (intptr_t)asn1_type__local_91,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_103[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_104[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_108 = 4;

static const Criticality asn1_value__local_109 = 0;

static const Presence asn1_value__local_110 = 2;

static const ProtocolIE_ID asn1_value__local_111 = 1;

static const Criticality asn1_value__local_112 = 1;

static const Presence asn1_value__local_113 = 2;

static const HNBAP_PROTOCOL_IES asn1_value__local_107[] = {
{
  (intptr_t)&asn1_value__local_108,
  (intptr_t)&asn1_value__local_109,
  (intptr_t)asn1_type_Context_ID,
  (intptr_t)&asn1_value__local_110,
},
{
  (intptr_t)&asn1_value__local_111,
  (intptr_t)&asn1_value__local_112,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_113,
},
};

static const ASN1CType asn1_constraint__local_106[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_107,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_105[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_106,
};

const ASN1CType asn1_type_ProtocolIE_Field_8[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_8),

  offsetof(ProtocolIE_Field_8, id) | 0x0,
  (intptr_t)asn1_type__local_103,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_8, criticality) | 0x0,
  (intptr_t)asn1_type__local_104,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_8, value) | 0x0,
  (intptr_t)asn1_type__local_105,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_114[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_115[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_119 = 4;

static const Criticality asn1_value__local_120 = 0;

static const Presence asn1_value__local_121 = 2;

static const ProtocolIE_ID asn1_value__local_122 = 21;

static const Criticality asn1_value__local_123 = 0;

static const Presence asn1_value__local_124 = 2;

static const HNBAP_PROTOCOL_IES asn1_value__local_118[] = {
{
  (intptr_t)&asn1_value__local_119,
  (intptr_t)&asn1_value__local_120,
  (intptr_t)asn1_type_Context_ID,
  (intptr_t)&asn1_value__local_121,
},
{
  (intptr_t)&asn1_value__local_122,
  (intptr_t)&asn1_value__local_123,
  (intptr_t)asn1_type_CSGMembershipStatus,
  (intptr_t)&asn1_value__local_124,
},
};

static const ASN1CType asn1_constraint__local_117[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_118,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_116[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_117,
};

const ASN1CType asn1_type_ProtocolIE_Field_9[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_9),

  offsetof(ProtocolIE_Field_9, id) | 0x0,
  (intptr_t)asn1_type__local_114,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_9, criticality) | 0x0,
  (intptr_t)asn1_type__local_115,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_9, value) | 0x0,
  (intptr_t)asn1_type__local_116,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_125[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_126[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_130 = 4;

static const Criticality asn1_value__local_131 = 0;

static const Presence asn1_value__local_132 = 2;

static const ProtocolIE_ID asn1_value__local_133 = 22;

static const Criticality asn1_value__local_134 = 0;

static const Presence asn1_value__local_135 = 2;

static const ProtocolIE_ID asn1_value__local_136 = 26;

static const Criticality asn1_value__local_137 = 0;

static const Presence asn1_value__local_138 = 2;

static const HNBAP_PROTOCOL_IES asn1_value__local_129[] = {
{
  (intptr_t)&asn1_value__local_130,
  (intptr_t)&asn1_value__local_131,
  (intptr_t)asn1_type_Context_ID,
  (intptr_t)&asn1_value__local_132,
},
{
  (intptr_t)&asn1_value__local_133,
  (intptr_t)&asn1_value__local_134,
  (intptr_t)asn1_type_RABList,
  (intptr_t)&asn1_value__local_135,
},
{
  (intptr_t)&asn1_value__local_136,
  (intptr_t)&asn1_value__local_137,
  (intptr_t)asn1_type_Update_cause,
  (intptr_t)&asn1_value__local_138,
},
};

static const ASN1CType asn1_constraint__local_128[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_129,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_127[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_128,
};

const ASN1CType asn1_type_ProtocolIE_Field_10[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_10),

  offsetof(ProtocolIE_Field_10, id) | 0x0,
  (intptr_t)asn1_type__local_125,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_10, criticality) | 0x0,
  (intptr_t)asn1_type__local_126,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_10, value) | 0x0,
  (intptr_t)asn1_type__local_127,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_139[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_140[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_144 = 4;

static const Criticality asn1_value__local_145 = 0;

static const Presence asn1_value__local_146 = 2;

static const HNBAP_PROTOCOL_IES asn1_value__local_143[] = {
{
  (intptr_t)&asn1_value__local_144,
  (intptr_t)&asn1_value__local_145,
  (intptr_t)asn1_type_Context_ID,
  (intptr_t)&asn1_value__local_146,
},
};

static const ASN1CType asn1_constraint__local_142[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_143,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_141[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_142,
};

const ASN1CType asn1_type_ProtocolIE_Field_11[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_11),

  offsetof(ProtocolIE_Field_11, id) | 0x0,
  (intptr_t)asn1_type__local_139,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_11, criticality) | 0x0,
  (intptr_t)asn1_type__local_140,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_11, value) | 0x0,
  (intptr_t)asn1_type__local_141,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_147[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_148[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_152 = 4;

static const Criticality asn1_value__local_153 = 0;

static const Presence asn1_value__local_154 = 2;

static const ProtocolIE_ID asn1_value__local_155 = 1;

static const Criticality asn1_value__local_156 = 1;

static const Presence asn1_value__local_157 = 2;

static const ProtocolIE_ID asn1_value__local_158 = 2;

static const Criticality asn1_value__local_159 = 1;

static const Presence asn1_value__local_160 = 0;

static const HNBAP_PROTOCOL_IES asn1_value__local_151[] = {
{
  (intptr_t)&asn1_value__local_152,
  (intptr_t)&asn1_value__local_153,
  (intptr_t)asn1_type_Context_ID,
  (intptr_t)&asn1_value__local_154,
},
{
  (intptr_t)&asn1_value__local_155,
  (intptr_t)&asn1_value__local_156,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_157,
},
{
  (intptr_t)&asn1_value__local_158,
  (intptr_t)&asn1_value__local_159,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_160,
},
};

static const ASN1CType asn1_constraint__local_150[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_151,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_149[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_150,
};

const ASN1CType asn1_type_ProtocolIE_Field_12[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_12),

  offsetof(ProtocolIE_Field_12, id) | 0x0,
  (intptr_t)asn1_type__local_147,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_12, criticality) | 0x0,
  (intptr_t)asn1_type__local_148,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_12, value) | 0x0,
  (intptr_t)asn1_type__local_149,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_161[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_162[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_166 = 28;

static const Criticality asn1_value__local_167 = 0;

static const Presence asn1_value__local_168 = 2;

static const HNBAP_PROTOCOL_IES asn1_value__local_165[] = {
{
  (intptr_t)&asn1_value__local_166,
  (intptr_t)&asn1_value__local_167,
  (intptr_t)asn1_type_NeighbourInfoRequestList,
  (intptr_t)&asn1_value__local_168,
},
};

static const ASN1CType asn1_constraint__local_164[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_165,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_163[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_164,
};

const ASN1CType asn1_type_ProtocolIE_Field_13[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_13),

  offsetof(ProtocolIE_Field_13, id) | 0x0,
  (intptr_t)asn1_type__local_161,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_13, criticality) | 0x0,
  (intptr_t)asn1_type__local_162,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_13, value) | 0x0,
  (intptr_t)asn1_type__local_163,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_169[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_170[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_174 = 27;

static const Criticality asn1_value__local_175 = 0;

static const Presence asn1_value__local_176 = 2;

static const HNBAP_PROTOCOL_IES asn1_value__local_173[] = {
{
  (intptr_t)&asn1_value__local_174,
  (intptr_t)&asn1_value__local_175,
  (intptr_t)asn1_type_NeighbourInfoList,
  (intptr_t)&asn1_value__local_176,
},
};

static const ASN1CType asn1_constraint__local_172[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_173,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_171[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_172,
};

const ASN1CType asn1_type_ProtocolIE_Field_14[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_14),

  offsetof(ProtocolIE_Field_14, id) | 0x0,
  (intptr_t)asn1_type__local_169,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_14, criticality) | 0x0,
  (intptr_t)asn1_type__local_170,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_14, value) | 0x0,
  (intptr_t)asn1_type__local_171,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_177[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_178[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_182 = 4;

static const Criticality asn1_value__local_183 = 1;

static const Presence asn1_value__local_184 = 2;

static const HNBAP_PROTOCOL_IES asn1_value__local_181[] = {
{
  (intptr_t)&asn1_value__local_182,
  (intptr_t)&asn1_value__local_183,
  (intptr_t)asn1_type_Context_ID,
  (intptr_t)&asn1_value__local_184,
},
};

static const ASN1CType asn1_constraint__local_180[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_181,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_179[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_180,
};

const ASN1CType asn1_type_ProtocolIE_Field_15[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_15),

  offsetof(ProtocolIE_Field_15, id) | 0x0,
  (intptr_t)asn1_type__local_177,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_15, criticality) | 0x0,
  (intptr_t)asn1_type__local_178,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_15, value) | 0x0,
  (intptr_t)asn1_type__local_179,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_185[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_186[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_190 = 1;

static const Criticality asn1_value__local_191 = 1;

static const Presence asn1_value__local_192 = 2;

static const ProtocolIE_ID asn1_value__local_193 = 2;

static const Criticality asn1_value__local_194 = 1;

static const Presence asn1_value__local_195 = 0;

static const HNBAP_PROTOCOL_IES asn1_value__local_189[] = {
{
  (intptr_t)&asn1_value__local_190,
  (intptr_t)&asn1_value__local_191,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_192,
},
{
  (intptr_t)&asn1_value__local_193,
  (intptr_t)&asn1_value__local_194,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_195,
},
};

static const ASN1CType asn1_constraint__local_188[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_189,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_187[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_188,
};

const ASN1CType asn1_type_ProtocolIE_Field_16[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_16),

  offsetof(ProtocolIE_Field_16, id) | 0x0,
  (intptr_t)asn1_type__local_185,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_16, criticality) | 0x0,
  (intptr_t)asn1_type__local_186,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_16, value) | 0x0,
  (intptr_t)asn1_type__local_187,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_196[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_197[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_201 = 49;

static const Criticality asn1_value__local_202 = 0;

static const Presence asn1_value__local_203 = 2;

static const HNBAP_PROTOCOL_IES asn1_value__local_200[] = {
{
  (intptr_t)&asn1_value__local_201,
  (intptr_t)&asn1_value__local_202,
  (intptr_t)asn1_type_U_RNTI,
  (intptr_t)&asn1_value__local_203,
},
};

static const ASN1CType asn1_constraint__local_199[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_200,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_198[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_199,
};

const ASN1CType asn1_type_ProtocolIE_Field_17[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_17),

  offsetof(ProtocolIE_Field_17, id) | 0x0,
  (intptr_t)asn1_type__local_196,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_17, criticality) | 0x0,
  (intptr_t)asn1_type__local_197,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_17, value) | 0x0,
  (intptr_t)asn1_type__local_198,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_204[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_205[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_209 = 51;

static const Criticality asn1_value__local_210 = 0;

static const Presence asn1_value__local_211 = 2;

static const HNBAP_PROTOCOL_IES asn1_value__local_208[] = {
{
  (intptr_t)&asn1_value__local_209,
  (intptr_t)&asn1_value__local_210,
  (intptr_t)asn1_type_HNB_GWResponse,
  (intptr_t)&asn1_value__local_211,
},
};

static const ASN1CType asn1_constraint__local_207[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_208,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_206[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_207,
};

const ASN1CType asn1_type_ProtocolIE_Field_18[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_18),

  offsetof(ProtocolIE_Field_18, id) | 0x0,
  (intptr_t)asn1_type__local_204,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_18, criticality) | 0x0,
  (intptr_t)asn1_type__local_205,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_18, value) | 0x0,
  (intptr_t)asn1_type__local_206,
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
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_3),
  (intptr_t)asn1_type_ProtocolExtensionField_3,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_4[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_4),
  (intptr_t)asn1_type_ProtocolExtensionField_4,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_5[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_5),
  (intptr_t)asn1_type_ProtocolExtensionField_5,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_6[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_6),
  (intptr_t)asn1_type_ProtocolExtensionField_6,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_7[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_7),
  (intptr_t)asn1_type_ProtocolExtensionField_7,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_8[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_8),
  (intptr_t)asn1_type_ProtocolExtensionField_8,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_9[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_9),
  (intptr_t)asn1_type_ProtocolExtensionField_9,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_10[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_10),
  (intptr_t)asn1_type_ProtocolExtensionField_10,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_11[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_11),
  (intptr_t)asn1_type_ProtocolExtensionField_11,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_12[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_12),
  (intptr_t)asn1_type_ProtocolExtensionField_12,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_13[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_13),
  (intptr_t)asn1_type_ProtocolExtensionField_13,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_14[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_14),
  (intptr_t)asn1_type_ProtocolExtensionField_14,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_15[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_15),
  (intptr_t)asn1_type_ProtocolExtensionField_15,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_16[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_16),
  (intptr_t)asn1_type_ProtocolExtensionField_16,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_17[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_17),
  (intptr_t)asn1_type_ProtocolExtensionField_17,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_18[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_18),
  (intptr_t)asn1_type_ProtocolExtensionField_18,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_19[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_19),
  (intptr_t)asn1_type_ProtocolExtensionField_19,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_20[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_20),
  (intptr_t)asn1_type_ProtocolExtensionField_20,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_21[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_21),
  (intptr_t)asn1_type_ProtocolExtensionField_21,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_22[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_22),
  (intptr_t)asn1_type_ProtocolExtensionField_22,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_23[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_23),
  (intptr_t)asn1_type_ProtocolExtensionField_23,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_24[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_24),
  (intptr_t)asn1_type_ProtocolExtensionField_24,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_25[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_25),
  (intptr_t)asn1_type_ProtocolExtensionField_25,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_26[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_26),
  (intptr_t)asn1_type_ProtocolExtensionField_26,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_27[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_27),
  (intptr_t)asn1_type_ProtocolExtensionField_27,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_28[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_28),
  (intptr_t)asn1_type_ProtocolExtensionField_28,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_29[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_29),
  (intptr_t)asn1_type_ProtocolExtensionField_29,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_30[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_30),
  (intptr_t)asn1_type_ProtocolExtensionField_30,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_31[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_31),
  (intptr_t)asn1_type_ProtocolExtensionField_31,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_32[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_32),
  (intptr_t)asn1_type_ProtocolExtensionField_32,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_33[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_33),
  (intptr_t)asn1_type_ProtocolExtensionField_33,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_34[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_34),
  (intptr_t)asn1_type_ProtocolExtensionField_34,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_35[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_35),
  (intptr_t)asn1_type_ProtocolExtensionField_35,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_36[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_36),
  (intptr_t)asn1_type_ProtocolExtensionField_36,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_37[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_37),
  (intptr_t)asn1_type_ProtocolExtensionField_37,
  0,
};

static const ASN1CType asn1_type__local_212[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_213[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_215[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_214[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_215,
};

const ASN1CType asn1_type_ProtocolExtensionField_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_1),

  offsetof(ProtocolExtensionField_1, id) | 0x0,
  (intptr_t)asn1_type__local_212,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_1, criticality) | 0x0,
  (intptr_t)asn1_type__local_213,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_1, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_214,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_217[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_218[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_220[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_219[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_220,
};

const ASN1CType asn1_type_ProtocolExtensionField_2[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_2),

  offsetof(ProtocolExtensionField_2, id) | 0x0,
  (intptr_t)asn1_type__local_217,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_2, criticality) | 0x0,
  (intptr_t)asn1_type__local_218,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_2, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_219,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_222[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_223[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_225[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_224[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_225,
};

const ASN1CType asn1_type_ProtocolExtensionField_3[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_3),

  offsetof(ProtocolExtensionField_3, id) | 0x0,
  (intptr_t)asn1_type__local_222,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_3, criticality) | 0x0,
  (intptr_t)asn1_type__local_223,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_3, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_224,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_227[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_228[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_230[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_229[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_230,
};

const ASN1CType asn1_type_ProtocolExtensionField_4[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_4),

  offsetof(ProtocolExtensionField_4, id) | 0x0,
  (intptr_t)asn1_type__local_227,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_4, criticality) | 0x0,
  (intptr_t)asn1_type__local_228,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_4, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_229,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_232[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_233[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_235[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_234[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_235,
};

const ASN1CType asn1_type_ProtocolExtensionField_5[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_5),

  offsetof(ProtocolExtensionField_5, id) | 0x0,
  (intptr_t)asn1_type__local_232,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_5, criticality) | 0x0,
  (intptr_t)asn1_type__local_233,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_5, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_234,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_237[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_238[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_240[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_239[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_240,
};

const ASN1CType asn1_type_ProtocolExtensionField_6[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_6),

  offsetof(ProtocolExtensionField_6, id) | 0x0,
  (intptr_t)asn1_type__local_237,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_6, criticality) | 0x0,
  (intptr_t)asn1_type__local_238,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_6, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_239,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_242[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_243[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_245[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_244[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_245,
};

const ASN1CType asn1_type_ProtocolExtensionField_7[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_7),

  offsetof(ProtocolExtensionField_7, id) | 0x0,
  (intptr_t)asn1_type__local_242,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_7, criticality) | 0x0,
  (intptr_t)asn1_type__local_243,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_7, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_244,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_247[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_248[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_252 = 43;

static const Criticality asn1_value__local_253 = 1;

static const Presence asn1_value__local_254 = 0;

static const ProtocolIE_ID asn1_value__local_255 = 52;

static const Criticality asn1_value__local_256 = 1;

static const Presence asn1_value__local_257 = 0;

static const HNBAP_PROTOCOL_EXTENSION asn1_value__local_251[] = {
{
  (intptr_t)&asn1_value__local_252,
  (intptr_t)&asn1_value__local_253,
  (intptr_t)asn1_type_S_RNTIPrefix,
  (intptr_t)&asn1_value__local_254,
},
{
  (intptr_t)&asn1_value__local_255,
  (intptr_t)&asn1_value__local_256,
  (intptr_t)asn1_type_URAIdentityList,
  (intptr_t)&asn1_value__local_257,
},
};

static const ASN1CType asn1_constraint__local_250[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_251,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_249[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_250,
};

const ASN1CType asn1_type_ProtocolExtensionField_8[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_8),

  offsetof(ProtocolExtensionField_8, id) | 0x0,
  (intptr_t)asn1_type__local_247,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_8, criticality) | 0x0,
  (intptr_t)asn1_type__local_248,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_8, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_249,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_258[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_259[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_261[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_260[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_261,
};

const ASN1CType asn1_type_ProtocolExtensionField_9[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_9),

  offsetof(ProtocolExtensionField_9, id) | 0x0,
  (intptr_t)asn1_type__local_258,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_9, criticality) | 0x0,
  (intptr_t)asn1_type__local_259,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_9, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_260,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_263[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_264[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_268 = 17;

static const Criticality asn1_value__local_269 = 0;

static const Presence asn1_value__local_270 = 0;

static const HNBAP_PROTOCOL_EXTENSION asn1_value__local_267[] = {
{
  (intptr_t)&asn1_value__local_268,
  (intptr_t)&asn1_value__local_269,
  (intptr_t)asn1_type_IP_Address,
  (intptr_t)&asn1_value__local_270,
},
};

static const ASN1CType asn1_constraint__local_266[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_267,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_265[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_266,
};

const ASN1CType asn1_type_ProtocolExtensionField_10[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_10),

  offsetof(ProtocolExtensionField_10, id) | 0x0,
  (intptr_t)asn1_type__local_263,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_10, criticality) | 0x0,
  (intptr_t)asn1_type__local_264,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_10, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_265,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_271[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_272[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_274[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_273[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_274,
};

const ASN1CType asn1_type_ProtocolExtensionField_11[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_11),

  offsetof(ProtocolExtensionField_11, id) | 0x0,
  (intptr_t)asn1_type__local_271,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_11, criticality) | 0x0,
  (intptr_t)asn1_type__local_272,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_11, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_273,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_276[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_277[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_279[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_278[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_279,
};

const ASN1CType asn1_type_ProtocolExtensionField_12[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_12),

  offsetof(ProtocolExtensionField_12, id) | 0x0,
  (intptr_t)asn1_type__local_276,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_12, criticality) | 0x0,
  (intptr_t)asn1_type__local_277,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_12, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_278,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_281[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_282[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_284[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_283[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_284,
};

const ASN1CType asn1_type_ProtocolExtensionField_13[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_13),

  offsetof(ProtocolExtensionField_13, id) | 0x0,
  (intptr_t)asn1_type__local_281,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_13, criticality) | 0x0,
  (intptr_t)asn1_type__local_282,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_13, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_283,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_286[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_287[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_289[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_288[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_289,
};

const ASN1CType asn1_type_ProtocolExtensionField_14[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_14),

  offsetof(ProtocolExtensionField_14, id) | 0x0,
  (intptr_t)asn1_type__local_286,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_14, criticality) | 0x0,
  (intptr_t)asn1_type__local_287,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_14, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_288,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_291[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_292[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_294[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_293[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_294,
};

const ASN1CType asn1_type_ProtocolExtensionField_15[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_15),

  offsetof(ProtocolExtensionField_15, id) | 0x0,
  (intptr_t)asn1_type__local_291,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_15, criticality) | 0x0,
  (intptr_t)asn1_type__local_292,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_15, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_293,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_296[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_297[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_299[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_298[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_299,
};

const ASN1CType asn1_type_ProtocolExtensionField_16[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_16),

  offsetof(ProtocolExtensionField_16, id) | 0x0,
  (intptr_t)asn1_type__local_296,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_16, criticality) | 0x0,
  (intptr_t)asn1_type__local_297,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_16, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_298,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_301[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_302[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_304[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_303[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_304,
};

const ASN1CType asn1_type_ProtocolExtensionField_17[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_17),

  offsetof(ProtocolExtensionField_17, id) | 0x0,
  (intptr_t)asn1_type__local_301,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_17, criticality) | 0x0,
  (intptr_t)asn1_type__local_302,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_17, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_303,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_306[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_307[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_309[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_308[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_309,
};

const ASN1CType asn1_type_ProtocolExtensionField_18[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_18),

  offsetof(ProtocolExtensionField_18, id) | 0x0,
  (intptr_t)asn1_type__local_306,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_18, criticality) | 0x0,
  (intptr_t)asn1_type__local_307,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_18, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_308,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_311[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_312[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_314[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_313[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_314,
};

const ASN1CType asn1_type_ProtocolExtensionField_19[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_19),

  offsetof(ProtocolExtensionField_19, id) | 0x0,
  (intptr_t)asn1_type__local_311,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_19, criticality) | 0x0,
  (intptr_t)asn1_type__local_312,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_19, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_313,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_316[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_317[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_321 = 20;

static const Criticality asn1_value__local_322 = 1;

static const Presence asn1_value__local_323 = 0;

static const ProtocolIE_ID asn1_value__local_324 = 18;

static const Criticality asn1_value__local_325 = 0;

static const Presence asn1_value__local_326 = 0;

static const ProtocolIE_ID asn1_value__local_327 = 30;

static const Criticality asn1_value__local_328 = 1;

static const Presence asn1_value__local_329 = 0;

static const ProtocolIE_ID asn1_value__local_330 = 29;

static const Criticality asn1_value__local_331 = 1;

static const Presence asn1_value__local_332 = 0;

static const ProtocolIE_ID asn1_value__local_333 = 41;

static const Criticality asn1_value__local_334 = 1;

static const Presence asn1_value__local_335 = 0;

static const ProtocolIE_ID asn1_value__local_336 = 42;

static const Criticality asn1_value__local_337 = 1;

static const Presence asn1_value__local_338 = 0;

static const ProtocolIE_ID asn1_value__local_339 = 47;

static const Criticality asn1_value__local_340 = 1;

static const Presence asn1_value__local_341 = 0;

static const ProtocolIE_ID asn1_value__local_342 = 52;

static const Criticality asn1_value__local_343 = 1;

static const Presence asn1_value__local_344 = 0;

static const ProtocolIE_ID asn1_value__local_345 = 46;

static const Criticality asn1_value__local_346 = 1;

static const Presence asn1_value__local_347 = 0;

static const HNBAP_PROTOCOL_EXTENSION asn1_value__local_320[] = {
{
  (intptr_t)&asn1_value__local_321,
  (intptr_t)&asn1_value__local_322,
  (intptr_t)asn1_type_SAC,
  (intptr_t)&asn1_value__local_323,
},
{
  (intptr_t)&asn1_value__local_324,
  (intptr_t)&asn1_value__local_325,
  (intptr_t)asn1_type_HNB_Cell_Access_Mode,
  (intptr_t)&asn1_value__local_326,
},
{
  (intptr_t)&asn1_value__local_327,
  (intptr_t)&asn1_value__local_328,
  (intptr_t)asn1_type_PSC,
  (intptr_t)&asn1_value__local_329,
},
{
  (intptr_t)&asn1_value__local_330,
  (intptr_t)&asn1_value__local_331,
  (intptr_t)asn1_type_IP_Address,
  (intptr_t)&asn1_value__local_332,
},
{
  (intptr_t)&asn1_value__local_333,
  (intptr_t)&asn1_value__local_334,
  (intptr_t)asn1_type_Tunnel_Information,
  (intptr_t)&asn1_value__local_335,
},
{
  (intptr_t)&asn1_value__local_336,
  (intptr_t)&asn1_value__local_337,
  (intptr_t)asn1_type_CELL_FACHMobilitySupport,
  (intptr_t)&asn1_value__local_338,
},
{
  (intptr_t)&asn1_value__local_339,
  (intptr_t)&asn1_value__local_340,
  (intptr_t)asn1_type_NeighbourCellIdentityList,
  (intptr_t)&asn1_value__local_341,
},
{
  (intptr_t)&asn1_value__local_342,
  (intptr_t)&asn1_value__local_343,
  (intptr_t)asn1_type_URAIdentityList,
  (intptr_t)&asn1_value__local_344,
},
{
  (intptr_t)&asn1_value__local_345,
  (intptr_t)&asn1_value__local_346,
  (intptr_t)asn1_type_HNBCapacity,
  (intptr_t)&asn1_value__local_347,
},
};

static const ASN1CType asn1_constraint__local_319[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_320,
  9,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_318[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_319,
};

const ASN1CType asn1_type_ProtocolExtensionField_20[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_20),

  offsetof(ProtocolExtensionField_20, id) | 0x0,
  (intptr_t)asn1_type__local_316,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_20, criticality) | 0x0,
  (intptr_t)asn1_type__local_317,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_20, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_318,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_348[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_349[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_353 = 19;

static const Criticality asn1_value__local_354 = 1;

static const Presence asn1_value__local_355 = 0;

static const ProtocolIE_ID asn1_value__local_356 = 29;

static const Criticality asn1_value__local_357 = 1;

static const Presence asn1_value__local_358 = 0;

static const ProtocolIE_ID asn1_value__local_359 = 43;

static const Criticality asn1_value__local_360 = 1;

static const Presence asn1_value__local_361 = 0;

static const HNBAP_PROTOCOL_EXTENSION asn1_value__local_352[] = {
{
  (intptr_t)&asn1_value__local_353,
  (intptr_t)&asn1_value__local_354,
  (intptr_t)asn1_type_MuxPortNumber,
  (intptr_t)&asn1_value__local_355,
},
{
  (intptr_t)&asn1_value__local_356,
  (intptr_t)&asn1_value__local_357,
  (intptr_t)asn1_type_IP_Address,
  (intptr_t)&asn1_value__local_358,
},
{
  (intptr_t)&asn1_value__local_359,
  (intptr_t)&asn1_value__local_360,
  (intptr_t)asn1_type_S_RNTIPrefix,
  (intptr_t)&asn1_value__local_361,
},
};

static const ASN1CType asn1_constraint__local_351[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_352,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_350[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_351,
};

const ASN1CType asn1_type_ProtocolExtensionField_21[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_21),

  offsetof(ProtocolExtensionField_21, id) | 0x0,
  (intptr_t)asn1_type__local_348,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_21, criticality) | 0x0,
  (intptr_t)asn1_type__local_349,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_21, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_350,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_362[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_363[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_365[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_364[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_365,
};

const ASN1CType asn1_type_ProtocolExtensionField_22[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_22),

  offsetof(ProtocolExtensionField_22, id) | 0x0,
  (intptr_t)asn1_type__local_362,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_22, criticality) | 0x0,
  (intptr_t)asn1_type__local_363,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_22, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_364,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_367[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_368[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_370[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_369[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_370,
};

const ASN1CType asn1_type_ProtocolExtensionField_23[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_23),

  offsetof(ProtocolExtensionField_23, id) | 0x0,
  (intptr_t)asn1_type__local_367,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_23, criticality) | 0x0,
  (intptr_t)asn1_type__local_368,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_23, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_369,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_372[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_373[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_375[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_374[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_375,
};

const ASN1CType asn1_type_ProtocolExtensionField_24[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_24),

  offsetof(ProtocolExtensionField_24, id) | 0x0,
  (intptr_t)asn1_type__local_372,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_24, criticality) | 0x0,
  (intptr_t)asn1_type__local_373,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_24, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_374,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_377[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_378[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_382 = 21;

static const Criticality asn1_value__local_383 = 0;

static const Presence asn1_value__local_384 = 0;

static const HNBAP_PROTOCOL_EXTENSION asn1_value__local_381[] = {
{
  (intptr_t)&asn1_value__local_382,
  (intptr_t)&asn1_value__local_383,
  (intptr_t)asn1_type_CSGMembershipStatus,
  (intptr_t)&asn1_value__local_384,
},
};

static const ASN1CType asn1_constraint__local_380[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_381,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_379[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_380,
};

const ASN1CType asn1_type_ProtocolExtensionField_25[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_25),

  offsetof(ProtocolExtensionField_25, id) | 0x0,
  (intptr_t)asn1_type__local_377,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_25, criticality) | 0x0,
  (intptr_t)asn1_type__local_378,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_25, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_379,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_385[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_386[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_388[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_387[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_388,
};

const ASN1CType asn1_type_ProtocolExtensionField_26[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_26),

  offsetof(ProtocolExtensionField_26, id) | 0x0,
  (intptr_t)asn1_type__local_385,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_26, criticality) | 0x0,
  (intptr_t)asn1_type__local_386,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_26, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_387,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_390[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_391[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_393[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_392[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_393,
};

const ASN1CType asn1_type_ProtocolExtensionField_27[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_27),

  offsetof(ProtocolExtensionField_27, id) | 0x0,
  (intptr_t)asn1_type__local_390,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_27, criticality) | 0x0,
  (intptr_t)asn1_type__local_391,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_27, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_392,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_395[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_396[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_398[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_397[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_398,
};

const ASN1CType asn1_type_ProtocolExtensionField_28[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_28),

  offsetof(ProtocolExtensionField_28, id) | 0x0,
  (intptr_t)asn1_type__local_395,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_28, criticality) | 0x0,
  (intptr_t)asn1_type__local_396,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_28, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_397,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_400[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_401[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_403[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_402[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_403,
};

const ASN1CType asn1_type_ProtocolExtensionField_29[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_29),

  offsetof(ProtocolExtensionField_29, id) | 0x0,
  (intptr_t)asn1_type__local_400,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_29, criticality) | 0x0,
  (intptr_t)asn1_type__local_401,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_29, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_402,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_405[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_406[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_408[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_407[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_408,
};

const ASN1CType asn1_type_ProtocolExtensionField_30[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_30),

  offsetof(ProtocolExtensionField_30, id) | 0x0,
  (intptr_t)asn1_type__local_405,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_30, criticality) | 0x0,
  (intptr_t)asn1_type__local_406,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_30, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_407,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_410[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_411[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_413[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_412[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_413,
};

const ASN1CType asn1_type_ProtocolExtensionField_31[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_31),

  offsetof(ProtocolExtensionField_31, id) | 0x0,
  (intptr_t)asn1_type__local_410,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_31, criticality) | 0x0,
  (intptr_t)asn1_type__local_411,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_31, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_412,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_415[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_416[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_418[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_417[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_418,
};

const ASN1CType asn1_type_ProtocolExtensionField_32[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_32),

  offsetof(ProtocolExtensionField_32, id) | 0x0,
  (intptr_t)asn1_type__local_415,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_32, criticality) | 0x0,
  (intptr_t)asn1_type__local_416,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_32, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_417,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_420[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_421[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_425 = 48;

static const Criticality asn1_value__local_426 = 1;

static const Presence asn1_value__local_427 = 0;

static const HNBAP_PROTOCOL_EXTENSION asn1_value__local_424[] = {
{
  (intptr_t)&asn1_value__local_425,
  (intptr_t)&asn1_value__local_426,
  (intptr_t)asn1_type_AdditionalNeighbourInfoList,
  (intptr_t)&asn1_value__local_427,
},
};

static const ASN1CType asn1_constraint__local_423[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_424,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_422[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_423,
};

const ASN1CType asn1_type_ProtocolExtensionField_33[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_33),

  offsetof(ProtocolExtensionField_33, id) | 0x0,
  (intptr_t)asn1_type__local_420,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_33, criticality) | 0x0,
  (intptr_t)asn1_type__local_421,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_33, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_422,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_428[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_429[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_431[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_430[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_431,
};

const ASN1CType asn1_type_ProtocolExtensionField_34[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_34),

  offsetof(ProtocolExtensionField_34, id) | 0x0,
  (intptr_t)asn1_type__local_428,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_34, criticality) | 0x0,
  (intptr_t)asn1_type__local_429,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_34, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_430,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_433[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_434[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_436[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_435[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_436,
};

const ASN1CType asn1_type_ProtocolExtensionField_35[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_35),

  offsetof(ProtocolExtensionField_35, id) | 0x0,
  (intptr_t)asn1_type__local_433,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_35, criticality) | 0x0,
  (intptr_t)asn1_type__local_434,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_35, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_435,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_438[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_439[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_441[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_440[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_441,
};

const ASN1CType asn1_type_ProtocolExtensionField_36[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_36),

  offsetof(ProtocolExtensionField_36, id) | 0x0,
  (intptr_t)asn1_type__local_438,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_36, criticality) | 0x0,
  (intptr_t)asn1_type__local_439,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_36, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_440,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_443[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_444[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_446[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_445[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_446,
};

const ASN1CType asn1_type_ProtocolExtensionField_37[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_37),

  offsetof(ProtocolExtensionField_37, id) | 0x0,
  (intptr_t)asn1_type__local_443,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_37, criticality) | 0x0,
  (intptr_t)asn1_type__local_444,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_37, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_445,
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

static const ASN1CType asn1_type__local_448[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100000,
  (intptr_t)asn1_type_PrivateIE_ID,
};

static const ASN1CType asn1_type__local_449[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_451[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_PRIVATE_IES,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_450[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_451,
};

const ASN1CType asn1_type_PrivateIE_Field_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(PrivateIE_Field_1),

  offsetof(PrivateIE_Field_1, id) | 0x0,
  (intptr_t)asn1_type__local_448,
  0,
  (intptr_t)"id",

  offsetof(PrivateIE_Field_1, criticality) | 0x0,
  (intptr_t)asn1_type__local_449,
  0,
  (intptr_t)"criticality",

  offsetof(PrivateIE_Field_1, value) | 0x0,
  (intptr_t)asn1_type__local_450,
  0,
  (intptr_t)"value",

};

const ASN1CType asn1_type_Access_stratum_release_indicator[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  6,
  0,
  (intptr_t)"r99",
  (intptr_t)"rel-4",
  (intptr_t)"rel-5",
  (intptr_t)"rel-6",
  (intptr_t)"rel-7",
  (intptr_t)"rel-8-and-beyond",
  (intptr_t)"Access-stratum-release-indicator",
};

const ASN1CType asn1_type_AccessResult[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"allowed",
  (intptr_t)"notAllowed",
  (intptr_t)"AccessResult",
};

static const ASN1CType asn1_type__local_453[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x0,
  0x7fff,
};

const ASN1CType asn1_type_AltitudeAndDirection[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  sizeof(AltitudeAndDirection),

  offsetof(AltitudeAndDirection, directionOfAltitude) | 0x0,
  (intptr_t)asn1_type_AltitudeAndDirection_1,
  0,
  (intptr_t)"directionOfAltitude",

  offsetof(AltitudeAndDirection, altitude) | 0x0,
  (intptr_t)asn1_type__local_453,
  0,
  (intptr_t)"altitude",

  (intptr_t)"AltitudeAndDirection",
};

const ASN1CType asn1_type_AltitudeAndDirection_1[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  2,
  (intptr_t)"height",
  (intptr_t)"depth",
};

const ASN1CType asn1_type_BackoffTimer[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xe10,
  (intptr_t)"BackoffTimer",
};

const ASN1CType asn1_type_BindingID[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x7800000 | 0x100001,
  0x1,
  0x4,
  (intptr_t)"BindingID",
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
  14,
  2,
  (intptr_t)"overload",
  (intptr_t)"unauthorised-Location",
  (intptr_t)"unauthorised-HNB",
  (intptr_t)"hNB-parameter-mismatch",
  (intptr_t)"invalid-UE-identity",
  (intptr_t)"uE-not-allowed-on-this-HNB",
  (intptr_t)"uE-unauthorised",
  (intptr_t)"connection-with-UE-lost",
  (intptr_t)"ue-RRC-release",
  (intptr_t)"hNB-not-registered",
  (intptr_t)"unspecified",
  (intptr_t)"normal",
  (intptr_t)"uE-relocated",
  (intptr_t)"ue-registered-in-another-HNB",
  (intptr_t)"no-neighbour-information-available",
  (intptr_t)"iurh-connection-to-that-neighbour-not-Allowed",
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

const ASN1CType asn1_type_CellIdentity[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x3,
  0x1c,
  0x1c,
  (intptr_t)"CellIdentity",
};

const ASN1CType asn1_type_CELL_FACHMobilitySupport[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"supported",
  (intptr_t)"CELL-FACHMobilitySupport",
};

const ASN1CType asn1_type_Context_ID[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x3,
  0x18,
  0x18,
  (intptr_t)"Context-ID",
};

static const ASN1CType asn1_type__local_454[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProcedureCode,
};

static const ASN1CType asn1_type__local_455[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_Criticality,
};

const ASN1CType asn1_type_CriticalityDiagnostics[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  5,
  sizeof(CriticalityDiagnostics),

  offsetof(CriticalityDiagnostics, procedureCode) | 0x8000000,
  (intptr_t)asn1_type__local_454,
  offsetof(CriticalityDiagnostics, procedureCode_option),
  (intptr_t)"procedureCode",

  offsetof(CriticalityDiagnostics, triggeringMessage) | 0x8000000,
  (intptr_t)asn1_type_TriggeringMessage,
  offsetof(CriticalityDiagnostics, triggeringMessage_option),
  (intptr_t)"triggeringMessage",

  offsetof(CriticalityDiagnostics, procedureCriticality) | 0x8000000,
  (intptr_t)asn1_type__local_455,
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

static const ASN1CType asn1_type__local_456[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_type__local_457[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

const ASN1CType asn1_type_CriticalityDiagnostics_IE_List_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  4,
  sizeof(CriticalityDiagnostics_IE_List_1),

  offsetof(CriticalityDiagnostics_IE_List_1, iECriticality) | 0x0,
  (intptr_t)asn1_type__local_456,
  0,
  (intptr_t)"iECriticality",

  offsetof(CriticalityDiagnostics_IE_List_1, iE_ID) | 0x0,
  (intptr_t)asn1_type__local_457,
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

const ASN1CType asn1_type_CSG_ID[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x3,
  0x1b,
  0x1b,
  (intptr_t)"CSG-ID",
};

const ASN1CType asn1_type_CSG_Capability[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  0,
  (intptr_t)"csg-capable",
  (intptr_t)"not-csg-capable",
  (intptr_t)"CSG-Capability",
};

const ASN1CType asn1_type_CSGMembershipStatus[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"member",
  (intptr_t)"non-member",
  (intptr_t)"CSGMembershipStatus",
};

static const ASN1CType asn1_type__local_458[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

static const ASN1CType asn1_type__local_459[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_LAC,
};

const ASN1CType asn1_type_CGI[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  4,
  sizeof(CGI),

  offsetof(CGI, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_458,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(CGI, lAC) | 0x0,
  (intptr_t)asn1_type__local_459,
  0,
  (intptr_t)"lAC",

  offsetof(CGI, cI) | 0x0,
  (intptr_t)asn1_type_CI,
  0,
  (intptr_t)"cI",

  offsetof(CGI, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_3,
  offsetof(CGI, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"CGI",
};

const ASN1CType asn1_type_CI[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100002,
  0x2,
  0x2,
  (intptr_t)"CI",
};

const ASN1CType asn1_type_CN_DomainIndicator[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100003,
  2,
  (intptr_t)"cs-domain",
  (intptr_t)"ps-domain",
  (intptr_t)"CN-DomainIndicator",
};

const ASN1CType asn1_type_ESN[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x3,
  0x20,
  0x20,
  (intptr_t)"ESN",
};

const ASN1CType asn1_type_GeographicalLocation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  3,
  sizeof(GeographicalLocation),

  offsetof(GeographicalLocation, geographicalCoordinates) | 0x0,
  (intptr_t)asn1_type_GeographicalCoordinates,
  0,
  (intptr_t)"geographicalCoordinates",

  offsetof(GeographicalLocation, altitudeAndDirection) | 0x0,
  (intptr_t)asn1_type_AltitudeAndDirection,
  0,
  (intptr_t)"altitudeAndDirection",

  offsetof(GeographicalLocation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_4,
  offsetof(GeographicalLocation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"GeographicalLocation",
};

static const ASN1CType asn1_type__local_460[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x0,
  0x7fffff,
};

static const ASN1CType asn1_type__local_461[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0xff800000,
  0x7fffff,
};

const ASN1CType asn1_type_GeographicalCoordinates[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  4,
  sizeof(GeographicalCoordinates),

  offsetof(GeographicalCoordinates, latitudeSign) | 0x0,
  (intptr_t)asn1_type_GeographicalCoordinates_1,
  0,
  (intptr_t)"latitudeSign",

  offsetof(GeographicalCoordinates, latitude) | 0x0,
  (intptr_t)asn1_type__local_460,
  0,
  (intptr_t)"latitude",

  offsetof(GeographicalCoordinates, longitude) | 0x0,
  (intptr_t)asn1_type__local_461,
  0,
  (intptr_t)"longitude",

  offsetof(GeographicalCoordinates, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_5,
  offsetof(GeographicalCoordinates, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"GeographicalCoordinates",
};

const ASN1CType asn1_type_GeographicalCoordinates_1[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  2,
  (intptr_t)"north",
  (intptr_t)"south",
};

const ASN1CType asn1_type_GTP_TEI[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x4,
  0x4,
  (intptr_t)"GTP-TEI",
};

const ASN1CType asn1_type_HNBCapacity[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0x3e8,
  (intptr_t)"HNBCapacity",
};

const ASN1CType asn1_type_HNB_Cell_Access_Mode[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  3,
  0,
  (intptr_t)"closed",
  (intptr_t)"hybrid",
  (intptr_t)"open",
  (intptr_t)"HNB-Cell-Access-Mode",
};

static const ASN1CType asn1_type__local_462[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

static const ASN1CType asn1_type__local_463[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_CellIdentity,
};

const ASN1CType asn1_type_HNB_Cell_Identifier[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  3,
  sizeof(HNB_Cell_Identifier),

  offsetof(HNB_Cell_Identifier, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_462,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(HNB_Cell_Identifier, cellIdentity) | 0x0,
  (intptr_t)asn1_type__local_463,
  0,
  (intptr_t)"cellIdentity",

  offsetof(HNB_Cell_Identifier, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_6,
  offsetof(HNB_Cell_Identifier, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"HNB-Cell-Identifier",
};

static const ASN1CType asn1_type__local_464[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_HNBConfigInfo,
};

static const ASN1CType asn1_type__local_465[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_RNC_ID,
};

const ASN1CType asn1_type_HNB_GWResponse[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  3,
  0,
  sizeof(HNB_GWResponse),
  offsetof(HNB_GWResponse, choice),
  offsetof(HNB_GWResponse, u),
  (intptr_t)asn1_type__local_464,
  (intptr_t)"hNB",
  (intptr_t)asn1_type__local_465,
  (intptr_t)"macroRNC",
  (intptr_t)asn1_type_UnknownU_RNTIIndication,
  (intptr_t)"unknownU-RNTIIndication",
  (intptr_t)"HNB-GWResponse",
};

const ASN1CType asn1_type_HNB_RNL_Identity[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  1,
  0,
  sizeof(HNB_RNL_Identity),
  offsetof(HNB_RNL_Identity, choice),
  offsetof(HNB_RNL_Identity, u),
  (intptr_t)asn1_type_HNB_Cell_Identifier,
  (intptr_t)"hNB-Identity-as-Cell-Identifier",
  (intptr_t)"HNB-RNL-Identity",
};

const ASN1CType asn1_type_HNBConfigInfo[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(HNBConfigInfo),

  offsetof(HNBConfigInfo, hnb_RNL_Identity) | 0x0,
  (intptr_t)asn1_type_HNB_RNL_Identity,
  0,
  (intptr_t)"hnb-RNL-Identity",

  offsetof(HNBConfigInfo, configurationInformation) | 0x0,
  (intptr_t)asn1_type_ConfigurationInformation,
  0,
  (intptr_t)"configurationInformation",

  offsetof(HNBConfigInfo, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_7,
  offsetof(HNBConfigInfo, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"HNBConfigInfo",
};

const ASN1CType asn1_type_ConfigurationInformation[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  0,
  sizeof(ConfigurationInformation),
  offsetof(ConfigurationInformation, choice),
  offsetof(ConfigurationInformation, u),
  (intptr_t)asn1_type_HNBConfigurationInformationProvided,
  (intptr_t)"provided",
  (intptr_t)asn1_type_HNBConfigurationInformationMissing,
  (intptr_t)"missing",
  (intptr_t)"ConfigurationInformation",
};

static const ASN1CType asn1_type__local_466[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PSC,
};

static const ASN1CType asn1_type__local_467[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_CSG_ID,
};

static const ASN1CType asn1_type__local_468[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_HNB_Cell_Access_Mode,
};

const ASN1CType asn1_type_HNBConfigurationInformationProvided[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  5,
  sizeof(HNBConfigurationInformationProvided),

  offsetof(HNBConfigurationInformationProvided, psc) | 0x8000000,
  (intptr_t)asn1_type__local_466,
  offsetof(HNBConfigurationInformationProvided, psc_option),
  (intptr_t)"psc",

  offsetof(HNBConfigurationInformationProvided, cSG_ID) | 0x8000000,
  (intptr_t)asn1_type__local_467,
  offsetof(HNBConfigurationInformationProvided, cSG_ID_option),
  (intptr_t)"cSG-ID",

  offsetof(HNBConfigurationInformationProvided, hNB_Cell_Access_Mode) | 0x0,
  (intptr_t)asn1_type__local_468,
  0,
  (intptr_t)"hNB-Cell-Access-Mode",

  offsetof(HNBConfigurationInformationProvided, iurh_Signalling_TNL_AddressList) | 0x0,
  (intptr_t)asn1_type_Iurh_Signalling_TNL_AddressList,
  0,
  (intptr_t)"iurh-Signalling-TNL-AddressList",

  offsetof(HNBConfigurationInformationProvided, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_8,
  offsetof(HNBConfigurationInformationProvided, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"HNBConfigurationInformationProvided",
};

static const ASN1CType asn1_type__local_469[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100000,
  (intptr_t)asn1_type_Cause,
};

const ASN1CType asn1_type_HNBConfigurationInformationMissing[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  sizeof(HNBConfigurationInformationMissing),

  offsetof(HNBConfigurationInformationMissing, cause) | 0x0,
  (intptr_t)asn1_type__local_469,
  0,
  (intptr_t)"cause",

  offsetof(HNBConfigurationInformationMissing, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_9,
  offsetof(HNBConfigurationInformationMissing, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"HNBConfigurationInformationMissing",
};

const ASN1CType asn1_type_HNB_Location_Information[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(HNB_Location_Information),

  offsetof(HNB_Location_Information, macroCoverageInfo) | 0x8000000,
  (intptr_t)asn1_type_MacroCoverageInformation,
  offsetof(HNB_Location_Information, macroCoverageInfo_option),
  (intptr_t)"macroCoverageInfo",

  offsetof(HNB_Location_Information, geographicalCoordinates) | 0x8000000,
  (intptr_t)asn1_type_GeographicalLocation,
  offsetof(HNB_Location_Information, geographicalCoordinates_option),
  (intptr_t)"geographicalCoordinates",

  offsetof(HNB_Location_Information, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_10,
  offsetof(HNB_Location_Information, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"HNB-Location-Information",
};

const ASN1CType asn1_type_HNB_Identity[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(HNB_Identity),

  offsetof(HNB_Identity, hNB_Identity_Info) | 0x0,
  (intptr_t)asn1_type_HNB_Identity_Info,
  0,
  (intptr_t)"hNB-Identity-Info",

  offsetof(HNB_Identity, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_11,
  offsetof(HNB_Identity, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"HNB-Identity",
};

const ASN1CType asn1_type_HNB_Identity_Info[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0xff,
  (intptr_t)"HNB-Identity-Info",
};

const ASN1CType asn1_type_IMEI[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100003,
  0x3c,
  0x3c,
  (intptr_t)"IMEI",
};

const ASN1CType asn1_type_IMSI[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x3,
  0x8,
  (intptr_t)"IMSI",
};

const ASN1CType asn1_type_IMSIDS41[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x5,
  0x7,
  (intptr_t)"IMSIDS41",
};

static const ASN1CType asn1_type__local_470[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_IMSIDS41,
};

static const ASN1CType asn1_type__local_471[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_ESN,
};

const ASN1CType asn1_type_IMSIESN[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100006,
  2,
  sizeof(IMSIESN),

  offsetof(IMSIESN, iMSIDS41) | 0x0,
  (intptr_t)asn1_type__local_470,
  0,
  (intptr_t)"iMSIDS41",

  offsetof(IMSIESN, eSN) | 0x0,
  (intptr_t)asn1_type__local_471,
  0,
  (intptr_t)"eSN",

  (intptr_t)"IMSIESN",
};

const ASN1CType asn1_type_IP_Address[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(IP_Address),

  offsetof(IP_Address, ipaddress) | 0x0,
  (intptr_t)asn1_type_IP_Address_1,
  0,
  (intptr_t)"ipaddress",

  offsetof(IP_Address, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_12,
  offsetof(IP_Address, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"IP-Address",
};

const ASN1CType asn1_type_IP_Address_1[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100000,
  2,
  0,
  sizeof(IP_Address_1),
  offsetof(IP_Address_1, choice),
  offsetof(IP_Address_1, u),
  (intptr_t)asn1_type_Ipv4Address,
  (intptr_t)"ipv4info",
  (intptr_t)asn1_type_Ipv6Address,
  (intptr_t)"ipv6info",
};

const ASN1CType asn1_type_Ipv4Address[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x4,
  0x4,
  (intptr_t)"Ipv4Address",
};

const ASN1CType asn1_type_Ipv6Address[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x10,
  0x10,
  (intptr_t)"Ipv6Address",
};

const ASN1CType asn1_type_Iurh_Signalling_TNL_AddressList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100003,
  0x1,
  0x3,
  sizeof(IP_Address),
  (intptr_t)asn1_type_IP_Address,
  0,
  (intptr_t)"Iurh-Signalling-TNL-AddressList",
};

const ASN1CType asn1_type_LAC[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x2,
  0x2,
  (intptr_t)"LAC",
};

static const ASN1CType asn1_type__local_472[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

static const ASN1CType asn1_type__local_473[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_LAC,
};

const ASN1CType asn1_type_LAI[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(LAI),

  offsetof(LAI, pLMNID) | 0x0,
  (intptr_t)asn1_type__local_472,
  0,
  (intptr_t)"pLMNID",

  offsetof(LAI, lAC) | 0x0,
  (intptr_t)asn1_type__local_473,
  0,
  (intptr_t)"lAC",

  (intptr_t)"LAI",
};

const ASN1CType asn1_type_MacroCoverageInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  2,
  sizeof(MacroCoverageInformation),

  offsetof(MacroCoverageInformation, cellIdentity) | 0x0,
  (intptr_t)asn1_type_MacroCellID,
  0,
  (intptr_t)"cellIdentity",

  offsetof(MacroCoverageInformation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_13,
  offsetof(MacroCoverageInformation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"MacroCoverageInformation",
};

const ASN1CType asn1_type_MacroCellID[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  2,
  0,
  sizeof(MacroCellID),
  offsetof(MacroCellID, choice),
  offsetof(MacroCellID, u),
  (intptr_t)asn1_type_UTRANCellID,
  (intptr_t)"uTRANCellID",
  (intptr_t)asn1_type_CGI,
  (intptr_t)"gERANCellID",
  (intptr_t)"MacroCellID",
};

const ASN1CType asn1_type_MuxPortNumber[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x400,
  0xffff,
  (intptr_t)"MuxPortNumber",
};

const ASN1CType asn1_type_NeighbourCellIdentityList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x0,
  0x80,
  sizeof(NeighbourIdentity),
  (intptr_t)asn1_type_NeighbourIdentity,
  0,
  (intptr_t)"NeighbourCellIdentityList",
};

static const ASN1CType asn1_type__local_474[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_CellIdentity,
};

const ASN1CType asn1_type_NeighbourIdentity[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  2,
  0,
  sizeof(NeighbourIdentity),
  offsetof(NeighbourIdentity, choice),
  offsetof(NeighbourIdentity, u),
  (intptr_t)asn1_type_HNB_RNL_Identity,
  (intptr_t)"hNB-RNL-Identity",
  (intptr_t)asn1_type__local_474,
  (intptr_t)"cell-ID",
  (intptr_t)"NeighbourIdentity",
};

const ASN1CType asn1_type_NeighbourInfoList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x20,
  sizeof(HNBConfigInfo),
  (intptr_t)asn1_type_HNBConfigInfo,
  0,
  (intptr_t)"NeighbourInfoList",
};

const ASN1CType asn1_type_AdditionalNeighbourInfoList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x80,
  sizeof(HNBConfigInfo),
  (intptr_t)asn1_type_HNBConfigInfo,
  0,
  (intptr_t)"AdditionalNeighbourInfoList",
};

const ASN1CType asn1_type_NeighbourInfoRequestList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x20,
  sizeof(NeighbourInfoRequestItem),
  (intptr_t)asn1_type_NeighbourInfoRequestItem,
  0,
  (intptr_t)"NeighbourInfoRequestList",
};

const ASN1CType asn1_type_NeighbourInfoRequestItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(NeighbourInfoRequestItem),

  offsetof(NeighbourInfoRequestItem, hnb_RNL_Identity) | 0x0,
  (intptr_t)asn1_type_HNB_RNL_Identity,
  0,
  (intptr_t)"hnb-RNL-Identity",

  offsetof(NeighbourInfoRequestItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_14,
  offsetof(NeighbourInfoRequestItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"NeighbourInfoRequestItem",
};

const ASN1CType asn1_type_PLMNidentity[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x3,
  0x3,
  (intptr_t)"PLMNidentity",
};

const ASN1CType asn1_type_PSC[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x3,
  0x9,
  0x9,
  (intptr_t)"PSC",
};

const ASN1CType asn1_type_PTMSI[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x20,
  0x20,
  (intptr_t)"PTMSI",
};

const ASN1CType asn1_type_PTMSIRAI[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100002,
  2,
  sizeof(PTMSIRAI),

  offsetof(PTMSIRAI, pTMSI) | 0x0,
  (intptr_t)asn1_type_PTMSI,
  0,
  (intptr_t)"pTMSI",

  offsetof(PTMSIRAI, rAI) | 0x0,
  (intptr_t)asn1_type_RAI,
  0,
  (intptr_t)"rAI",

  (intptr_t)"PTMSIRAI",
};

const ASN1CType asn1_type_RAB_ID[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x8,
  0x8,
  (intptr_t)"RAB-ID",
};

const ASN1CType asn1_type_RABList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x100,
  sizeof(RABListItem),
  (intptr_t)asn1_type_RABListItem,
  0,
  (intptr_t)"RABList",
};

static const ASN1CType asn1_type__local_475[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_TransportInfo,
};

static const ASN1CType asn1_type__local_476[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_TransportInfo,
};

const ASN1CType asn1_type_RABListItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  5,
  sizeof(RABListItem),

  offsetof(RABListItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type_RAB_ID,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RABListItem, old_transport_Info) | 0x0,
  (intptr_t)asn1_type__local_475,
  0,
  (intptr_t)"old-transport-Info",

  offsetof(RABListItem, new_transport_Info) | 0x0,
  (intptr_t)asn1_type__local_476,
  0,
  (intptr_t)"new-transport-Info",

  offsetof(RABListItem, cn_domain_indicator) | 0x0,
  (intptr_t)asn1_type_CN_DomainIndicator,
  0,
  (intptr_t)"cn-domain-indicator",

  offsetof(RABListItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_15,
  offsetof(RABListItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RABListItem",
};

const ASN1CType asn1_type_RAC[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x1,
  0x1,
  (intptr_t)"RAC",
};

static const ASN1CType asn1_type__local_477[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_LAI,
};

static const ASN1CType asn1_type__local_478[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_RAC,
};

const ASN1CType asn1_type_RAI[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  sizeof(RAI),

  offsetof(RAI, lAI) | 0x0,
  (intptr_t)asn1_type__local_477,
  0,
  (intptr_t)"lAI",

  offsetof(RAI, rAC) | 0x0,
  (intptr_t)asn1_type__local_478,
  0,
  (intptr_t)"rAC",

  (intptr_t)"RAI",
};

const ASN1CType asn1_type_Registration_Cause[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  1,
  (intptr_t)"emergency-call",
  (intptr_t)"normal",
  (intptr_t)"ue-relocation",
  (intptr_t)"Registration-Cause",
};

const ASN1CType asn1_type_RNC_ID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xffff,
  (intptr_t)"RNC-ID",
};

const ASN1CType asn1_type_SAC[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x2,
  0x2,
  (intptr_t)"SAC",
};

const ASN1CType asn1_type_S_RNTIPrefix[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x7800000 | 0x3,
  0x1,
  0x10,
  (intptr_t)"S-RNTIPrefix",
};

static const ASN1CType asn1_type__local_479[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x20,
  0x20,
};

static const ASN1CType asn1_type__local_480[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_LAI,
};

const ASN1CType asn1_type_TMSILAI[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  2,
  sizeof(TMSILAI),

  offsetof(TMSILAI, tMSI) | 0x0,
  (intptr_t)asn1_type__local_479,
  0,
  (intptr_t)"tMSI",

  offsetof(TMSILAI, lAI) | 0x0,
  (intptr_t)asn1_type__local_480,
  0,
  (intptr_t)"lAI",

  (intptr_t)"TMSILAI",
};

const ASN1CType asn1_type_TMSIDS41[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100007,
  0x2,
  0x11,
  (intptr_t)"TMSIDS41",
};

const ASN1CType asn1_type_TransportInfo[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(TransportInfo),

  offsetof(TransportInfo, transportLayerAddress) | 0x0,
  (intptr_t)asn1_type_TransportLayerAddress,
  0,
  (intptr_t)"transportLayerAddress",

  offsetof(TransportInfo, transportAssociation) | 0x0,
  (intptr_t)asn1_type_TransportInfo_1,
  0,
  (intptr_t)"transportAssociation",

  offsetof(TransportInfo, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_16,
  offsetof(TransportInfo, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"TransportInfo",
};

const ASN1CType asn1_type_TransportInfo_1[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100001,
  2,
  0,
  sizeof(TransportInfo_1),
  offsetof(TransportInfo_1, choice),
  offsetof(TransportInfo_1, u),
  (intptr_t)asn1_type_GTP_TEI,
  (intptr_t)"gtp-TEI",
  (intptr_t)asn1_type_BindingID,
  (intptr_t)"bindingID",
};

const ASN1CType asn1_type_TransportLayerAddress[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x7800000 | 0x100000,
  0x1,
  0xa0,
  (intptr_t)"TransportLayerAddress",
};

static const ASN1CType asn1_type__local_481[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_IP_Address,
};

const ASN1CType asn1_type_Tunnel_Information[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(Tunnel_Information),

  offsetof(Tunnel_Information, iP_Address) | 0x0,
  (intptr_t)asn1_type__local_481,
  0,
  (intptr_t)"iP-Address",

  offsetof(Tunnel_Information, uDP_Port_Number) | 0x8000000,
  (intptr_t)asn1_type_UDP_Port_Number,
  offsetof(Tunnel_Information, uDP_Port_Number_option),
  (intptr_t)"uDP-Port-Number",

  offsetof(Tunnel_Information, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_17,
  offsetof(Tunnel_Information, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"Tunnel-Information",
};

const ASN1CType asn1_type_TypeOfError[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100002,
  2,
  0,
  (intptr_t)"not-understood",
  (intptr_t)"missing",
  (intptr_t)"TypeOfError",
};

const ASN1CType asn1_type_UDP_Port_Number[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x2,
  0x2,
  (intptr_t)"UDP-Port-Number",
};

const ASN1CType asn1_type_UE_Capabilities[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(UE_Capabilities),

  offsetof(UE_Capabilities, access_stratum_release_indicator) | 0x0,
  (intptr_t)asn1_type_Access_stratum_release_indicator,
  0,
  (intptr_t)"access-stratum-release-indicator",

  offsetof(UE_Capabilities, csg_capability) | 0x0,
  (intptr_t)asn1_type_CSG_Capability,
  0,
  (intptr_t)"csg-capability",

  offsetof(UE_Capabilities, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_18,
  offsetof(UE_Capabilities, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"UE-Capabilities",
};

static const ASN1CType asn1_type__local_482[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_LAC,
};

static const ASN1CType asn1_type__local_483[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_RAC,
};

static const ASN1CType asn1_type__local_484[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_PLMNidentity,
};

static const ASN1CType asn1_type__local_485[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_CellIdentity,
};

const ASN1CType asn1_type_UTRANCellID[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100000,
  5,
  sizeof(UTRANCellID),

  offsetof(UTRANCellID, lAC) | 0x0,
  (intptr_t)asn1_type__local_482,
  0,
  (intptr_t)"lAC",

  offsetof(UTRANCellID, rAC) | 0x0,
  (intptr_t)asn1_type__local_483,
  0,
  (intptr_t)"rAC",

  offsetof(UTRANCellID, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_484,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(UTRANCellID, uTRANcellID) | 0x0,
  (intptr_t)asn1_type__local_485,
  0,
  (intptr_t)"uTRANcellID",

  offsetof(UTRANCellID, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_19,
  offsetof(UTRANCellID, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"UTRANCellID",
};

static const ASN1CType asn1_type__local_486[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100004,
  (intptr_t)asn1_type_ESN,
};

static const ASN1CType asn1_type__local_487[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100005,
  (intptr_t)asn1_type_IMSIDS41,
};

const ASN1CType asn1_type_UE_Identity[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  8,
  0,
  sizeof(UE_Identity),
  offsetof(UE_Identity, choice),
  offsetof(UE_Identity, u),
  (intptr_t)asn1_type_IMSI,
  (intptr_t)"iMSI",
  (intptr_t)asn1_type_TMSILAI,
  (intptr_t)"tMSILAI",
  (intptr_t)asn1_type_PTMSIRAI,
  (intptr_t)"pTMSIRAI",
  (intptr_t)asn1_type_IMEI,
  (intptr_t)"iMEI",
  (intptr_t)asn1_type__local_486,
  (intptr_t)"eSN",
  (intptr_t)asn1_type__local_487,
  (intptr_t)"iMSIDS41",
  (intptr_t)asn1_type_IMSIESN,
  (intptr_t)"iMSIESN",
  (intptr_t)asn1_type_TMSIDS41,
  (intptr_t)"tMSIDS41",
  (intptr_t)"UE-Identity",
};

const ASN1CType asn1_type_Update_cause[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"relocation-preparation",
  (intptr_t)"Update-cause",
};

const ASN1CType asn1_type_URAIdentityList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x0,
  0x8,
  sizeof(URAIdentity),
  (intptr_t)asn1_type_URAIdentity,
  0,
  (intptr_t)"URAIdentityList",
};

const ASN1CType asn1_type_URAIdentity[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xffff,
  (intptr_t)"URAIdentity",
};

const ASN1CType asn1_type_U_RNTI[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x3,
  0x20,
  0x20,
  (intptr_t)"U-RNTI",
};

const ASN1CType asn1_type_UnknownU_RNTIIndication[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100002,
  1,
  0,
  (intptr_t)"unknown",
  (intptr_t)"UnknownU-RNTIIndication",
};

const ASN1CType asn1_type_HNBRegisterRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(HNBRegisterRequest),

  offsetof(HNBRegisterRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_1,
  0,
  (intptr_t)"protocolIEs",

  offsetof(HNBRegisterRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_20,
  offsetof(HNBRegisterRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"HNBRegisterRequest",
};

const ASN1CType asn1_type_HNBRegisterAccept[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(HNBRegisterAccept),

  offsetof(HNBRegisterAccept, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_2,
  0,
  (intptr_t)"protocolIEs",

  offsetof(HNBRegisterAccept, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_21,
  offsetof(HNBRegisterAccept, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"HNBRegisterAccept",
};

const ASN1CType asn1_type_HNBRegisterReject[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(HNBRegisterReject),

  offsetof(HNBRegisterReject, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_3,
  0,
  (intptr_t)"protocolIEs",

  offsetof(HNBRegisterReject, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_22,
  offsetof(HNBRegisterReject, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"HNBRegisterReject",
};

const ASN1CType asn1_type_HNBDe_Register[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(HNBDe_Register),

  offsetof(HNBDe_Register, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_4,
  0,
  (intptr_t)"protocolIEs",

  offsetof(HNBDe_Register, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_23,
  offsetof(HNBDe_Register, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"HNBDe-Register",
};

const ASN1CType asn1_type_UERegisterRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(UERegisterRequest),

  offsetof(UERegisterRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_5,
  0,
  (intptr_t)"protocolIEs",

  offsetof(UERegisterRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_24,
  offsetof(UERegisterRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"UERegisterRequest",
};

const ASN1CType asn1_type_UERegisterAccept[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(UERegisterAccept),

  offsetof(UERegisterAccept, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_6,
  0,
  (intptr_t)"protocolIEs",

  offsetof(UERegisterAccept, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_25,
  offsetof(UERegisterAccept, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"UERegisterAccept",
};

const ASN1CType asn1_type_UERegisterReject[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(UERegisterReject),

  offsetof(UERegisterReject, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_7,
  0,
  (intptr_t)"protocolIEs",

  offsetof(UERegisterReject, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_26,
  offsetof(UERegisterReject, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"UERegisterReject",
};

const ASN1CType asn1_type_UEDe_Register[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(UEDe_Register),

  offsetof(UEDe_Register, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_8,
  0,
  (intptr_t)"protocolIEs",

  offsetof(UEDe_Register, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_27,
  offsetof(UEDe_Register, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"UEDe-Register",
};

const ASN1CType asn1_type_CSGMembershipUpdate[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(CSGMembershipUpdate),

  offsetof(CSGMembershipUpdate, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_9,
  0,
  (intptr_t)"protocolIEs",

  offsetof(CSGMembershipUpdate, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_28,
  offsetof(CSGMembershipUpdate, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"CSGMembershipUpdate",
};

const ASN1CType asn1_type_TNLUpdateRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(TNLUpdateRequest),

  offsetof(TNLUpdateRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_10,
  0,
  (intptr_t)"protocolIEs",

  offsetof(TNLUpdateRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_29,
  offsetof(TNLUpdateRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"TNLUpdateRequest",
};

const ASN1CType asn1_type_TNLUpdateResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(TNLUpdateResponse),

  offsetof(TNLUpdateResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_11,
  0,
  (intptr_t)"protocolIEs",

  offsetof(TNLUpdateResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_30,
  offsetof(TNLUpdateResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"TNLUpdateResponse",
};

const ASN1CType asn1_type_TNLUpdateFailure[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(TNLUpdateFailure),

  offsetof(TNLUpdateFailure, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_12,
  0,
  (intptr_t)"protocolIEs",

  offsetof(TNLUpdateFailure, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_31,
  offsetof(TNLUpdateFailure, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"TNLUpdateFailure",
};

const ASN1CType asn1_type_HNBConfigTransferRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(HNBConfigTransferRequest),

  offsetof(HNBConfigTransferRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_13,
  0,
  (intptr_t)"protocolIEs",

  offsetof(HNBConfigTransferRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_32,
  offsetof(HNBConfigTransferRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"HNBConfigTransferRequest",
};

const ASN1CType asn1_type_HNBConfigTransferResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(HNBConfigTransferResponse),

  offsetof(HNBConfigTransferResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_14,
  0,
  (intptr_t)"protocolIEs",

  offsetof(HNBConfigTransferResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_33,
  offsetof(HNBConfigTransferResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"HNBConfigTransferResponse",
};

const ASN1CType asn1_type_RelocationComplete[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RelocationComplete),

  offsetof(RelocationComplete, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_15,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RelocationComplete, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_34,
  offsetof(RelocationComplete, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RelocationComplete",
};

const ASN1CType asn1_type_ErrorIndication[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(ErrorIndication),

  offsetof(ErrorIndication, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_16,
  0,
  (intptr_t)"protocolIEs",

  offsetof(ErrorIndication, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_35,
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

const ASN1CType asn1_type_U_RNTIQueryRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(U_RNTIQueryRequest),

  offsetof(U_RNTIQueryRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_17,
  0,
  (intptr_t)"protocolIEs",

  offsetof(U_RNTIQueryRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_36,
  offsetof(U_RNTIQueryRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"U-RNTIQueryRequest",
};

const ASN1CType asn1_type_U_RNTIQueryResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(U_RNTIQueryResponse),

  offsetof(U_RNTIQueryResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_18,
  0,
  (intptr_t)"protocolIEs",

  offsetof(U_RNTIQueryResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_37,
  offsetof(U_RNTIQueryResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"U-RNTIQueryResponse",
};

static const Criticality asn1_value__local_488 = 1;

const ASN1CType asn1_type_HNBAP_ELEMENTARY_PROCEDURE[] = {
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
  (intptr_t)&asn1_value__local_488,
  (intptr_t)"&criticality",
  (intptr_t)"HNBAP-ELEMENTARY-PROCEDURE",
};

const ASN1CType asn1_type_HNBAP_PDU[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  3,
  0,
  sizeof(HNBAP_PDU),
  offsetof(HNBAP_PDU, choice),
  offsetof(HNBAP_PDU, u),
  (intptr_t)asn1_type_InitiatingMessage,
  (intptr_t)"initiatingMessage",
  (intptr_t)asn1_type_SuccessfulOutcome,
  (intptr_t)"successfulOutcome",
  (intptr_t)asn1_type_UnsuccessfulOutcome,
  (intptr_t)"unsuccessfulOutcome",
  (intptr_t)"HNBAP-PDU",
};

static const ASN1CType asn1_type__local_489[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProcedureCode,
};

static const ASN1CType asn1_type__local_490[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProcedureCode asn1_value__local_494 = 1;

static const Criticality asn1_value__local_495 = 0;

static const ProcedureCode asn1_value__local_496 = 3;

static const Criticality asn1_value__local_497 = 0;

static const ProcedureCode asn1_value__local_498 = 9;

static const Criticality asn1_value__local_499 = 0;

static const ProcedureCode asn1_value__local_500 = 10;

static const Criticality asn1_value__local_501 = 0;

static const ProcedureCode asn1_value__local_502 = 14;

static const Criticality asn1_value__local_503 = 0;

static const ProcedureCode asn1_value__local_504 = 4;

static const Criticality asn1_value__local_505 = 1;

static const ProcedureCode asn1_value__local_506 = 2;

static const Criticality asn1_value__local_507 = 1;

static const ProcedureCode asn1_value__local_508 = 5;

static const Criticality asn1_value__local_509 = 1;

static const ProcedureCode asn1_value__local_510 = 6;

static const Criticality asn1_value__local_511 = 1;

static const ProcedureCode asn1_value__local_512 = 7;

static const Criticality asn1_value__local_513 = 1;

static const ProcedureCode asn1_value__local_514 = 11;

static const Criticality asn1_value__local_515 = 1;

static const HNBAP_ELEMENTARY_PROCEDURE asn1_value__local_493[] = {
{
  (intptr_t)asn1_type_HNBRegisterRequest,
  (intptr_t)asn1_type_HNBRegisterAccept,
  (intptr_t)asn1_type_HNBRegisterReject,
  (intptr_t)&asn1_value__local_494,
  (intptr_t)&asn1_value__local_495,
},
{
  (intptr_t)asn1_type_UERegisterRequest,
  (intptr_t)asn1_type_UERegisterAccept,
  (intptr_t)asn1_type_UERegisterReject,
  (intptr_t)&asn1_value__local_496,
  (intptr_t)&asn1_value__local_497,
},
{
  (intptr_t)asn1_type_TNLUpdateRequest,
  (intptr_t)asn1_type_TNLUpdateResponse,
  (intptr_t)asn1_type_TNLUpdateFailure,
  (intptr_t)&asn1_value__local_498,
  (intptr_t)&asn1_value__local_499,
},
{
  (intptr_t)asn1_type_HNBConfigTransferRequest,
  (intptr_t)asn1_type_HNBConfigTransferResponse,
  0,
  (intptr_t)&asn1_value__local_500,
  (intptr_t)&asn1_value__local_501,
},
{
  (intptr_t)asn1_type_U_RNTIQueryRequest,
  (intptr_t)asn1_type_U_RNTIQueryResponse,
  0,
  (intptr_t)&asn1_value__local_502,
  (intptr_t)&asn1_value__local_503,
},
{
  (intptr_t)asn1_type_UEDe_Register,
  0,
  0,
  (intptr_t)&asn1_value__local_504,
  (intptr_t)&asn1_value__local_505,
},
{
  (intptr_t)asn1_type_HNBDe_Register,
  0,
  0,
  (intptr_t)&asn1_value__local_506,
  (intptr_t)&asn1_value__local_507,
},
{
  (intptr_t)asn1_type_ErrorIndication,
  0,
  0,
  (intptr_t)&asn1_value__local_508,
  (intptr_t)&asn1_value__local_509,
},
{
  (intptr_t)asn1_type_PrivateMessage,
  0,
  0,
  (intptr_t)&asn1_value__local_510,
  (intptr_t)&asn1_value__local_511,
},
{
  (intptr_t)asn1_type_CSGMembershipUpdate,
  0,
  0,
  (intptr_t)&asn1_value__local_512,
  (intptr_t)&asn1_value__local_513,
},
{
  (intptr_t)asn1_type_RelocationComplete,
  0,
  0,
  (intptr_t)&asn1_value__local_514,
  (intptr_t)&asn1_value__local_515,
},
};

static const ASN1CType asn1_constraint__local_492[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_ELEMENTARY_PROCEDURE,
  0,
  (intptr_t)asn1_value__local_493,
  11,
  1,
  0,
  0x80000000,
  3,
};

static const ASN1CType asn1_type__local_491[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_492,
};

const ASN1CType asn1_type_InitiatingMessage[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100000,
  3,
  sizeof(InitiatingMessage),

  offsetof(InitiatingMessage, procedureCode) | 0x0,
  (intptr_t)asn1_type__local_489,
  0,
  (intptr_t)"procedureCode",

  offsetof(InitiatingMessage, criticality) | 0x0,
  (intptr_t)asn1_type__local_490,
  0,
  (intptr_t)"criticality",

  offsetof(InitiatingMessage, value) | 0x0,
  (intptr_t)asn1_type__local_491,
  0,
  (intptr_t)"value",

  (intptr_t)"InitiatingMessage",
};

static const ASN1CType asn1_type__local_516[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProcedureCode,
};

static const ASN1CType asn1_type__local_517[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProcedureCode asn1_value__local_521 = 1;

static const Criticality asn1_value__local_522 = 0;

static const ProcedureCode asn1_value__local_523 = 3;

static const Criticality asn1_value__local_524 = 0;

static const ProcedureCode asn1_value__local_525 = 9;

static const Criticality asn1_value__local_526 = 0;

static const ProcedureCode asn1_value__local_527 = 10;

static const Criticality asn1_value__local_528 = 0;

static const ProcedureCode asn1_value__local_529 = 14;

static const Criticality asn1_value__local_530 = 0;

static const ProcedureCode asn1_value__local_531 = 4;

static const Criticality asn1_value__local_532 = 1;

static const ProcedureCode asn1_value__local_533 = 2;

static const Criticality asn1_value__local_534 = 1;

static const ProcedureCode asn1_value__local_535 = 5;

static const Criticality asn1_value__local_536 = 1;

static const ProcedureCode asn1_value__local_537 = 6;

static const Criticality asn1_value__local_538 = 1;

static const ProcedureCode asn1_value__local_539 = 7;

static const Criticality asn1_value__local_540 = 1;

static const ProcedureCode asn1_value__local_541 = 11;

static const Criticality asn1_value__local_542 = 1;

static const HNBAP_ELEMENTARY_PROCEDURE asn1_value__local_520[] = {
{
  (intptr_t)asn1_type_HNBRegisterRequest,
  (intptr_t)asn1_type_HNBRegisterAccept,
  (intptr_t)asn1_type_HNBRegisterReject,
  (intptr_t)&asn1_value__local_521,
  (intptr_t)&asn1_value__local_522,
},
{
  (intptr_t)asn1_type_UERegisterRequest,
  (intptr_t)asn1_type_UERegisterAccept,
  (intptr_t)asn1_type_UERegisterReject,
  (intptr_t)&asn1_value__local_523,
  (intptr_t)&asn1_value__local_524,
},
{
  (intptr_t)asn1_type_TNLUpdateRequest,
  (intptr_t)asn1_type_TNLUpdateResponse,
  (intptr_t)asn1_type_TNLUpdateFailure,
  (intptr_t)&asn1_value__local_525,
  (intptr_t)&asn1_value__local_526,
},
{
  (intptr_t)asn1_type_HNBConfigTransferRequest,
  (intptr_t)asn1_type_HNBConfigTransferResponse,
  0,
  (intptr_t)&asn1_value__local_527,
  (intptr_t)&asn1_value__local_528,
},
{
  (intptr_t)asn1_type_U_RNTIQueryRequest,
  (intptr_t)asn1_type_U_RNTIQueryResponse,
  0,
  (intptr_t)&asn1_value__local_529,
  (intptr_t)&asn1_value__local_530,
},
{
  (intptr_t)asn1_type_UEDe_Register,
  0,
  0,
  (intptr_t)&asn1_value__local_531,
  (intptr_t)&asn1_value__local_532,
},
{
  (intptr_t)asn1_type_HNBDe_Register,
  0,
  0,
  (intptr_t)&asn1_value__local_533,
  (intptr_t)&asn1_value__local_534,
},
{
  (intptr_t)asn1_type_ErrorIndication,
  0,
  0,
  (intptr_t)&asn1_value__local_535,
  (intptr_t)&asn1_value__local_536,
},
{
  (intptr_t)asn1_type_PrivateMessage,
  0,
  0,
  (intptr_t)&asn1_value__local_537,
  (intptr_t)&asn1_value__local_538,
},
{
  (intptr_t)asn1_type_CSGMembershipUpdate,
  0,
  0,
  (intptr_t)&asn1_value__local_539,
  (intptr_t)&asn1_value__local_540,
},
{
  (intptr_t)asn1_type_RelocationComplete,
  0,
  0,
  (intptr_t)&asn1_value__local_541,
  (intptr_t)&asn1_value__local_542,
},
};

static const ASN1CType asn1_constraint__local_519[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_ELEMENTARY_PROCEDURE,
  1,
  (intptr_t)asn1_value__local_520,
  11,
  1,
  0,
  0x80000000,
  3,
};

static const ASN1CType asn1_type__local_518[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_519,
};

const ASN1CType asn1_type_SuccessfulOutcome[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  3,
  sizeof(SuccessfulOutcome),

  offsetof(SuccessfulOutcome, procedureCode) | 0x0,
  (intptr_t)asn1_type__local_516,
  0,
  (intptr_t)"procedureCode",

  offsetof(SuccessfulOutcome, criticality) | 0x0,
  (intptr_t)asn1_type__local_517,
  0,
  (intptr_t)"criticality",

  offsetof(SuccessfulOutcome, value) | 0x0,
  (intptr_t)asn1_type__local_518,
  0,
  (intptr_t)"value",

  (intptr_t)"SuccessfulOutcome",
};

static const ASN1CType asn1_type__local_543[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProcedureCode,
};

static const ASN1CType asn1_type__local_544[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProcedureCode asn1_value__local_548 = 1;

static const Criticality asn1_value__local_549 = 0;

static const ProcedureCode asn1_value__local_550 = 3;

static const Criticality asn1_value__local_551 = 0;

static const ProcedureCode asn1_value__local_552 = 9;

static const Criticality asn1_value__local_553 = 0;

static const ProcedureCode asn1_value__local_554 = 10;

static const Criticality asn1_value__local_555 = 0;

static const ProcedureCode asn1_value__local_556 = 14;

static const Criticality asn1_value__local_557 = 0;

static const ProcedureCode asn1_value__local_558 = 4;

static const Criticality asn1_value__local_559 = 1;

static const ProcedureCode asn1_value__local_560 = 2;

static const Criticality asn1_value__local_561 = 1;

static const ProcedureCode asn1_value__local_562 = 5;

static const Criticality asn1_value__local_563 = 1;

static const ProcedureCode asn1_value__local_564 = 6;

static const Criticality asn1_value__local_565 = 1;

static const ProcedureCode asn1_value__local_566 = 7;

static const Criticality asn1_value__local_567 = 1;

static const ProcedureCode asn1_value__local_568 = 11;

static const Criticality asn1_value__local_569 = 1;

static const HNBAP_ELEMENTARY_PROCEDURE asn1_value__local_547[] = {
{
  (intptr_t)asn1_type_HNBRegisterRequest,
  (intptr_t)asn1_type_HNBRegisterAccept,
  (intptr_t)asn1_type_HNBRegisterReject,
  (intptr_t)&asn1_value__local_548,
  (intptr_t)&asn1_value__local_549,
},
{
  (intptr_t)asn1_type_UERegisterRequest,
  (intptr_t)asn1_type_UERegisterAccept,
  (intptr_t)asn1_type_UERegisterReject,
  (intptr_t)&asn1_value__local_550,
  (intptr_t)&asn1_value__local_551,
},
{
  (intptr_t)asn1_type_TNLUpdateRequest,
  (intptr_t)asn1_type_TNLUpdateResponse,
  (intptr_t)asn1_type_TNLUpdateFailure,
  (intptr_t)&asn1_value__local_552,
  (intptr_t)&asn1_value__local_553,
},
{
  (intptr_t)asn1_type_HNBConfigTransferRequest,
  (intptr_t)asn1_type_HNBConfigTransferResponse,
  0,
  (intptr_t)&asn1_value__local_554,
  (intptr_t)&asn1_value__local_555,
},
{
  (intptr_t)asn1_type_U_RNTIQueryRequest,
  (intptr_t)asn1_type_U_RNTIQueryResponse,
  0,
  (intptr_t)&asn1_value__local_556,
  (intptr_t)&asn1_value__local_557,
},
{
  (intptr_t)asn1_type_UEDe_Register,
  0,
  0,
  (intptr_t)&asn1_value__local_558,
  (intptr_t)&asn1_value__local_559,
},
{
  (intptr_t)asn1_type_HNBDe_Register,
  0,
  0,
  (intptr_t)&asn1_value__local_560,
  (intptr_t)&asn1_value__local_561,
},
{
  (intptr_t)asn1_type_ErrorIndication,
  0,
  0,
  (intptr_t)&asn1_value__local_562,
  (intptr_t)&asn1_value__local_563,
},
{
  (intptr_t)asn1_type_PrivateMessage,
  0,
  0,
  (intptr_t)&asn1_value__local_564,
  (intptr_t)&asn1_value__local_565,
},
{
  (intptr_t)asn1_type_CSGMembershipUpdate,
  0,
  0,
  (intptr_t)&asn1_value__local_566,
  (intptr_t)&asn1_value__local_567,
},
{
  (intptr_t)asn1_type_RelocationComplete,
  0,
  0,
  (intptr_t)&asn1_value__local_568,
  (intptr_t)&asn1_value__local_569,
},
};

static const ASN1CType asn1_constraint__local_546[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_HNBAP_ELEMENTARY_PROCEDURE,
  2,
  (intptr_t)asn1_value__local_547,
  11,
  1,
  0,
  0x80000000,
  3,
};

static const ASN1CType asn1_type__local_545[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_546,
};

const ASN1CType asn1_type_UnsuccessfulOutcome[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100002,
  3,
  sizeof(UnsuccessfulOutcome),

  offsetof(UnsuccessfulOutcome, procedureCode) | 0x0,
  (intptr_t)asn1_type__local_543,
  0,
  (intptr_t)"procedureCode",

  offsetof(UnsuccessfulOutcome, criticality) | 0x0,
  (intptr_t)asn1_type__local_544,
  0,
  (intptr_t)"criticality",

  offsetof(UnsuccessfulOutcome, value) | 0x0,
  (intptr_t)asn1_type__local_545,
  0,
  (intptr_t)"value",

  (intptr_t)"UnsuccessfulOutcome",
};

