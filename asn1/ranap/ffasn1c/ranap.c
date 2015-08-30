/* Automatically generated file - do not edit */

#include "asn1defs.h"
#include "ranap.h"

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

const ASN1CType asn1_type_ProtocolExtensionID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xffff,
  (intptr_t)"ProtocolExtensionID",
};

const ASN1CType asn1_type_ProtocolIE_ID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xffff,
  (intptr_t)"ProtocolIE-ID",
};

const ASN1CType asn1_type_TriggeringMessage[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  4,
  (intptr_t)"initiating-message",
  (intptr_t)"successful-outcome",
  (intptr_t)"unsuccessfull-outcome",
  (intptr_t)"outcome",
  (intptr_t)"TriggeringMessage",
};

const ASN1CType asn1_type_RANAP_PROTOCOL_IES[] = {
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
  (intptr_t)"RANAP-PROTOCOL-IES",
};

const ASN1CType asn1_type_RANAP_PROTOCOL_IES_PAIR[] = {
  (ASN1_CTYPE_OBJECT_CLASS << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x0,
  6,

  0x1,
  (intptr_t)asn1_type_ProtocolIE_ID,
  0,
  (intptr_t)"&id",

  0x1,
  (intptr_t)asn1_type_Criticality,
  0,
  (intptr_t)"&firstCriticality",

  0x0,
  0,
  0,
  (intptr_t)"&FirstValue",

  0x1,
  (intptr_t)asn1_type_Criticality,
  0,
  (intptr_t)"&secondCriticality",

  0x0,
  0,
  0,
  (intptr_t)"&SecondValue",

  0x1,
  (intptr_t)asn1_type_Presence,
  0,
  (intptr_t)"&presence",
  (intptr_t)"RANAP-PROTOCOL-IES-PAIR",
};

const ASN1CType asn1_type_RANAP_PROTOCOL_EXTENSION[] = {
  (ASN1_CTYPE_OBJECT_CLASS << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x0,
  4,

  0x1,
  (intptr_t)asn1_type_ProtocolExtensionID,
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
  (intptr_t)"RANAP-PROTOCOL-EXTENSION",
};

const ASN1CType asn1_type_RANAP_PRIVATE_IES[] = {
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
  (intptr_t)"RANAP-PRIVATE-IES",
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
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_3),
  (intptr_t)asn1_type_ProtocolIE_Field_3,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_4[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
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
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_7),
  (intptr_t)asn1_type_ProtocolIE_Field_7,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_8[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
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
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
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
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_13),
  (intptr_t)asn1_type_ProtocolIE_Field_13,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_14[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
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

const ASN1CType asn1_type_ProtocolIE_Container_19[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_19),
  (intptr_t)asn1_type_ProtocolIE_Field_19,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_20[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_20),
  (intptr_t)asn1_type_ProtocolIE_Field_20,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_21[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_21),
  (intptr_t)asn1_type_ProtocolIE_Field_21,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_22[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_22),
  (intptr_t)asn1_type_ProtocolIE_Field_22,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_23[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_23),
  (intptr_t)asn1_type_ProtocolIE_Field_23,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_24[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_24),
  (intptr_t)asn1_type_ProtocolIE_Field_24,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_25[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_25),
  (intptr_t)asn1_type_ProtocolIE_Field_25,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_26[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_26),
  (intptr_t)asn1_type_ProtocolIE_Field_26,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_27[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_27),
  (intptr_t)asn1_type_ProtocolIE_Field_27,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_28[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_28),
  (intptr_t)asn1_type_ProtocolIE_Field_28,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_29[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_29),
  (intptr_t)asn1_type_ProtocolIE_Field_29,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_30[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_30),
  (intptr_t)asn1_type_ProtocolIE_Field_30,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_31[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_31),
  (intptr_t)asn1_type_ProtocolIE_Field_31,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_32[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_32),
  (intptr_t)asn1_type_ProtocolIE_Field_32,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_33[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_33),
  (intptr_t)asn1_type_ProtocolIE_Field_33,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_34[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_34),
  (intptr_t)asn1_type_ProtocolIE_Field_34,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_35[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_35),
  (intptr_t)asn1_type_ProtocolIE_Field_35,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_36[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_36),
  (intptr_t)asn1_type_ProtocolIE_Field_36,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_37[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_37),
  (intptr_t)asn1_type_ProtocolIE_Field_37,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_38[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_38),
  (intptr_t)asn1_type_ProtocolIE_Field_38,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_39[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_39),
  (intptr_t)asn1_type_ProtocolIE_Field_39,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_40[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_40),
  (intptr_t)asn1_type_ProtocolIE_Field_40,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_41[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_41),
  (intptr_t)asn1_type_ProtocolIE_Field_41,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_42[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_42),
  (intptr_t)asn1_type_ProtocolIE_Field_42,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_43[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_43),
  (intptr_t)asn1_type_ProtocolIE_Field_43,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_44[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_44),
  (intptr_t)asn1_type_ProtocolIE_Field_44,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_45[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_45),
  (intptr_t)asn1_type_ProtocolIE_Field_45,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_46[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_46),
  (intptr_t)asn1_type_ProtocolIE_Field_46,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_47[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_47),
  (intptr_t)asn1_type_ProtocolIE_Field_47,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_48[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_48),
  (intptr_t)asn1_type_ProtocolIE_Field_48,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_49[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_49),
  (intptr_t)asn1_type_ProtocolIE_Field_49,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_50[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_50),
  (intptr_t)asn1_type_ProtocolIE_Field_50,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_51[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_51),
  (intptr_t)asn1_type_ProtocolIE_Field_51,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_52[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_52),
  (intptr_t)asn1_type_ProtocolIE_Field_52,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_53[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_53),
  (intptr_t)asn1_type_ProtocolIE_Field_53,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_54[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_54),
  (intptr_t)asn1_type_ProtocolIE_Field_54,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_55[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_55),
  (intptr_t)asn1_type_ProtocolIE_Field_55,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_56[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_57),
  (intptr_t)asn1_type_ProtocolIE_Field_57,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_57[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_58),
  (intptr_t)asn1_type_ProtocolIE_Field_58,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_58[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_59),
  (intptr_t)asn1_type_ProtocolIE_Field_59,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_59[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_60),
  (intptr_t)asn1_type_ProtocolIE_Field_60,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_60[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_61),
  (intptr_t)asn1_type_ProtocolIE_Field_61,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_61[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_62),
  (intptr_t)asn1_type_ProtocolIE_Field_62,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_62[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_63),
  (intptr_t)asn1_type_ProtocolIE_Field_63,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_63[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_64),
  (intptr_t)asn1_type_ProtocolIE_Field_64,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_64[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_65),
  (intptr_t)asn1_type_ProtocolIE_Field_65,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_65[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_66),
  (intptr_t)asn1_type_ProtocolIE_Field_66,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_66[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_67),
  (intptr_t)asn1_type_ProtocolIE_Field_67,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_67[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_68),
  (intptr_t)asn1_type_ProtocolIE_Field_68,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_68[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_69),
  (intptr_t)asn1_type_ProtocolIE_Field_69,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_69[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_70),
  (intptr_t)asn1_type_ProtocolIE_Field_70,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_70[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_71),
  (intptr_t)asn1_type_ProtocolIE_Field_71,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_71[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_72),
  (intptr_t)asn1_type_ProtocolIE_Field_72,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_72[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_73),
  (intptr_t)asn1_type_ProtocolIE_Field_73,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_73[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_74),
  (intptr_t)asn1_type_ProtocolIE_Field_74,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_74[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_75),
  (intptr_t)asn1_type_ProtocolIE_Field_75,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_75[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_76),
  (intptr_t)asn1_type_ProtocolIE_Field_76,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_76[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_77),
  (intptr_t)asn1_type_ProtocolIE_Field_77,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_77[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_78),
  (intptr_t)asn1_type_ProtocolIE_Field_78,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_78[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_79),
  (intptr_t)asn1_type_ProtocolIE_Field_79,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_79[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_80),
  (intptr_t)asn1_type_ProtocolIE_Field_80,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_80[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_81),
  (intptr_t)asn1_type_ProtocolIE_Field_81,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_81[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_82),
  (intptr_t)asn1_type_ProtocolIE_Field_82,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_82[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_83),
  (intptr_t)asn1_type_ProtocolIE_Field_83,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_83[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_84),
  (intptr_t)asn1_type_ProtocolIE_Field_84,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_84[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_85),
  (intptr_t)asn1_type_ProtocolIE_Field_85,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_85[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_86),
  (intptr_t)asn1_type_ProtocolIE_Field_86,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_86[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_87),
  (intptr_t)asn1_type_ProtocolIE_Field_87,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_87[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_88),
  (intptr_t)asn1_type_ProtocolIE_Field_88,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_88[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_89),
  (intptr_t)asn1_type_ProtocolIE_Field_89,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_89[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_90),
  (intptr_t)asn1_type_ProtocolIE_Field_90,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_90[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_91),
  (intptr_t)asn1_type_ProtocolIE_Field_91,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_91[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_92),
  (intptr_t)asn1_type_ProtocolIE_Field_92,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_92[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_93),
  (intptr_t)asn1_type_ProtocolIE_Field_93,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_93[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_94),
  (intptr_t)asn1_type_ProtocolIE_Field_94,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_94[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_95),
  (intptr_t)asn1_type_ProtocolIE_Field_95,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_95[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_96),
  (intptr_t)asn1_type_ProtocolIE_Field_96,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_96[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_97),
  (intptr_t)asn1_type_ProtocolIE_Field_97,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_97[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_98),
  (intptr_t)asn1_type_ProtocolIE_Field_98,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_98[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_99),
  (intptr_t)asn1_type_ProtocolIE_Field_99,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_99[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_100),
  (intptr_t)asn1_type_ProtocolIE_Field_100,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_100[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_101),
  (intptr_t)asn1_type_ProtocolIE_Field_101,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_101[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_102),
  (intptr_t)asn1_type_ProtocolIE_Field_102,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_102[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_103),
  (intptr_t)asn1_type_ProtocolIE_Field_103,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_103[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_104),
  (intptr_t)asn1_type_ProtocolIE_Field_104,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_104[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_105),
  (intptr_t)asn1_type_ProtocolIE_Field_105,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_105[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_106),
  (intptr_t)asn1_type_ProtocolIE_Field_106,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_106[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_107),
  (intptr_t)asn1_type_ProtocolIE_Field_107,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_107[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_108),
  (intptr_t)asn1_type_ProtocolIE_Field_108,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_108[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_109),
  (intptr_t)asn1_type_ProtocolIE_Field_109,
  0,
};

const ASN1CType asn1_type_ProtocolIE_Container_109[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_110),
  (intptr_t)asn1_type_ProtocolIE_Field_110,
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

static const ProtocolIE_ID asn1_value__local_7 = 4;

static const Criticality asn1_value__local_8 = 1;

static const Presence asn1_value__local_9 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_6[] = {
{
  (intptr_t)&asn1_value__local_7,
  (intptr_t)&asn1_value__local_8,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_9,
},
};

static const ASN1CType asn1_constraint__local_5[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_6,
  1,
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

static const ASN1CType asn1_type__local_10[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_11[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_15 = 31;

static const Criticality asn1_value__local_16 = 1;

static const Presence asn1_value__local_17 = 0;

static const ProtocolIE_ID asn1_value__local_18 = 44;

static const Criticality asn1_value__local_19 = 1;

static const Presence asn1_value__local_20 = 0;

static const ProtocolIE_ID asn1_value__local_21 = 9;

static const Criticality asn1_value__local_22 = 1;

static const Presence asn1_value__local_23 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_14[] = {
{
  (intptr_t)&asn1_value__local_15,
  (intptr_t)&asn1_value__local_16,
  (intptr_t)asn1_type_RAB_DataVolumeReportList,
  (intptr_t)&asn1_value__local_17,
},
{
  (intptr_t)&asn1_value__local_18,
  (intptr_t)&asn1_value__local_19,
  (intptr_t)asn1_type_RAB_ReleasedList_IuRelComp,
  (intptr_t)&asn1_value__local_20,
},
{
  (intptr_t)&asn1_value__local_21,
  (intptr_t)&asn1_value__local_22,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_23,
},
};

static const ASN1CType asn1_constraint__local_13[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_14,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_12[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_13,
};

const ASN1CType asn1_type_ProtocolIE_Field_2[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_2),

  offsetof(ProtocolIE_Field_2, id) | 0x0,
  (intptr_t)asn1_type__local_10,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_2, criticality) | 0x0,
  (intptr_t)asn1_type__local_11,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_2, value) | 0x0,
  (intptr_t)asn1_type__local_12,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_24[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_25[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_29 = 30;

static const Criticality asn1_value__local_30 = 1;

static const Presence asn1_value__local_31 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_28[] = {
{
  (intptr_t)&asn1_value__local_29,
  (intptr_t)&asn1_value__local_30,
  (intptr_t)asn1_type_RAB_DataVolumeReportItem,
  (intptr_t)&asn1_value__local_31,
},
};

static const ASN1CType asn1_constraint__local_27[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_28,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_26[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_27,
};

const ASN1CType asn1_type_ProtocolIE_Field_3[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_3),

  offsetof(ProtocolIE_Field_3, id) | 0x0,
  (intptr_t)asn1_type__local_24,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_3, criticality) | 0x0,
  (intptr_t)asn1_type__local_25,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_3, value) | 0x0,
  (intptr_t)asn1_type__local_26,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_32[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_33[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_37 = 87;

static const Criticality asn1_value__local_38 = 1;

static const Presence asn1_value__local_39 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_36[] = {
{
  (intptr_t)&asn1_value__local_37,
  (intptr_t)&asn1_value__local_38,
  (intptr_t)asn1_type_RAB_ReleasedItem_IuRelComp,
  (intptr_t)&asn1_value__local_39,
},
};

static const ASN1CType asn1_constraint__local_35[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_36,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_34[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_35,
};

const ASN1CType asn1_type_ProtocolIE_Field_4[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_4),

  offsetof(ProtocolIE_Field_4, id) | 0x0,
  (intptr_t)asn1_type__local_32,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_4, criticality) | 0x0,
  (intptr_t)asn1_type__local_33,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_4, value) | 0x0,
  (intptr_t)asn1_type__local_34,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_40[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_41[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_45 = 56;

static const Criticality asn1_value__local_46 = 0;

static const Presence asn1_value__local_47 = 2;

static const ProtocolIE_ID asn1_value__local_48 = 4;

static const Criticality asn1_value__local_49 = 1;

static const Presence asn1_value__local_50 = 2;

static const ProtocolIE_ID asn1_value__local_51 = 60;

static const Criticality asn1_value__local_52 = 1;

static const Presence asn1_value__local_53 = 2;

static const ProtocolIE_ID asn1_value__local_54 = 62;

static const Criticality asn1_value__local_55 = 0;

static const Presence asn1_value__local_56 = 2;

static const ProtocolIE_ID asn1_value__local_57 = 7;

static const Criticality asn1_value__local_58 = 0;

static const Presence asn1_value__local_59 = 1;

static const ProtocolIE_ID asn1_value__local_60 = 8;

static const Criticality asn1_value__local_61 = 1;

static const Presence asn1_value__local_62 = 1;

static const ProtocolIE_ID asn1_value__local_63 = 61;

static const Criticality asn1_value__local_64 = 0;

static const Presence asn1_value__local_65 = 1;

static const ProtocolIE_ID asn1_value__local_66 = 20;

static const Criticality asn1_value__local_67 = 1;

static const Presence asn1_value__local_68 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_44[] = {
{
  (intptr_t)&asn1_value__local_45,
  (intptr_t)&asn1_value__local_46,
  (intptr_t)asn1_type_RelocationType,
  (intptr_t)&asn1_value__local_47,
},
{
  (intptr_t)&asn1_value__local_48,
  (intptr_t)&asn1_value__local_49,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_50,
},
{
  (intptr_t)&asn1_value__local_51,
  (intptr_t)&asn1_value__local_52,
  (intptr_t)asn1_type_SourceID,
  (intptr_t)&asn1_value__local_53,
},
{
  (intptr_t)&asn1_value__local_54,
  (intptr_t)&asn1_value__local_55,
  (intptr_t)asn1_type_TargetID,
  (intptr_t)&asn1_value__local_56,
},
{
  (intptr_t)&asn1_value__local_57,
  (intptr_t)&asn1_value__local_58,
  (intptr_t)asn1_type_ClassmarkInformation2,
  (intptr_t)&asn1_value__local_59,
},
{
  (intptr_t)&asn1_value__local_60,
  (intptr_t)&asn1_value__local_61,
  (intptr_t)asn1_type_ClassmarkInformation3,
  (intptr_t)&asn1_value__local_62,
},
{
  (intptr_t)&asn1_value__local_63,
  (intptr_t)&asn1_value__local_64,
  (intptr_t)asn1_type_Source_ToTarget_TransparentContainer,
  (intptr_t)&asn1_value__local_65,
},
{
  (intptr_t)&asn1_value__local_66,
  (intptr_t)&asn1_value__local_67,
  (intptr_t)asn1_type_OldBSS_ToNewBSS_Information,
  (intptr_t)&asn1_value__local_68,
},
};

static const ASN1CType asn1_constraint__local_43[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_44,
  8,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_42[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_43,
};

const ASN1CType asn1_type_ProtocolIE_Field_5[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_5),

  offsetof(ProtocolIE_Field_5, id) | 0x0,
  (intptr_t)asn1_type__local_40,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_5, criticality) | 0x0,
  (intptr_t)asn1_type__local_41,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_5, value) | 0x0,
  (intptr_t)asn1_type__local_42,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_69[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_70[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_74 = 63;

static const Criticality asn1_value__local_75 = 0;

static const Presence asn1_value__local_76 = 0;

static const ProtocolIE_ID asn1_value__local_77 = 14;

static const Criticality asn1_value__local_78 = 1;

static const Presence asn1_value__local_79 = 0;

static const ProtocolIE_ID asn1_value__local_80 = 46;

static const Criticality asn1_value__local_81 = 1;

static const Presence asn1_value__local_82 = 0;

static const ProtocolIE_ID asn1_value__local_83 = 28;

static const Criticality asn1_value__local_84 = 1;

static const Presence asn1_value__local_85 = 0;

static const ProtocolIE_ID asn1_value__local_86 = 9;

static const Criticality asn1_value__local_87 = 1;

static const Presence asn1_value__local_88 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_73[] = {
{
  (intptr_t)&asn1_value__local_74,
  (intptr_t)&asn1_value__local_75,
  (intptr_t)asn1_type_Target_ToSource_TransparentContainer,
  (intptr_t)&asn1_value__local_76,
},
{
  (intptr_t)&asn1_value__local_77,
  (intptr_t)&asn1_value__local_78,
  (intptr_t)asn1_type_L3_Information,
  (intptr_t)&asn1_value__local_79,
},
{
  (intptr_t)&asn1_value__local_80,
  (intptr_t)&asn1_value__local_81,
  (intptr_t)asn1_type_RAB_RelocationReleaseList,
  (intptr_t)&asn1_value__local_82,
},
{
  (intptr_t)&asn1_value__local_83,
  (intptr_t)&asn1_value__local_84,
  (intptr_t)asn1_type_RAB_DataForwardingList,
  (intptr_t)&asn1_value__local_85,
},
{
  (intptr_t)&asn1_value__local_86,
  (intptr_t)&asn1_value__local_87,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_88,
},
};

static const ASN1CType asn1_constraint__local_72[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_73,
  5,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_71[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_72,
};

const ASN1CType asn1_type_ProtocolIE_Field_6[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_6),

  offsetof(ProtocolIE_Field_6, id) | 0x0,
  (intptr_t)asn1_type__local_69,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_6, criticality) | 0x0,
  (intptr_t)asn1_type__local_70,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_6, value) | 0x0,
  (intptr_t)asn1_type__local_71,
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

static const ProtocolIE_ID asn1_value__local_94 = 45;

static const Criticality asn1_value__local_95 = 1;

static const Presence asn1_value__local_96 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_93[] = {
{
  (intptr_t)&asn1_value__local_94,
  (intptr_t)&asn1_value__local_95,
  (intptr_t)asn1_type_RAB_RelocationReleaseItem,
  (intptr_t)&asn1_value__local_96,
},
};

static const ASN1CType asn1_constraint__local_92[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_93,
  1,
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

static const ASN1CType asn1_type__local_97[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_98[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_102 = 26;

static const Criticality asn1_value__local_103 = 1;

static const Presence asn1_value__local_104 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_101[] = {
{
  (intptr_t)&asn1_value__local_102,
  (intptr_t)&asn1_value__local_103,
  (intptr_t)asn1_type_RAB_DataForwardingItem,
  (intptr_t)&asn1_value__local_104,
},
};

static const ASN1CType asn1_constraint__local_100[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_101,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_99[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_100,
};

const ASN1CType asn1_type_ProtocolIE_Field_8[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_8),

  offsetof(ProtocolIE_Field_8, id) | 0x0,
  (intptr_t)asn1_type__local_97,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_8, criticality) | 0x0,
  (intptr_t)asn1_type__local_98,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_8, value) | 0x0,
  (intptr_t)asn1_type__local_99,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_105[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_106[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_110 = 4;

static const Criticality asn1_value__local_111 = 1;

static const Presence asn1_value__local_112 = 2;

static const ProtocolIE_ID asn1_value__local_113 = 9;

static const Criticality asn1_value__local_114 = 1;

static const Presence asn1_value__local_115 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_109[] = {
{
  (intptr_t)&asn1_value__local_110,
  (intptr_t)&asn1_value__local_111,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_112,
},
{
  (intptr_t)&asn1_value__local_113,
  (intptr_t)&asn1_value__local_114,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_115,
},
};

static const ASN1CType asn1_constraint__local_108[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_109,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_107[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_108,
};

const ASN1CType asn1_type_ProtocolIE_Field_9[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_9),

  offsetof(ProtocolIE_Field_9, id) | 0x0,
  (intptr_t)asn1_type__local_105,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_9, criticality) | 0x0,
  (intptr_t)asn1_type__local_106,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_9, value) | 0x0,
  (intptr_t)asn1_type__local_107,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_116[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_117[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_121 = 23;

static const Criticality asn1_value__local_122 = 1;

static const Presence asn1_value__local_123 = 0;

static const ProtocolIE_ID asn1_value__local_124 = 4;

static const Criticality asn1_value__local_125 = 1;

static const Presence asn1_value__local_126 = 2;

static const ProtocolIE_ID asn1_value__local_127 = 3;

static const Criticality asn1_value__local_128 = 0;

static const Presence asn1_value__local_129 = 2;

static const ProtocolIE_ID asn1_value__local_130 = 61;

static const Criticality asn1_value__local_131 = 0;

static const Presence asn1_value__local_132 = 2;

static const ProtocolIE_ID asn1_value__local_133 = 49;

static const Criticality asn1_value__local_134 = 0;

static const Presence asn1_value__local_135 = 0;

static const ProtocolIE_ID asn1_value__local_136 = 12;

static const Criticality asn1_value__local_137 = 1;

static const Presence asn1_value__local_138 = 0;

static const ProtocolIE_ID asn1_value__local_139 = 11;

static const Criticality asn1_value__local_140 = 1;

static const Presence asn1_value__local_141 = 0;

static const ProtocolIE_ID asn1_value__local_142 = 79;

static const Criticality asn1_value__local_143 = 1;

static const Presence asn1_value__local_144 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_120[] = {
{
  (intptr_t)&asn1_value__local_121,
  (intptr_t)&asn1_value__local_122,
  (intptr_t)asn1_type_PermanentNAS_UE_ID,
  (intptr_t)&asn1_value__local_123,
},
{
  (intptr_t)&asn1_value__local_124,
  (intptr_t)&asn1_value__local_125,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_126,
},
{
  (intptr_t)&asn1_value__local_127,
  (intptr_t)&asn1_value__local_128,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_129,
},
{
  (intptr_t)&asn1_value__local_130,
  (intptr_t)&asn1_value__local_131,
  (intptr_t)asn1_type_SourceRNC_ToTargetRNC_TransparentContainer,
  (intptr_t)&asn1_value__local_132,
},
{
  (intptr_t)&asn1_value__local_133,
  (intptr_t)&asn1_value__local_134,
  (intptr_t)asn1_type_RAB_SetupList_RelocReq,
  (intptr_t)&asn1_value__local_135,
},
{
  (intptr_t)&asn1_value__local_136,
  (intptr_t)&asn1_value__local_137,
  (intptr_t)asn1_type_IntegrityProtectionInformation,
  (intptr_t)&asn1_value__local_138,
},
{
  (intptr_t)&asn1_value__local_139,
  (intptr_t)&asn1_value__local_140,
  (intptr_t)asn1_type_EncryptionInformation,
  (intptr_t)&asn1_value__local_141,
},
{
  (intptr_t)&asn1_value__local_142,
  (intptr_t)&asn1_value__local_143,
  (intptr_t)asn1_type_IuSignallingConnectionIdentifier,
  (intptr_t)&asn1_value__local_144,
},
};

static const ASN1CType asn1_constraint__local_119[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_120,
  8,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_118[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_119,
};

const ASN1CType asn1_type_ProtocolIE_Field_10[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_10),

  offsetof(ProtocolIE_Field_10, id) | 0x0,
  (intptr_t)asn1_type__local_116,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_10, criticality) | 0x0,
  (intptr_t)asn1_type__local_117,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_10, value) | 0x0,
  (intptr_t)asn1_type__local_118,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_145[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_146[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_150 = 47;

static const Criticality asn1_value__local_151 = 0;

static const Presence asn1_value__local_152 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_149[] = {
{
  (intptr_t)&asn1_value__local_150,
  (intptr_t)&asn1_value__local_151,
  (intptr_t)asn1_type_RAB_SetupItem_RelocReq,
  (intptr_t)&asn1_value__local_152,
},
};

static const ASN1CType asn1_constraint__local_148[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_149,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_147[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_148,
};

const ASN1CType asn1_type_ProtocolIE_Field_11[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_11),

  offsetof(ProtocolIE_Field_11, id) | 0x0,
  (intptr_t)asn1_type__local_145,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_11, criticality) | 0x0,
  (intptr_t)asn1_type__local_146,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_11, value) | 0x0,
  (intptr_t)asn1_type__local_147,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_153[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_154[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_158 = 63;

static const Criticality asn1_value__local_159 = 1;

static const Presence asn1_value__local_160 = 0;

static const ProtocolIE_ID asn1_value__local_161 = 50;

static const Criticality asn1_value__local_162 = 1;

static const Presence asn1_value__local_163 = 0;

static const ProtocolIE_ID asn1_value__local_164 = 35;

static const Criticality asn1_value__local_165 = 1;

static const Presence asn1_value__local_166 = 0;

static const ProtocolIE_ID asn1_value__local_167 = 6;

static const Criticality asn1_value__local_168 = 1;

static const Presence asn1_value__local_169 = 0;

static const ProtocolIE_ID asn1_value__local_170 = 5;

static const Criticality asn1_value__local_171 = 1;

static const Presence asn1_value__local_172 = 0;

static const ProtocolIE_ID asn1_value__local_173 = 9;

static const Criticality asn1_value__local_174 = 1;

static const Presence asn1_value__local_175 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_157[] = {
{
  (intptr_t)&asn1_value__local_158,
  (intptr_t)&asn1_value__local_159,
  (intptr_t)asn1_type_TargetRNC_ToSourceRNC_TransparentContainer,
  (intptr_t)&asn1_value__local_160,
},
{
  (intptr_t)&asn1_value__local_161,
  (intptr_t)&asn1_value__local_162,
  (intptr_t)asn1_type_RAB_SetupList_RelocReqAck,
  (intptr_t)&asn1_value__local_163,
},
{
  (intptr_t)&asn1_value__local_164,
  (intptr_t)&asn1_value__local_165,
  (intptr_t)asn1_type_RAB_FailedList,
  (intptr_t)&asn1_value__local_166,
},
{
  (intptr_t)&asn1_value__local_167,
  (intptr_t)&asn1_value__local_168,
  (intptr_t)asn1_type_ChosenIntegrityProtectionAlgorithm,
  (intptr_t)&asn1_value__local_169,
},
{
  (intptr_t)&asn1_value__local_170,
  (intptr_t)&asn1_value__local_171,
  (intptr_t)asn1_type_ChosenEncryptionAlgorithm,
  (intptr_t)&asn1_value__local_172,
},
{
  (intptr_t)&asn1_value__local_173,
  (intptr_t)&asn1_value__local_174,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_175,
},
};

static const ASN1CType asn1_constraint__local_156[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_157,
  6,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_155[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_156,
};

const ASN1CType asn1_type_ProtocolIE_Field_12[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_12),

  offsetof(ProtocolIE_Field_12, id) | 0x0,
  (intptr_t)asn1_type__local_153,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_12, criticality) | 0x0,
  (intptr_t)asn1_type__local_154,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_12, value) | 0x0,
  (intptr_t)asn1_type__local_155,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_176[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_177[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_181 = 48;

static const Criticality asn1_value__local_182 = 0;

static const Presence asn1_value__local_183 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_180[] = {
{
  (intptr_t)&asn1_value__local_181,
  (intptr_t)&asn1_value__local_182,
  (intptr_t)asn1_type_RAB_SetupItem_RelocReqAck,
  (intptr_t)&asn1_value__local_183,
},
};

static const ASN1CType asn1_constraint__local_179[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_180,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_178[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_179,
};

const ASN1CType asn1_type_ProtocolIE_Field_13[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_13),

  offsetof(ProtocolIE_Field_13, id) | 0x0,
  (intptr_t)asn1_type__local_176,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_13, criticality) | 0x0,
  (intptr_t)asn1_type__local_177,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_13, value) | 0x0,
  (intptr_t)asn1_type__local_178,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_184[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_185[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_189 = 34;

static const Criticality asn1_value__local_190 = 1;

static const Presence asn1_value__local_191 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_188[] = {
{
  (intptr_t)&asn1_value__local_189,
  (intptr_t)&asn1_value__local_190,
  (intptr_t)asn1_type_RAB_FailedItem,
  (intptr_t)&asn1_value__local_191,
},
};

static const ASN1CType asn1_constraint__local_187[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_188,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_186[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_187,
};

const ASN1CType asn1_type_ProtocolIE_Field_14[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_14),

  offsetof(ProtocolIE_Field_14, id) | 0x0,
  (intptr_t)asn1_type__local_184,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_14, criticality) | 0x0,
  (intptr_t)asn1_type__local_185,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_14, value) | 0x0,
  (intptr_t)asn1_type__local_186,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_192[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_193[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_197 = 4;

static const Criticality asn1_value__local_198 = 1;

static const Presence asn1_value__local_199 = 2;

static const ProtocolIE_ID asn1_value__local_200 = 9;

static const Criticality asn1_value__local_201 = 1;

static const Presence asn1_value__local_202 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_196[] = {
{
  (intptr_t)&asn1_value__local_197,
  (intptr_t)&asn1_value__local_198,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_199,
},
{
  (intptr_t)&asn1_value__local_200,
  (intptr_t)&asn1_value__local_201,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_202,
},
};

static const ASN1CType asn1_constraint__local_195[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_196,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_194[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_195,
};

const ASN1CType asn1_type_ProtocolIE_Field_15[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_15),

  offsetof(ProtocolIE_Field_15, id) | 0x0,
  (intptr_t)asn1_type__local_192,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_15, criticality) | 0x0,
  (intptr_t)asn1_type__local_193,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_15, value) | 0x0,
  (intptr_t)asn1_type__local_194,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_203[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_204[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_208 = 4;

static const Criticality asn1_value__local_209 = 1;

static const Presence asn1_value__local_210 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_207[] = {
{
  (intptr_t)&asn1_value__local_208,
  (intptr_t)&asn1_value__local_209,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_210,
},
};

static const ASN1CType asn1_constraint__local_206[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_207,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_205[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_206,
};

const ASN1CType asn1_type_ProtocolIE_Field_16[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_16),

  offsetof(ProtocolIE_Field_16, id) | 0x0,
  (intptr_t)asn1_type__local_203,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_16, criticality) | 0x0,
  (intptr_t)asn1_type__local_204,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_16, value) | 0x0,
  (intptr_t)asn1_type__local_205,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_211[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_212[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_216 = 9;

static const Criticality asn1_value__local_217 = 1;

static const Presence asn1_value__local_218 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_215[] = {
{
  (intptr_t)&asn1_value__local_216,
  (intptr_t)&asn1_value__local_217,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_218,
},
};

static const ASN1CType asn1_constraint__local_214[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_215,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_213[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_214,
};

const ASN1CType asn1_type_ProtocolIE_Field_17[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_17),

  offsetof(ProtocolIE_Field_17, id) | 0x0,
  (intptr_t)asn1_type__local_211,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_17, criticality) | 0x0,
  (intptr_t)asn1_type__local_212,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_17, value) | 0x0,
  (intptr_t)asn1_type__local_213,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_219[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_220[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_224 = 29;

static const Criticality asn1_value__local_225 = 1;

static const Presence asn1_value__local_226 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_223[] = {
{
  (intptr_t)&asn1_value__local_224,
  (intptr_t)&asn1_value__local_225,
  (intptr_t)asn1_type_RAB_DataForwardingList_SRNS_CtxReq,
  (intptr_t)&asn1_value__local_226,
},
};

static const ASN1CType asn1_constraint__local_222[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_223,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_221[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_222,
};

const ASN1CType asn1_type_ProtocolIE_Field_18[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_18),

  offsetof(ProtocolIE_Field_18, id) | 0x0,
  (intptr_t)asn1_type__local_219,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_18, criticality) | 0x0,
  (intptr_t)asn1_type__local_220,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_18, value) | 0x0,
  (intptr_t)asn1_type__local_221,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_227[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_228[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_232 = 27;

static const Criticality asn1_value__local_233 = 0;

static const Presence asn1_value__local_234 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_231[] = {
{
  (intptr_t)&asn1_value__local_232,
  (intptr_t)&asn1_value__local_233,
  (intptr_t)asn1_type_RAB_DataForwardingItem_SRNS_CtxReq,
  (intptr_t)&asn1_value__local_234,
},
};

static const ASN1CType asn1_constraint__local_230[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_231,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_229[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_230,
};

const ASN1CType asn1_type_ProtocolIE_Field_19[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_19),

  offsetof(ProtocolIE_Field_19, id) | 0x0,
  (intptr_t)asn1_type__local_227,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_19, criticality) | 0x0,
  (intptr_t)asn1_type__local_228,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_19, value) | 0x0,
  (intptr_t)asn1_type__local_229,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_235[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_236[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_240 = 25;

static const Criticality asn1_value__local_241 = 1;

static const Presence asn1_value__local_242 = 0;

static const ProtocolIE_ID asn1_value__local_243 = 85;

static const Criticality asn1_value__local_244 = 1;

static const Presence asn1_value__local_245 = 0;

static const ProtocolIE_ID asn1_value__local_246 = 9;

static const Criticality asn1_value__local_247 = 1;

static const Presence asn1_value__local_248 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_239[] = {
{
  (intptr_t)&asn1_value__local_240,
  (intptr_t)&asn1_value__local_241,
  (intptr_t)asn1_type_RAB_ContextList,
  (intptr_t)&asn1_value__local_242,
},
{
  (intptr_t)&asn1_value__local_243,
  (intptr_t)&asn1_value__local_244,
  (intptr_t)asn1_type_RAB_ContextFailedtoTransferList,
  (intptr_t)&asn1_value__local_245,
},
{
  (intptr_t)&asn1_value__local_246,
  (intptr_t)&asn1_value__local_247,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_248,
},
};

static const ASN1CType asn1_constraint__local_238[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_239,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_237[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_238,
};

const ASN1CType asn1_type_ProtocolIE_Field_20[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_20),

  offsetof(ProtocolIE_Field_20, id) | 0x0,
  (intptr_t)asn1_type__local_235,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_20, criticality) | 0x0,
  (intptr_t)asn1_type__local_236,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_20, value) | 0x0,
  (intptr_t)asn1_type__local_237,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_249[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_250[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_254 = 24;

static const Criticality asn1_value__local_255 = 1;

static const Presence asn1_value__local_256 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_253[] = {
{
  (intptr_t)&asn1_value__local_254,
  (intptr_t)&asn1_value__local_255,
  (intptr_t)asn1_type_RAB_ContextItem,
  (intptr_t)&asn1_value__local_256,
},
};

static const ASN1CType asn1_constraint__local_252[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_253,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_251[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_252,
};

const ASN1CType asn1_type_ProtocolIE_Field_21[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_21),

  offsetof(ProtocolIE_Field_21, id) | 0x0,
  (intptr_t)asn1_type__local_249,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_21, criticality) | 0x0,
  (intptr_t)asn1_type__local_250,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_21, value) | 0x0,
  (intptr_t)asn1_type__local_251,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_257[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_258[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_262 = 84;

static const Criticality asn1_value__local_263 = 1;

static const Presence asn1_value__local_264 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_261[] = {
{
  (intptr_t)&asn1_value__local_262,
  (intptr_t)&asn1_value__local_263,
  (intptr_t)asn1_type_RABs_ContextFailedtoTransferItem,
  (intptr_t)&asn1_value__local_264,
},
};

static const ASN1CType asn1_constraint__local_260[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_261,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_259[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_260,
};

const ASN1CType asn1_type_ProtocolIE_Field_22[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_22),

  offsetof(ProtocolIE_Field_22, id) | 0x0,
  (intptr_t)asn1_type__local_257,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_22, criticality) | 0x0,
  (intptr_t)asn1_type__local_258,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_22, value) | 0x0,
  (intptr_t)asn1_type__local_259,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_265[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_266[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_270 = 12;

static const Criticality asn1_value__local_271 = 0;

static const Presence asn1_value__local_272 = 2;

static const ProtocolIE_ID asn1_value__local_273 = 11;

static const Criticality asn1_value__local_274 = 1;

static const Presence asn1_value__local_275 = 0;

static const ProtocolIE_ID asn1_value__local_276 = 75;

static const Criticality asn1_value__local_277 = 0;

static const Presence asn1_value__local_278 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_269[] = {
{
  (intptr_t)&asn1_value__local_270,
  (intptr_t)&asn1_value__local_271,
  (intptr_t)asn1_type_IntegrityProtectionInformation,
  (intptr_t)&asn1_value__local_272,
},
{
  (intptr_t)&asn1_value__local_273,
  (intptr_t)&asn1_value__local_274,
  (intptr_t)asn1_type_EncryptionInformation,
  (intptr_t)&asn1_value__local_275,
},
{
  (intptr_t)&asn1_value__local_276,
  (intptr_t)&asn1_value__local_277,
  (intptr_t)asn1_type_KeyStatus,
  (intptr_t)&asn1_value__local_278,
},
};

static const ASN1CType asn1_constraint__local_268[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_269,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_267[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_268,
};

const ASN1CType asn1_type_ProtocolIE_Field_23[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_23),

  offsetof(ProtocolIE_Field_23, id) | 0x0,
  (intptr_t)asn1_type__local_265,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_23, criticality) | 0x0,
  (intptr_t)asn1_type__local_266,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_23, value) | 0x0,
  (intptr_t)asn1_type__local_267,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_279[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_280[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_284 = 6;

static const Criticality asn1_value__local_285 = 0;

static const Presence asn1_value__local_286 = 2;

static const ProtocolIE_ID asn1_value__local_287 = 5;

static const Criticality asn1_value__local_288 = 1;

static const Presence asn1_value__local_289 = 0;

static const ProtocolIE_ID asn1_value__local_290 = 9;

static const Criticality asn1_value__local_291 = 1;

static const Presence asn1_value__local_292 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_283[] = {
{
  (intptr_t)&asn1_value__local_284,
  (intptr_t)&asn1_value__local_285,
  (intptr_t)asn1_type_ChosenIntegrityProtectionAlgorithm,
  (intptr_t)&asn1_value__local_286,
},
{
  (intptr_t)&asn1_value__local_287,
  (intptr_t)&asn1_value__local_288,
  (intptr_t)asn1_type_ChosenEncryptionAlgorithm,
  (intptr_t)&asn1_value__local_289,
},
{
  (intptr_t)&asn1_value__local_290,
  (intptr_t)&asn1_value__local_291,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_292,
},
};

static const ASN1CType asn1_constraint__local_282[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_283,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_281[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_282,
};

const ASN1CType asn1_type_ProtocolIE_Field_24[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_24),

  offsetof(ProtocolIE_Field_24, id) | 0x0,
  (intptr_t)asn1_type__local_279,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_24, criticality) | 0x0,
  (intptr_t)asn1_type__local_280,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_24, value) | 0x0,
  (intptr_t)asn1_type__local_281,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_293[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_294[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_298 = 4;

static const Criticality asn1_value__local_299 = 1;

static const Presence asn1_value__local_300 = 2;

static const ProtocolIE_ID asn1_value__local_301 = 9;

static const Criticality asn1_value__local_302 = 1;

static const Presence asn1_value__local_303 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_297[] = {
{
  (intptr_t)&asn1_value__local_298,
  (intptr_t)&asn1_value__local_299,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_300,
},
{
  (intptr_t)&asn1_value__local_301,
  (intptr_t)&asn1_value__local_302,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_303,
},
};

static const ASN1CType asn1_constraint__local_296[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_297,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_295[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_296,
};

const ASN1CType asn1_type_ProtocolIE_Field_25[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_25),

  offsetof(ProtocolIE_Field_25, id) | 0x0,
  (intptr_t)asn1_type__local_293,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_25, criticality) | 0x0,
  (intptr_t)asn1_type__local_294,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_25, value) | 0x0,
  (intptr_t)asn1_type__local_295,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_304[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_305[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_309 = 33;

static const Criticality asn1_value__local_310 = 1;

static const Presence asn1_value__local_311 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_308[] = {
{
  (intptr_t)&asn1_value__local_309,
  (intptr_t)&asn1_value__local_310,
  (intptr_t)asn1_type_RAB_DataVolumeReportRequestList,
  (intptr_t)&asn1_value__local_311,
},
};

static const ASN1CType asn1_constraint__local_307[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_308,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_306[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_307,
};

const ASN1CType asn1_type_ProtocolIE_Field_26[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_26),

  offsetof(ProtocolIE_Field_26, id) | 0x0,
  (intptr_t)asn1_type__local_304,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_26, criticality) | 0x0,
  (intptr_t)asn1_type__local_305,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_26, value) | 0x0,
  (intptr_t)asn1_type__local_306,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_312[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_313[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_317 = 32;

static const Criticality asn1_value__local_318 = 0;

static const Presence asn1_value__local_319 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_316[] = {
{
  (intptr_t)&asn1_value__local_317,
  (intptr_t)&asn1_value__local_318,
  (intptr_t)asn1_type_RAB_DataVolumeReportRequestItem,
  (intptr_t)&asn1_value__local_319,
},
};

static const ASN1CType asn1_constraint__local_315[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_316,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_314[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_315,
};

const ASN1CType asn1_type_ProtocolIE_Field_27[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_27),

  offsetof(ProtocolIE_Field_27, id) | 0x0,
  (intptr_t)asn1_type__local_312,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_27, criticality) | 0x0,
  (intptr_t)asn1_type__local_313,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_27, value) | 0x0,
  (intptr_t)asn1_type__local_314,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_320[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_321[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_325 = 31;

static const Criticality asn1_value__local_326 = 1;

static const Presence asn1_value__local_327 = 0;

static const ProtocolIE_ID asn1_value__local_328 = 72;

static const Criticality asn1_value__local_329 = 1;

static const Presence asn1_value__local_330 = 0;

static const ProtocolIE_ID asn1_value__local_331 = 9;

static const Criticality asn1_value__local_332 = 1;

static const Presence asn1_value__local_333 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_324[] = {
{
  (intptr_t)&asn1_value__local_325,
  (intptr_t)&asn1_value__local_326,
  (intptr_t)asn1_type_RAB_DataVolumeReportList,
  (intptr_t)&asn1_value__local_327,
},
{
  (intptr_t)&asn1_value__local_328,
  (intptr_t)&asn1_value__local_329,
  (intptr_t)asn1_type_RAB_FailedtoReportList,
  (intptr_t)&asn1_value__local_330,
},
{
  (intptr_t)&asn1_value__local_331,
  (intptr_t)&asn1_value__local_332,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_333,
},
};

static const ASN1CType asn1_constraint__local_323[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_324,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_322[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_323,
};

const ASN1CType asn1_type_ProtocolIE_Field_28[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_28),

  offsetof(ProtocolIE_Field_28, id) | 0x0,
  (intptr_t)asn1_type__local_320,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_28, criticality) | 0x0,
  (intptr_t)asn1_type__local_321,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_28, value) | 0x0,
  (intptr_t)asn1_type__local_322,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_334[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_335[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_339 = 71;

static const Criticality asn1_value__local_340 = 1;

static const Presence asn1_value__local_341 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_338[] = {
{
  (intptr_t)&asn1_value__local_339,
  (intptr_t)&asn1_value__local_340,
  (intptr_t)asn1_type_RABs_failed_to_reportItem,
  (intptr_t)&asn1_value__local_341,
},
};

static const ASN1CType asn1_constraint__local_337[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_338,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_336[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_337,
};

const ASN1CType asn1_type_ProtocolIE_Field_29[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_29),

  offsetof(ProtocolIE_Field_29, id) | 0x0,
  (intptr_t)asn1_type__local_334,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_29, criticality) | 0x0,
  (intptr_t)asn1_type__local_335,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_29, value) | 0x0,
  (intptr_t)asn1_type__local_336,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_342[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_343[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_347 = 4;

static const Criticality asn1_value__local_348 = 1;

static const Presence asn1_value__local_349 = 2;

static const ProtocolIE_ID asn1_value__local_350 = 3;

static const Criticality asn1_value__local_351 = 0;

static const Presence asn1_value__local_352 = 2;

static const ProtocolIE_ID asn1_value__local_353 = 86;

static const Criticality asn1_value__local_354 = 1;

static const Presence asn1_value__local_355 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_346[] = {
{
  (intptr_t)&asn1_value__local_347,
  (intptr_t)&asn1_value__local_348,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_349,
},
{
  (intptr_t)&asn1_value__local_350,
  (intptr_t)&asn1_value__local_351,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_352,
},
{
  (intptr_t)&asn1_value__local_353,
  (intptr_t)&asn1_value__local_354,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_355,
},
};

static const ASN1CType asn1_constraint__local_345[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_346,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_344[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_345,
};

const ASN1CType asn1_type_ProtocolIE_Field_30[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_30),

  offsetof(ProtocolIE_Field_30, id) | 0x0,
  (intptr_t)asn1_type__local_342,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_30, criticality) | 0x0,
  (intptr_t)asn1_type__local_343,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_30, value) | 0x0,
  (intptr_t)asn1_type__local_344,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_356[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_357[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_361 = 3;

static const Criticality asn1_value__local_362 = 0;

static const Presence asn1_value__local_363 = 2;

static const ProtocolIE_ID asn1_value__local_364 = 9;

static const Criticality asn1_value__local_365 = 1;

static const Presence asn1_value__local_366 = 0;

static const ProtocolIE_ID asn1_value__local_367 = 86;

static const Criticality asn1_value__local_368 = 1;

static const Presence asn1_value__local_369 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_360[] = {
{
  (intptr_t)&asn1_value__local_361,
  (intptr_t)&asn1_value__local_362,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_363,
},
{
  (intptr_t)&asn1_value__local_364,
  (intptr_t)&asn1_value__local_365,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_366,
},
{
  (intptr_t)&asn1_value__local_367,
  (intptr_t)&asn1_value__local_368,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_369,
},
};

static const ASN1CType asn1_constraint__local_359[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_360,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_358[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_359,
};

const ASN1CType asn1_type_ProtocolIE_Field_31[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_31),

  offsetof(ProtocolIE_Field_31, id) | 0x0,
  (intptr_t)asn1_type__local_356,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_31, criticality) | 0x0,
  (intptr_t)asn1_type__local_357,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_31, value) | 0x0,
  (intptr_t)asn1_type__local_358,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_370[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_371[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_375 = 3;

static const Criticality asn1_value__local_376 = 0;

static const Presence asn1_value__local_377 = 2;

static const ProtocolIE_ID asn1_value__local_378 = 4;

static const Criticality asn1_value__local_379 = 1;

static const Presence asn1_value__local_380 = 2;

static const ProtocolIE_ID asn1_value__local_381 = 77;

static const Criticality asn1_value__local_382 = 1;

static const Presence asn1_value__local_383 = 2;

static const ProtocolIE_ID asn1_value__local_384 = 86;

static const Criticality asn1_value__local_385 = 1;

static const Presence asn1_value__local_386 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_374[] = {
{
  (intptr_t)&asn1_value__local_375,
  (intptr_t)&asn1_value__local_376,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_377,
},
{
  (intptr_t)&asn1_value__local_378,
  (intptr_t)&asn1_value__local_379,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_380,
},
{
  (intptr_t)&asn1_value__local_381,
  (intptr_t)&asn1_value__local_382,
  (intptr_t)asn1_type_ResetResourceList,
  (intptr_t)&asn1_value__local_383,
},
{
  (intptr_t)&asn1_value__local_384,
  (intptr_t)&asn1_value__local_385,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_386,
},
};

static const ASN1CType asn1_constraint__local_373[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_374,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_372[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_373,
};

const ASN1CType asn1_type_ProtocolIE_Field_32[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_32),

  offsetof(ProtocolIE_Field_32, id) | 0x0,
  (intptr_t)asn1_type__local_370,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_32, criticality) | 0x0,
  (intptr_t)asn1_type__local_371,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_32, value) | 0x0,
  (intptr_t)asn1_type__local_372,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_387[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_388[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_392 = 78;

static const Criticality asn1_value__local_393 = 0;

static const Presence asn1_value__local_394 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_391[] = {
{
  (intptr_t)&asn1_value__local_392,
  (intptr_t)&asn1_value__local_393,
  (intptr_t)asn1_type_ResetResourceItem,
  (intptr_t)&asn1_value__local_394,
},
};

static const ASN1CType asn1_constraint__local_390[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_391,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_389[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_390,
};

const ASN1CType asn1_type_ProtocolIE_Field_33[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_33),

  offsetof(ProtocolIE_Field_33, id) | 0x0,
  (intptr_t)asn1_type__local_387,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_33, criticality) | 0x0,
  (intptr_t)asn1_type__local_388,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_33, value) | 0x0,
  (intptr_t)asn1_type__local_389,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_395[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_396[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_400 = 3;

static const Criticality asn1_value__local_401 = 0;

static const Presence asn1_value__local_402 = 2;

static const ProtocolIE_ID asn1_value__local_403 = 77;

static const Criticality asn1_value__local_404 = 1;

static const Presence asn1_value__local_405 = 2;

static const ProtocolIE_ID asn1_value__local_406 = 86;

static const Criticality asn1_value__local_407 = 1;

static const Presence asn1_value__local_408 = 0;

static const ProtocolIE_ID asn1_value__local_409 = 9;

static const Criticality asn1_value__local_410 = 1;

static const Presence asn1_value__local_411 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_399[] = {
{
  (intptr_t)&asn1_value__local_400,
  (intptr_t)&asn1_value__local_401,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_402,
},
{
  (intptr_t)&asn1_value__local_403,
  (intptr_t)&asn1_value__local_404,
  (intptr_t)asn1_type_ResetResourceAckList,
  (intptr_t)&asn1_value__local_405,
},
{
  (intptr_t)&asn1_value__local_406,
  (intptr_t)&asn1_value__local_407,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_408,
},
{
  (intptr_t)&asn1_value__local_409,
  (intptr_t)&asn1_value__local_410,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_411,
},
};

static const ASN1CType asn1_constraint__local_398[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_399,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_397[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_398,
};

const ASN1CType asn1_type_ProtocolIE_Field_34[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_34),

  offsetof(ProtocolIE_Field_34, id) | 0x0,
  (intptr_t)asn1_type__local_395,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_34, criticality) | 0x0,
  (intptr_t)asn1_type__local_396,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_34, value) | 0x0,
  (intptr_t)asn1_type__local_397,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_412[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_413[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_417 = 78;

static const Criticality asn1_value__local_418 = 0;

static const Presence asn1_value__local_419 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_416[] = {
{
  (intptr_t)&asn1_value__local_417,
  (intptr_t)&asn1_value__local_418,
  (intptr_t)asn1_type_ResetResourceAckItem,
  (intptr_t)&asn1_value__local_419,
},
};

static const ASN1CType asn1_constraint__local_415[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_416,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_414[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_415,
};

const ASN1CType asn1_type_ProtocolIE_Field_35[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_35),

  offsetof(ProtocolIE_Field_35, id) | 0x0,
  (intptr_t)asn1_type__local_412,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_35, criticality) | 0x0,
  (intptr_t)asn1_type__local_413,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_35, value) | 0x0,
  (intptr_t)asn1_type__local_414,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_420[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_421[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_425 = 41;

static const Criticality asn1_value__local_426 = 1;

static const Presence asn1_value__local_427 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_424[] = {
{
  (intptr_t)&asn1_value__local_425,
  (intptr_t)&asn1_value__local_426,
  (intptr_t)asn1_type_RAB_ReleaseList,
  (intptr_t)&asn1_value__local_427,
},
};

static const ASN1CType asn1_constraint__local_423[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
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

const ASN1CType asn1_type_ProtocolIE_Field_36[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_36),

  offsetof(ProtocolIE_Field_36, id) | 0x0,
  (intptr_t)asn1_type__local_420,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_36, criticality) | 0x0,
  (intptr_t)asn1_type__local_421,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_36, value) | 0x0,
  (intptr_t)asn1_type__local_422,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_428[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_429[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_433 = 40;

static const Criticality asn1_value__local_434 = 1;

static const Presence asn1_value__local_435 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_432[] = {
{
  (intptr_t)&asn1_value__local_433,
  (intptr_t)&asn1_value__local_434,
  (intptr_t)asn1_type_RAB_ReleaseItem,
  (intptr_t)&asn1_value__local_435,
},
};

static const ASN1CType asn1_constraint__local_431[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_432,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_430[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_431,
};

const ASN1CType asn1_type_ProtocolIE_Field_37[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_37),

  offsetof(ProtocolIE_Field_37, id) | 0x0,
  (intptr_t)asn1_type__local_428,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_37, criticality) | 0x0,
  (intptr_t)asn1_type__local_429,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_37, value) | 0x0,
  (intptr_t)asn1_type__local_430,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_436[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_437[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_441 = 4;

static const Criticality asn1_value__local_442 = 1;

static const Presence asn1_value__local_443 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_440[] = {
{
  (intptr_t)&asn1_value__local_441,
  (intptr_t)&asn1_value__local_442,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_443,
},
};

static const ASN1CType asn1_constraint__local_439[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_440,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_438[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_439,
};

const ASN1CType asn1_type_ProtocolIE_Field_38[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_38),

  offsetof(ProtocolIE_Field_38, id) | 0x0,
  (intptr_t)asn1_type__local_436,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_38, criticality) | 0x0,
  (intptr_t)asn1_type__local_437,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_38, value) | 0x0,
  (intptr_t)asn1_type__local_438,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_444[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_445[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_447[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_446[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_447,
};

const ASN1CType asn1_type_ProtocolIE_Field_39[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_39),

  offsetof(ProtocolIE_Field_39, id) | 0x0,
  (intptr_t)asn1_type__local_444,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_39, criticality) | 0x0,
  (intptr_t)asn1_type__local_445,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_39, value) | 0x0,
  (intptr_t)asn1_type__local_446,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_449[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_450[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_452[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_451[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_452,
};

const ASN1CType asn1_type_ProtocolIE_Field_40[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_40),

  offsetof(ProtocolIE_Field_40, id) | 0x0,
  (intptr_t)asn1_type__local_449,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_40, criticality) | 0x0,
  (intptr_t)asn1_type__local_450,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_40, value) | 0x0,
  (intptr_t)asn1_type__local_451,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_454[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_455[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_459 = 196;

static const Criticality asn1_value__local_460 = 0;

static const Presence asn1_value__local_461 = 2;

static const ProtocolIE_ID asn1_value__local_462 = 79;

static const Criticality asn1_value__local_463 = 0;

static const Presence asn1_value__local_464 = 2;

static const ProtocolIE_ID asn1_value__local_465 = 222;

static const Criticality asn1_value__local_466 = 1;

static const Presence asn1_value__local_467 = 2;

static const ProtocolIE_ID asn1_value__local_468 = 223;

static const Criticality asn1_value__local_469 = 1;

static const Presence asn1_value__local_470 = 0;

static const ProtocolIE_ID asn1_value__local_471 = 212;

static const Criticality asn1_value__local_472 = 0;

static const Presence asn1_value__local_473 = 2;

static const ProtocolIE_ID asn1_value__local_474 = 213;

static const Criticality asn1_value__local_475 = 0;

static const Presence asn1_value__local_476 = 0;

static const ProtocolIE_ID asn1_value__local_477 = 188;

static const Criticality asn1_value__local_478 = 0;

static const Presence asn1_value__local_479 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_458[] = {
{
  (intptr_t)&asn1_value__local_459,
  (intptr_t)&asn1_value__local_460,
  (intptr_t)asn1_type_IuSignallingConnectionIdentifier,
  (intptr_t)&asn1_value__local_461,
},
{
  (intptr_t)&asn1_value__local_462,
  (intptr_t)&asn1_value__local_463,
  (intptr_t)asn1_type_IuSignallingConnectionIdentifier,
  (intptr_t)&asn1_value__local_464,
},
{
  (intptr_t)&asn1_value__local_465,
  (intptr_t)&asn1_value__local_466,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_467,
},
{
  (intptr_t)&asn1_value__local_468,
  (intptr_t)&asn1_value__local_469,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_470,
},
{
  (intptr_t)&asn1_value__local_471,
  (intptr_t)&asn1_value__local_472,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_473,
},
{
  (intptr_t)&asn1_value__local_474,
  (intptr_t)&asn1_value__local_475,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_476,
},
{
  (intptr_t)&asn1_value__local_477,
  (intptr_t)&asn1_value__local_478,
  (intptr_t)asn1_type_RAB_SetupList_EnhancedRelocCompleteReq,
  (intptr_t)&asn1_value__local_479,
},
};

static const ASN1CType asn1_constraint__local_457[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_458,
  7,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_456[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_457,
};

const ASN1CType asn1_type_ProtocolIE_Field_41[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_41),

  offsetof(ProtocolIE_Field_41, id) | 0x0,
  (intptr_t)asn1_type__local_454,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_41, criticality) | 0x0,
  (intptr_t)asn1_type__local_455,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_41, value) | 0x0,
  (intptr_t)asn1_type__local_456,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_480[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_481[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_485 = 189;

static const Criticality asn1_value__local_486 = 0;

static const Presence asn1_value__local_487 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_484[] = {
{
  (intptr_t)&asn1_value__local_485,
  (intptr_t)&asn1_value__local_486,
  (intptr_t)asn1_type_RAB_SetupItem_EnhancedRelocCompleteReq,
  (intptr_t)&asn1_value__local_487,
},
};

static const ASN1CType asn1_constraint__local_483[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_484,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_482[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_483,
};

const ASN1CType asn1_type_ProtocolIE_Field_42[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_42),

  offsetof(ProtocolIE_Field_42, id) | 0x0,
  (intptr_t)asn1_type__local_480,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_42, criticality) | 0x0,
  (intptr_t)asn1_type__local_481,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_42, value) | 0x0,
  (intptr_t)asn1_type__local_482,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_488[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_489[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_493 = 190;

static const Criticality asn1_value__local_494 = 1;

static const Presence asn1_value__local_495 = 0;

static const ProtocolIE_ID asn1_value__local_496 = 210;

static const Criticality asn1_value__local_497 = 1;

static const Presence asn1_value__local_498 = 0;

static const ProtocolIE_ID asn1_value__local_499 = 9;

static const Criticality asn1_value__local_500 = 1;

static const Presence asn1_value__local_501 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_492[] = {
{
  (intptr_t)&asn1_value__local_493,
  (intptr_t)&asn1_value__local_494,
  (intptr_t)asn1_type_RAB_SetupList_EnhancedRelocCompleteRes,
  (intptr_t)&asn1_value__local_495,
},
{
  (intptr_t)&asn1_value__local_496,
  (intptr_t)&asn1_value__local_497,
  (intptr_t)asn1_type_RAB_ToBeReleasedList_EnhancedRelocCompleteRes,
  (intptr_t)&asn1_value__local_498,
},
{
  (intptr_t)&asn1_value__local_499,
  (intptr_t)&asn1_value__local_500,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_501,
},
};

static const ASN1CType asn1_constraint__local_491[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_492,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_490[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_491,
};

const ASN1CType asn1_type_ProtocolIE_Field_43[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_43),

  offsetof(ProtocolIE_Field_43, id) | 0x0,
  (intptr_t)asn1_type__local_488,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_43, criticality) | 0x0,
  (intptr_t)asn1_type__local_489,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_43, value) | 0x0,
  (intptr_t)asn1_type__local_490,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_502[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_503[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_507 = 191;

static const Criticality asn1_value__local_508 = 0;

static const Presence asn1_value__local_509 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_506[] = {
{
  (intptr_t)&asn1_value__local_507,
  (intptr_t)&asn1_value__local_508,
  (intptr_t)asn1_type_RAB_SetupItem_EnhancedRelocCompleteRes,
  (intptr_t)&asn1_value__local_509,
},
};

static const ASN1CType asn1_constraint__local_505[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_506,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_504[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_505,
};

const ASN1CType asn1_type_ProtocolIE_Field_44[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_44),

  offsetof(ProtocolIE_Field_44, id) | 0x0,
  (intptr_t)asn1_type__local_502,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_44, criticality) | 0x0,
  (intptr_t)asn1_type__local_503,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_44, value) | 0x0,
  (intptr_t)asn1_type__local_504,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_510[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_511[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_515 = 209;

static const Criticality asn1_value__local_516 = 1;

static const Presence asn1_value__local_517 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_514[] = {
{
  (intptr_t)&asn1_value__local_515,
  (intptr_t)&asn1_value__local_516,
  (intptr_t)asn1_type_RAB_ToBeReleasedItem_EnhancedRelocCompleteRes,
  (intptr_t)&asn1_value__local_517,
},
};

static const ASN1CType asn1_constraint__local_513[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_514,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_512[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_513,
};

const ASN1CType asn1_type_ProtocolIE_Field_45[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_45),

  offsetof(ProtocolIE_Field_45, id) | 0x0,
  (intptr_t)asn1_type__local_510,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_45, criticality) | 0x0,
  (intptr_t)asn1_type__local_511,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_45, value) | 0x0,
  (intptr_t)asn1_type__local_512,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_518[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_519[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_523 = 4;

static const Criticality asn1_value__local_524 = 1;

static const Presence asn1_value__local_525 = 2;

static const ProtocolIE_ID asn1_value__local_526 = 9;

static const Criticality asn1_value__local_527 = 1;

static const Presence asn1_value__local_528 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_522[] = {
{
  (intptr_t)&asn1_value__local_523,
  (intptr_t)&asn1_value__local_524,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_525,
},
{
  (intptr_t)&asn1_value__local_526,
  (intptr_t)&asn1_value__local_527,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_528,
},
};

static const ASN1CType asn1_constraint__local_521[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_522,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_520[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_521,
};

const ASN1CType asn1_type_ProtocolIE_Field_46[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_46),

  offsetof(ProtocolIE_Field_46, id) | 0x0,
  (intptr_t)asn1_type__local_518,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_46, criticality) | 0x0,
  (intptr_t)asn1_type__local_519,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_46, value) | 0x0,
  (intptr_t)asn1_type__local_520,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_529[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_530[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_534 = 35;

static const Criticality asn1_value__local_535 = 1;

static const Presence asn1_value__local_536 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_533[] = {
{
  (intptr_t)&asn1_value__local_534,
  (intptr_t)&asn1_value__local_535,
  (intptr_t)asn1_type_RAB_FailedList,
  (intptr_t)&asn1_value__local_536,
},
};

static const ASN1CType asn1_constraint__local_532[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_533,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_531[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_532,
};

const ASN1CType asn1_type_ProtocolIE_Field_47[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_47),

  offsetof(ProtocolIE_Field_47, id) | 0x0,
  (intptr_t)asn1_type__local_529,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_47, criticality) | 0x0,
  (intptr_t)asn1_type__local_530,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_47, value) | 0x0,
  (intptr_t)asn1_type__local_531,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_537[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_538[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_542 = 3;

static const Criticality asn1_value__local_543 = 1;

static const Presence asn1_value__local_544 = 2;

static const ProtocolIE_ID asn1_value__local_545 = 23;

static const Criticality asn1_value__local_546 = 1;

static const Presence asn1_value__local_547 = 2;

static const ProtocolIE_ID asn1_value__local_548 = 64;

static const Criticality asn1_value__local_549 = 1;

static const Presence asn1_value__local_550 = 0;

static const ProtocolIE_ID asn1_value__local_551 = 21;

static const Criticality asn1_value__local_552 = 1;

static const Presence asn1_value__local_553 = 0;

static const ProtocolIE_ID asn1_value__local_554 = 22;

static const Criticality asn1_value__local_555 = 1;

static const Presence asn1_value__local_556 = 0;

static const ProtocolIE_ID asn1_value__local_557 = 17;

static const Criticality asn1_value__local_558 = 1;

static const Presence asn1_value__local_559 = 0;

static const ProtocolIE_ID asn1_value__local_560 = 76;

static const Criticality asn1_value__local_561 = 1;

static const Presence asn1_value__local_562 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_541[] = {
{
  (intptr_t)&asn1_value__local_542,
  (intptr_t)&asn1_value__local_543,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_544,
},
{
  (intptr_t)&asn1_value__local_545,
  (intptr_t)&asn1_value__local_546,
  (intptr_t)asn1_type_PermanentNAS_UE_ID,
  (intptr_t)&asn1_value__local_547,
},
{
  (intptr_t)&asn1_value__local_548,
  (intptr_t)&asn1_value__local_549,
  (intptr_t)asn1_type_TemporaryUE_ID,
  (intptr_t)&asn1_value__local_550,
},
{
  (intptr_t)&asn1_value__local_551,
  (intptr_t)&asn1_value__local_552,
  (intptr_t)asn1_type_PagingAreaID,
  (intptr_t)&asn1_value__local_553,
},
{
  (intptr_t)&asn1_value__local_554,
  (intptr_t)&asn1_value__local_555,
  (intptr_t)asn1_type_PagingCause,
  (intptr_t)&asn1_value__local_556,
},
{
  (intptr_t)&asn1_value__local_557,
  (intptr_t)&asn1_value__local_558,
  (intptr_t)asn1_type_NonSearchingIndication,
  (intptr_t)&asn1_value__local_559,
},
{
  (intptr_t)&asn1_value__local_560,
  (intptr_t)&asn1_value__local_561,
  (intptr_t)asn1_type_DRX_CycleLengthCoefficient,
  (intptr_t)&asn1_value__local_562,
},
};

static const ASN1CType asn1_constraint__local_540[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_541,
  7,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_539[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_540,
};

const ASN1CType asn1_type_ProtocolIE_Field_48[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_48),

  offsetof(ProtocolIE_Field_48, id) | 0x0,
  (intptr_t)asn1_type__local_537,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_48, criticality) | 0x0,
  (intptr_t)asn1_type__local_538,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_48, value) | 0x0,
  (intptr_t)asn1_type__local_539,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_563[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_564[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_568 = 23;

static const Criticality asn1_value__local_569 = 1;

static const Presence asn1_value__local_570 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_567[] = {
{
  (intptr_t)&asn1_value__local_568,
  (intptr_t)&asn1_value__local_569,
  (intptr_t)asn1_type_PermanentNAS_UE_ID,
  (intptr_t)&asn1_value__local_570,
},
};

static const ASN1CType asn1_constraint__local_566[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_567,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_565[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_566,
};

const ASN1CType asn1_type_ProtocolIE_Field_49[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_49),

  offsetof(ProtocolIE_Field_49, id) | 0x0,
  (intptr_t)asn1_type__local_563,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_49, criticality) | 0x0,
  (intptr_t)asn1_type__local_564,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_49, value) | 0x0,
  (intptr_t)asn1_type__local_565,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_571[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_572[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_576 = 66;

static const Criticality asn1_value__local_577 = 1;

static const Presence asn1_value__local_578 = 0;

static const ProtocolIE_ID asn1_value__local_579 = 65;

static const Criticality asn1_value__local_580 = 1;

static const Presence asn1_value__local_581 = 2;

static const ProtocolIE_ID asn1_value__local_582 = 68;

static const Criticality asn1_value__local_583 = 1;

static const Presence asn1_value__local_584 = 0;

static const ProtocolIE_ID asn1_value__local_585 = 69;

static const Criticality asn1_value__local_586 = 1;

static const Presence asn1_value__local_587 = 0;

static const ProtocolIE_ID asn1_value__local_588 = 19;

static const Criticality asn1_value__local_589 = 1;

static const Presence asn1_value__local_590 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_575[] = {
{
  (intptr_t)&asn1_value__local_576,
  (intptr_t)&asn1_value__local_577,
  (intptr_t)asn1_type_TraceType,
  (intptr_t)&asn1_value__local_578,
},
{
  (intptr_t)&asn1_value__local_579,
  (intptr_t)&asn1_value__local_580,
  (intptr_t)asn1_type_TraceReference,
  (intptr_t)&asn1_value__local_581,
},
{
  (intptr_t)&asn1_value__local_582,
  (intptr_t)&asn1_value__local_583,
  (intptr_t)asn1_type_TriggerID,
  (intptr_t)&asn1_value__local_584,
},
{
  (intptr_t)&asn1_value__local_585,
  (intptr_t)&asn1_value__local_586,
  (intptr_t)asn1_type_UE_ID,
  (intptr_t)&asn1_value__local_587,
},
{
  (intptr_t)&asn1_value__local_588,
  (intptr_t)&asn1_value__local_589,
  (intptr_t)asn1_type_OMC_ID,
  (intptr_t)&asn1_value__local_590,
},
};

static const ASN1CType asn1_constraint__local_574[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_575,
  5,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_573[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_574,
};

const ASN1CType asn1_type_ProtocolIE_Field_50[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_50),

  offsetof(ProtocolIE_Field_50, id) | 0x0,
  (intptr_t)asn1_type__local_571,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_50, criticality) | 0x0,
  (intptr_t)asn1_type__local_572,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_50, value) | 0x0,
  (intptr_t)asn1_type__local_573,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_591[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_592[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_596 = 65;

static const Criticality asn1_value__local_597 = 1;

static const Presence asn1_value__local_598 = 2;

static const ProtocolIE_ID asn1_value__local_599 = 68;

static const Criticality asn1_value__local_600 = 1;

static const Presence asn1_value__local_601 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_595[] = {
{
  (intptr_t)&asn1_value__local_596,
  (intptr_t)&asn1_value__local_597,
  (intptr_t)asn1_type_TraceReference,
  (intptr_t)&asn1_value__local_598,
},
{
  (intptr_t)&asn1_value__local_599,
  (intptr_t)&asn1_value__local_600,
  (intptr_t)asn1_type_TriggerID,
  (intptr_t)&asn1_value__local_601,
},
};

static const ASN1CType asn1_constraint__local_594[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_595,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_593[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_594,
};

const ASN1CType asn1_type_ProtocolIE_Field_51[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_51),

  offsetof(ProtocolIE_Field_51, id) | 0x0,
  (intptr_t)asn1_type__local_591,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_51, criticality) | 0x0,
  (intptr_t)asn1_type__local_592,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_51, value) | 0x0,
  (intptr_t)asn1_type__local_593,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_602[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_603[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_607 = 57;

static const Criticality asn1_value__local_608 = 1;

static const Presence asn1_value__local_609 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_606[] = {
{
  (intptr_t)&asn1_value__local_607,
  (intptr_t)&asn1_value__local_608,
  (intptr_t)asn1_type_RequestType,
  (intptr_t)&asn1_value__local_609,
},
};

static const ASN1CType asn1_constraint__local_605[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_606,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_604[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_605,
};

const ASN1CType asn1_type_ProtocolIE_Field_52[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_52),

  offsetof(ProtocolIE_Field_52, id) | 0x0,
  (intptr_t)asn1_type__local_602,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_52, criticality) | 0x0,
  (intptr_t)asn1_type__local_603,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_52, value) | 0x0,
  (intptr_t)asn1_type__local_604,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_610[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_611[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_615 = 0;

static const Criticality asn1_value__local_616 = 1;

static const Presence asn1_value__local_617 = 0;

static const ProtocolIE_ID asn1_value__local_618 = 4;

static const Criticality asn1_value__local_619 = 1;

static const Presence asn1_value__local_620 = 0;

static const ProtocolIE_ID asn1_value__local_621 = 57;

static const Criticality asn1_value__local_622 = 1;

static const Presence asn1_value__local_623 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_614[] = {
{
  (intptr_t)&asn1_value__local_615,
  (intptr_t)&asn1_value__local_616,
  (intptr_t)asn1_type_AreaIdentity,
  (intptr_t)&asn1_value__local_617,
},
{
  (intptr_t)&asn1_value__local_618,
  (intptr_t)&asn1_value__local_619,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_620,
},
{
  (intptr_t)&asn1_value__local_621,
  (intptr_t)&asn1_value__local_622,
  (intptr_t)asn1_type_RequestType,
  (intptr_t)&asn1_value__local_623,
},
};

static const ASN1CType asn1_constraint__local_613[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_614,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_612[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_613,
};

const ASN1CType asn1_type_ProtocolIE_Field_53[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_53),

  offsetof(ProtocolIE_Field_53, id) | 0x0,
  (intptr_t)asn1_type__local_610,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_53, criticality) | 0x0,
  (intptr_t)asn1_type__local_611,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_53, value) | 0x0,
  (intptr_t)asn1_type__local_612,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_624[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_625[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_629 = 3;

static const Criticality asn1_value__local_630 = 1;

static const Presence asn1_value__local_631 = 2;

static const ProtocolIE_ID asn1_value__local_632 = 15;

static const Criticality asn1_value__local_633 = 1;

static const Presence asn1_value__local_634 = 2;

static const ProtocolIE_ID asn1_value__local_635 = 55;

static const Criticality asn1_value__local_636 = 1;

static const Presence asn1_value__local_637 = 1;

static const ProtocolIE_ID asn1_value__local_638 = 58;

static const Criticality asn1_value__local_639 = 1;

static const Presence asn1_value__local_640 = 2;

static const ProtocolIE_ID asn1_value__local_641 = 16;

static const Criticality asn1_value__local_642 = 1;

static const Presence asn1_value__local_643 = 2;

static const ProtocolIE_ID asn1_value__local_644 = 79;

static const Criticality asn1_value__local_645 = 1;

static const Presence asn1_value__local_646 = 2;

static const ProtocolIE_ID asn1_value__local_647 = 86;

static const Criticality asn1_value__local_648 = 1;

static const Presence asn1_value__local_649 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_628[] = {
{
  (intptr_t)&asn1_value__local_629,
  (intptr_t)&asn1_value__local_630,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_631,
},
{
  (intptr_t)&asn1_value__local_632,
  (intptr_t)&asn1_value__local_633,
  (intptr_t)asn1_type_LAI,
  (intptr_t)&asn1_value__local_634,
},
{
  (intptr_t)&asn1_value__local_635,
  (intptr_t)&asn1_value__local_636,
  (intptr_t)asn1_type_RAC,
  (intptr_t)&asn1_value__local_637,
},
{
  (intptr_t)&asn1_value__local_638,
  (intptr_t)&asn1_value__local_639,
  (intptr_t)asn1_type_SAI,
  (intptr_t)&asn1_value__local_640,
},
{
  (intptr_t)&asn1_value__local_641,
  (intptr_t)&asn1_value__local_642,
  (intptr_t)asn1_type_NAS_PDU,
  (intptr_t)&asn1_value__local_643,
},
{
  (intptr_t)&asn1_value__local_644,
  (intptr_t)&asn1_value__local_645,
  (intptr_t)asn1_type_IuSignallingConnectionIdentifier,
  (intptr_t)&asn1_value__local_646,
},
{
  (intptr_t)&asn1_value__local_647,
  (intptr_t)&asn1_value__local_648,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_649,
},
};

static const ASN1CType asn1_constraint__local_627[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_628,
  7,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_626[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_627,
};

const ASN1CType asn1_type_ProtocolIE_Field_54[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_54),

  offsetof(ProtocolIE_Field_54, id) | 0x0,
  (intptr_t)asn1_type__local_624,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_54, criticality) | 0x0,
  (intptr_t)asn1_type__local_625,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_54, value) | 0x0,
  (intptr_t)asn1_type__local_626,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_650[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_651[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_655 = 16;

static const Criticality asn1_value__local_656 = 1;

static const Presence asn1_value__local_657 = 2;

static const ProtocolIE_ID asn1_value__local_658 = 15;

static const Criticality asn1_value__local_659 = 1;

static const Presence asn1_value__local_660 = 0;

static const ProtocolIE_ID asn1_value__local_661 = 55;

static const Criticality asn1_value__local_662 = 1;

static const Presence asn1_value__local_663 = 0;

static const ProtocolIE_ID asn1_value__local_664 = 58;

static const Criticality asn1_value__local_665 = 1;

static const Presence asn1_value__local_666 = 0;

static const ProtocolIE_ID asn1_value__local_667 = 59;

static const Criticality asn1_value__local_668 = 1;

static const Presence asn1_value__local_669 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_654[] = {
{
  (intptr_t)&asn1_value__local_655,
  (intptr_t)&asn1_value__local_656,
  (intptr_t)asn1_type_NAS_PDU,
  (intptr_t)&asn1_value__local_657,
},
{
  (intptr_t)&asn1_value__local_658,
  (intptr_t)&asn1_value__local_659,
  (intptr_t)asn1_type_LAI,
  (intptr_t)&asn1_value__local_660,
},
{
  (intptr_t)&asn1_value__local_661,
  (intptr_t)&asn1_value__local_662,
  (intptr_t)asn1_type_RAC,
  (intptr_t)&asn1_value__local_663,
},
{
  (intptr_t)&asn1_value__local_664,
  (intptr_t)&asn1_value__local_665,
  (intptr_t)asn1_type_SAI,
  (intptr_t)&asn1_value__local_666,
},
{
  (intptr_t)&asn1_value__local_667,
  (intptr_t)&asn1_value__local_668,
  (intptr_t)asn1_type_SAPI,
  (intptr_t)&asn1_value__local_669,
},
};

static const ASN1CType asn1_constraint__local_653[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_654,
  5,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_652[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_653,
};

const ASN1CType asn1_type_ProtocolIE_Field_55[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_55),

  offsetof(ProtocolIE_Field_55, id) | 0x0,
  (intptr_t)asn1_type__local_650,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_55, criticality) | 0x0,
  (intptr_t)asn1_type__local_651,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_55, value) | 0x0,
  (intptr_t)asn1_type__local_652,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_670[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_671[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_675 = 16;

static const Criticality asn1_value__local_676 = 1;

static const Presence asn1_value__local_677 = 2;

static const ProtocolIE_ID asn1_value__local_678 = 131;

static const Criticality asn1_value__local_679 = 1;

static const Presence asn1_value__local_680 = 2;

static const ProtocolIE_ID asn1_value__local_681 = 130;

static const Criticality asn1_value__local_682 = 1;

static const Presence asn1_value__local_683 = 0;

static const ProtocolIE_ID asn1_value__local_684 = 23;

static const Criticality asn1_value__local_685 = 1;

static const Presence asn1_value__local_686 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_674[] = {
{
  (intptr_t)&asn1_value__local_675,
  (intptr_t)&asn1_value__local_676,
  (intptr_t)asn1_type_NAS_PDU,
  (intptr_t)&asn1_value__local_677,
},
{
  (intptr_t)&asn1_value__local_678,
  (intptr_t)&asn1_value__local_679,
  (intptr_t)asn1_type_RejectCauseValue,
  (intptr_t)&asn1_value__local_680,
},
{
  (intptr_t)&asn1_value__local_681,
  (intptr_t)&asn1_value__local_682,
  (intptr_t)asn1_type_NAS_SequenceNumber,
  (intptr_t)&asn1_value__local_683,
},
{
  (intptr_t)&asn1_value__local_684,
  (intptr_t)&asn1_value__local_685,
  (intptr_t)asn1_type_PermanentNAS_UE_ID,
  (intptr_t)&asn1_value__local_686,
},
};

static const ASN1CType asn1_constraint__local_673[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_674,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_672[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_673,
};

const ASN1CType asn1_type_ProtocolIE_Field_56[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_56),

  offsetof(ProtocolIE_Field_56, id) | 0x0,
  (intptr_t)asn1_type__local_670,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_56, criticality) | 0x0,
  (intptr_t)asn1_type__local_671,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_56, value) | 0x0,
  (intptr_t)asn1_type__local_672,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_687[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_688[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_692 = 18;

static const Criticality asn1_value__local_693 = 1;

static const Presence asn1_value__local_694 = 0;

static const ProtocolIE_ID asn1_value__local_695 = 86;

static const Criticality asn1_value__local_696 = 1;

static const Presence asn1_value__local_697 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_691[] = {
{
  (intptr_t)&asn1_value__local_692,
  (intptr_t)&asn1_value__local_693,
  (intptr_t)asn1_type_NumberOfSteps,
  (intptr_t)&asn1_value__local_694,
},
{
  (intptr_t)&asn1_value__local_695,
  (intptr_t)&asn1_value__local_696,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_697,
},
};

static const ASN1CType asn1_constraint__local_690[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_691,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_689[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_690,
};

const ASN1CType asn1_type_ProtocolIE_Field_57[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_57),

  offsetof(ProtocolIE_Field_57, id) | 0x0,
  (intptr_t)asn1_type__local_687,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_57, criticality) | 0x0,
  (intptr_t)asn1_type__local_688,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_57, value) | 0x0,
  (intptr_t)asn1_type__local_689,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_698[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_699[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_703 = 4;

static const Criticality asn1_value__local_704 = 1;

static const Presence asn1_value__local_705 = 0;

static const ProtocolIE_ID asn1_value__local_706 = 9;

static const Criticality asn1_value__local_707 = 1;

static const Presence asn1_value__local_708 = 0;

static const ProtocolIE_ID asn1_value__local_709 = 3;

static const Criticality asn1_value__local_710 = 1;

static const Presence asn1_value__local_711 = 0;

static const ProtocolIE_ID asn1_value__local_712 = 86;

static const Criticality asn1_value__local_713 = 1;

static const Presence asn1_value__local_714 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_702[] = {
{
  (intptr_t)&asn1_value__local_703,
  (intptr_t)&asn1_value__local_704,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_705,
},
{
  (intptr_t)&asn1_value__local_706,
  (intptr_t)&asn1_value__local_707,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_708,
},
{
  (intptr_t)&asn1_value__local_709,
  (intptr_t)&asn1_value__local_710,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_711,
},
{
  (intptr_t)&asn1_value__local_712,
  (intptr_t)&asn1_value__local_713,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_714,
},
};

static const ASN1CType asn1_constraint__local_701[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_702,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_700[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_701,
};

const ASN1CType asn1_type_ProtocolIE_Field_58[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_58),

  offsetof(ProtocolIE_Field_58, id) | 0x0,
  (intptr_t)asn1_type__local_698,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_58, criticality) | 0x0,
  (intptr_t)asn1_type__local_699,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_58, value) | 0x0,
  (intptr_t)asn1_type__local_700,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_715[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_716[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_720 = 28;

static const Criticality asn1_value__local_721 = 1;

static const Presence asn1_value__local_722 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_719[] = {
{
  (intptr_t)&asn1_value__local_720,
  (intptr_t)&asn1_value__local_721,
  (intptr_t)asn1_type_RAB_DataForwardingList,
  (intptr_t)&asn1_value__local_722,
},
};

static const ASN1CType asn1_constraint__local_718[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_719,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_717[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_718,
};

const ASN1CType asn1_type_ProtocolIE_Field_59[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_59),

  offsetof(ProtocolIE_Field_59, id) | 0x0,
  (intptr_t)asn1_type__local_715,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_59, criticality) | 0x0,
  (intptr_t)asn1_type__local_716,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_59, value) | 0x0,
  (intptr_t)asn1_type__local_717,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_723[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_724[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_728 = 25;

static const Criticality asn1_value__local_729 = 1;

static const Presence asn1_value__local_730 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_727[] = {
{
  (intptr_t)&asn1_value__local_728,
  (intptr_t)&asn1_value__local_729,
  (intptr_t)asn1_type_RAB_ContextList,
  (intptr_t)&asn1_value__local_730,
},
};

static const ASN1CType asn1_constraint__local_726[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_727,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_725[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_726,
};

const ASN1CType asn1_type_ProtocolIE_Field_60[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_60),

  offsetof(ProtocolIE_Field_60, id) | 0x0,
  (intptr_t)asn1_type__local_723,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_60, criticality) | 0x0,
  (intptr_t)asn1_type__local_724,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_60, value) | 0x0,
  (intptr_t)asn1_type__local_725,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_731[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_732[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_736 = 54;

static const Criticality asn1_value__local_737 = 1;

static const Presence asn1_value__local_738 = 0;

static const ProtocolIE_ID asn1_value__local_739 = 41;

static const Criticality asn1_value__local_740 = 1;

static const Presence asn1_value__local_741 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_735[] = {
{
  (intptr_t)&asn1_value__local_736,
  (intptr_t)&asn1_value__local_737,
  (intptr_t)asn1_type_RAB_SetupOrModifyList,
  (intptr_t)&asn1_value__local_738,
},
{
  (intptr_t)&asn1_value__local_739,
  (intptr_t)&asn1_value__local_740,
  (intptr_t)asn1_type_RAB_ReleaseList,
  (intptr_t)&asn1_value__local_741,
},
};

static const ASN1CType asn1_constraint__local_734[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_735,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_733[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_734,
};

const ASN1CType asn1_type_ProtocolIE_Field_61[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_61),

  offsetof(ProtocolIE_Field_61, id) | 0x0,
  (intptr_t)asn1_type__local_731,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_61, criticality) | 0x0,
  (intptr_t)asn1_type__local_732,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_61, value) | 0x0,
  (intptr_t)asn1_type__local_733,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_742[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_743[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_747 = 52;

static const Criticality asn1_value__local_748 = 1;

static const Presence asn1_value__local_749 = 0;

static const ProtocolIE_ID asn1_value__local_750 = 43;

static const Criticality asn1_value__local_751 = 1;

static const Presence asn1_value__local_752 = 0;

static const ProtocolIE_ID asn1_value__local_753 = 38;

static const Criticality asn1_value__local_754 = 1;

static const Presence asn1_value__local_755 = 0;

static const ProtocolIE_ID asn1_value__local_756 = 35;

static const Criticality asn1_value__local_757 = 1;

static const Presence asn1_value__local_758 = 0;

static const ProtocolIE_ID asn1_value__local_759 = 39;

static const Criticality asn1_value__local_760 = 1;

static const Presence asn1_value__local_761 = 0;

static const ProtocolIE_ID asn1_value__local_762 = 9;

static const Criticality asn1_value__local_763 = 1;

static const Presence asn1_value__local_764 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_746[] = {
{
  (intptr_t)&asn1_value__local_747,
  (intptr_t)&asn1_value__local_748,
  (intptr_t)asn1_type_RAB_SetupOrModifiedList,
  (intptr_t)&asn1_value__local_749,
},
{
  (intptr_t)&asn1_value__local_750,
  (intptr_t)&asn1_value__local_751,
  (intptr_t)asn1_type_RAB_ReleasedList,
  (intptr_t)&asn1_value__local_752,
},
{
  (intptr_t)&asn1_value__local_753,
  (intptr_t)&asn1_value__local_754,
  (intptr_t)asn1_type_RAB_QueuedList,
  (intptr_t)&asn1_value__local_755,
},
{
  (intptr_t)&asn1_value__local_756,
  (intptr_t)&asn1_value__local_757,
  (intptr_t)asn1_type_RAB_FailedList,
  (intptr_t)&asn1_value__local_758,
},
{
  (intptr_t)&asn1_value__local_759,
  (intptr_t)&asn1_value__local_760,
  (intptr_t)asn1_type_RAB_ReleaseFailedList,
  (intptr_t)&asn1_value__local_761,
},
{
  (intptr_t)&asn1_value__local_762,
  (intptr_t)&asn1_value__local_763,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_764,
},
};

static const ASN1CType asn1_constraint__local_745[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_746,
  6,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_744[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_745,
};

const ASN1CType asn1_type_ProtocolIE_Field_62[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_62),

  offsetof(ProtocolIE_Field_62, id) | 0x0,
  (intptr_t)asn1_type__local_742,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_62, criticality) | 0x0,
  (intptr_t)asn1_type__local_743,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_62, value) | 0x0,
  (intptr_t)asn1_type__local_744,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_765[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_766[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_770 = 51;

static const Criticality asn1_value__local_771 = 1;

static const Presence asn1_value__local_772 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_769[] = {
{
  (intptr_t)&asn1_value__local_770,
  (intptr_t)&asn1_value__local_771,
  (intptr_t)asn1_type_RAB_SetupOrModifiedItem,
  (intptr_t)&asn1_value__local_772,
},
};

static const ASN1CType asn1_constraint__local_768[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_769,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_767[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_768,
};

const ASN1CType asn1_type_ProtocolIE_Field_63[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_63),

  offsetof(ProtocolIE_Field_63, id) | 0x0,
  (intptr_t)asn1_type__local_765,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_63, criticality) | 0x0,
  (intptr_t)asn1_type__local_766,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_63, value) | 0x0,
  (intptr_t)asn1_type__local_767,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_773[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_774[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_778 = 42;

static const Criticality asn1_value__local_779 = 1;

static const Presence asn1_value__local_780 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_777[] = {
{
  (intptr_t)&asn1_value__local_778,
  (intptr_t)&asn1_value__local_779,
  (intptr_t)asn1_type_RAB_ReleasedItem,
  (intptr_t)&asn1_value__local_780,
},
};

static const ASN1CType asn1_constraint__local_776[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_777,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_775[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_776,
};

const ASN1CType asn1_type_ProtocolIE_Field_64[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_64),

  offsetof(ProtocolIE_Field_64, id) | 0x0,
  (intptr_t)asn1_type__local_773,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_64, criticality) | 0x0,
  (intptr_t)asn1_type__local_774,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_64, value) | 0x0,
  (intptr_t)asn1_type__local_775,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_781[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_782[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_786 = 37;

static const Criticality asn1_value__local_787 = 1;

static const Presence asn1_value__local_788 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_785[] = {
{
  (intptr_t)&asn1_value__local_786,
  (intptr_t)&asn1_value__local_787,
  (intptr_t)asn1_type_RAB_QueuedItem,
  (intptr_t)&asn1_value__local_788,
},
};

static const ASN1CType asn1_constraint__local_784[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_785,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_783[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_784,
};

const ASN1CType asn1_type_ProtocolIE_Field_65[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_65),

  offsetof(ProtocolIE_Field_65, id) | 0x0,
  (intptr_t)asn1_type__local_781,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_65, criticality) | 0x0,
  (intptr_t)asn1_type__local_782,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_65, value) | 0x0,
  (intptr_t)asn1_type__local_783,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_789[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_790[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_794 = 109;

static const Criticality asn1_value__local_795 = 1;

static const Presence asn1_value__local_796 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_793[] = {
{
  (intptr_t)&asn1_value__local_794,
  (intptr_t)&asn1_value__local_795,
  (intptr_t)asn1_type_GERAN_Iumode_RAB_Failed_RABAssgntResponse_Item,
  (intptr_t)&asn1_value__local_796,
},
};

static const ASN1CType asn1_constraint__local_792[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_793,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_791[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_792,
};

const ASN1CType asn1_type_ProtocolIE_Field_66[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_66),

  offsetof(ProtocolIE_Field_66, id) | 0x0,
  (intptr_t)asn1_type__local_789,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_66, criticality) | 0x0,
  (intptr_t)asn1_type__local_790,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_66, value) | 0x0,
  (intptr_t)asn1_type__local_791,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_797[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_798[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_802 = 81;

static const Criticality asn1_value__local_803 = 1;

static const Presence asn1_value__local_804 = 0;

static const ProtocolIE_ID asn1_value__local_805 = 83;

static const Criticality asn1_value__local_806 = 1;

static const Presence asn1_value__local_807 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_801[] = {
{
  (intptr_t)&asn1_value__local_802,
  (intptr_t)&asn1_value__local_803,
  (intptr_t)asn1_type_DirectTransferInformationList_RANAP_RelocInf,
  (intptr_t)&asn1_value__local_804,
},
{
  (intptr_t)&asn1_value__local_805,
  (intptr_t)&asn1_value__local_806,
  (intptr_t)asn1_type_RAB_ContextList_RANAP_RelocInf,
  (intptr_t)&asn1_value__local_807,
},
};

static const ASN1CType asn1_constraint__local_800[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_801,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_799[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_800,
};

const ASN1CType asn1_type_ProtocolIE_Field_67[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_67),

  offsetof(ProtocolIE_Field_67, id) | 0x0,
  (intptr_t)asn1_type__local_797,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_67, criticality) | 0x0,
  (intptr_t)asn1_type__local_798,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_67, value) | 0x0,
  (intptr_t)asn1_type__local_799,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_808[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_809[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_813 = 80;

static const Criticality asn1_value__local_814 = 1;

static const Presence asn1_value__local_815 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_812[] = {
{
  (intptr_t)&asn1_value__local_813,
  (intptr_t)&asn1_value__local_814,
  (intptr_t)asn1_type_DirectTransferInformationItem_RANAP_RelocInf,
  (intptr_t)&asn1_value__local_815,
},
};

static const ASN1CType asn1_constraint__local_811[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_812,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_810[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_811,
};

const ASN1CType asn1_type_ProtocolIE_Field_68[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_68),

  offsetof(ProtocolIE_Field_68, id) | 0x0,
  (intptr_t)asn1_type__local_808,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_68, criticality) | 0x0,
  (intptr_t)asn1_type__local_809,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_68, value) | 0x0,
  (intptr_t)asn1_type__local_810,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_816[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_817[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_821 = 82;

static const Criticality asn1_value__local_822 = 1;

static const Presence asn1_value__local_823 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_820[] = {
{
  (intptr_t)&asn1_value__local_821,
  (intptr_t)&asn1_value__local_822,
  (intptr_t)asn1_type_RAB_ContextItem_RANAP_RelocInf,
  (intptr_t)&asn1_value__local_823,
},
};

static const ASN1CType asn1_constraint__local_819[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_820,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_818[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_819,
};

const ASN1CType asn1_type_ProtocolIE_Field_69[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_69),

  offsetof(ProtocolIE_Field_69, id) | 0x0,
  (intptr_t)asn1_type__local_816,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_69, criticality) | 0x0,
  (intptr_t)asn1_type__local_817,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_69, value) | 0x0,
  (intptr_t)asn1_type__local_818,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_824[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_825[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_829 = 61;

static const Criticality asn1_value__local_830 = 0;

static const Presence asn1_value__local_831 = 2;

static const ProtocolIE_ID asn1_value__local_832 = 204;

static const Criticality asn1_value__local_833 = 1;

static const Presence asn1_value__local_834 = 0;

static const ProtocolIE_ID asn1_value__local_835 = 206;

static const Criticality asn1_value__local_836 = 0;

static const Presence asn1_value__local_837 = 0;

static const ProtocolIE_ID asn1_value__local_838 = 205;

static const Criticality asn1_value__local_839 = 1;

static const Presence asn1_value__local_840 = 0;

static const ProtocolIE_ID asn1_value__local_841 = 207;

static const Criticality asn1_value__local_842 = 0;

static const Presence asn1_value__local_843 = 0;

static const ProtocolIE_ID asn1_value__local_844 = 192;

static const Criticality asn1_value__local_845 = 0;

static const Presence asn1_value__local_846 = 0;

static const ProtocolIE_ID asn1_value__local_847 = 105;

static const Criticality asn1_value__local_848 = 1;

static const Presence asn1_value__local_849 = 0;

static const ProtocolIE_ID asn1_value__local_850 = 118;

static const Criticality asn1_value__local_851 = 1;

static const Presence asn1_value__local_852 = 0;

static const ProtocolIE_ID asn1_value__local_853 = 127;

static const Criticality asn1_value__local_854 = 1;

static const Presence asn1_value__local_855 = 0;

static const ProtocolIE_ID asn1_value__local_856 = 133;

static const Criticality asn1_value__local_857 = 1;

static const Presence asn1_value__local_858 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_828[] = {
{
  (intptr_t)&asn1_value__local_829,
  (intptr_t)&asn1_value__local_830,
  (intptr_t)asn1_type_SourceRNC_ToTargetRNC_TransparentContainer,
  (intptr_t)&asn1_value__local_831,
},
{
  (intptr_t)&asn1_value__local_832,
  (intptr_t)&asn1_value__local_833,
  (intptr_t)asn1_type_IuSignallingConnectionIdentifier,
  (intptr_t)&asn1_value__local_834,
},
{
  (intptr_t)&asn1_value__local_835,
  (intptr_t)&asn1_value__local_836,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_837,
},
{
  (intptr_t)&asn1_value__local_838,
  (intptr_t)&asn1_value__local_839,
  (intptr_t)asn1_type_IuSignallingConnectionIdentifier,
  (intptr_t)&asn1_value__local_840,
},
{
  (intptr_t)&asn1_value__local_841,
  (intptr_t)&asn1_value__local_842,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_843,
},
{
  (intptr_t)&asn1_value__local_844,
  (intptr_t)&asn1_value__local_845,
  (intptr_t)asn1_type_RAB_SetupList_EnhRelocInfoReq,
  (intptr_t)&asn1_value__local_846,
},
{
  (intptr_t)&asn1_value__local_847,
  (intptr_t)&asn1_value__local_848,
  (intptr_t)asn1_type_SNA_Access_Information,
  (intptr_t)&asn1_value__local_849,
},
{
  (intptr_t)&asn1_value__local_850,
  (intptr_t)&asn1_value__local_851,
  (intptr_t)asn1_type_UESBI_Iu,
  (intptr_t)&asn1_value__local_852,
},
{
  (intptr_t)&asn1_value__local_853,
  (intptr_t)&asn1_value__local_854,
  (intptr_t)asn1_type_PLMNidentity,
  (intptr_t)&asn1_value__local_855,
},
{
  (intptr_t)&asn1_value__local_856,
  (intptr_t)&asn1_value__local_857,
  (intptr_t)asn1_type_CNMBMSLinkingInformation,
  (intptr_t)&asn1_value__local_858,
},
};

static const ASN1CType asn1_constraint__local_827[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_828,
  10,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_826[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_827,
};

const ASN1CType asn1_type_ProtocolIE_Field_70[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_70),

  offsetof(ProtocolIE_Field_70, id) | 0x0,
  (intptr_t)asn1_type__local_824,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_70, criticality) | 0x0,
  (intptr_t)asn1_type__local_825,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_70, value) | 0x0,
  (intptr_t)asn1_type__local_826,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_859[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_860[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_864 = 193;

static const Criticality asn1_value__local_865 = 0;

static const Presence asn1_value__local_866 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_863[] = {
{
  (intptr_t)&asn1_value__local_864,
  (intptr_t)&asn1_value__local_865,
  (intptr_t)asn1_type_RAB_SetupItem_EnhRelocInfoReq,
  (intptr_t)&asn1_value__local_866,
},
};

static const ASN1CType asn1_constraint__local_862[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_863,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_861[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_862,
};

const ASN1CType asn1_type_ProtocolIE_Field_71[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_71),

  offsetof(ProtocolIE_Field_71, id) | 0x0,
  (intptr_t)asn1_type__local_859,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_71, criticality) | 0x0,
  (intptr_t)asn1_type__local_860,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_71, value) | 0x0,
  (intptr_t)asn1_type__local_861,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_867[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_868[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_872 = 63;

static const Criticality asn1_value__local_873 = 1;

static const Presence asn1_value__local_874 = 0;

static const ProtocolIE_ID asn1_value__local_875 = 194;

static const Criticality asn1_value__local_876 = 1;

static const Presence asn1_value__local_877 = 0;

static const ProtocolIE_ID asn1_value__local_878 = 197;

static const Criticality asn1_value__local_879 = 1;

static const Presence asn1_value__local_880 = 0;

static const ProtocolIE_ID asn1_value__local_881 = 9;

static const Criticality asn1_value__local_882 = 1;

static const Presence asn1_value__local_883 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_871[] = {
{
  (intptr_t)&asn1_value__local_872,
  (intptr_t)&asn1_value__local_873,
  (intptr_t)asn1_type_TargetRNC_ToSourceRNC_TransparentContainer,
  (intptr_t)&asn1_value__local_874,
},
{
  (intptr_t)&asn1_value__local_875,
  (intptr_t)&asn1_value__local_876,
  (intptr_t)asn1_type_RAB_SetupList_EnhRelocInfoRes,
  (intptr_t)&asn1_value__local_877,
},
{
  (intptr_t)&asn1_value__local_878,
  (intptr_t)&asn1_value__local_879,
  (intptr_t)asn1_type_RAB_FailedList_EnhRelocInfoRes,
  (intptr_t)&asn1_value__local_880,
},
{
  (intptr_t)&asn1_value__local_881,
  (intptr_t)&asn1_value__local_882,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_883,
},
};

static const ASN1CType asn1_constraint__local_870[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_871,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_869[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_870,
};

const ASN1CType asn1_type_ProtocolIE_Field_72[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_72),

  offsetof(ProtocolIE_Field_72, id) | 0x0,
  (intptr_t)asn1_type__local_867,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_72, criticality) | 0x0,
  (intptr_t)asn1_type__local_868,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_72, value) | 0x0,
  (intptr_t)asn1_type__local_869,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_884[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_885[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_889 = 195;

static const Criticality asn1_value__local_890 = 0;

static const Presence asn1_value__local_891 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_888[] = {
{
  (intptr_t)&asn1_value__local_889,
  (intptr_t)&asn1_value__local_890,
  (intptr_t)asn1_type_RAB_SetupItem_EnhRelocInfoRes,
  (intptr_t)&asn1_value__local_891,
},
};

static const ASN1CType asn1_constraint__local_887[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_888,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_886[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_887,
};

const ASN1CType asn1_type_ProtocolIE_Field_73[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_73),

  offsetof(ProtocolIE_Field_73, id) | 0x0,
  (intptr_t)asn1_type__local_884,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_73, criticality) | 0x0,
  (intptr_t)asn1_type__local_885,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_73, value) | 0x0,
  (intptr_t)asn1_type__local_886,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_892[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_893[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_897 = 198;

static const Criticality asn1_value__local_898 = 0;

static const Presence asn1_value__local_899 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_896[] = {
{
  (intptr_t)&asn1_value__local_897,
  (intptr_t)&asn1_value__local_898,
  (intptr_t)asn1_type_RAB_FailedItem_EnhRelocInfoRes,
  (intptr_t)&asn1_value__local_899,
},
};

static const ASN1CType asn1_constraint__local_895[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_896,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_894[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_895,
};

const ASN1CType asn1_type_ProtocolIE_Field_74[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_74),

  offsetof(ProtocolIE_Field_74, id) | 0x0,
  (intptr_t)asn1_type__local_892,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_74, criticality) | 0x0,
  (intptr_t)asn1_type__local_893,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_74, value) | 0x0,
  (intptr_t)asn1_type__local_894,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_900[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_901[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_905 = 91;

static const Criticality asn1_value__local_906 = 1;

static const Presence asn1_value__local_907 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_904[] = {
{
  (intptr_t)&asn1_value__local_905,
  (intptr_t)&asn1_value__local_906,
  (intptr_t)asn1_type_RAB_ModifyList,
  (intptr_t)&asn1_value__local_907,
},
};

static const ASN1CType asn1_constraint__local_903[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_904,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_902[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_903,
};

const ASN1CType asn1_type_ProtocolIE_Field_75[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_75),

  offsetof(ProtocolIE_Field_75, id) | 0x0,
  (intptr_t)asn1_type__local_900,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_75, criticality) | 0x0,
  (intptr_t)asn1_type__local_901,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_75, value) | 0x0,
  (intptr_t)asn1_type__local_902,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_908[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_909[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_913 = 92;

static const Criticality asn1_value__local_914 = 1;

static const Presence asn1_value__local_915 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_912[] = {
{
  (intptr_t)&asn1_value__local_913,
  (intptr_t)&asn1_value__local_914,
  (intptr_t)asn1_type_RAB_ModifyItem,
  (intptr_t)&asn1_value__local_915,
},
};

static const ASN1CType asn1_constraint__local_911[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_912,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_910[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_911,
};

const ASN1CType asn1_type_ProtocolIE_Field_76[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_76),

  offsetof(ProtocolIE_Field_76, id) | 0x0,
  (intptr_t)asn1_type__local_908,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_76, criticality) | 0x0,
  (intptr_t)asn1_type__local_909,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_76, value) | 0x0,
  (intptr_t)asn1_type__local_910,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_916[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_917[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_921 = 95;

static const Criticality asn1_value__local_922 = 0;

static const Presence asn1_value__local_923 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_920[] = {
{
  (intptr_t)&asn1_value__local_921,
  (intptr_t)&asn1_value__local_922,
  (intptr_t)asn1_type_LocationRelatedDataRequestType,
  (intptr_t)&asn1_value__local_923,
},
};

static const ASN1CType asn1_constraint__local_919[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_920,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_918[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_919,
};

const ASN1CType asn1_type_ProtocolIE_Field_77[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_77),

  offsetof(ProtocolIE_Field_77, id) | 0x0,
  (intptr_t)asn1_type__local_916,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_77, criticality) | 0x0,
  (intptr_t)asn1_type__local_917,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_77, value) | 0x0,
  (intptr_t)asn1_type__local_918,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_924[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_925[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_929 = 94;

static const Criticality asn1_value__local_930 = 1;

static const Presence asn1_value__local_931 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_928[] = {
{
  (intptr_t)&asn1_value__local_929,
  (intptr_t)&asn1_value__local_930,
  (intptr_t)asn1_type_BroadcastAssistanceDataDecipheringKeys,
  (intptr_t)&asn1_value__local_931,
},
};

static const ASN1CType asn1_constraint__local_927[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_928,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_926[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_927,
};

const ASN1CType asn1_type_ProtocolIE_Field_78[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_78),

  offsetof(ProtocolIE_Field_78, id) | 0x0,
  (intptr_t)asn1_type__local_924,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_78, criticality) | 0x0,
  (intptr_t)asn1_type__local_925,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_78, value) | 0x0,
  (intptr_t)asn1_type__local_926,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_932[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_933[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_937 = 4;

static const Criticality asn1_value__local_938 = 1;

static const Presence asn1_value__local_939 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_936[] = {
{
  (intptr_t)&asn1_value__local_937,
  (intptr_t)&asn1_value__local_938,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_939,
},
};

static const ASN1CType asn1_constraint__local_935[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_936,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_934[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_935,
};

const ASN1CType asn1_type_ProtocolIE_Field_79[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_79),

  offsetof(ProtocolIE_Field_79, id) | 0x0,
  (intptr_t)asn1_type__local_932,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_79, criticality) | 0x0,
  (intptr_t)asn1_type__local_933,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_79, value) | 0x0,
  (intptr_t)asn1_type__local_934,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_940[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_941[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_945 = 104;

static const Criticality asn1_value__local_946 = 0;

static const Presence asn1_value__local_947 = 2;

static const ProtocolIE_ID asn1_value__local_948 = 106;

static const Criticality asn1_value__local_949 = 0;

static const Presence asn1_value__local_950 = 2;

static const ProtocolIE_ID asn1_value__local_951 = 3;

static const Criticality asn1_value__local_952 = 0;

static const Presence asn1_value__local_953 = 2;

static const ProtocolIE_ID asn1_value__local_954 = 96;

static const Criticality asn1_value__local_955 = 1;

static const Presence asn1_value__local_956 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_944[] = {
{
  (intptr_t)&asn1_value__local_945,
  (intptr_t)&asn1_value__local_946,
  (intptr_t)asn1_type_InformationTransferID,
  (intptr_t)&asn1_value__local_947,
},
{
  (intptr_t)&asn1_value__local_948,
  (intptr_t)&asn1_value__local_949,
  (intptr_t)asn1_type_ProvidedData,
  (intptr_t)&asn1_value__local_950,
},
{
  (intptr_t)&asn1_value__local_951,
  (intptr_t)&asn1_value__local_952,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_953,
},
{
  (intptr_t)&asn1_value__local_954,
  (intptr_t)&asn1_value__local_955,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_956,
},
};

static const ASN1CType asn1_constraint__local_943[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_944,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_942[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_943,
};

const ASN1CType asn1_type_ProtocolIE_Field_80[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_80),

  offsetof(ProtocolIE_Field_80, id) | 0x0,
  (intptr_t)asn1_type__local_940,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_80, criticality) | 0x0,
  (intptr_t)asn1_type__local_941,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_80, value) | 0x0,
  (intptr_t)asn1_type__local_942,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_957[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_958[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_962 = 104;

static const Criticality asn1_value__local_963 = 1;

static const Presence asn1_value__local_964 = 2;

static const ProtocolIE_ID asn1_value__local_965 = 3;

static const Criticality asn1_value__local_966 = 1;

static const Presence asn1_value__local_967 = 2;

static const ProtocolIE_ID asn1_value__local_968 = 9;

static const Criticality asn1_value__local_969 = 1;

static const Presence asn1_value__local_970 = 0;

static const ProtocolIE_ID asn1_value__local_971 = 86;

static const Criticality asn1_value__local_972 = 1;

static const Presence asn1_value__local_973 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_961[] = {
{
  (intptr_t)&asn1_value__local_962,
  (intptr_t)&asn1_value__local_963,
  (intptr_t)asn1_type_InformationTransferID,
  (intptr_t)&asn1_value__local_964,
},
{
  (intptr_t)&asn1_value__local_965,
  (intptr_t)&asn1_value__local_966,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_967,
},
{
  (intptr_t)&asn1_value__local_968,
  (intptr_t)&asn1_value__local_969,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_970,
},
{
  (intptr_t)&asn1_value__local_971,
  (intptr_t)&asn1_value__local_972,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_973,
},
};

static const ASN1CType asn1_constraint__local_960[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_961,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_959[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_960,
};

const ASN1CType asn1_type_ProtocolIE_Field_81[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_81),

  offsetof(ProtocolIE_Field_81, id) | 0x0,
  (intptr_t)asn1_type__local_957,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_81, criticality) | 0x0,
  (intptr_t)asn1_type__local_958,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_81, value) | 0x0,
  (intptr_t)asn1_type__local_959,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_974[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_975[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_979 = 104;

static const Criticality asn1_value__local_980 = 1;

static const Presence asn1_value__local_981 = 2;

static const ProtocolIE_ID asn1_value__local_982 = 3;

static const Criticality asn1_value__local_983 = 1;

static const Presence asn1_value__local_984 = 2;

static const ProtocolIE_ID asn1_value__local_985 = 4;

static const Criticality asn1_value__local_986 = 1;

static const Presence asn1_value__local_987 = 2;

static const ProtocolIE_ID asn1_value__local_988 = 9;

static const Criticality asn1_value__local_989 = 1;

static const Presence asn1_value__local_990 = 0;

static const ProtocolIE_ID asn1_value__local_991 = 86;

static const Criticality asn1_value__local_992 = 1;

static const Presence asn1_value__local_993 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_978[] = {
{
  (intptr_t)&asn1_value__local_979,
  (intptr_t)&asn1_value__local_980,
  (intptr_t)asn1_type_InformationTransferID,
  (intptr_t)&asn1_value__local_981,
},
{
  (intptr_t)&asn1_value__local_982,
  (intptr_t)&asn1_value__local_983,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_984,
},
{
  (intptr_t)&asn1_value__local_985,
  (intptr_t)&asn1_value__local_986,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_987,
},
{
  (intptr_t)&asn1_value__local_988,
  (intptr_t)&asn1_value__local_989,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_990,
},
{
  (intptr_t)&asn1_value__local_991,
  (intptr_t)&asn1_value__local_992,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_993,
},
};

static const ASN1CType asn1_constraint__local_977[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_978,
  5,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_976[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_977,
};

const ASN1CType asn1_type_ProtocolIE_Field_82[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_82),

  offsetof(ProtocolIE_Field_82, id) | 0x0,
  (intptr_t)asn1_type__local_974,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_82, criticality) | 0x0,
  (intptr_t)asn1_type__local_975,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_82, value) | 0x0,
  (intptr_t)asn1_type__local_976,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_994[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_995[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_999 = 118;

static const Criticality asn1_value__local_1000 = 1;

static const Presence asn1_value__local_1001 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_998[] = {
{
  (intptr_t)&asn1_value__local_999,
  (intptr_t)&asn1_value__local_1000,
  (intptr_t)asn1_type_UESBI_Iu,
  (intptr_t)&asn1_value__local_1001,
},
};

static const ASN1CType asn1_constraint__local_997[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_998,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_996[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_997,
};

const ASN1CType asn1_type_ProtocolIE_Field_83[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_83),

  offsetof(ProtocolIE_Field_83, id) | 0x0,
  (intptr_t)asn1_type__local_994,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_83, criticality) | 0x0,
  (intptr_t)asn1_type__local_995,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_83, value) | 0x0,
  (intptr_t)asn1_type__local_996,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1002[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1003[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1007 = 126;

static const Criticality asn1_value__local_1008 = 1;

static const Presence asn1_value__local_1009 = 0;

static const ProtocolIE_ID asn1_value__local_1010 = 3;

static const Criticality asn1_value__local_1011 = 1;

static const Presence asn1_value__local_1012 = 2;

static const ProtocolIE_ID asn1_value__local_1013 = 86;

static const Criticality asn1_value__local_1014 = 1;

static const Presence asn1_value__local_1015 = 0;

static const ProtocolIE_ID asn1_value__local_1016 = 96;

static const Criticality asn1_value__local_1017 = 1;

static const Presence asn1_value__local_1018 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1006[] = {
{
  (intptr_t)&asn1_value__local_1007,
  (intptr_t)&asn1_value__local_1008,
  (intptr_t)asn1_type_InterSystemInformationTransferType,
  (intptr_t)&asn1_value__local_1009,
},
{
  (intptr_t)&asn1_value__local_1010,
  (intptr_t)&asn1_value__local_1011,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_1012,
},
{
  (intptr_t)&asn1_value__local_1013,
  (intptr_t)&asn1_value__local_1014,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_1015,
},
{
  (intptr_t)&asn1_value__local_1016,
  (intptr_t)&asn1_value__local_1017,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_1018,
},
};

static const ASN1CType asn1_constraint__local_1005[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1006,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1004[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1005,
};

const ASN1CType asn1_type_ProtocolIE_Field_84[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_84),

  offsetof(ProtocolIE_Field_84, id) | 0x0,
  (intptr_t)asn1_type__local_1002,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_84, criticality) | 0x0,
  (intptr_t)asn1_type__local_1003,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_84, value) | 0x0,
  (intptr_t)asn1_type__local_1004,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1019[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1020[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1024 = 136;

static const Criticality asn1_value__local_1025 = 0;

static const Presence asn1_value__local_1026 = 2;

static const ProtocolIE_ID asn1_value__local_1027 = 137;

static const Criticality asn1_value__local_1028 = 0;

static const Presence asn1_value__local_1029 = 2;

static const ProtocolIE_ID asn1_value__local_1030 = 123;

static const Criticality asn1_value__local_1031 = 0;

static const Presence asn1_value__local_1032 = 1;

static const ProtocolIE_ID asn1_value__local_1033 = 139;

static const Criticality asn1_value__local_1034 = 0;

static const Presence asn1_value__local_1035 = 1;

static const ProtocolIE_ID asn1_value__local_1036 = 3;

static const Criticality asn1_value__local_1037 = 0;

static const Presence asn1_value__local_1038 = 2;

static const ProtocolIE_ID asn1_value__local_1039 = 86;

static const Criticality asn1_value__local_1040 = 0;

static const Presence asn1_value__local_1041 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_1023[] = {
{
  (intptr_t)&asn1_value__local_1024,
  (intptr_t)&asn1_value__local_1025,
  (intptr_t)asn1_type_InformationExchangeID,
  (intptr_t)&asn1_value__local_1026,
},
{
  (intptr_t)&asn1_value__local_1027,
  (intptr_t)&asn1_value__local_1028,
  (intptr_t)asn1_type_InformationExchangeType,
  (intptr_t)&asn1_value__local_1029,
},
{
  (intptr_t)&asn1_value__local_1030,
  (intptr_t)&asn1_value__local_1031,
  (intptr_t)asn1_type_InformationTransferType,
  (intptr_t)&asn1_value__local_1032,
},
{
  (intptr_t)&asn1_value__local_1033,
  (intptr_t)&asn1_value__local_1034,
  (intptr_t)asn1_type_InformationRequestType,
  (intptr_t)&asn1_value__local_1035,
},
{
  (intptr_t)&asn1_value__local_1036,
  (intptr_t)&asn1_value__local_1037,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_1038,
},
{
  (intptr_t)&asn1_value__local_1039,
  (intptr_t)&asn1_value__local_1040,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_1041,
},
};

static const ASN1CType asn1_constraint__local_1022[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1023,
  6,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1021[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1022,
};

const ASN1CType asn1_type_ProtocolIE_Field_85[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_85),

  offsetof(ProtocolIE_Field_85, id) | 0x0,
  (intptr_t)asn1_type__local_1019,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_85, criticality) | 0x0,
  (intptr_t)asn1_type__local_1020,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_85, value) | 0x0,
  (intptr_t)asn1_type__local_1021,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1042[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1043[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1047 = 136;

static const Criticality asn1_value__local_1048 = 1;

static const Presence asn1_value__local_1049 = 2;

static const ProtocolIE_ID asn1_value__local_1050 = 138;

static const Criticality asn1_value__local_1051 = 1;

static const Presence asn1_value__local_1052 = 0;

static const ProtocolIE_ID asn1_value__local_1053 = 3;

static const Criticality asn1_value__local_1054 = 1;

static const Presence asn1_value__local_1055 = 2;

static const ProtocolIE_ID asn1_value__local_1056 = 96;

static const Criticality asn1_value__local_1057 = 1;

static const Presence asn1_value__local_1058 = 0;

static const ProtocolIE_ID asn1_value__local_1059 = 9;

static const Criticality asn1_value__local_1060 = 1;

static const Presence asn1_value__local_1061 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1046[] = {
{
  (intptr_t)&asn1_value__local_1047,
  (intptr_t)&asn1_value__local_1048,
  (intptr_t)asn1_type_InformationExchangeID,
  (intptr_t)&asn1_value__local_1049,
},
{
  (intptr_t)&asn1_value__local_1050,
  (intptr_t)&asn1_value__local_1051,
  (intptr_t)asn1_type_InformationRequested,
  (intptr_t)&asn1_value__local_1052,
},
{
  (intptr_t)&asn1_value__local_1053,
  (intptr_t)&asn1_value__local_1054,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_1055,
},
{
  (intptr_t)&asn1_value__local_1056,
  (intptr_t)&asn1_value__local_1057,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_1058,
},
{
  (intptr_t)&asn1_value__local_1059,
  (intptr_t)&asn1_value__local_1060,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_1061,
},
};

static const ASN1CType asn1_constraint__local_1045[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1046,
  5,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1044[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1045,
};

const ASN1CType asn1_type_ProtocolIE_Field_86[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_86),

  offsetof(ProtocolIE_Field_86, id) | 0x0,
  (intptr_t)asn1_type__local_1042,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_86, criticality) | 0x0,
  (intptr_t)asn1_type__local_1043,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_86, value) | 0x0,
  (intptr_t)asn1_type__local_1044,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1062[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1063[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1067 = 136;

static const Criticality asn1_value__local_1068 = 1;

static const Presence asn1_value__local_1069 = 2;

static const ProtocolIE_ID asn1_value__local_1070 = 3;

static const Criticality asn1_value__local_1071 = 1;

static const Presence asn1_value__local_1072 = 2;

static const ProtocolIE_ID asn1_value__local_1073 = 96;

static const Criticality asn1_value__local_1074 = 1;

static const Presence asn1_value__local_1075 = 0;

static const ProtocolIE_ID asn1_value__local_1076 = 4;

static const Criticality asn1_value__local_1077 = 1;

static const Presence asn1_value__local_1078 = 2;

static const ProtocolIE_ID asn1_value__local_1079 = 9;

static const Criticality asn1_value__local_1080 = 1;

static const Presence asn1_value__local_1081 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1066[] = {
{
  (intptr_t)&asn1_value__local_1067,
  (intptr_t)&asn1_value__local_1068,
  (intptr_t)asn1_type_InformationExchangeID,
  (intptr_t)&asn1_value__local_1069,
},
{
  (intptr_t)&asn1_value__local_1070,
  (intptr_t)&asn1_value__local_1071,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_1072,
},
{
  (intptr_t)&asn1_value__local_1073,
  (intptr_t)&asn1_value__local_1074,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_1075,
},
{
  (intptr_t)&asn1_value__local_1076,
  (intptr_t)&asn1_value__local_1077,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_1078,
},
{
  (intptr_t)&asn1_value__local_1079,
  (intptr_t)&asn1_value__local_1080,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_1081,
},
};

static const ASN1CType asn1_constraint__local_1065[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1066,
  5,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1064[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1065,
};

const ASN1CType asn1_type_ProtocolIE_Field_87[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_87),

  offsetof(ProtocolIE_Field_87, id) | 0x0,
  (intptr_t)asn1_type__local_1062,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_87, criticality) | 0x0,
  (intptr_t)asn1_type__local_1063,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_87, value) | 0x0,
  (intptr_t)asn1_type__local_1064,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1082[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1083[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1087 = 153;

static const Criticality asn1_value__local_1088 = 0;

static const Presence asn1_value__local_1089 = 2;

static const ProtocolIE_ID asn1_value__local_1090 = 147;

static const Criticality asn1_value__local_1091 = 1;

static const Presence asn1_value__local_1092 = 0;

static const ProtocolIE_ID asn1_value__local_1093 = 143;

static const Criticality asn1_value__local_1094 = 0;

static const Presence asn1_value__local_1095 = 2;

static const ProtocolIE_ID asn1_value__local_1096 = 79;

static const Criticality asn1_value__local_1097 = 0;

static const Presence asn1_value__local_1098 = 2;

static const ProtocolIE_ID asn1_value__local_1099 = 149;

static const Criticality asn1_value__local_1100 = 0;

static const Presence asn1_value__local_1101 = 2;

static const ProtocolIE_ID asn1_value__local_1102 = 148;

static const Criticality asn1_value__local_1103 = 1;

static const Presence asn1_value__local_1104 = 0;

static const ProtocolIE_ID asn1_value__local_1105 = 146;

static const Criticality asn1_value__local_1106 = 0;

static const Presence asn1_value__local_1107 = 2;

static const ProtocolIE_ID asn1_value__local_1108 = 145;

static const Criticality asn1_value__local_1109 = 0;

static const Presence asn1_value__local_1110 = 2;

static const ProtocolIE_ID asn1_value__local_1111 = 135;

static const Criticality asn1_value__local_1112 = 1;

static const Presence asn1_value__local_1113 = 0;

static const ProtocolIE_ID asn1_value__local_1114 = 150;

static const Criticality asn1_value__local_1115 = 1;

static const Presence asn1_value__local_1116 = 0;

static const ProtocolIE_ID asn1_value__local_1117 = 96;

static const Criticality asn1_value__local_1118 = 0;

static const Presence asn1_value__local_1119 = 0;

static const ProtocolIE_ID asn1_value__local_1120 = 157;

static const Criticality asn1_value__local_1121 = 1;

static const Presence asn1_value__local_1122 = 0;

static const ProtocolIE_ID asn1_value__local_1123 = 163;

static const Criticality asn1_value__local_1124 = 0;

static const Presence asn1_value__local_1125 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_1086[] = {
{
  (intptr_t)&asn1_value__local_1087,
  (intptr_t)&asn1_value__local_1088,
  (intptr_t)asn1_type_TMGI,
  (intptr_t)&asn1_value__local_1089,
},
{
  (intptr_t)&asn1_value__local_1090,
  (intptr_t)&asn1_value__local_1091,
  (intptr_t)asn1_type_MBMSSessionIdentity,
  (intptr_t)&asn1_value__local_1092,
},
{
  (intptr_t)&asn1_value__local_1093,
  (intptr_t)&asn1_value__local_1094,
  (intptr_t)asn1_type_MBMSBearerServiceType,
  (intptr_t)&asn1_value__local_1095,
},
{
  (intptr_t)&asn1_value__local_1096,
  (intptr_t)&asn1_value__local_1097,
  (intptr_t)asn1_type_IuSignallingConnectionIdentifier,
  (intptr_t)&asn1_value__local_1098,
},
{
  (intptr_t)&asn1_value__local_1099,
  (intptr_t)&asn1_value__local_1100,
  (intptr_t)asn1_type_RAB_Parameters,
  (intptr_t)&asn1_value__local_1101,
},
{
  (intptr_t)&asn1_value__local_1102,
  (intptr_t)&asn1_value__local_1103,
  (intptr_t)asn1_type_PDP_TypeInformation,
  (intptr_t)&asn1_value__local_1104,
},
{
  (intptr_t)&asn1_value__local_1105,
  (intptr_t)&asn1_value__local_1106,
  (intptr_t)asn1_type_MBMSSessionDuration,
  (intptr_t)&asn1_value__local_1107,
},
{
  (intptr_t)&asn1_value__local_1108,
  (intptr_t)&asn1_value__local_1109,
  (intptr_t)asn1_type_MBMSServiceArea,
  (intptr_t)&asn1_value__local_1110,
},
{
  (intptr_t)&asn1_value__local_1111,
  (intptr_t)&asn1_value__local_1112,
  (intptr_t)asn1_type_FrequenceLayerConvergenceFlag,
  (intptr_t)&asn1_value__local_1113,
},
{
  (intptr_t)&asn1_value__local_1114,
  (intptr_t)&asn1_value__local_1115,
  (intptr_t)asn1_type_RAListofIdleModeUEs,
  (intptr_t)&asn1_value__local_1116,
},
{
  (intptr_t)&asn1_value__local_1117,
  (intptr_t)&asn1_value__local_1118,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_1119,
},
{
  (intptr_t)&asn1_value__local_1120,
  (intptr_t)&asn1_value__local_1121,
  (intptr_t)asn1_type_MBMSSessionRepetitionNumber,
  (intptr_t)&asn1_value__local_1122,
},
{
  (intptr_t)&asn1_value__local_1123,
  (intptr_t)&asn1_value__local_1124,
  (intptr_t)asn1_type_TimeToMBMSDataTransfer,
  (intptr_t)&asn1_value__local_1125,
},
};

static const ASN1CType asn1_constraint__local_1085[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1086,
  13,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1084[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1085,
};

const ASN1CType asn1_type_ProtocolIE_Field_88[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_88),

  offsetof(ProtocolIE_Field_88, id) | 0x0,
  (intptr_t)asn1_type__local_1082,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_88, criticality) | 0x0,
  (intptr_t)asn1_type__local_1083,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_88, value) | 0x0,
  (intptr_t)asn1_type__local_1084,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1126[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1127[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1131 = 154;

static const Criticality asn1_value__local_1132 = 1;

static const Presence asn1_value__local_1133 = 0;

static const ProtocolIE_ID asn1_value__local_1134 = 4;

static const Criticality asn1_value__local_1135 = 1;

static const Presence asn1_value__local_1136 = 0;

static const ProtocolIE_ID asn1_value__local_1137 = 9;

static const Criticality asn1_value__local_1138 = 1;

static const Presence asn1_value__local_1139 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1130[] = {
{
  (intptr_t)&asn1_value__local_1131,
  (intptr_t)&asn1_value__local_1132,
  (intptr_t)asn1_type_TransportLayerInformation,
  (intptr_t)&asn1_value__local_1133,
},
{
  (intptr_t)&asn1_value__local_1134,
  (intptr_t)&asn1_value__local_1135,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_1136,
},
{
  (intptr_t)&asn1_value__local_1137,
  (intptr_t)&asn1_value__local_1138,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_1139,
},
};

static const ASN1CType asn1_constraint__local_1129[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1130,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1128[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1129,
};

const ASN1CType asn1_type_ProtocolIE_Field_89[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_89),

  offsetof(ProtocolIE_Field_89, id) | 0x0,
  (intptr_t)asn1_type__local_1126,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_89, criticality) | 0x0,
  (intptr_t)asn1_type__local_1127,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_89, value) | 0x0,
  (intptr_t)asn1_type__local_1128,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1140[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1141[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1145 = 4;

static const Criticality asn1_value__local_1146 = 1;

static const Presence asn1_value__local_1147 = 2;

static const ProtocolIE_ID asn1_value__local_1148 = 9;

static const Criticality asn1_value__local_1149 = 1;

static const Presence asn1_value__local_1150 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1144[] = {
{
  (intptr_t)&asn1_value__local_1145,
  (intptr_t)&asn1_value__local_1146,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_1147,
},
{
  (intptr_t)&asn1_value__local_1148,
  (intptr_t)&asn1_value__local_1149,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_1150,
},
};

static const ASN1CType asn1_constraint__local_1143[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1144,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1142[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1143,
};

const ASN1CType asn1_type_ProtocolIE_Field_90[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_90),

  offsetof(ProtocolIE_Field_90, id) | 0x0,
  (intptr_t)asn1_type__local_1140,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_90, criticality) | 0x0,
  (intptr_t)asn1_type__local_1141,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_90, value) | 0x0,
  (intptr_t)asn1_type__local_1142,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1151[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1152[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1156 = 152;

static const Criticality asn1_value__local_1157 = 0;

static const Presence asn1_value__local_1158 = 2;

static const ProtocolIE_ID asn1_value__local_1159 = 134;

static const Criticality asn1_value__local_1160 = 0;

static const Presence asn1_value__local_1161 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_1155[] = {
{
  (intptr_t)&asn1_value__local_1156,
  (intptr_t)&asn1_value__local_1157,
  (intptr_t)asn1_type_SessionUpdateID,
  (intptr_t)&asn1_value__local_1158,
},
{
  (intptr_t)&asn1_value__local_1159,
  (intptr_t)&asn1_value__local_1160,
  (intptr_t)asn1_type_DeltaRAListofIdleModeUEs,
  (intptr_t)&asn1_value__local_1161,
},
};

static const ASN1CType asn1_constraint__local_1154[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1155,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1153[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1154,
};

const ASN1CType asn1_type_ProtocolIE_Field_91[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_91),

  offsetof(ProtocolIE_Field_91, id) | 0x0,
  (intptr_t)asn1_type__local_1151,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_91, criticality) | 0x0,
  (intptr_t)asn1_type__local_1152,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_91, value) | 0x0,
  (intptr_t)asn1_type__local_1153,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1162[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1163[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1167 = 152;

static const Criticality asn1_value__local_1168 = 1;

static const Presence asn1_value__local_1169 = 2;

static const ProtocolIE_ID asn1_value__local_1170 = 154;

static const Criticality asn1_value__local_1171 = 1;

static const Presence asn1_value__local_1172 = 0;

static const ProtocolIE_ID asn1_value__local_1173 = 4;

static const Criticality asn1_value__local_1174 = 1;

static const Presence asn1_value__local_1175 = 0;

static const ProtocolIE_ID asn1_value__local_1176 = 9;

static const Criticality asn1_value__local_1177 = 1;

static const Presence asn1_value__local_1178 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1166[] = {
{
  (intptr_t)&asn1_value__local_1167,
  (intptr_t)&asn1_value__local_1168,
  (intptr_t)asn1_type_SessionUpdateID,
  (intptr_t)&asn1_value__local_1169,
},
{
  (intptr_t)&asn1_value__local_1170,
  (intptr_t)&asn1_value__local_1171,
  (intptr_t)asn1_type_TransportLayerInformation,
  (intptr_t)&asn1_value__local_1172,
},
{
  (intptr_t)&asn1_value__local_1173,
  (intptr_t)&asn1_value__local_1174,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_1175,
},
{
  (intptr_t)&asn1_value__local_1176,
  (intptr_t)&asn1_value__local_1177,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_1178,
},
};

static const ASN1CType asn1_constraint__local_1165[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1166,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1164[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1165,
};

const ASN1CType asn1_type_ProtocolIE_Field_92[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_92),

  offsetof(ProtocolIE_Field_92, id) | 0x0,
  (intptr_t)asn1_type__local_1162,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_92, criticality) | 0x0,
  (intptr_t)asn1_type__local_1163,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_92, value) | 0x0,
  (intptr_t)asn1_type__local_1164,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1179[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1180[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1184 = 152;

static const Criticality asn1_value__local_1185 = 1;

static const Presence asn1_value__local_1186 = 2;

static const ProtocolIE_ID asn1_value__local_1187 = 4;

static const Criticality asn1_value__local_1188 = 1;

static const Presence asn1_value__local_1189 = 2;

static const ProtocolIE_ID asn1_value__local_1190 = 9;

static const Criticality asn1_value__local_1191 = 1;

static const Presence asn1_value__local_1192 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1183[] = {
{
  (intptr_t)&asn1_value__local_1184,
  (intptr_t)&asn1_value__local_1185,
  (intptr_t)asn1_type_SessionUpdateID,
  (intptr_t)&asn1_value__local_1186,
},
{
  (intptr_t)&asn1_value__local_1187,
  (intptr_t)&asn1_value__local_1188,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_1189,
},
{
  (intptr_t)&asn1_value__local_1190,
  (intptr_t)&asn1_value__local_1191,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_1192,
},
};

static const ASN1CType asn1_constraint__local_1182[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1183,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1181[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1182,
};

const ASN1CType asn1_type_ProtocolIE_Field_93[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_93),

  offsetof(ProtocolIE_Field_93, id) | 0x0,
  (intptr_t)asn1_type__local_1179,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_93, criticality) | 0x0,
  (intptr_t)asn1_type__local_1180,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_93, value) | 0x0,
  (intptr_t)asn1_type__local_1181,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1193[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1194[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1198 = 144;

static const Criticality asn1_value__local_1199 = 0;

static const Presence asn1_value__local_1200 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_1197[] = {
{
  (intptr_t)&asn1_value__local_1198,
  (intptr_t)&asn1_value__local_1199,
  (intptr_t)asn1_type_MBMSCNDe_Registration,
  (intptr_t)&asn1_value__local_1200,
},
};

static const ASN1CType asn1_constraint__local_1196[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1197,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1195[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1196,
};

const ASN1CType asn1_type_ProtocolIE_Field_94[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_94),

  offsetof(ProtocolIE_Field_94, id) | 0x0,
  (intptr_t)asn1_type__local_1193,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_94, criticality) | 0x0,
  (intptr_t)asn1_type__local_1194,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_94, value) | 0x0,
  (intptr_t)asn1_type__local_1195,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1201[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1202[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1206 = 4;

static const Criticality asn1_value__local_1207 = 1;

static const Presence asn1_value__local_1208 = 0;

static const ProtocolIE_ID asn1_value__local_1209 = 9;

static const Criticality asn1_value__local_1210 = 1;

static const Presence asn1_value__local_1211 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1205[] = {
{
  (intptr_t)&asn1_value__local_1206,
  (intptr_t)&asn1_value__local_1207,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_1208,
},
{
  (intptr_t)&asn1_value__local_1209,
  (intptr_t)&asn1_value__local_1210,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_1211,
},
};

static const ASN1CType asn1_constraint__local_1204[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1205,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1203[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1204,
};

const ASN1CType asn1_type_ProtocolIE_Field_95[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_95),

  offsetof(ProtocolIE_Field_95, id) | 0x0,
  (intptr_t)asn1_type__local_1201,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_95, criticality) | 0x0,
  (intptr_t)asn1_type__local_1202,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_95, value) | 0x0,
  (intptr_t)asn1_type__local_1203,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1212[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1213[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1217 = 141;

static const Criticality asn1_value__local_1218 = 0;

static const Presence asn1_value__local_1219 = 0;

static const ProtocolIE_ID asn1_value__local_1220 = 142;

static const Criticality asn1_value__local_1221 = 0;

static const Presence asn1_value__local_1222 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1216[] = {
{
  (intptr_t)&asn1_value__local_1217,
  (intptr_t)&asn1_value__local_1218,
  (intptr_t)asn1_type_JoinedMBMSBearerService_IEs,
  (intptr_t)&asn1_value__local_1219,
},
{
  (intptr_t)&asn1_value__local_1220,
  (intptr_t)&asn1_value__local_1221,
  (intptr_t)asn1_type_LeftMBMSBearerService_IEs,
  (intptr_t)&asn1_value__local_1222,
},
};

static const ASN1CType asn1_constraint__local_1215[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1216,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1214[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1215,
};

const ASN1CType asn1_type_ProtocolIE_Field_96[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_96),

  offsetof(ProtocolIE_Field_96, id) | 0x0,
  (intptr_t)asn1_type__local_1212,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_96, criticality) | 0x0,
  (intptr_t)asn1_type__local_1213,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_96, value) | 0x0,
  (intptr_t)asn1_type__local_1214,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1223[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1224[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1228 = 155;

static const Criticality asn1_value__local_1229 = 1;

static const Presence asn1_value__local_1230 = 0;

static const ProtocolIE_ID asn1_value__local_1231 = 9;

static const Criticality asn1_value__local_1232 = 1;

static const Presence asn1_value__local_1233 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1227[] = {
{
  (intptr_t)&asn1_value__local_1228,
  (intptr_t)&asn1_value__local_1229,
  (intptr_t)asn1_type_UnsuccessfulLinking_IEs,
  (intptr_t)&asn1_value__local_1230,
},
{
  (intptr_t)&asn1_value__local_1231,
  (intptr_t)&asn1_value__local_1232,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_1233,
},
};

static const ASN1CType asn1_constraint__local_1226[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1227,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1225[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1226,
};

const ASN1CType asn1_type_ProtocolIE_Field_97[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_97),

  offsetof(ProtocolIE_Field_97, id) | 0x0,
  (intptr_t)asn1_type__local_1223,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_97, criticality) | 0x0,
  (intptr_t)asn1_type__local_1224,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_97, value) | 0x0,
  (intptr_t)asn1_type__local_1225,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1234[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1235[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1239 = 151;

static const Criticality asn1_value__local_1240 = 0;

static const Presence asn1_value__local_1241 = 2;

static const ProtocolIE_ID asn1_value__local_1242 = 153;

static const Criticality asn1_value__local_1243 = 0;

static const Presence asn1_value__local_1244 = 2;

static const ProtocolIE_ID asn1_value__local_1245 = 140;

static const Criticality asn1_value__local_1246 = 0;

static const Presence asn1_value__local_1247 = 1;

static const ProtocolIE_ID asn1_value__local_1248 = 132;

static const Criticality asn1_value__local_1249 = 0;

static const Presence asn1_value__local_1250 = 1;

static const ProtocolIE_ID asn1_value__local_1251 = 86;

static const Criticality asn1_value__local_1252 = 0;

static const Presence asn1_value__local_1253 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1238[] = {
{
  (intptr_t)&asn1_value__local_1239,
  (intptr_t)&asn1_value__local_1240,
  (intptr_t)asn1_type_MBMSRegistrationRequestType,
  (intptr_t)&asn1_value__local_1241,
},
{
  (intptr_t)&asn1_value__local_1242,
  (intptr_t)&asn1_value__local_1243,
  (intptr_t)asn1_type_TMGI,
  (intptr_t)&asn1_value__local_1244,
},
{
  (intptr_t)&asn1_value__local_1245,
  (intptr_t)&asn1_value__local_1246,
  (intptr_t)asn1_type_IPMulticastAddress,
  (intptr_t)&asn1_value__local_1247,
},
{
  (intptr_t)&asn1_value__local_1248,
  (intptr_t)&asn1_value__local_1249,
  (intptr_t)asn1_type_APN,
  (intptr_t)&asn1_value__local_1250,
},
{
  (intptr_t)&asn1_value__local_1251,
  (intptr_t)&asn1_value__local_1252,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_1253,
},
};

static const ASN1CType asn1_constraint__local_1237[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1238,
  5,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1236[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1237,
};

const ASN1CType asn1_type_ProtocolIE_Field_98[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_98),

  offsetof(ProtocolIE_Field_98, id) | 0x0,
  (intptr_t)asn1_type__local_1234,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_98, criticality) | 0x0,
  (intptr_t)asn1_type__local_1235,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_98, value) | 0x0,
  (intptr_t)asn1_type__local_1236,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1254[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1255[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1259 = 153;

static const Criticality asn1_value__local_1260 = 1;

static const Presence asn1_value__local_1261 = 0;

static const ProtocolIE_ID asn1_value__local_1262 = 96;

static const Criticality asn1_value__local_1263 = 1;

static const Presence asn1_value__local_1264 = 0;

static const ProtocolIE_ID asn1_value__local_1265 = 9;

static const Criticality asn1_value__local_1266 = 1;

static const Presence asn1_value__local_1267 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1258[] = {
{
  (intptr_t)&asn1_value__local_1259,
  (intptr_t)&asn1_value__local_1260,
  (intptr_t)asn1_type_TMGI,
  (intptr_t)&asn1_value__local_1261,
},
{
  (intptr_t)&asn1_value__local_1262,
  (intptr_t)&asn1_value__local_1263,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_1264,
},
{
  (intptr_t)&asn1_value__local_1265,
  (intptr_t)&asn1_value__local_1266,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_1267,
},
};

static const ASN1CType asn1_constraint__local_1257[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1258,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1256[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1257,
};

const ASN1CType asn1_type_ProtocolIE_Field_99[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_99),

  offsetof(ProtocolIE_Field_99, id) | 0x0,
  (intptr_t)asn1_type__local_1254,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_99, criticality) | 0x0,
  (intptr_t)asn1_type__local_1255,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_99, value) | 0x0,
  (intptr_t)asn1_type__local_1256,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1268[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1269[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1273 = 153;

static const Criticality asn1_value__local_1274 = 1;

static const Presence asn1_value__local_1275 = 0;

static const ProtocolIE_ID asn1_value__local_1276 = 96;

static const Criticality asn1_value__local_1277 = 1;

static const Presence asn1_value__local_1278 = 0;

static const ProtocolIE_ID asn1_value__local_1279 = 4;

static const Criticality asn1_value__local_1280 = 1;

static const Presence asn1_value__local_1281 = 2;

static const ProtocolIE_ID asn1_value__local_1282 = 9;

static const Criticality asn1_value__local_1283 = 1;

static const Presence asn1_value__local_1284 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1272[] = {
{
  (intptr_t)&asn1_value__local_1273,
  (intptr_t)&asn1_value__local_1274,
  (intptr_t)asn1_type_TMGI,
  (intptr_t)&asn1_value__local_1275,
},
{
  (intptr_t)&asn1_value__local_1276,
  (intptr_t)&asn1_value__local_1277,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_1278,
},
{
  (intptr_t)&asn1_value__local_1279,
  (intptr_t)&asn1_value__local_1280,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_1281,
},
{
  (intptr_t)&asn1_value__local_1282,
  (intptr_t)&asn1_value__local_1283,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_1284,
},
};

static const ASN1CType asn1_constraint__local_1271[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1272,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1270[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1271,
};

const ASN1CType asn1_type_ProtocolIE_Field_100[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_100),

  offsetof(ProtocolIE_Field_100, id) | 0x0,
  (intptr_t)asn1_type__local_1268,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_100, criticality) | 0x0,
  (intptr_t)asn1_type__local_1269,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_100, value) | 0x0,
  (intptr_t)asn1_type__local_1270,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1285[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1286[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1290 = 153;

static const Criticality asn1_value__local_1291 = 0;

static const Presence asn1_value__local_1292 = 2;

static const ProtocolIE_ID asn1_value__local_1293 = 96;

static const Criticality asn1_value__local_1294 = 0;

static const Presence asn1_value__local_1295 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1289[] = {
{
  (intptr_t)&asn1_value__local_1290,
  (intptr_t)&asn1_value__local_1291,
  (intptr_t)asn1_type_TMGI,
  (intptr_t)&asn1_value__local_1292,
},
{
  (intptr_t)&asn1_value__local_1293,
  (intptr_t)&asn1_value__local_1294,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_1295,
},
};

static const ASN1CType asn1_constraint__local_1288[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1289,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1287[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1288,
};

const ASN1CType asn1_type_ProtocolIE_Field_101[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_101),

  offsetof(ProtocolIE_Field_101, id) | 0x0,
  (intptr_t)asn1_type__local_1285,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_101, criticality) | 0x0,
  (intptr_t)asn1_type__local_1286,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_101, value) | 0x0,
  (intptr_t)asn1_type__local_1287,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1296[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1297[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1301 = 153;

static const Criticality asn1_value__local_1302 = 1;

static const Presence asn1_value__local_1303 = 2;

static const ProtocolIE_ID asn1_value__local_1304 = 86;

static const Criticality asn1_value__local_1305 = 1;

static const Presence asn1_value__local_1306 = 2;

static const ProtocolIE_ID asn1_value__local_1307 = 4;

static const Criticality asn1_value__local_1308 = 1;

static const Presence asn1_value__local_1309 = 0;

static const ProtocolIE_ID asn1_value__local_1310 = 9;

static const Criticality asn1_value__local_1311 = 1;

static const Presence asn1_value__local_1312 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1300[] = {
{
  (intptr_t)&asn1_value__local_1301,
  (intptr_t)&asn1_value__local_1302,
  (intptr_t)asn1_type_TMGI,
  (intptr_t)&asn1_value__local_1303,
},
{
  (intptr_t)&asn1_value__local_1304,
  (intptr_t)&asn1_value__local_1305,
  (intptr_t)asn1_type_GlobalRNC_ID,
  (intptr_t)&asn1_value__local_1306,
},
{
  (intptr_t)&asn1_value__local_1307,
  (intptr_t)&asn1_value__local_1308,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_1309,
},
{
  (intptr_t)&asn1_value__local_1310,
  (intptr_t)&asn1_value__local_1311,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_1312,
},
};

static const ASN1CType asn1_constraint__local_1299[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1300,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1298[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1299,
};

const ASN1CType asn1_type_ProtocolIE_Field_102[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_102),

  offsetof(ProtocolIE_Field_102, id) | 0x0,
  (intptr_t)asn1_type__local_1296,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_102, criticality) | 0x0,
  (intptr_t)asn1_type__local_1297,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_102, value) | 0x0,
  (intptr_t)asn1_type__local_1298,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1313[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1314[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1318 = 154;

static const Criticality asn1_value__local_1319 = 1;

static const Presence asn1_value__local_1320 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_1317[] = {
{
  (intptr_t)&asn1_value__local_1318,
  (intptr_t)&asn1_value__local_1319,
  (intptr_t)asn1_type_TransportLayerInformation,
  (intptr_t)&asn1_value__local_1320,
},
};

static const ASN1CType asn1_constraint__local_1316[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1317,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1315[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1316,
};

const ASN1CType asn1_type_ProtocolIE_Field_103[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_103),

  offsetof(ProtocolIE_Field_103, id) | 0x0,
  (intptr_t)asn1_type__local_1313,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_103, criticality) | 0x0,
  (intptr_t)asn1_type__local_1314,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_103, value) | 0x0,
  (intptr_t)asn1_type__local_1315,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1321[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1322[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1326 = 4;

static const Criticality asn1_value__local_1327 = 1;

static const Presence asn1_value__local_1328 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_1325[] = {
{
  (intptr_t)&asn1_value__local_1326,
  (intptr_t)&asn1_value__local_1327,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_1328,
},
};

static const ASN1CType asn1_constraint__local_1324[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1325,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1323[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1324,
};

const ASN1CType asn1_type_ProtocolIE_Field_104[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_104),

  offsetof(ProtocolIE_Field_104, id) | 0x0,
  (intptr_t)asn1_type__local_1321,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_104, criticality) | 0x0,
  (intptr_t)asn1_type__local_1322,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_104, value) | 0x0,
  (intptr_t)asn1_type__local_1323,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1329[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1330[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1334 = 4;

static const Criticality asn1_value__local_1335 = 1;

static const Presence asn1_value__local_1336 = 2;

static const ProtocolIE_ID asn1_value__local_1337 = 9;

static const Criticality asn1_value__local_1338 = 1;

static const Presence asn1_value__local_1339 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1333[] = {
{
  (intptr_t)&asn1_value__local_1334,
  (intptr_t)&asn1_value__local_1335,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_1336,
},
{
  (intptr_t)&asn1_value__local_1337,
  (intptr_t)&asn1_value__local_1338,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_1339,
},
};

static const ASN1CType asn1_constraint__local_1332[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1333,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1331[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1332,
};

const ASN1CType asn1_type_ProtocolIE_Field_105[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_105),

  offsetof(ProtocolIE_Field_105, id) | 0x0,
  (intptr_t)asn1_type__local_1329,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_105, criticality) | 0x0,
  (intptr_t)asn1_type__local_1330,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_105, value) | 0x0,
  (intptr_t)asn1_type__local_1331,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1340[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1341[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1345 = 4;

static const Criticality asn1_value__local_1346 = 1;

static const Presence asn1_value__local_1347 = 2;

static const ProtocolIE_ID asn1_value__local_1348 = 9;

static const Criticality asn1_value__local_1349 = 1;

static const Presence asn1_value__local_1350 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1344[] = {
{
  (intptr_t)&asn1_value__local_1345,
  (intptr_t)&asn1_value__local_1346,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_1347,
},
{
  (intptr_t)&asn1_value__local_1348,
  (intptr_t)&asn1_value__local_1349,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_1350,
},
};

static const ASN1CType asn1_constraint__local_1343[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1344,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1342[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1343,
};

const ASN1CType asn1_type_ProtocolIE_Field_106[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_106),

  offsetof(ProtocolIE_Field_106, id) | 0x0,
  (intptr_t)asn1_type__local_1340,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_106, criticality) | 0x0,
  (intptr_t)asn1_type__local_1341,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_106, value) | 0x0,
  (intptr_t)asn1_type__local_1342,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1351[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1352[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1354[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1353[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1354,
};

const ASN1CType asn1_type_ProtocolIE_Field_107[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_107),

  offsetof(ProtocolIE_Field_107, id) | 0x0,
  (intptr_t)asn1_type__local_1351,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_107, criticality) | 0x0,
  (intptr_t)asn1_type__local_1352,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_107, value) | 0x0,
  (intptr_t)asn1_type__local_1353,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1356[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1357[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1361 = 225;

static const Criticality asn1_value__local_1362 = 0;

static const Presence asn1_value__local_1363 = 2;

static const ProtocolIE_ID asn1_value__local_1364 = 224;

static const Criticality asn1_value__local_1365 = 0;

static const Presence asn1_value__local_1366 = 2;

static const ProtocolIE_ID asn1_value__local_1367 = 227;

static const Criticality asn1_value__local_1368 = 0;

static const Presence asn1_value__local_1369 = 2;

static const ProtocolIE_ID asn1_value__local_1370 = 9;

static const Criticality asn1_value__local_1371 = 1;

static const Presence asn1_value__local_1372 = 0;

static const RANAP_PROTOCOL_IES asn1_value__local_1360[] = {
{
  (intptr_t)&asn1_value__local_1361,
  (intptr_t)&asn1_value__local_1362,
  (intptr_t)asn1_type_IntegrityProtectionKey,
  (intptr_t)&asn1_value__local_1363,
},
{
  (intptr_t)&asn1_value__local_1364,
  (intptr_t)&asn1_value__local_1365,
  (intptr_t)asn1_type_EncryptionKey,
  (intptr_t)&asn1_value__local_1366,
},
{
  (intptr_t)&asn1_value__local_1367,
  (intptr_t)&asn1_value__local_1368,
  (intptr_t)asn1_type_SRVCC_Information,
  (intptr_t)&asn1_value__local_1369,
},
{
  (intptr_t)&asn1_value__local_1370,
  (intptr_t)&asn1_value__local_1371,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_1372,
},
};

static const ASN1CType asn1_constraint__local_1359[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1360,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1358[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1359,
};

const ASN1CType asn1_type_ProtocolIE_Field_108[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_108),

  offsetof(ProtocolIE_Field_108, id) | 0x0,
  (intptr_t)asn1_type__local_1356,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_108, criticality) | 0x0,
  (intptr_t)asn1_type__local_1357,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_108, value) | 0x0,
  (intptr_t)asn1_type__local_1358,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1373[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1374[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1376[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1375[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1376,
};

const ASN1CType asn1_type_ProtocolIE_Field_109[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_109),

  offsetof(ProtocolIE_Field_109, id) | 0x0,
  (intptr_t)asn1_type__local_1373,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_109, criticality) | 0x0,
  (intptr_t)asn1_type__local_1374,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_109, value) | 0x0,
  (intptr_t)asn1_type__local_1375,
  0,
  (intptr_t)"value",

};

static const ASN1CType asn1_type__local_1378[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1379[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1383 = 258;

static const Criticality asn1_value__local_1384 = 0;

static const Presence asn1_value__local_1385 = 2;

static const RANAP_PROTOCOL_IES asn1_value__local_1382[] = {
{
  (intptr_t)&asn1_value__local_1383,
  (intptr_t)&asn1_value__local_1384,
  (intptr_t)asn1_type_VoiceSupportMatchIndicator,
  (intptr_t)&asn1_value__local_1385,
},
};

static const ASN1CType asn1_constraint__local_1381[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES,
  2,
  (intptr_t)asn1_value__local_1382,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1380[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1381,
};

const ASN1CType asn1_type_ProtocolIE_Field_110[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolIE_Field_110),

  offsetof(ProtocolIE_Field_110, id) | 0x0,
  (intptr_t)asn1_type__local_1378,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_Field_110, criticality) | 0x0,
  (intptr_t)asn1_type__local_1379,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolIE_Field_110, value) | 0x0,
  (intptr_t)asn1_type__local_1380,
  0,
  (intptr_t)"value",

};

const ASN1CType asn1_type_ProtocolIE_ContainerPair_1[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_FieldPair_1),
  (intptr_t)asn1_type_ProtocolIE_FieldPair_1,
  0,
};

static const ASN1CType asn1_type__local_1386[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

static const ASN1CType asn1_type__local_1387[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1391 = 53;

static const Criticality asn1_value__local_1392 = 0;

static const Criticality asn1_value__local_1393 = 1;

static const Presence asn1_value__local_1394 = 2;

static const RANAP_PROTOCOL_IES_PAIR asn1_value__local_1390[] = {
{
  (intptr_t)&asn1_value__local_1391,
  (intptr_t)&asn1_value__local_1392,
  (intptr_t)asn1_type_RAB_SetupOrModifyItemFirst,
  (intptr_t)&asn1_value__local_1393,
  (intptr_t)asn1_type_RAB_SetupOrModifyItemSecond,
  (intptr_t)&asn1_value__local_1394,
},
};

static const ASN1CType asn1_constraint__local_1389[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES_PAIR,
  2,
  (intptr_t)asn1_value__local_1390,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1388[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1389,
};

static const ASN1CType asn1_type__local_1395[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolIE_ID asn1_value__local_1399 = 53;

static const Criticality asn1_value__local_1400 = 0;

static const Criticality asn1_value__local_1401 = 1;

static const Presence asn1_value__local_1402 = 2;

static const RANAP_PROTOCOL_IES_PAIR asn1_value__local_1398[] = {
{
  (intptr_t)&asn1_value__local_1399,
  (intptr_t)&asn1_value__local_1400,
  (intptr_t)asn1_type_RAB_SetupOrModifyItemFirst,
  (intptr_t)&asn1_value__local_1401,
  (intptr_t)asn1_type_RAB_SetupOrModifyItemSecond,
  (intptr_t)&asn1_value__local_1402,
},
};

static const ASN1CType asn1_constraint__local_1397[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_IES_PAIR,
  4,
  (intptr_t)asn1_value__local_1398,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1396[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100004,
  (intptr_t)asn1_constraint__local_1397,
};

const ASN1CType asn1_type_ProtocolIE_FieldPair_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  5,
  sizeof(ProtocolIE_FieldPair_1),

  offsetof(ProtocolIE_FieldPair_1, id) | 0x0,
  (intptr_t)asn1_type__local_1386,
  0,
  (intptr_t)"id",

  offsetof(ProtocolIE_FieldPair_1, firstCriticality) | 0x0,
  (intptr_t)asn1_type__local_1387,
  0,
  (intptr_t)"firstCriticality",

  offsetof(ProtocolIE_FieldPair_1, firstValue) | 0x0,
  (intptr_t)asn1_type__local_1388,
  0,
  (intptr_t)"firstValue",

  offsetof(ProtocolIE_FieldPair_1, secondCriticality) | 0x0,
  (intptr_t)asn1_type__local_1395,
  0,
  (intptr_t)"secondCriticality",

  offsetof(ProtocolIE_FieldPair_1, secondValue) | 0x0,
  (intptr_t)asn1_type__local_1396,
  0,
  (intptr_t)"secondValue",

};

const ASN1CType asn1_type_ProtocolIE_ContainerList_1[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_3),
  (intptr_t)asn1_type_ProtocolIE_Container_3,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_2[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_4),
  (intptr_t)asn1_type_ProtocolIE_Container_4,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_3[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_7),
  (intptr_t)asn1_type_ProtocolIE_Container_7,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_4[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_8),
  (intptr_t)asn1_type_ProtocolIE_Container_8,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_5[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_11),
  (intptr_t)asn1_type_ProtocolIE_Container_11,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_6[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_13),
  (intptr_t)asn1_type_ProtocolIE_Container_13,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_7[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_14),
  (intptr_t)asn1_type_ProtocolIE_Container_14,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_8[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_19),
  (intptr_t)asn1_type_ProtocolIE_Container_19,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_9[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_21),
  (intptr_t)asn1_type_ProtocolIE_Container_21,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_10[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_22),
  (intptr_t)asn1_type_ProtocolIE_Container_22,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_11[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_27),
  (intptr_t)asn1_type_ProtocolIE_Container_27,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_12[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_29),
  (intptr_t)asn1_type_ProtocolIE_Container_29,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_13[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0xfa,
  sizeof(ProtocolIE_Container_33),
  (intptr_t)asn1_type_ProtocolIE_Container_33,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_14[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0xfa,
  sizeof(ProtocolIE_Container_35),
  (intptr_t)asn1_type_ProtocolIE_Container_35,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_15[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_37),
  (intptr_t)asn1_type_ProtocolIE_Container_37,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_16[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_42),
  (intptr_t)asn1_type_ProtocolIE_Container_42,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_17[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_44),
  (intptr_t)asn1_type_ProtocolIE_Container_44,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_18[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_45),
  (intptr_t)asn1_type_ProtocolIE_Container_45,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_19[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_62),
  (intptr_t)asn1_type_ProtocolIE_Container_62,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_20[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_63),
  (intptr_t)asn1_type_ProtocolIE_Container_63,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_21[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_64),
  (intptr_t)asn1_type_ProtocolIE_Container_64,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_22[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_65),
  (intptr_t)asn1_type_ProtocolIE_Container_65,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_23[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0xf,
  sizeof(ProtocolIE_Container_67),
  (intptr_t)asn1_type_ProtocolIE_Container_67,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_24[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_68),
  (intptr_t)asn1_type_ProtocolIE_Container_68,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_25[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_70),
  (intptr_t)asn1_type_ProtocolIE_Container_70,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_26[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_72),
  (intptr_t)asn1_type_ProtocolIE_Container_72,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_27[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_73),
  (intptr_t)asn1_type_ProtocolIE_Container_73,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerList_28[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_Container_75),
  (intptr_t)asn1_type_ProtocolIE_Container_75,
  0,
};

const ASN1CType asn1_type_ProtocolIE_ContainerPairList_1[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10,
  0x1,
  0x100,
  sizeof(ProtocolIE_ContainerPair_1),
  (intptr_t)asn1_type_ProtocolIE_ContainerPair_1,
  0,
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
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_2),
  (intptr_t)asn1_type_ProtocolExtensionField_2,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_3[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
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
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
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
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
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
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_9),
  (intptr_t)asn1_type_ProtocolExtensionField_9,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_10[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_10),
  (intptr_t)asn1_type_ProtocolExtensionField_10,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_11[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_11),
  (intptr_t)asn1_type_ProtocolExtensionField_11,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_12[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_12),
  (intptr_t)asn1_type_ProtocolExtensionField_12,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_13[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_13),
  (intptr_t)asn1_type_ProtocolExtensionField_13,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_14[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_14),
  (intptr_t)asn1_type_ProtocolExtensionField_14,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_15[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_15),
  (intptr_t)asn1_type_ProtocolExtensionField_15,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_16[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_16),
  (intptr_t)asn1_type_ProtocolExtensionField_16,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_17[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100006,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_17),
  (intptr_t)asn1_type_ProtocolExtensionField_17,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_18[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_18),
  (intptr_t)asn1_type_ProtocolExtensionField_18,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_19[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_19),
  (intptr_t)asn1_type_ProtocolExtensionField_19,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_20[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100005,
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
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
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
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_24),
  (intptr_t)asn1_type_ProtocolExtensionField_24,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_25[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_25),
  (intptr_t)asn1_type_ProtocolExtensionField_25,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_26[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_26),
  (intptr_t)asn1_type_ProtocolExtensionField_26,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_27[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_27),
  (intptr_t)asn1_type_ProtocolExtensionField_27,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_28[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_28),
  (intptr_t)asn1_type_ProtocolExtensionField_28,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_29[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_29),
  (intptr_t)asn1_type_ProtocolExtensionField_29,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_30[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_30),
  (intptr_t)asn1_type_ProtocolExtensionField_30,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_31[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_31),
  (intptr_t)asn1_type_ProtocolExtensionField_31,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_32[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_32),
  (intptr_t)asn1_type_ProtocolExtensionField_32,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_33[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
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
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10000b,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_35),
  (intptr_t)asn1_type_ProtocolExtensionField_35,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_36[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_36),
  (intptr_t)asn1_type_ProtocolExtensionField_36,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_37[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_37),
  (intptr_t)asn1_type_ProtocolExtensionField_37,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_38[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_38),
  (intptr_t)asn1_type_ProtocolExtensionField_38,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_39[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_39),
  (intptr_t)asn1_type_ProtocolExtensionField_39,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_40[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_40),
  (intptr_t)asn1_type_ProtocolExtensionField_40,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_41[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_41),
  (intptr_t)asn1_type_ProtocolExtensionField_41,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_42[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_42),
  (intptr_t)asn1_type_ProtocolExtensionField_42,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_43[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_43),
  (intptr_t)asn1_type_ProtocolExtensionField_43,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_44[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_44),
  (intptr_t)asn1_type_ProtocolExtensionField_44,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_45[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_45),
  (intptr_t)asn1_type_ProtocolExtensionField_45,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_46[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_46),
  (intptr_t)asn1_type_ProtocolExtensionField_46,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_47[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_47),
  (intptr_t)asn1_type_ProtocolExtensionField_47,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_48[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10000c,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_48),
  (intptr_t)asn1_type_ProtocolExtensionField_48,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_49[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_49),
  (intptr_t)asn1_type_ProtocolExtensionField_49,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_50[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_50),
  (intptr_t)asn1_type_ProtocolExtensionField_50,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_51[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_51),
  (intptr_t)asn1_type_ProtocolExtensionField_51,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_52[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_52),
  (intptr_t)asn1_type_ProtocolExtensionField_52,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_53[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_53),
  (intptr_t)asn1_type_ProtocolExtensionField_53,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_54[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_54),
  (intptr_t)asn1_type_ProtocolExtensionField_54,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_55[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_55),
  (intptr_t)asn1_type_ProtocolExtensionField_55,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_56[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_56),
  (intptr_t)asn1_type_ProtocolExtensionField_56,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_57[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_57),
  (intptr_t)asn1_type_ProtocolExtensionField_57,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_58[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_58),
  (intptr_t)asn1_type_ProtocolExtensionField_58,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_59[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_59),
  (intptr_t)asn1_type_ProtocolExtensionField_59,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_60[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_60),
  (intptr_t)asn1_type_ProtocolExtensionField_60,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_61[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_61),
  (intptr_t)asn1_type_ProtocolExtensionField_61,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_62[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_62),
  (intptr_t)asn1_type_ProtocolExtensionField_62,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_63[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_63),
  (intptr_t)asn1_type_ProtocolExtensionField_63,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_64[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_64),
  (intptr_t)asn1_type_ProtocolExtensionField_64,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_65[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_65),
  (intptr_t)asn1_type_ProtocolExtensionField_65,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_66[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_66),
  (intptr_t)asn1_type_ProtocolExtensionField_66,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_67[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10000c,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_67),
  (intptr_t)asn1_type_ProtocolExtensionField_67,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_68[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_68),
  (intptr_t)asn1_type_ProtocolExtensionField_68,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_69[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_69),
  (intptr_t)asn1_type_ProtocolExtensionField_69,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_70[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_70),
  (intptr_t)asn1_type_ProtocolExtensionField_70,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_71[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_71),
  (intptr_t)asn1_type_ProtocolExtensionField_71,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_72[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_72),
  (intptr_t)asn1_type_ProtocolExtensionField_72,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_73[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_73),
  (intptr_t)asn1_type_ProtocolExtensionField_73,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_74[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_74),
  (intptr_t)asn1_type_ProtocolExtensionField_74,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_75[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_75),
  (intptr_t)asn1_type_ProtocolExtensionField_75,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_76[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_76),
  (intptr_t)asn1_type_ProtocolExtensionField_76,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_77[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_77),
  (intptr_t)asn1_type_ProtocolExtensionField_77,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_78[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_78),
  (intptr_t)asn1_type_ProtocolExtensionField_78,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_79[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_79),
  (intptr_t)asn1_type_ProtocolExtensionField_79,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_80[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_80),
  (intptr_t)asn1_type_ProtocolExtensionField_80,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_81[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_81),
  (intptr_t)asn1_type_ProtocolExtensionField_81,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_82[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_82),
  (intptr_t)asn1_type_ProtocolExtensionField_82,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_83[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_83),
  (intptr_t)asn1_type_ProtocolExtensionField_83,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_84[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_84),
  (intptr_t)asn1_type_ProtocolExtensionField_84,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_85[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100006,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_85),
  (intptr_t)asn1_type_ProtocolExtensionField_85,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_86[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_86),
  (intptr_t)asn1_type_ProtocolExtensionField_86,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_87[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_87),
  (intptr_t)asn1_type_ProtocolExtensionField_87,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_88[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_88),
  (intptr_t)asn1_type_ProtocolExtensionField_88,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_89[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_89),
  (intptr_t)asn1_type_ProtocolExtensionField_89,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_90[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_90),
  (intptr_t)asn1_type_ProtocolExtensionField_90,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_91[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_91),
  (intptr_t)asn1_type_ProtocolExtensionField_91,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_92[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_92),
  (intptr_t)asn1_type_ProtocolExtensionField_92,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_93[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_93),
  (intptr_t)asn1_type_ProtocolExtensionField_93,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_94[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_94),
  (intptr_t)asn1_type_ProtocolExtensionField_94,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_95[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_95),
  (intptr_t)asn1_type_ProtocolExtensionField_95,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_96[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_96),
  (intptr_t)asn1_type_ProtocolExtensionField_96,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_97[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_97),
  (intptr_t)asn1_type_ProtocolExtensionField_97,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_98[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_98),
  (intptr_t)asn1_type_ProtocolExtensionField_98,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_99[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_99),
  (intptr_t)asn1_type_ProtocolExtensionField_99,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_100[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_100),
  (intptr_t)asn1_type_ProtocolExtensionField_100,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_101[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100009,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_101),
  (intptr_t)asn1_type_ProtocolExtensionField_101,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_102[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_102),
  (intptr_t)asn1_type_ProtocolExtensionField_102,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_103[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_103),
  (intptr_t)asn1_type_ProtocolExtensionField_103,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_104[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_104),
  (intptr_t)asn1_type_ProtocolExtensionField_104,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_105[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_105),
  (intptr_t)asn1_type_ProtocolExtensionField_105,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_106[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_106),
  (intptr_t)asn1_type_ProtocolExtensionField_106,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_107[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_107),
  (intptr_t)asn1_type_ProtocolExtensionField_107,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_108[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_108),
  (intptr_t)asn1_type_ProtocolExtensionField_108,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_109[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_109),
  (intptr_t)asn1_type_ProtocolExtensionField_109,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_110[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_110),
  (intptr_t)asn1_type_ProtocolExtensionField_110,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_111[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_111),
  (intptr_t)asn1_type_ProtocolExtensionField_111,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_112[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_112),
  (intptr_t)asn1_type_ProtocolExtensionField_112,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_113[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_113),
  (intptr_t)asn1_type_ProtocolExtensionField_113,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_114[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100005,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_114),
  (intptr_t)asn1_type_ProtocolExtensionField_114,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_115[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_115),
  (intptr_t)asn1_type_ProtocolExtensionField_115,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_116[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_116),
  (intptr_t)asn1_type_ProtocolExtensionField_116,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_117[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_117),
  (intptr_t)asn1_type_ProtocolExtensionField_117,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_118[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_118),
  (intptr_t)asn1_type_ProtocolExtensionField_118,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_119[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_119),
  (intptr_t)asn1_type_ProtocolExtensionField_119,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_120[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_120),
  (intptr_t)asn1_type_ProtocolExtensionField_120,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_121[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_121),
  (intptr_t)asn1_type_ProtocolExtensionField_121,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_122[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_122),
  (intptr_t)asn1_type_ProtocolExtensionField_122,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_123[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_123),
  (intptr_t)asn1_type_ProtocolExtensionField_123,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_124[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_124),
  (intptr_t)asn1_type_ProtocolExtensionField_124,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_125[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_125),
  (intptr_t)asn1_type_ProtocolExtensionField_125,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_126[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_126),
  (intptr_t)asn1_type_ProtocolExtensionField_126,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_127[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_127),
  (intptr_t)asn1_type_ProtocolExtensionField_127,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_128[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_128),
  (intptr_t)asn1_type_ProtocolExtensionField_128,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_129[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_129),
  (intptr_t)asn1_type_ProtocolExtensionField_129,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_130[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_130),
  (intptr_t)asn1_type_ProtocolExtensionField_130,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_131[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_131),
  (intptr_t)asn1_type_ProtocolExtensionField_131,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_132[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_132),
  (intptr_t)asn1_type_ProtocolExtensionField_132,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_133[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_133),
  (intptr_t)asn1_type_ProtocolExtensionField_133,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_134[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_134),
  (intptr_t)asn1_type_ProtocolExtensionField_134,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_135[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_135),
  (intptr_t)asn1_type_ProtocolExtensionField_135,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_136[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_136),
  (intptr_t)asn1_type_ProtocolExtensionField_136,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_137[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100006,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_137),
  (intptr_t)asn1_type_ProtocolExtensionField_137,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_138[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_138),
  (intptr_t)asn1_type_ProtocolExtensionField_138,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_139[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_139),
  (intptr_t)asn1_type_ProtocolExtensionField_139,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_140[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_140),
  (intptr_t)asn1_type_ProtocolExtensionField_140,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_141[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_141),
  (intptr_t)asn1_type_ProtocolExtensionField_141,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_142[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_142),
  (intptr_t)asn1_type_ProtocolExtensionField_142,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_143[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_143),
  (intptr_t)asn1_type_ProtocolExtensionField_143,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_144[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_144),
  (intptr_t)asn1_type_ProtocolExtensionField_144,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_145[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_145),
  (intptr_t)asn1_type_ProtocolExtensionField_145,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_146[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_146),
  (intptr_t)asn1_type_ProtocolExtensionField_146,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_147[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_147),
  (intptr_t)asn1_type_ProtocolExtensionField_147,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_148[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_148),
  (intptr_t)asn1_type_ProtocolExtensionField_148,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_149[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_149),
  (intptr_t)asn1_type_ProtocolExtensionField_149,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_150[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_150),
  (intptr_t)asn1_type_ProtocolExtensionField_150,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_151[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_151),
  (intptr_t)asn1_type_ProtocolExtensionField_151,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_152[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_152),
  (intptr_t)asn1_type_ProtocolExtensionField_152,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_153[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_153),
  (intptr_t)asn1_type_ProtocolExtensionField_153,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_154[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100006,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_154),
  (intptr_t)asn1_type_ProtocolExtensionField_154,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_155[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_155),
  (intptr_t)asn1_type_ProtocolExtensionField_155,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_156[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100006,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_156),
  (intptr_t)asn1_type_ProtocolExtensionField_156,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_157[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_157),
  (intptr_t)asn1_type_ProtocolExtensionField_157,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_158[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_158),
  (intptr_t)asn1_type_ProtocolExtensionField_158,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_159[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_159),
  (intptr_t)asn1_type_ProtocolExtensionField_159,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_160[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_160),
  (intptr_t)asn1_type_ProtocolExtensionField_160,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_161[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_161),
  (intptr_t)asn1_type_ProtocolExtensionField_161,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_162[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_162),
  (intptr_t)asn1_type_ProtocolExtensionField_162,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_163[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_163),
  (intptr_t)asn1_type_ProtocolExtensionField_163,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_164[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_164),
  (intptr_t)asn1_type_ProtocolExtensionField_164,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_165[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100005,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_165),
  (intptr_t)asn1_type_ProtocolExtensionField_165,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_166[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_166),
  (intptr_t)asn1_type_ProtocolExtensionField_166,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_167[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x10000a,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_167),
  (intptr_t)asn1_type_ProtocolExtensionField_167,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_168[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_168),
  (intptr_t)asn1_type_ProtocolExtensionField_168,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_169[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_169),
  (intptr_t)asn1_type_ProtocolExtensionField_169,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_170[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_170),
  (intptr_t)asn1_type_ProtocolExtensionField_170,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_171[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_171),
  (intptr_t)asn1_type_ProtocolExtensionField_171,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_172[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_172),
  (intptr_t)asn1_type_ProtocolExtensionField_172,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_173[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_173),
  (intptr_t)asn1_type_ProtocolExtensionField_173,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_174[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_174),
  (intptr_t)asn1_type_ProtocolExtensionField_174,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_175[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_175),
  (intptr_t)asn1_type_ProtocolExtensionField_175,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_176[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_176),
  (intptr_t)asn1_type_ProtocolExtensionField_176,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_177[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_177),
  (intptr_t)asn1_type_ProtocolExtensionField_177,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_178[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_178),
  (intptr_t)asn1_type_ProtocolExtensionField_178,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_179[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_179),
  (intptr_t)asn1_type_ProtocolExtensionField_179,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_180[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_180),
  (intptr_t)asn1_type_ProtocolExtensionField_180,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_181[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_181),
  (intptr_t)asn1_type_ProtocolExtensionField_181,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_182[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_182),
  (intptr_t)asn1_type_ProtocolExtensionField_182,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_183[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_183),
  (intptr_t)asn1_type_ProtocolExtensionField_183,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_184[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_184),
  (intptr_t)asn1_type_ProtocolExtensionField_184,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_185[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_185),
  (intptr_t)asn1_type_ProtocolExtensionField_185,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_186[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_186),
  (intptr_t)asn1_type_ProtocolExtensionField_186,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_187[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_187),
  (intptr_t)asn1_type_ProtocolExtensionField_187,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_188[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_188),
  (intptr_t)asn1_type_ProtocolExtensionField_188,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_189[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_189),
  (intptr_t)asn1_type_ProtocolExtensionField_189,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_190[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_190),
  (intptr_t)asn1_type_ProtocolExtensionField_190,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_191[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_191),
  (intptr_t)asn1_type_ProtocolExtensionField_191,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_192[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_192),
  (intptr_t)asn1_type_ProtocolExtensionField_192,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_193[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_193),
  (intptr_t)asn1_type_ProtocolExtensionField_193,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_194[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_194),
  (intptr_t)asn1_type_ProtocolExtensionField_194,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_195[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_195),
  (intptr_t)asn1_type_ProtocolExtensionField_195,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_196[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_196),
  (intptr_t)asn1_type_ProtocolExtensionField_196,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_197[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_197),
  (intptr_t)asn1_type_ProtocolExtensionField_197,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_198[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_198),
  (intptr_t)asn1_type_ProtocolExtensionField_198,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_199[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_199),
  (intptr_t)asn1_type_ProtocolExtensionField_199,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_200[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_200),
  (intptr_t)asn1_type_ProtocolExtensionField_200,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_201[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_201),
  (intptr_t)asn1_type_ProtocolExtensionField_201,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_202[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_202),
  (intptr_t)asn1_type_ProtocolExtensionField_202,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_203[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_203),
  (intptr_t)asn1_type_ProtocolExtensionField_203,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_204[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_204),
  (intptr_t)asn1_type_ProtocolExtensionField_204,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_205[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_205),
  (intptr_t)asn1_type_ProtocolExtensionField_205,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_206[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_206),
  (intptr_t)asn1_type_ProtocolExtensionField_206,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_207[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_207),
  (intptr_t)asn1_type_ProtocolExtensionField_207,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_208[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_208),
  (intptr_t)asn1_type_ProtocolExtensionField_208,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_209[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_209),
  (intptr_t)asn1_type_ProtocolExtensionField_209,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_210[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_210),
  (intptr_t)asn1_type_ProtocolExtensionField_210,
  0,
};

const ASN1CType asn1_type_ProtocolExtensionContainer_211[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0xffff,
  sizeof(ProtocolExtensionField_211),
  (intptr_t)asn1_type_ProtocolExtensionField_211,
  0,
};

static const ASN1CType asn1_type__local_1403[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1404[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1406[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1405[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1406,
};

const ASN1CType asn1_type_ProtocolExtensionField_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_1),

  offsetof(ProtocolExtensionField_1, id) | 0x0,
  (intptr_t)asn1_type__local_1403,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_1, criticality) | 0x0,
  (intptr_t)asn1_type__local_1404,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_1, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1405,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1408[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1409[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1413 = 158;

static const Criticality asn1_value__local_1414 = 1;

static const Presence asn1_value__local_1415 = 0;

static const ProtocolExtensionID asn1_value__local_1416 = 172;

static const Criticality asn1_value__local_1417 = 1;

static const Presence asn1_value__local_1418 = 0;

static const ProtocolExtensionID asn1_value__local_1419 = 173;

static const Criticality asn1_value__local_1420 = 1;

static const Presence asn1_value__local_1421 = 0;

static const ProtocolExtensionID asn1_value__local_1422 = 215;

static const Criticality asn1_value__local_1423 = 0;

static const Presence asn1_value__local_1424 = 0;

static const ProtocolExtensionID asn1_value__local_1425 = 214;

static const Criticality asn1_value__local_1426 = 0;

static const Presence asn1_value__local_1427 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1412[] = {
{
  (intptr_t)&asn1_value__local_1413,
  (intptr_t)&asn1_value__local_1414,
  (intptr_t)asn1_type_RAB_Parameters,
  (intptr_t)&asn1_value__local_1415,
},
{
  (intptr_t)&asn1_value__local_1416,
  (intptr_t)&asn1_value__local_1417,
  (intptr_t)asn1_type_Alt_RAB_Parameter_ExtendedGuaranteedBitrateInf,
  (intptr_t)&asn1_value__local_1418,
},
{
  (intptr_t)&asn1_value__local_1419,
  (intptr_t)&asn1_value__local_1420,
  (intptr_t)asn1_type_Alt_RAB_Parameter_ExtendedMaxBitrateInf,
  (intptr_t)&asn1_value__local_1421,
},
{
  (intptr_t)&asn1_value__local_1422,
  (intptr_t)&asn1_value__local_1423,
  (intptr_t)asn1_type_Alt_RAB_Parameter_SupportedMaxBitrateInf,
  (intptr_t)&asn1_value__local_1424,
},
{
  (intptr_t)&asn1_value__local_1425,
  (intptr_t)&asn1_value__local_1426,
  (intptr_t)asn1_type_Alt_RAB_Parameter_SupportedGuaranteedBitrateInf,
  (intptr_t)&asn1_value__local_1427,
},
};

static const ASN1CType asn1_constraint__local_1411[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1412,
  5,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1410[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1411,
};

const ASN1CType asn1_type_ProtocolExtensionField_2[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_2),

  offsetof(ProtocolExtensionField_2, id) | 0x0,
  (intptr_t)asn1_type__local_1408,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_2, criticality) | 0x0,
  (intptr_t)asn1_type__local_1409,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_2, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1410,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1428[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1429[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1431[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1430[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1431,
};

const ASN1CType asn1_type_ProtocolExtensionField_3[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_3),

  offsetof(ProtocolExtensionField_3, id) | 0x0,
  (intptr_t)asn1_type__local_1428,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_3, criticality) | 0x0,
  (intptr_t)asn1_type__local_1429,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_3, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1430,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1433[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1434[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1436[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1435[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1436,
};

const ASN1CType asn1_type_ProtocolExtensionField_4[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_4),

  offsetof(ProtocolExtensionField_4, id) | 0x0,
  (intptr_t)asn1_type__local_1433,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_4, criticality) | 0x0,
  (intptr_t)asn1_type__local_1434,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_4, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1435,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1438[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1439[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1443 = 174;

static const Criticality asn1_value__local_1444 = 0;

static const Presence asn1_value__local_1445 = 0;

static const ProtocolExtensionID asn1_value__local_1446 = 175;

static const Criticality asn1_value__local_1447 = 0;

static const Presence asn1_value__local_1448 = 0;

static const ProtocolExtensionID asn1_value__local_1449 = 217;

static const Criticality asn1_value__local_1450 = 1;

static const Presence asn1_value__local_1451 = 0;

static const ProtocolExtensionID asn1_value__local_1452 = 216;

static const Criticality asn1_value__local_1453 = 1;

static const Presence asn1_value__local_1454 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1442[] = {
{
  (intptr_t)&asn1_value__local_1443,
  (intptr_t)&asn1_value__local_1444,
  (intptr_t)asn1_type_Ass_RAB_Parameter_ExtendedGuaranteedBitrateList,
  (intptr_t)&asn1_value__local_1445,
},
{
  (intptr_t)&asn1_value__local_1446,
  (intptr_t)&asn1_value__local_1447,
  (intptr_t)asn1_type_Ass_RAB_Parameter_ExtendedMaxBitrateList,
  (intptr_t)&asn1_value__local_1448,
},
{
  (intptr_t)&asn1_value__local_1449,
  (intptr_t)&asn1_value__local_1450,
  (intptr_t)asn1_type_SupportedRAB_ParameterBitrateList,
  (intptr_t)&asn1_value__local_1451,
},
{
  (intptr_t)&asn1_value__local_1452,
  (intptr_t)&asn1_value__local_1453,
  (intptr_t)asn1_type_SupportedRAB_ParameterBitrateList,
  (intptr_t)&asn1_value__local_1454,
},
};

static const ASN1CType asn1_constraint__local_1441[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1442,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1440[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1441,
};

const ASN1CType asn1_type_ProtocolExtensionField_5[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_5),

  offsetof(ProtocolExtensionField_5, id) | 0x0,
  (intptr_t)asn1_type__local_1438,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_5, criticality) | 0x0,
  (intptr_t)asn1_type__local_1439,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_5, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1440,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1455[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1456[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1458[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1457[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1458,
};

const ASN1CType asn1_type_ProtocolExtensionField_6[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_6),

  offsetof(ProtocolExtensionField_6, id) | 0x0,
  (intptr_t)asn1_type__local_1455,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_6, criticality) | 0x0,
  (intptr_t)asn1_type__local_1456,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_6, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1457,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1460[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1461[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1463[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1462[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1463,
};

const ASN1CType asn1_type_ProtocolExtensionField_7[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_7),

  offsetof(ProtocolExtensionField_7, id) | 0x0,
  (intptr_t)asn1_type__local_1460,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_7, criticality) | 0x0,
  (intptr_t)asn1_type__local_1461,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_7, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1462,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1465[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1466[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1468[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1467[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1468,
};

const ASN1CType asn1_type_ProtocolExtensionField_8[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_8),

  offsetof(ProtocolExtensionField_8, id) | 0x0,
  (intptr_t)asn1_type__local_1465,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_8, criticality) | 0x0,
  (intptr_t)asn1_type__local_1466,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_8, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1467,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1470[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1471[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1473[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1472[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1473,
};

const ASN1CType asn1_type_ProtocolExtensionField_9[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_9),

  offsetof(ProtocolExtensionField_9, id) | 0x0,
  (intptr_t)asn1_type__local_1470,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_9, criticality) | 0x0,
  (intptr_t)asn1_type__local_1471,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_9, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1472,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1475[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1476[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1478[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1477[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1478,
};

const ASN1CType asn1_type_ProtocolExtensionField_10[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_10),

  offsetof(ProtocolExtensionField_10, id) | 0x0,
  (intptr_t)asn1_type__local_1475,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_10, criticality) | 0x0,
  (intptr_t)asn1_type__local_1476,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_10, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1477,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1480[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1481[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1485 = 88;

static const Criticality asn1_value__local_1486 = 1;

static const Presence asn1_value__local_1487 = 0;

static const ProtocolExtensionID asn1_value__local_1488 = 93;

static const Criticality asn1_value__local_1489 = 1;

static const Presence asn1_value__local_1490 = 2;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1484[] = {
{
  (intptr_t)&asn1_value__local_1485,
  (intptr_t)&asn1_value__local_1486,
  (intptr_t)asn1_type_MessageStructure,
  (intptr_t)&asn1_value__local_1487,
},
{
  (intptr_t)&asn1_value__local_1488,
  (intptr_t)&asn1_value__local_1489,
  (intptr_t)asn1_type_TypeOfError,
  (intptr_t)&asn1_value__local_1490,
},
};

static const ASN1CType asn1_constraint__local_1483[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1484,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1482[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1483,
};

const ASN1CType asn1_type_ProtocolExtensionField_11[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_11),

  offsetof(ProtocolExtensionField_11, id) | 0x0,
  (intptr_t)asn1_type__local_1480,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_11, criticality) | 0x0,
  (intptr_t)asn1_type__local_1481,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_11, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1482,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1491[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1492[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1494[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1493[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1494,
};

const ASN1CType asn1_type_ProtocolExtensionField_12[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_12),

  offsetof(ProtocolExtensionField_12, id) | 0x0,
  (intptr_t)asn1_type__local_1491,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_12, criticality) | 0x0,
  (intptr_t)asn1_type__local_1492,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_12, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1493,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1496[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1497[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1501 = 55;

static const Criticality asn1_value__local_1502 = 1;

static const Presence asn1_value__local_1503 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1500[] = {
{
  (intptr_t)&asn1_value__local_1501,
  (intptr_t)&asn1_value__local_1502,
  (intptr_t)asn1_type_RAC,
  (intptr_t)&asn1_value__local_1503,
},
};

static const ASN1CType asn1_constraint__local_1499[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1500,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1498[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1499,
};

const ASN1CType asn1_type_ProtocolExtensionField_13[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_13),

  offsetof(ProtocolExtensionField_13, id) | 0x0,
  (intptr_t)asn1_type__local_1496,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_13, criticality) | 0x0,
  (intptr_t)asn1_type__local_1497,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_13, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1498,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1504[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1505[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1509 = 181;

static const Criticality asn1_value__local_1510 = 0;

static const Presence asn1_value__local_1511 = 1;

static const ProtocolExtensionID asn1_value__local_1512 = 182;

static const Criticality asn1_value__local_1513 = 0;

static const Presence asn1_value__local_1514 = 1;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1508[] = {
{
  (intptr_t)&asn1_value__local_1509,
  (intptr_t)&asn1_value__local_1510,
  (intptr_t)asn1_type_LAListofIdleModeUEs,
  (intptr_t)&asn1_value__local_1511,
},
{
  (intptr_t)&asn1_value__local_1512,
  (intptr_t)&asn1_value__local_1513,
  (intptr_t)asn1_type_LAListofIdleModeUEs,
  (intptr_t)&asn1_value__local_1514,
},
};

static const ASN1CType asn1_constraint__local_1507[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1508,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1506[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1507,
};

const ASN1CType asn1_type_ProtocolExtensionField_14[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_14),

  offsetof(ProtocolExtensionField_14, id) | 0x0,
  (intptr_t)asn1_type__local_1504,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_14, criticality) | 0x0,
  (intptr_t)asn1_type__local_1505,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_14, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1506,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1515[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1516[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1518[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1517[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1518,
};

const ASN1CType asn1_type_ProtocolExtensionField_15[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_15),

  offsetof(ProtocolExtensionField_15, id) | 0x0,
  (intptr_t)asn1_type__local_1515,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_15, criticality) | 0x0,
  (intptr_t)asn1_type__local_1516,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_15, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1517,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1520[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1521[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1523[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1522[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1523,
};

const ASN1CType asn1_type_ProtocolExtensionField_16[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_16),

  offsetof(ProtocolExtensionField_16, id) | 0x0,
  (intptr_t)asn1_type__local_1520,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_16, criticality) | 0x0,
  (intptr_t)asn1_type__local_1521,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_16, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1522,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1525[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1526[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1528[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1527[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1528,
};

const ASN1CType asn1_type_ProtocolExtensionField_17[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_17),

  offsetof(ProtocolExtensionField_17, id) | 0x0,
  (intptr_t)asn1_type__local_1525,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_17, criticality) | 0x0,
  (intptr_t)asn1_type__local_1526,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_17, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1527,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1530[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1531[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1533[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1532[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1533,
};

const ASN1CType asn1_type_ProtocolExtensionField_18[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_18),

  offsetof(ProtocolExtensionField_18, id) | 0x0,
  (intptr_t)asn1_type__local_1530,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_18, criticality) | 0x0,
  (intptr_t)asn1_type__local_1531,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_18, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1532,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1535[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1536[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1538[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1537[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1538,
};

const ASN1CType asn1_type_ProtocolExtensionField_19[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_19),

  offsetof(ProtocolExtensionField_19, id) | 0x0,
  (intptr_t)asn1_type__local_1535,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_19, criticality) | 0x0,
  (intptr_t)asn1_type__local_1536,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_19, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1537,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1540[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1541[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1543[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1542[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1543,
};

const ASN1CType asn1_type_ProtocolExtensionField_20[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_20),

  offsetof(ProtocolExtensionField_20, id) | 0x0,
  (intptr_t)asn1_type__local_1540,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_20, criticality) | 0x0,
  (intptr_t)asn1_type__local_1541,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_20, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1542,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1545[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1546[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1548[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1547[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1548,
};

const ASN1CType asn1_type_ProtocolExtensionField_21[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_21),

  offsetof(ProtocolExtensionField_21, id) | 0x0,
  (intptr_t)asn1_type__local_1545,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_21, criticality) | 0x0,
  (intptr_t)asn1_type__local_1546,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_21, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1547,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1550[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1551[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1553[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1552[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1553,
};

const ASN1CType asn1_type_ProtocolExtensionField_22[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_22),

  offsetof(ProtocolExtensionField_22, id) | 0x0,
  (intptr_t)asn1_type__local_1550,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_22, criticality) | 0x0,
  (intptr_t)asn1_type__local_1551,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_22, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1552,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1555[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1556[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1558[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1557[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1558,
};

const ASN1CType asn1_type_ProtocolExtensionField_23[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_23),

  offsetof(ProtocolExtensionField_23, id) | 0x0,
  (intptr_t)asn1_type__local_1555,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_23, criticality) | 0x0,
  (intptr_t)asn1_type__local_1556,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_23, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1557,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1560[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1561[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1563[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1562[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1563,
};

const ASN1CType asn1_type_ProtocolExtensionField_24[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_24),

  offsetof(ProtocolExtensionField_24, id) | 0x0,
  (intptr_t)asn1_type__local_1560,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_24, criticality) | 0x0,
  (intptr_t)asn1_type__local_1561,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_24, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1562,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1565[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1566[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1568[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1567[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1568,
};

const ASN1CType asn1_type_ProtocolExtensionField_25[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_25),

  offsetof(ProtocolExtensionField_25, id) | 0x0,
  (intptr_t)asn1_type__local_1565,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_25, criticality) | 0x0,
  (intptr_t)asn1_type__local_1566,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_25, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1567,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1570[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1571[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1573[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1572[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1573,
};

const ASN1CType asn1_type_ProtocolExtensionField_26[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_26),

  offsetof(ProtocolExtensionField_26, id) | 0x0,
  (intptr_t)asn1_type__local_1570,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_26, criticality) | 0x0,
  (intptr_t)asn1_type__local_1571,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_26, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1572,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1575[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1576[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1580 = 265;

static const Criticality asn1_value__local_1581 = 1;

static const Presence asn1_value__local_1582 = 0;

static const ProtocolExtensionID asn1_value__local_1583 = 266;

static const Criticality asn1_value__local_1584 = 1;

static const Presence asn1_value__local_1585 = 0;

static const ProtocolExtensionID asn1_value__local_1586 = 267;

static const Criticality asn1_value__local_1587 = 1;

static const Presence asn1_value__local_1588 = 0;

static const ProtocolExtensionID asn1_value__local_1589 = 268;

static const Criticality asn1_value__local_1590 = 1;

static const Presence asn1_value__local_1591 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1579[] = {
{
  (intptr_t)&asn1_value__local_1580,
  (intptr_t)&asn1_value__local_1581,
  (intptr_t)asn1_type_M4Report,
  (intptr_t)&asn1_value__local_1582,
},
{
  (intptr_t)&asn1_value__local_1583,
  (intptr_t)&asn1_value__local_1584,
  (intptr_t)asn1_type_M5Report,
  (intptr_t)&asn1_value__local_1585,
},
{
  (intptr_t)&asn1_value__local_1586,
  (intptr_t)&asn1_value__local_1587,
  (intptr_t)asn1_type_M6Report,
  (intptr_t)&asn1_value__local_1588,
},
{
  (intptr_t)&asn1_value__local_1589,
  (intptr_t)&asn1_value__local_1590,
  (intptr_t)asn1_type_M7Report,
  (intptr_t)&asn1_value__local_1591,
},
};

static const ASN1CType asn1_constraint__local_1578[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1579,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1577[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1578,
};

const ASN1CType asn1_type_ProtocolExtensionField_27[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_27),

  offsetof(ProtocolExtensionField_27, id) | 0x0,
  (intptr_t)asn1_type__local_1575,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_27, criticality) | 0x0,
  (intptr_t)asn1_type__local_1576,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_27, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1577,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1592[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1593[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1595[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1594[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1595,
};

const ASN1CType asn1_type_ProtocolExtensionField_28[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_28),

  offsetof(ProtocolExtensionField_28, id) | 0x0,
  (intptr_t)asn1_type__local_1592,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_28, criticality) | 0x0,
  (intptr_t)asn1_type__local_1593,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_28, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1594,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1597[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1598[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1600[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1599[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1600,
};

const ASN1CType asn1_type_ProtocolExtensionField_29[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_29),

  offsetof(ProtocolExtensionField_29, id) | 0x0,
  (intptr_t)asn1_type__local_1597,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_29, criticality) | 0x0,
  (intptr_t)asn1_type__local_1598,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_29, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1599,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1602[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1603[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1605[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1604[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1605,
};

const ASN1CType asn1_type_ProtocolExtensionField_30[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_30),

  offsetof(ProtocolExtensionField_30, id) | 0x0,
  (intptr_t)asn1_type__local_1602,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_30, criticality) | 0x0,
  (intptr_t)asn1_type__local_1603,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_30, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1604,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1607[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1608[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1610[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1609[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1610,
};

const ASN1CType asn1_type_ProtocolExtensionField_31[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_31),

  offsetof(ProtocolExtensionField_31, id) | 0x0,
  (intptr_t)asn1_type__local_1607,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_31, criticality) | 0x0,
  (intptr_t)asn1_type__local_1608,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_31, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1609,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1612[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1613[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1615[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1614[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1615,
};

const ASN1CType asn1_type_ProtocolExtensionField_32[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_32),

  offsetof(ProtocolExtensionField_32, id) | 0x0,
  (intptr_t)asn1_type__local_1612,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_32, criticality) | 0x0,
  (intptr_t)asn1_type__local_1613,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_32, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1614,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1617[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1618[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1622 = 253;

static const Criticality asn1_value__local_1623 = 1;

static const Presence asn1_value__local_1624 = 0;

static const ProtocolExtensionID asn1_value__local_1625 = 257;

static const Criticality asn1_value__local_1626 = 1;

static const Presence asn1_value__local_1627 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1621[] = {
{
  (intptr_t)&asn1_value__local_1622,
  (intptr_t)&asn1_value__local_1623,
  (intptr_t)asn1_type_Time_UE_StayedInCell_EnhancedGranularity,
  (intptr_t)&asn1_value__local_1624,
},
{
  (intptr_t)&asn1_value__local_1625,
  (intptr_t)&asn1_value__local_1626,
  (intptr_t)asn1_type_Cause,
  (intptr_t)&asn1_value__local_1627,
},
};

static const ASN1CType asn1_constraint__local_1620[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1621,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1619[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1620,
};

const ASN1CType asn1_type_ProtocolExtensionField_33[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_33),

  offsetof(ProtocolExtensionField_33, id) | 0x0,
  (intptr_t)asn1_type__local_1617,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_33, criticality) | 0x0,
  (intptr_t)asn1_type__local_1618,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_33, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1619,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1628[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1629[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1631[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1630[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1631,
};

const ASN1CType asn1_type_ProtocolExtensionField_34[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_34),

  offsetof(ProtocolExtensionField_34, id) | 0x0,
  (intptr_t)asn1_type__local_1628,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_34, criticality) | 0x0,
  (intptr_t)asn1_type__local_1629,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_34, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1630,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1633[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1634[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1636[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1635[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1636,
};

const ASN1CType asn1_type_ProtocolExtensionField_35[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_35),

  offsetof(ProtocolExtensionField_35, id) | 0x0,
  (intptr_t)asn1_type__local_1633,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_35, criticality) | 0x0,
  (intptr_t)asn1_type__local_1634,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_35, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1635,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1638[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1639[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1641[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1640[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1641,
};

const ASN1CType asn1_type_ProtocolExtensionField_36[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_36),

  offsetof(ProtocolExtensionField_36, id) | 0x0,
  (intptr_t)asn1_type__local_1638,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_36, criticality) | 0x0,
  (intptr_t)asn1_type__local_1639,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_36, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1640,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1643[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1644[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1646[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1645[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1646,
};

const ASN1CType asn1_type_ProtocolExtensionField_37[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_37),

  offsetof(ProtocolExtensionField_37, id) | 0x0,
  (intptr_t)asn1_type__local_1643,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_37, criticality) | 0x0,
  (intptr_t)asn1_type__local_1644,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_37, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1645,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1648[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1649[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1651[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1650[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1651,
};

const ASN1CType asn1_type_ProtocolExtensionField_38[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_38),

  offsetof(ProtocolExtensionField_38, id) | 0x0,
  (intptr_t)asn1_type__local_1648,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_38, criticality) | 0x0,
  (intptr_t)asn1_type__local_1649,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_38, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1650,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1653[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1654[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1658 = 264;

static const Criticality asn1_value__local_1659 = 1;

static const Presence asn1_value__local_1660 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1657[] = {
{
  (intptr_t)&asn1_value__local_1658,
  (intptr_t)&asn1_value__local_1659,
  (intptr_t)asn1_type_MDT_PLMN_List,
  (intptr_t)&asn1_value__local_1660,
},
};

static const ASN1CType asn1_constraint__local_1656[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1657,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1655[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1656,
};

const ASN1CType asn1_type_ProtocolExtensionField_39[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_39),

  offsetof(ProtocolExtensionField_39, id) | 0x0,
  (intptr_t)asn1_type__local_1653,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_39, criticality) | 0x0,
  (intptr_t)asn1_type__local_1654,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_39, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1655,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1661[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1662[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1664[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1663[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1664,
};

const ASN1CType asn1_type_ProtocolExtensionField_40[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_40),

  offsetof(ProtocolExtensionField_40, id) | 0x0,
  (intptr_t)asn1_type__local_1661,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_40, criticality) | 0x0,
  (intptr_t)asn1_type__local_1662,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_40, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1663,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1666[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1667[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1669[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1668[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1669,
};

const ASN1CType asn1_type_ProtocolExtensionField_41[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_41),

  offsetof(ProtocolExtensionField_41, id) | 0x0,
  (intptr_t)asn1_type__local_1666,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_41, criticality) | 0x0,
  (intptr_t)asn1_type__local_1667,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_41, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1668,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1671[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1672[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1674[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1673[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1674,
};

const ASN1CType asn1_type_ProtocolExtensionField_42[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_42),

  offsetof(ProtocolExtensionField_42, id) | 0x0,
  (intptr_t)asn1_type__local_1671,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_42, criticality) | 0x0,
  (intptr_t)asn1_type__local_1672,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_42, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1673,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1676[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1677[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1679[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1678[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1679,
};

const ASN1CType asn1_type_ProtocolExtensionField_43[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_43),

  offsetof(ProtocolExtensionField_43, id) | 0x0,
  (intptr_t)asn1_type__local_1676,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_43, criticality) | 0x0,
  (intptr_t)asn1_type__local_1677,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_43, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1678,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1681[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1682[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1684[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1683[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1684,
};

const ASN1CType asn1_type_ProtocolExtensionField_44[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_44),

  offsetof(ProtocolExtensionField_44, id) | 0x0,
  (intptr_t)asn1_type__local_1681,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_44, criticality) | 0x0,
  (intptr_t)asn1_type__local_1682,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_44, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1683,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1686[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1687[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1691 = 184;

static const Criticality asn1_value__local_1692 = 1;

static const Presence asn1_value__local_1693 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1690[] = {
{
  (intptr_t)&asn1_value__local_1691,
  (intptr_t)&asn1_value__local_1692,
  (intptr_t)asn1_type_GANSS_PositioningDataSet,
  (intptr_t)&asn1_value__local_1693,
},
};

static const ASN1CType asn1_constraint__local_1689[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1690,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1688[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1689,
};

const ASN1CType asn1_type_ProtocolExtensionField_45[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_45),

  offsetof(ProtocolExtensionField_45, id) | 0x0,
  (intptr_t)asn1_type__local_1686,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_45, criticality) | 0x0,
  (intptr_t)asn1_type__local_1687,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_45, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1688,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1694[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1695[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1697[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1696[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1697,
};

const ASN1CType asn1_type_ProtocolExtensionField_46[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_46),

  offsetof(ProtocolExtensionField_46, id) | 0x0,
  (intptr_t)asn1_type__local_1694,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_46, criticality) | 0x0,
  (intptr_t)asn1_type__local_1695,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_46, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1696,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1699[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1700[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1702[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1701[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1702,
};

const ASN1CType asn1_type_ProtocolExtensionField_47[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_47),

  offsetof(ProtocolExtensionField_47, id) | 0x0,
  (intptr_t)asn1_type__local_1699,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_47, criticality) | 0x0,
  (intptr_t)asn1_type__local_1700,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_47, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1701,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1704[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1705[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1709 = 116;

static const Criticality asn1_value__local_1710 = 1;

static const Presence asn1_value__local_1711 = 0;

static const ProtocolExtensionID asn1_value__local_1712 = 176;

static const Criticality asn1_value__local_1713 = 0;

static const Presence asn1_value__local_1714 = 0;

static const ProtocolExtensionID asn1_value__local_1715 = 177;

static const Criticality asn1_value__local_1716 = 0;

static const Presence asn1_value__local_1717 = 0;

static const ProtocolExtensionID asn1_value__local_1718 = 219;

static const Criticality asn1_value__local_1719 = 0;

static const Presence asn1_value__local_1720 = 0;

static const ProtocolExtensionID asn1_value__local_1721 = 218;

static const Criticality asn1_value__local_1722 = 0;

static const Presence asn1_value__local_1723 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1708[] = {
{
  (intptr_t)&asn1_value__local_1709,
  (intptr_t)&asn1_value__local_1710,
  (intptr_t)asn1_type_SignallingIndication,
  (intptr_t)&asn1_value__local_1711,
},
{
  (intptr_t)&asn1_value__local_1712,
  (intptr_t)&asn1_value__local_1713,
  (intptr_t)asn1_type_RAB_Parameter_ExtendedGuaranteedBitrateList,
  (intptr_t)&asn1_value__local_1714,
},
{
  (intptr_t)&asn1_value__local_1715,
  (intptr_t)&asn1_value__local_1716,
  (intptr_t)asn1_type_RAB_Parameter_ExtendedMaxBitrateList,
  (intptr_t)&asn1_value__local_1717,
},
{
  (intptr_t)&asn1_value__local_1718,
  (intptr_t)&asn1_value__local_1719,
  (intptr_t)asn1_type_SupportedRAB_ParameterBitrateList,
  (intptr_t)&asn1_value__local_1720,
},
{
  (intptr_t)&asn1_value__local_1721,
  (intptr_t)&asn1_value__local_1722,
  (intptr_t)asn1_type_SupportedRAB_ParameterBitrateList,
  (intptr_t)&asn1_value__local_1723,
},
};

static const ASN1CType asn1_constraint__local_1707[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1708,
  5,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1706[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1707,
};

const ASN1CType asn1_type_ProtocolExtensionField_48[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_48),

  offsetof(ProtocolExtensionField_48, id) | 0x0,
  (intptr_t)asn1_type__local_1704,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_48, criticality) | 0x0,
  (intptr_t)asn1_type__local_1705,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_48, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1706,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1724[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1725[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1727[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1726[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1727,
};

const ASN1CType asn1_type_ProtocolExtensionField_49[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_49),

  offsetof(ProtocolExtensionField_49, id) | 0x0,
  (intptr_t)asn1_type__local_1724,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_49, criticality) | 0x0,
  (intptr_t)asn1_type__local_1725,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_49, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1726,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1729[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1730[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1734 = 3;

static const Criticality asn1_value__local_1735 = 1;

static const Presence asn1_value__local_1736 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1733[] = {
{
  (intptr_t)&asn1_value__local_1734,
  (intptr_t)&asn1_value__local_1735,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_1736,
},
};

static const ASN1CType asn1_constraint__local_1732[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1733,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1731[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1732,
};

const ASN1CType asn1_type_ProtocolExtensionField_50[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_50),

  offsetof(ProtocolExtensionField_50, id) | 0x0,
  (intptr_t)asn1_type__local_1729,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_50, criticality) | 0x0,
  (intptr_t)asn1_type__local_1730,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_50, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1731,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1737[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1738[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1740[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1739[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1740,
};

const ASN1CType asn1_type_ProtocolExtensionField_51[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_51),

  offsetof(ProtocolExtensionField_51, id) | 0x0,
  (intptr_t)asn1_type__local_1737,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_51, criticality) | 0x0,
  (intptr_t)asn1_type__local_1738,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_51, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1739,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1742[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1743[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1747 = 180;

static const Criticality asn1_value__local_1748 = 0;

static const Presence asn1_value__local_1749 = 1;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1746[] = {
{
  (intptr_t)&asn1_value__local_1747,
  (intptr_t)&asn1_value__local_1748,
  (intptr_t)asn1_type_LAListofIdleModeUEs,
  (intptr_t)&asn1_value__local_1749,
},
};

static const ASN1CType asn1_constraint__local_1745[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1746,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1744[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1745,
};

const ASN1CType asn1_type_ProtocolExtensionField_52[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_52),

  offsetof(ProtocolExtensionField_52, id) | 0x0,
  (intptr_t)asn1_type__local_1742,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_52, criticality) | 0x0,
  (intptr_t)asn1_type__local_1743,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_52, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1744,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1750[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1751[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1753[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1752[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1753,
};

const ASN1CType asn1_type_ProtocolExtensionField_53[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_53),

  offsetof(ProtocolExtensionField_53, id) | 0x0,
  (intptr_t)asn1_type__local_1750,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_53, criticality) | 0x0,
  (intptr_t)asn1_type__local_1751,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_53, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1752,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1755[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1756[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1760 = 159;

static const Criticality asn1_value__local_1761 = 1;

static const Presence asn1_value__local_1762 = 0;

static const ProtocolExtensionID asn1_value__local_1763 = 178;

static const Criticality asn1_value__local_1764 = 0;

static const Presence asn1_value__local_1765 = 0;

static const ProtocolExtensionID asn1_value__local_1766 = 179;

static const Criticality asn1_value__local_1767 = 0;

static const Presence asn1_value__local_1768 = 0;

static const ProtocolExtensionID asn1_value__local_1769 = 220;

static const Criticality asn1_value__local_1770 = 0;

static const Presence asn1_value__local_1771 = 0;

static const ProtocolExtensionID asn1_value__local_1772 = 221;

static const Criticality asn1_value__local_1773 = 0;

static const Presence asn1_value__local_1774 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1759[] = {
{
  (intptr_t)&asn1_value__local_1760,
  (intptr_t)&asn1_value__local_1761,
  (intptr_t)asn1_type_AlternativeRABConfigurationRequest,
  (intptr_t)&asn1_value__local_1762,
},
{
  (intptr_t)&asn1_value__local_1763,
  (intptr_t)&asn1_value__local_1764,
  (intptr_t)asn1_type_Requested_RAB_Parameter_ExtendedMaxBitrateList,
  (intptr_t)&asn1_value__local_1765,
},
{
  (intptr_t)&asn1_value__local_1766,
  (intptr_t)&asn1_value__local_1767,
  (intptr_t)asn1_type_Requested_RAB_Parameter_ExtendedGuaranteedBitrateList,
  (intptr_t)&asn1_value__local_1768,
},
{
  (intptr_t)&asn1_value__local_1769,
  (intptr_t)&asn1_value__local_1770,
  (intptr_t)asn1_type_SupportedRAB_ParameterBitrateList,
  (intptr_t)&asn1_value__local_1771,
},
{
  (intptr_t)&asn1_value__local_1772,
  (intptr_t)&asn1_value__local_1773,
  (intptr_t)asn1_type_SupportedRAB_ParameterBitrateList,
  (intptr_t)&asn1_value__local_1774,
},
};

static const ASN1CType asn1_constraint__local_1758[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1759,
  5,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1757[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1758,
};

const ASN1CType asn1_type_ProtocolExtensionField_54[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_54),

  offsetof(ProtocolExtensionField_54, id) | 0x0,
  (intptr_t)asn1_type__local_1755,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_54, criticality) | 0x0,
  (intptr_t)asn1_type__local_1756,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_54, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1757,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1775[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1776[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1778[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1777[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1778,
};

const ASN1CType asn1_type_ProtocolExtensionField_55[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_55),

  offsetof(ProtocolExtensionField_55, id) | 0x0,
  (intptr_t)asn1_type__local_1775,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_55, criticality) | 0x0,
  (intptr_t)asn1_type__local_1776,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_55, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1777,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1780[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1781[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1783[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1782[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1783,
};

const ASN1CType asn1_type_ProtocolExtensionField_56[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_56),

  offsetof(ProtocolExtensionField_56, id) | 0x0,
  (intptr_t)asn1_type__local_1780,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_56, criticality) | 0x0,
  (intptr_t)asn1_type__local_1781,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_56, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1782,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1785[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1786[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1790 = 255;

static const Criticality asn1_value__local_1791 = 1;

static const Presence asn1_value__local_1792 = 0;

static const ProtocolExtensionID asn1_value__local_1793 = 256;

static const Criticality asn1_value__local_1794 = 1;

static const Presence asn1_value__local_1795 = 0;

static const ProtocolExtensionID asn1_value__local_1796 = 251;

static const Criticality asn1_value__local_1797 = 1;

static const Presence asn1_value__local_1798 = 0;

static const ProtocolExtensionID asn1_value__local_1799 = 270;

static const Criticality asn1_value__local_1800 = 1;

static const Presence asn1_value__local_1801 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1789[] = {
{
  (intptr_t)&asn1_value__local_1790,
  (intptr_t)&asn1_value__local_1791,
  (intptr_t)asn1_type_TraceRecordingSessionReference,
  (intptr_t)&asn1_value__local_1792,
},
{
  (intptr_t)&asn1_value__local_1793,
  (intptr_t)&asn1_value__local_1794,
  (intptr_t)asn1_type_IMSI,
  (intptr_t)&asn1_value__local_1795,
},
{
  (intptr_t)&asn1_value__local_1796,
  (intptr_t)&asn1_value__local_1797,
  (intptr_t)asn1_type_TransportLayerAddress,
  (intptr_t)&asn1_value__local_1798,
},
{
  (intptr_t)&asn1_value__local_1799,
  (intptr_t)&asn1_value__local_1800,
  (intptr_t)asn1_type_UTRAN_CellID,
  (intptr_t)&asn1_value__local_1801,
},
};

static const ASN1CType asn1_constraint__local_1788[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1789,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1787[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1788,
};

const ASN1CType asn1_type_ProtocolExtensionField_57[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_57),

  offsetof(ProtocolExtensionField_57, id) | 0x0,
  (intptr_t)asn1_type__local_1785,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_57, criticality) | 0x0,
  (intptr_t)asn1_type__local_1786,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_57, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1787,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1802[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1803[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1805[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1804[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1805,
};

const ASN1CType asn1_type_ProtocolExtensionField_58[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_58),

  offsetof(ProtocolExtensionField_58, id) | 0x0,
  (intptr_t)asn1_type__local_1802,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_58, criticality) | 0x0,
  (intptr_t)asn1_type__local_1803,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_58, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1804,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1807[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1808[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1810[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1809[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1810,
};

const ASN1CType asn1_type_ProtocolExtensionField_59[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_59),

  offsetof(ProtocolExtensionField_59, id) | 0x0,
  (intptr_t)asn1_type__local_1807,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_59, criticality) | 0x0,
  (intptr_t)asn1_type__local_1808,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_59, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1809,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1812[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1813[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1815[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1814[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1815,
};

const ASN1CType asn1_type_ProtocolExtensionField_60[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_60),

  offsetof(ProtocolExtensionField_60, id) | 0x0,
  (intptr_t)asn1_type__local_1812,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_60, criticality) | 0x0,
  (intptr_t)asn1_type__local_1813,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_60, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1814,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1817[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1818[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1820[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1819[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1820,
};

const ASN1CType asn1_type_ProtocolExtensionField_61[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_61),

  offsetof(ProtocolExtensionField_61, id) | 0x0,
  (intptr_t)asn1_type__local_1817,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_61, criticality) | 0x0,
  (intptr_t)asn1_type__local_1818,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_61, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1819,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1822[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1823[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1825[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1824[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1825,
};

const ASN1CType asn1_type_ProtocolExtensionField_62[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_62),

  offsetof(ProtocolExtensionField_62, id) | 0x0,
  (intptr_t)asn1_type__local_1822,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_62, criticality) | 0x0,
  (intptr_t)asn1_type__local_1823,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_62, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1824,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1827[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1828[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1830[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1829[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1830,
};

const ASN1CType asn1_type_ProtocolExtensionField_63[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_63),

  offsetof(ProtocolExtensionField_63, id) | 0x0,
  (intptr_t)asn1_type__local_1827,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_63, criticality) | 0x0,
  (intptr_t)asn1_type__local_1828,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_63, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1829,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1832[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1833[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1835[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1834[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1835,
};

const ASN1CType asn1_type_ProtocolExtensionField_64[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_64),

  offsetof(ProtocolExtensionField_64, id) | 0x0,
  (intptr_t)asn1_type__local_1832,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_64, criticality) | 0x0,
  (intptr_t)asn1_type__local_1833,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_64, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1834,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1837[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1838[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1840[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1839[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1840,
};

const ASN1CType asn1_type_ProtocolExtensionField_65[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_65),

  offsetof(ProtocolExtensionField_65, id) | 0x0,
  (intptr_t)asn1_type__local_1837,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_65, criticality) | 0x0,
  (intptr_t)asn1_type__local_1838,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_65, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1839,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1842[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1843[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1847 = 171;

static const Criticality asn1_value__local_1848 = 0;

static const Presence asn1_value__local_1849 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1846[] = {
{
  (intptr_t)&asn1_value__local_1847,
  (intptr_t)&asn1_value__local_1848,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_1849,
},
};

static const ASN1CType asn1_constraint__local_1845[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1846,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1844[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1845,
};

const ASN1CType asn1_type_ProtocolExtensionField_66[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_66),

  offsetof(ProtocolExtensionField_66, id) | 0x0,
  (intptr_t)asn1_type__local_1842,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_66, criticality) | 0x0,
  (intptr_t)asn1_type__local_1843,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_66, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1844,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1850[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1851[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1855 = 98;

static const Criticality asn1_value__local_1856 = 0;

static const Presence asn1_value__local_1857 = 0;

static const ProtocolExtensionID asn1_value__local_1858 = 121;

static const Criticality asn1_value__local_1859 = 1;

static const Presence asn1_value__local_1860 = 0;

static const ProtocolExtensionID asn1_value__local_1861 = 124;

static const Criticality asn1_value__local_1862 = 1;

static const Presence asn1_value__local_1863 = 0;

static const ProtocolExtensionID asn1_value__local_1864 = 156;

static const Criticality asn1_value__local_1865 = 1;

static const Presence asn1_value__local_1866 = 0;

static const ProtocolExtensionID asn1_value__local_1867 = 187;

static const Criticality asn1_value__local_1868 = 0;

static const Presence asn1_value__local_1869 = 0;

static const ProtocolExtensionID asn1_value__local_1870 = 200;

static const Criticality asn1_value__local_1871 = 1;

static const Presence asn1_value__local_1872 = 0;

static const ProtocolExtensionID asn1_value__local_1873 = 202;

static const Criticality asn1_value__local_1874 = 1;

static const Presence asn1_value__local_1875 = 0;

static const ProtocolExtensionID asn1_value__local_1876 = 227;

static const Criticality asn1_value__local_1877 = 0;

static const Presence asn1_value__local_1878 = 0;

static const ProtocolExtensionID asn1_value__local_1879 = 230;

static const Criticality asn1_value__local_1880 = 0;

static const Presence asn1_value__local_1881 = 0;

static const ProtocolExtensionID asn1_value__local_1882 = 237;

static const Criticality asn1_value__local_1883 = 1;

static const Presence asn1_value__local_1884 = 0;

static const ProtocolExtensionID asn1_value__local_1885 = 243;

static const Criticality asn1_value__local_1886 = 1;

static const Presence asn1_value__local_1887 = 0;

static const ProtocolExtensionID asn1_value__local_1888 = 249;

static const Criticality asn1_value__local_1889 = 1;

static const Presence asn1_value__local_1890 = 0;

static const ProtocolExtensionID asn1_value__local_1891 = 263;

static const Criticality asn1_value__local_1892 = 1;

static const Presence asn1_value__local_1893 = 0;

static const ProtocolExtensionID asn1_value__local_1894 = 277;

static const Criticality asn1_value__local_1895 = 1;

static const Presence asn1_value__local_1896 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1854[] = {
{
  (intptr_t)&asn1_value__local_1855,
  (intptr_t)&asn1_value__local_1856,
  (intptr_t)asn1_type_SRB_TrCH_Mapping,
  (intptr_t)&asn1_value__local_1857,
},
{
  (intptr_t)&asn1_value__local_1858,
  (intptr_t)&asn1_value__local_1859,
  (intptr_t)asn1_type_CellLoadInformationGroup,
  (intptr_t)&asn1_value__local_1860,
},
{
  (intptr_t)&asn1_value__local_1861,
  (intptr_t)&asn1_value__local_1862,
  (intptr_t)asn1_type_TraceRecordingSessionInformation,
  (intptr_t)&asn1_value__local_1863,
},
{
  (intptr_t)&asn1_value__local_1864,
  (intptr_t)&asn1_value__local_1865,
  (intptr_t)asn1_type_MBMSLinkingInformation,
  (intptr_t)&asn1_value__local_1866,
},
{
  (intptr_t)&asn1_value__local_1867,
  (intptr_t)&asn1_value__local_1868,
  (intptr_t)asn1_type_D_RNTI,
  (intptr_t)&asn1_value__local_1869,
},
{
  (intptr_t)&asn1_value__local_1870,
  (intptr_t)&asn1_value__local_1871,
  (intptr_t)asn1_type_UE_History_Information,
  (intptr_t)&asn1_value__local_1872,
},
{
  (intptr_t)&asn1_value__local_1873,
  (intptr_t)&asn1_value__local_1874,
  (intptr_t)asn1_type_SubscriberProfileIDforRFP,
  (intptr_t)&asn1_value__local_1875,
},
{
  (intptr_t)&asn1_value__local_1876,
  (intptr_t)&asn1_value__local_1877,
  (intptr_t)asn1_type_SRVCC_Information,
  (intptr_t)&asn1_value__local_1878,
},
{
  (intptr_t)&asn1_value__local_1879,
  (intptr_t)&asn1_value__local_1880,
  (intptr_t)asn1_type_RAB_ID,
  (intptr_t)&asn1_value__local_1881,
},
{
  (intptr_t)&asn1_value__local_1882,
  (intptr_t)&asn1_value__local_1883,
  (intptr_t)asn1_type_CSFB_Information,
  (intptr_t)&asn1_value__local_1884,
},
{
  (intptr_t)&asn1_value__local_1885,
  (intptr_t)&asn1_value__local_1886,
  (intptr_t)asn1_type_IRAT_Measurement_Configuration,
  (intptr_t)&asn1_value__local_1887,
},
{
  (intptr_t)&asn1_value__local_1888,
  (intptr_t)&asn1_value__local_1889,
  (intptr_t)asn1_type_Management_Based_MDT_Allowed,
  (intptr_t)&asn1_value__local_1890,
},
{
  (intptr_t)&asn1_value__local_1891,
  (intptr_t)&asn1_value__local_1892,
  (intptr_t)asn1_type_MDT_PLMN_List,
  (intptr_t)&asn1_value__local_1893,
},
{
  (intptr_t)&asn1_value__local_1894,
  (intptr_t)&asn1_value__local_1895,
  (intptr_t)asn1_type_PLMNidentity,
  (intptr_t)&asn1_value__local_1896,
},
};

static const ASN1CType asn1_constraint__local_1853[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1854,
  14,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1852[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1853,
};

const ASN1CType asn1_type_ProtocolExtensionField_67[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_67),

  offsetof(ProtocolExtensionField_67, id) | 0x0,
  (intptr_t)asn1_type__local_1850,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_67, criticality) | 0x0,
  (intptr_t)asn1_type__local_1851,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_67, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1852,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1897[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1898[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1902 = 278;

static const Criticality asn1_value__local_1903 = 1;

static const Presence asn1_value__local_1904 = 0;

static const ProtocolExtensionID asn1_value__local_1905 = 279;

static const Criticality asn1_value__local_1906 = 1;

static const Presence asn1_value__local_1907 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1901[] = {
{
  (intptr_t)&asn1_value__local_1902,
  (intptr_t)&asn1_value__local_1903,
  (intptr_t)asn1_type_RSRQ_Type,
  (intptr_t)&asn1_value__local_1904,
},
{
  (intptr_t)&asn1_value__local_1905,
  (intptr_t)&asn1_value__local_1906,
  (intptr_t)asn1_type_RSRQ_Extension,
  (intptr_t)&asn1_value__local_1907,
},
};

static const ASN1CType asn1_constraint__local_1900[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1901,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1899[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1900,
};

const ASN1CType asn1_type_ProtocolExtensionField_68[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_68),

  offsetof(ProtocolExtensionField_68, id) | 0x0,
  (intptr_t)asn1_type__local_1897,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_68, criticality) | 0x0,
  (intptr_t)asn1_type__local_1898,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_68, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1899,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1908[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1909[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1911[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1910[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1911,
};

const ASN1CType asn1_type_ProtocolExtensionField_69[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_69),

  offsetof(ProtocolExtensionField_69, id) | 0x0,
  (intptr_t)asn1_type__local_1908,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_69, criticality) | 0x0,
  (intptr_t)asn1_type__local_1909,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_69, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1910,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1913[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1914[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1918 = 271;

static const Criticality asn1_value__local_1919 = 0;

static const Presence asn1_value__local_1920 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1917[] = {
{
  (intptr_t)&asn1_value__local_1918,
  (intptr_t)&asn1_value__local_1919,
  (intptr_t)asn1_type_EARFCN_Extended,
  (intptr_t)&asn1_value__local_1920,
},
};

static const ASN1CType asn1_constraint__local_1916[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1917,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1915[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1916,
};

const ASN1CType asn1_type_ProtocolExtensionField_70[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_70),

  offsetof(ProtocolExtensionField_70, id) | 0x0,
  (intptr_t)asn1_type__local_1913,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_70, criticality) | 0x0,
  (intptr_t)asn1_type__local_1914,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_70, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1915,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1921[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1922[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1924[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1923[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1924,
};

const ASN1CType asn1_type_ProtocolExtensionField_71[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_71),

  offsetof(ProtocolExtensionField_71, id) | 0x0,
  (intptr_t)asn1_type__local_1921,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_71, criticality) | 0x0,
  (intptr_t)asn1_type__local_1922,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_71, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1923,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1926[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1927[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1929[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1928[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1929,
};

const ASN1CType asn1_type_ProtocolExtensionField_72[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_72),

  offsetof(ProtocolExtensionField_72, id) | 0x0,
  (intptr_t)asn1_type__local_1926,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_72, criticality) | 0x0,
  (intptr_t)asn1_type__local_1927,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_72, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1928,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1931[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1932[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1934[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1933[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1934,
};

const ASN1CType asn1_type_ProtocolExtensionField_73[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_73),

  offsetof(ProtocolExtensionField_73, id) | 0x0,
  (intptr_t)asn1_type__local_1931,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_73, criticality) | 0x0,
  (intptr_t)asn1_type__local_1932,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_73, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1933,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1936[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1937[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1939[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1938[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1939,
};

const ASN1CType asn1_type_ProtocolExtensionField_74[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_74),

  offsetof(ProtocolExtensionField_74, id) | 0x0,
  (intptr_t)asn1_type__local_1936,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_74, criticality) | 0x0,
  (intptr_t)asn1_type__local_1937,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_74, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1938,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1941[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1942[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1944[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1943[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1944,
};

const ASN1CType asn1_type_ProtocolExtensionField_75[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_75),

  offsetof(ProtocolExtensionField_75, id) | 0x0,
  (intptr_t)asn1_type__local_1941,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_75, criticality) | 0x0,
  (intptr_t)asn1_type__local_1942,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_75, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1943,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1946[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1947[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1951 = 171;

static const Criticality asn1_value__local_1952 = 0;

static const Presence asn1_value__local_1953 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1950[] = {
{
  (intptr_t)&asn1_value__local_1951,
  (intptr_t)&asn1_value__local_1952,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_1953,
},
};

static const ASN1CType asn1_constraint__local_1949[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1950,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1948[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1949,
};

const ASN1CType asn1_type_ProtocolExtensionField_76[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_76),

  offsetof(ProtocolExtensionField_76, id) | 0x0,
  (intptr_t)asn1_type__local_1946,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_76, criticality) | 0x0,
  (intptr_t)asn1_type__local_1947,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_76, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1948,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1954[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1955[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1957[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1956[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1957,
};

const ASN1CType asn1_type_ProtocolExtensionField_77[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_77),

  offsetof(ProtocolExtensionField_77, id) | 0x0,
  (intptr_t)asn1_type__local_1954,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_77, criticality) | 0x0,
  (intptr_t)asn1_type__local_1955,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_77, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1956,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1959[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1960[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1962[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1961[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1962,
};

const ASN1CType asn1_type_ProtocolExtensionField_78[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_78),

  offsetof(ProtocolExtensionField_78, id) | 0x0,
  (intptr_t)asn1_type__local_1959,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_78, criticality) | 0x0,
  (intptr_t)asn1_type__local_1960,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_78, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1961,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1964[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1965[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1967[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1966[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1967,
};

const ASN1CType asn1_type_ProtocolExtensionField_79[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_79),

  offsetof(ProtocolExtensionField_79, id) | 0x0,
  (intptr_t)asn1_type__local_1964,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_79, criticality) | 0x0,
  (intptr_t)asn1_type__local_1965,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_79, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1966,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1969[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1970[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1972[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1971[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1972,
};

const ASN1CType asn1_type_ProtocolExtensionField_80[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_80),

  offsetof(ProtocolExtensionField_80, id) | 0x0,
  (intptr_t)asn1_type__local_1969,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_80, criticality) | 0x0,
  (intptr_t)asn1_type__local_1970,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_80, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1971,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1974[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1975[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1977[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1976[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1977,
};

const ASN1CType asn1_type_ProtocolExtensionField_81[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_81),

  offsetof(ProtocolExtensionField_81, id) | 0x0,
  (intptr_t)asn1_type__local_1974,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_81, criticality) | 0x0,
  (intptr_t)asn1_type__local_1975,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_81, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1976,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1979[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1980[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_1984 = 117;

static const Criticality asn1_value__local_1985 = 1;

static const Presence asn1_value__local_1986 = 0;

static const ProtocolExtensionID asn1_value__local_1987 = 160;

static const Criticality asn1_value__local_1988 = 1;

static const Presence asn1_value__local_1989 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_1983[] = {
{
  (intptr_t)&asn1_value__local_1984,
  (intptr_t)&asn1_value__local_1985,
  (intptr_t)asn1_type_HS_DSCH_MAC_d_Flow_ID,
  (intptr_t)&asn1_value__local_1986,
},
{
  (intptr_t)&asn1_value__local_1987,
  (intptr_t)&asn1_value__local_1988,
  (intptr_t)asn1_type_E_DCH_MAC_d_Flow_ID,
  (intptr_t)&asn1_value__local_1989,
},
};

static const ASN1CType asn1_constraint__local_1982[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_1983,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1981[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1982,
};

const ASN1CType asn1_type_ProtocolExtensionField_82[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_82),

  offsetof(ProtocolExtensionField_82, id) | 0x0,
  (intptr_t)asn1_type__local_1979,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_82, criticality) | 0x0,
  (intptr_t)asn1_type__local_1980,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_82, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1981,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1990[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1991[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1993[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1992[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1993,
};

const ASN1CType asn1_type_ProtocolExtensionField_83[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_83),

  offsetof(ProtocolExtensionField_83, id) | 0x0,
  (intptr_t)asn1_type__local_1990,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_83, criticality) | 0x0,
  (intptr_t)asn1_type__local_1991,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_83, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1992,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_1995[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_1996[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_1998[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_1997[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_1998,
};

const ASN1CType asn1_type_ProtocolExtensionField_84[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_84),

  offsetof(ProtocolExtensionField_84, id) | 0x0,
  (intptr_t)asn1_type__local_1995,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_84, criticality) | 0x0,
  (intptr_t)asn1_type__local_1996,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_84, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_1997,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2000[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2001[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2005 = 269;

static const Criticality asn1_value__local_2006 = 1;

static const Presence asn1_value__local_2007 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2004[] = {
{
  (intptr_t)&asn1_value__local_2005,
  (intptr_t)&asn1_value__local_2006,
  (intptr_t)asn1_type_TimingDifferenceULDL,
  (intptr_t)&asn1_value__local_2007,
},
};

static const ASN1CType asn1_constraint__local_2003[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2004,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2002[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2003,
};

const ASN1CType asn1_type_ProtocolExtensionField_85[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_85),

  offsetof(ProtocolExtensionField_85, id) | 0x0,
  (intptr_t)asn1_type__local_2000,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_85, criticality) | 0x0,
  (intptr_t)asn1_type__local_2001,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_85, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2002,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2008[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2009[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2011[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2010[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2011,
};

const ASN1CType asn1_type_ProtocolExtensionField_86[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_86),

  offsetof(ProtocolExtensionField_86, id) | 0x0,
  (intptr_t)asn1_type__local_2008,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_86, criticality) | 0x0,
  (intptr_t)asn1_type__local_2009,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_86, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2010,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2013[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2014[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2016[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2015[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2016,
};

const ASN1CType asn1_type_ProtocolExtensionField_87[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_87),

  offsetof(ProtocolExtensionField_87, id) | 0x0,
  (intptr_t)asn1_type__local_2013,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_87, criticality) | 0x0,
  (intptr_t)asn1_type__local_2014,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_87, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2015,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2018[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2019[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2021[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2020[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2021,
};

const ASN1CType asn1_type_ProtocolExtensionField_88[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_88),

  offsetof(ProtocolExtensionField_88, id) | 0x0,
  (intptr_t)asn1_type__local_2018,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_88, criticality) | 0x0,
  (intptr_t)asn1_type__local_2019,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_88, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2020,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2023[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2024[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2026[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2025[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2026,
};

const ASN1CType asn1_type_ProtocolExtensionField_89[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_89),

  offsetof(ProtocolExtensionField_89, id) | 0x0,
  (intptr_t)asn1_type__local_2023,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_89, criticality) | 0x0,
  (intptr_t)asn1_type__local_2024,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_89, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2025,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2028[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2029[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2031[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2030[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2031,
};

const ASN1CType asn1_type_ProtocolExtensionField_90[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_90),

  offsetof(ProtocolExtensionField_90, id) | 0x0,
  (intptr_t)asn1_type__local_2028,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_90, criticality) | 0x0,
  (intptr_t)asn1_type__local_2029,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_90, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2030,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2033[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2034[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2038 = 252;

static const Criticality asn1_value__local_2039 = 1;

static const Presence asn1_value__local_2040 = 0;

static const ProtocolExtensionID asn1_value__local_2041 = 254;

static const Criticality asn1_value__local_2042 = 1;

static const Presence asn1_value__local_2043 = 0;

static const ProtocolExtensionID asn1_value__local_2044 = 277;

static const Criticality asn1_value__local_2045 = 1;

static const Presence asn1_value__local_2046 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2037[] = {
{
  (intptr_t)&asn1_value__local_2038,
  (intptr_t)&asn1_value__local_2039,
  (intptr_t)asn1_type_End_Of_CSFB,
  (intptr_t)&asn1_value__local_2040,
},
{
  (intptr_t)&asn1_value__local_2041,
  (intptr_t)&asn1_value__local_2042,
  (intptr_t)asn1_type_Out_Of_UTRAN,
  (intptr_t)&asn1_value__local_2043,
},
{
  (intptr_t)&asn1_value__local_2044,
  (intptr_t)&asn1_value__local_2045,
  (intptr_t)asn1_type_PLMNidentity,
  (intptr_t)&asn1_value__local_2046,
},
};

static const ASN1CType asn1_constraint__local_2036[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2037,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2035[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2036,
};

const ASN1CType asn1_type_ProtocolExtensionField_91[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_91),

  offsetof(ProtocolExtensionField_91, id) | 0x0,
  (intptr_t)asn1_type__local_2033,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_91, criticality) | 0x0,
  (intptr_t)asn1_type__local_2034,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_91, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2035,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2047[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2048[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2050[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2049[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2050,
};

const ASN1CType asn1_type_ProtocolExtensionField_92[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_92),

  offsetof(ProtocolExtensionField_92, id) | 0x0,
  (intptr_t)asn1_type__local_2047,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_92, criticality) | 0x0,
  (intptr_t)asn1_type__local_2048,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_92, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2049,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2052[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2053[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2055[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2054[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2055,
};

const ASN1CType asn1_type_ProtocolExtensionField_93[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_93),

  offsetof(ProtocolExtensionField_93, id) | 0x0,
  (intptr_t)asn1_type__local_2052,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_93, criticality) | 0x0,
  (intptr_t)asn1_type__local_2053,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_93, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2054,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2057[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2058[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2060[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2059[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2060,
};

const ASN1CType asn1_type_ProtocolExtensionField_94[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_94),

  offsetof(ProtocolExtensionField_94, id) | 0x0,
  (intptr_t)asn1_type__local_2057,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_94, criticality) | 0x0,
  (intptr_t)asn1_type__local_2058,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_94, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2059,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2062[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2063[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2067 = 108;

static const Criticality asn1_value__local_2068 = 1;

static const Presence asn1_value__local_2069 = 0;

static const ProtocolExtensionID asn1_value__local_2070 = 161;

static const Criticality asn1_value__local_2071 = 1;

static const Presence asn1_value__local_2072 = 0;

static const ProtocolExtensionID asn1_value__local_2073 = 226;

static const Criticality asn1_value__local_2074 = 0;

static const Presence asn1_value__local_2075 = 0;

static const ProtocolExtensionID asn1_value__local_2076 = 203;

static const Criticality asn1_value__local_2077 = 0;

static const Presence asn1_value__local_2078 = 0;

static const ProtocolExtensionID asn1_value__local_2079 = 235;

static const Criticality asn1_value__local_2080 = 0;

static const Presence asn1_value__local_2081 = 0;

static const ProtocolExtensionID asn1_value__local_2082 = 259;

static const Criticality asn1_value__local_2083 = 0;

static const Presence asn1_value__local_2084 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2066[] = {
{
  (intptr_t)&asn1_value__local_2067,
  (intptr_t)&asn1_value__local_2068,
  (intptr_t)asn1_type_GERAN_Classmark,
  (intptr_t)&asn1_value__local_2069,
},
{
  (intptr_t)&asn1_value__local_2070,
  (intptr_t)&asn1_value__local_2071,
  (intptr_t)asn1_type_SourceBSS_ToTargetBSS_TransparentContainer,
  (intptr_t)&asn1_value__local_2072,
},
{
  (intptr_t)&asn1_value__local_2073,
  (intptr_t)&asn1_value__local_2074,
  (intptr_t)asn1_type_SRVCC_HO_Indication,
  (intptr_t)&asn1_value__local_2075,
},
{
  (intptr_t)&asn1_value__local_2076,
  (intptr_t)&asn1_value__local_2077,
  (intptr_t)asn1_type_CSG_Id,
  (intptr_t)&asn1_value__local_2078,
},
{
  (intptr_t)&asn1_value__local_2079,
  (intptr_t)&asn1_value__local_2080,
  (intptr_t)asn1_type_Cell_Access_Mode,
  (intptr_t)&asn1_value__local_2081,
},
{
  (intptr_t)&asn1_value__local_2082,
  (intptr_t)&asn1_value__local_2083,
  (intptr_t)asn1_type_RSRVCC_HO_Indication,
  (intptr_t)&asn1_value__local_2084,
},
};

static const ASN1CType asn1_constraint__local_2065[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2066,
  6,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2064[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2065,
};

const ASN1CType asn1_type_ProtocolExtensionField_95[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_95),

  offsetof(ProtocolExtensionField_95, id) | 0x0,
  (intptr_t)asn1_type__local_2062,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_95, criticality) | 0x0,
  (intptr_t)asn1_type__local_2063,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_95, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2064,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2085[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2086[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2090 = 99;

static const Criticality asn1_value__local_2091 = 1;

static const Presence asn1_value__local_2092 = 0;

static const ProtocolExtensionID asn1_value__local_2093 = 162;

static const Criticality asn1_value__local_2094 = 1;

static const Presence asn1_value__local_2095 = 0;

static const ProtocolExtensionID asn1_value__local_2096 = 227;

static const Criticality asn1_value__local_2097 = 0;

static const Presence asn1_value__local_2098 = 0;

static const ProtocolExtensionID asn1_value__local_2099 = 260;

static const Criticality asn1_value__local_2100 = 0;

static const Presence asn1_value__local_2101 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2089[] = {
{
  (intptr_t)&asn1_value__local_2090,
  (intptr_t)&asn1_value__local_2091,
  (intptr_t)asn1_type_InterSystemInformation_TransparentContainer,
  (intptr_t)&asn1_value__local_2092,
},
{
  (intptr_t)&asn1_value__local_2093,
  (intptr_t)&asn1_value__local_2094,
  (intptr_t)asn1_type_TargetBSS_ToSourceBSS_TransparentContainer,
  (intptr_t)&asn1_value__local_2095,
},
{
  (intptr_t)&asn1_value__local_2096,
  (intptr_t)&asn1_value__local_2097,
  (intptr_t)asn1_type_SRVCC_Information,
  (intptr_t)&asn1_value__local_2098,
},
{
  (intptr_t)&asn1_value__local_2099,
  (intptr_t)&asn1_value__local_2100,
  (intptr_t)asn1_type_RSRVCC_Information,
  (intptr_t)&asn1_value__local_2101,
},
};

static const ASN1CType asn1_constraint__local_2088[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2089,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2087[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2088,
};

const ASN1CType asn1_type_ProtocolExtensionField_96[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_96),

  offsetof(ProtocolExtensionField_96, id) | 0x0,
  (intptr_t)asn1_type__local_2085,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_96, criticality) | 0x0,
  (intptr_t)asn1_type__local_2086,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_96, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2087,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2102[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2103[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2105[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2104[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2105,
};

const ASN1CType asn1_type_ProtocolExtensionField_97[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_97),

  offsetof(ProtocolExtensionField_97, id) | 0x0,
  (intptr_t)asn1_type__local_2102,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_97, criticality) | 0x0,
  (intptr_t)asn1_type__local_2103,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_97, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2104,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2107[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2108[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2112 = 67;

static const Criticality asn1_value__local_2113 = 1;

static const Presence asn1_value__local_2114 = 0;

static const ProtocolExtensionID asn1_value__local_2115 = 13;

static const Criticality asn1_value__local_2116 = 1;

static const Presence asn1_value__local_2117 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2111[] = {
{
  (intptr_t)&asn1_value__local_2112,
  (intptr_t)&asn1_value__local_2113,
  (intptr_t)asn1_type_TransportLayerAddress,
  (intptr_t)&asn1_value__local_2114,
},
{
  (intptr_t)&asn1_value__local_2115,
  (intptr_t)&asn1_value__local_2116,
  (intptr_t)asn1_type_IuTransportAssociation,
  (intptr_t)&asn1_value__local_2117,
},
};

static const ASN1CType asn1_constraint__local_2110[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2111,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2109[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2110,
};

const ASN1CType asn1_type_ProtocolExtensionField_98[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_98),

  offsetof(ProtocolExtensionField_98, id) | 0x0,
  (intptr_t)asn1_type__local_2107,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_98, criticality) | 0x0,
  (intptr_t)asn1_type__local_2108,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_98, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2109,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2118[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2119[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2123 = 99;

static const Criticality asn1_value__local_2124 = 1;

static const Presence asn1_value__local_2125 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2122[] = {
{
  (intptr_t)&asn1_value__local_2123,
  (intptr_t)&asn1_value__local_2124,
  (intptr_t)asn1_type_InterSystemInformation_TransparentContainer,
  (intptr_t)&asn1_value__local_2125,
},
};

static const ASN1CType asn1_constraint__local_2121[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2122,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2120[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2121,
};

const ASN1CType asn1_type_ProtocolExtensionField_99[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_99),

  offsetof(ProtocolExtensionField_99, id) | 0x0,
  (intptr_t)asn1_type__local_2118,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_99, criticality) | 0x0,
  (intptr_t)asn1_type__local_2119,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_99, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2120,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2126[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2127[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2131 = 96;

static const Criticality asn1_value__local_2132 = 0;

static const Presence asn1_value__local_2133 = 0;

static const ProtocolExtensionID asn1_value__local_2134 = 105;

static const Criticality asn1_value__local_2135 = 1;

static const Presence asn1_value__local_2136 = 0;

static const ProtocolExtensionID asn1_value__local_2137 = 118;

static const Criticality asn1_value__local_2138 = 1;

static const Presence asn1_value__local_2139 = 0;

static const ProtocolExtensionID asn1_value__local_2140 = 127;

static const Criticality asn1_value__local_2141 = 1;

static const Presence asn1_value__local_2142 = 0;

static const ProtocolExtensionID asn1_value__local_2143 = 133;

static const Criticality asn1_value__local_2144 = 1;

static const Presence asn1_value__local_2145 = 0;

static const ProtocolExtensionID asn1_value__local_2146 = 233;

static const Criticality asn1_value__local_2147 = 1;

static const Presence asn1_value__local_2148 = 0;

static const ProtocolExtensionID asn1_value__local_2149 = 203;

static const Criticality asn1_value__local_2150 = 0;

static const Presence asn1_value__local_2151 = 0;

static const ProtocolExtensionID asn1_value__local_2152 = 234;

static const Criticality asn1_value__local_2153 = 1;

static const Presence asn1_value__local_2154 = 0;

static const ProtocolExtensionID asn1_value__local_2155 = 239;

static const Criticality asn1_value__local_2156 = 1;

static const Presence asn1_value__local_2157 = 0;

static const ProtocolExtensionID asn1_value__local_2158 = 261;

static const Criticality asn1_value__local_2159 = 1;

static const Presence asn1_value__local_2160 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2130[] = {
{
  (intptr_t)&asn1_value__local_2131,
  (intptr_t)&asn1_value__local_2132,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_2133,
},
{
  (intptr_t)&asn1_value__local_2134,
  (intptr_t)&asn1_value__local_2135,
  (intptr_t)asn1_type_SNA_Access_Information,
  (intptr_t)&asn1_value__local_2136,
},
{
  (intptr_t)&asn1_value__local_2137,
  (intptr_t)&asn1_value__local_2138,
  (intptr_t)asn1_type_UESBI_Iu,
  (intptr_t)&asn1_value__local_2139,
},
{
  (intptr_t)&asn1_value__local_2140,
  (intptr_t)&asn1_value__local_2141,
  (intptr_t)asn1_type_PLMNidentity,
  (intptr_t)&asn1_value__local_2142,
},
{
  (intptr_t)&asn1_value__local_2143,
  (intptr_t)&asn1_value__local_2144,
  (intptr_t)asn1_type_CNMBMSLinkingInformation,
  (intptr_t)&asn1_value__local_2145,
},
{
  (intptr_t)&asn1_value__local_2146,
  (intptr_t)&asn1_value__local_2147,
  (intptr_t)asn1_type_UE_AggregateMaximumBitRate,
  (intptr_t)&asn1_value__local_2148,
},
{
  (intptr_t)&asn1_value__local_2149,
  (intptr_t)&asn1_value__local_2150,
  (intptr_t)asn1_type_CSG_Id,
  (intptr_t)&asn1_value__local_2151,
},
{
  (intptr_t)&asn1_value__local_2152,
  (intptr_t)&asn1_value__local_2153,
  (intptr_t)asn1_type_CSG_Membership_Status,
  (intptr_t)&asn1_value__local_2154,
},
{
  (intptr_t)&asn1_value__local_2155,
  (intptr_t)&asn1_value__local_2156,
  (intptr_t)asn1_type_MSISDN,
  (intptr_t)&asn1_value__local_2157,
},
{
  (intptr_t)&asn1_value__local_2158,
  (intptr_t)&asn1_value__local_2159,
  (intptr_t)asn1_type_PLMNidentity,
  (intptr_t)&asn1_value__local_2160,
},
};

static const ASN1CType asn1_constraint__local_2129[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2130,
  10,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2128[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2129,
};

const ASN1CType asn1_type_ProtocolExtensionField_100[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_100),

  offsetof(ProtocolExtensionField_100, id) | 0x0,
  (intptr_t)asn1_type__local_2126,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_100, criticality) | 0x0,
  (intptr_t)asn1_type__local_2127,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_100, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2128,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2161[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2162[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2166 = 89;

static const Criticality asn1_value__local_2167 = 1;

static const Presence asn1_value__local_2168 = 0;

static const ProtocolExtensionID asn1_value__local_2169 = 107;

static const Criticality asn1_value__local_2170 = 1;

static const Presence asn1_value__local_2171 = 0;

static const ProtocolExtensionID asn1_value__local_2172 = 231;

static const Criticality asn1_value__local_2173 = 1;

static const Presence asn1_value__local_2174 = 0;

static const ProtocolExtensionID asn1_value__local_2175 = 238;

static const Criticality asn1_value__local_2176 = 1;

static const Presence asn1_value__local_2177 = 0;

static const ProtocolExtensionID asn1_value__local_2178 = 240;

static const Criticality asn1_value__local_2179 = 1;

static const Presence asn1_value__local_2180 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2165[] = {
{
  (intptr_t)&asn1_value__local_2166,
  (intptr_t)&asn1_value__local_2167,
  (intptr_t)asn1_type_Alt_RAB_Parameters,
  (intptr_t)&asn1_value__local_2168,
},
{
  (intptr_t)&asn1_value__local_2169,
  (intptr_t)&asn1_value__local_2170,
  (intptr_t)asn1_type_GERAN_BSC_Container,
  (intptr_t)&asn1_value__local_2171,
},
{
  (intptr_t)&asn1_value__local_2172,
  (intptr_t)&asn1_value__local_2173,
  (intptr_t)asn1_type_E_UTRAN_Service_Handover,
  (intptr_t)&asn1_value__local_2174,
},
{
  (intptr_t)&asn1_value__local_2175,
  (intptr_t)&asn1_value__local_2176,
  (intptr_t)asn1_type_PDP_TypeInformation_extension,
  (intptr_t)&asn1_value__local_2177,
},
{
  (intptr_t)&asn1_value__local_2178,
  (intptr_t)&asn1_value__local_2179,
  (intptr_t)asn1_type_Offload_RAB_Parameters,
  (intptr_t)&asn1_value__local_2180,
},
};

static const ASN1CType asn1_constraint__local_2164[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2165,
  5,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2163[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2164,
};

const ASN1CType asn1_type_ProtocolExtensionField_101[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_101),

  offsetof(ProtocolExtensionField_101, id) | 0x0,
  (intptr_t)asn1_type__local_2161,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_101, criticality) | 0x0,
  (intptr_t)asn1_type__local_2162,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_101, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2163,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2181[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2182[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2184[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2183[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2184,
};

const ASN1CType asn1_type_ProtocolExtensionField_102[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_102),

  offsetof(ProtocolExtensionField_102, id) | 0x0,
  (intptr_t)asn1_type__local_2181,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_102, criticality) | 0x0,
  (intptr_t)asn1_type__local_2182,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_102, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2183,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2186[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2187[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2189[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2188[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2189,
};

const ASN1CType asn1_type_ProtocolExtensionField_103[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_103),

  offsetof(ProtocolExtensionField_103, id) | 0x0,
  (intptr_t)asn1_type__local_2186,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_103, criticality) | 0x0,
  (intptr_t)asn1_type__local_2187,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_103, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2188,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2191[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2192[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2194[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2193[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2194,
};

const ASN1CType asn1_type_ProtocolExtensionField_104[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_104),

  offsetof(ProtocolExtensionField_104, id) | 0x0,
  (intptr_t)asn1_type__local_2191,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_104, criticality) | 0x0,
  (intptr_t)asn1_type__local_2192,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_104, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2193,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2196[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2197[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2201 = 100;

static const Criticality asn1_value__local_2202 = 1;

static const Presence asn1_value__local_2203 = 0;

static const ProtocolExtensionID asn1_value__local_2204 = 203;

static const Criticality asn1_value__local_2205 = 1;

static const Presence asn1_value__local_2206 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2200[] = {
{
  (intptr_t)&asn1_value__local_2201,
  (intptr_t)&asn1_value__local_2202,
  (intptr_t)asn1_type_NewBSS_To_OldBSS_Information,
  (intptr_t)&asn1_value__local_2203,
},
{
  (intptr_t)&asn1_value__local_2204,
  (intptr_t)&asn1_value__local_2205,
  (intptr_t)asn1_type_CSG_Id,
  (intptr_t)&asn1_value__local_2206,
},
};

static const ASN1CType asn1_constraint__local_2199[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2200,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2198[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2199,
};

const ASN1CType asn1_type_ProtocolExtensionField_105[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_105),

  offsetof(ProtocolExtensionField_105, id) | 0x0,
  (intptr_t)asn1_type__local_2196,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_105, criticality) | 0x0,
  (intptr_t)asn1_type__local_2197,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_105, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2198,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2207[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2208[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2212 = 90;

static const Criticality asn1_value__local_2213 = 1;

static const Presence asn1_value__local_2214 = 0;

static const ProtocolExtensionID asn1_value__local_2215 = 67;

static const Criticality asn1_value__local_2216 = 1;

static const Presence asn1_value__local_2217 = 0;

static const ProtocolExtensionID asn1_value__local_2218 = 13;

static const Criticality asn1_value__local_2219 = 1;

static const Presence asn1_value__local_2220 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2211[] = {
{
  (intptr_t)&asn1_value__local_2212,
  (intptr_t)&asn1_value__local_2213,
  (intptr_t)asn1_type_Ass_RAB_Parameters,
  (intptr_t)&asn1_value__local_2214,
},
{
  (intptr_t)&asn1_value__local_2215,
  (intptr_t)&asn1_value__local_2216,
  (intptr_t)asn1_type_TransportLayerAddress,
  (intptr_t)&asn1_value__local_2217,
},
{
  (intptr_t)&asn1_value__local_2218,
  (intptr_t)&asn1_value__local_2219,
  (intptr_t)asn1_type_IuTransportAssociation,
  (intptr_t)&asn1_value__local_2220,
},
};

static const ASN1CType asn1_constraint__local_2210[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2211,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2209[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2210,
};

const ASN1CType asn1_type_ProtocolExtensionField_106[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_106),

  offsetof(ProtocolExtensionField_106, id) | 0x0,
  (intptr_t)asn1_type__local_2207,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_106, criticality) | 0x0,
  (intptr_t)asn1_type__local_2208,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_106, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2209,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2221[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2222[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2224[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2223[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2224,
};

const ASN1CType asn1_type_ProtocolExtensionField_107[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_107),

  offsetof(ProtocolExtensionField_107, id) | 0x0,
  (intptr_t)asn1_type__local_2221,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_107, criticality) | 0x0,
  (intptr_t)asn1_type__local_2222,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_107, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2223,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2226[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2227[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2231 = 100;

static const Criticality asn1_value__local_2232 = 1;

static const Presence asn1_value__local_2233 = 0;

static const ProtocolExtensionID asn1_value__local_2234 = 108;

static const Criticality asn1_value__local_2235 = 1;

static const Presence asn1_value__local_2236 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2230[] = {
{
  (intptr_t)&asn1_value__local_2231,
  (intptr_t)&asn1_value__local_2232,
  (intptr_t)asn1_type_NewBSS_To_OldBSS_Information,
  (intptr_t)&asn1_value__local_2233,
},
{
  (intptr_t)&asn1_value__local_2234,
  (intptr_t)&asn1_value__local_2235,
  (intptr_t)asn1_type_GERAN_Classmark,
  (intptr_t)&asn1_value__local_2236,
},
};

static const ASN1CType asn1_constraint__local_2229[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2230,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2228[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2229,
};

const ASN1CType asn1_type_ProtocolExtensionField_108[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_108),

  offsetof(ProtocolExtensionField_108, id) | 0x0,
  (intptr_t)asn1_type__local_2226,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_108, criticality) | 0x0,
  (intptr_t)asn1_type__local_2227,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_108, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2228,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2237[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2238[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2240[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2239[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2240,
};

const ASN1CType asn1_type_ProtocolExtensionField_109[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_109),

  offsetof(ProtocolExtensionField_109, id) | 0x0,
  (intptr_t)asn1_type__local_2237,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_109, criticality) | 0x0,
  (intptr_t)asn1_type__local_2238,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_109, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2239,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2242[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2243[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2245[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2244[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2245,
};

const ASN1CType asn1_type_ProtocolExtensionField_110[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_110),

  offsetof(ProtocolExtensionField_110, id) | 0x0,
  (intptr_t)asn1_type__local_2242,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_110, criticality) | 0x0,
  (intptr_t)asn1_type__local_2243,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_110, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2244,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2247[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2248[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2252 = 167;

static const Criticality asn1_value__local_2253 = 1;

static const Presence asn1_value__local_2254 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2251[] = {
{
  (intptr_t)&asn1_value__local_2252,
  (intptr_t)&asn1_value__local_2253,
  (intptr_t)asn1_type_RAT_Type,
  (intptr_t)&asn1_value__local_2254,
},
};

static const ASN1CType asn1_constraint__local_2250[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2251,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2249[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2250,
};

const ASN1CType asn1_type_ProtocolExtensionField_111[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_111),

  offsetof(ProtocolExtensionField_111, id) | 0x0,
  (intptr_t)asn1_type__local_2247,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_111, criticality) | 0x0,
  (intptr_t)asn1_type__local_2248,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_111, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2249,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2255[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2256[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2258[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2257[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2258,
};

const ASN1CType asn1_type_ProtocolExtensionField_112[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_112),

  offsetof(ProtocolExtensionField_112, id) | 0x0,
  (intptr_t)asn1_type__local_2255,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_112, criticality) | 0x0,
  (intptr_t)asn1_type__local_2256,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_112, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2257,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2260[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2261[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2263[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2262[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2263,
};

const ASN1CType asn1_type_ProtocolExtensionField_113[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_113),

  offsetof(ProtocolExtensionField_113, id) | 0x0,
  (intptr_t)asn1_type__local_2260,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_113, criticality) | 0x0,
  (intptr_t)asn1_type__local_2261,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_113, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2262,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2265[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2266[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2268[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2267[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2268,
};

const ASN1CType asn1_type_ProtocolExtensionField_114[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_114),

  offsetof(ProtocolExtensionField_114, id) | 0x0,
  (intptr_t)asn1_type__local_2265,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_114, criticality) | 0x0,
  (intptr_t)asn1_type__local_2266,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_114, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2267,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2270[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2271[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2273[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2272[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2273,
};

const ASN1CType asn1_type_ProtocolExtensionField_115[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_115),

  offsetof(ProtocolExtensionField_115, id) | 0x0,
  (intptr_t)asn1_type__local_2270,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_115, criticality) | 0x0,
  (intptr_t)asn1_type__local_2271,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_115, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2272,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2275[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2276[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2278[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2277[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2278,
};

const ASN1CType asn1_type_ProtocolExtensionField_116[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_116),

  offsetof(ProtocolExtensionField_116, id) | 0x0,
  (intptr_t)asn1_type__local_2275,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_116, criticality) | 0x0,
  (intptr_t)asn1_type__local_2276,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_116, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2277,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2280[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2281[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2283[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2282[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2283,
};

const ASN1CType asn1_type_ProtocolExtensionField_117[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_117),

  offsetof(ProtocolExtensionField_117, id) | 0x0,
  (intptr_t)asn1_type__local_2280,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_117, criticality) | 0x0,
  (intptr_t)asn1_type__local_2281,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_117, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2282,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2285[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2286[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2288[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2287[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2288,
};

const ASN1CType asn1_type_ProtocolExtensionField_118[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_118),

  offsetof(ProtocolExtensionField_118, id) | 0x0,
  (intptr_t)asn1_type__local_2285,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_118, criticality) | 0x0,
  (intptr_t)asn1_type__local_2286,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_118, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2287,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2290[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2291[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2293[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2292[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2293,
};

const ASN1CType asn1_type_ProtocolExtensionField_119[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_119),

  offsetof(ProtocolExtensionField_119, id) | 0x0,
  (intptr_t)asn1_type__local_2290,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_119, criticality) | 0x0,
  (intptr_t)asn1_type__local_2291,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_119, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2292,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2295[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2296[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2298[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2297[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2298,
};

const ASN1CType asn1_type_ProtocolExtensionField_120[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_120),

  offsetof(ProtocolExtensionField_120, id) | 0x0,
  (intptr_t)asn1_type__local_2295,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_120, criticality) | 0x0,
  (intptr_t)asn1_type__local_2296,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_120, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2297,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2300[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2301[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2303[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2302[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2303,
};

const ASN1CType asn1_type_ProtocolExtensionField_121[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_121),

  offsetof(ProtocolExtensionField_121, id) | 0x0,
  (intptr_t)asn1_type__local_2300,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_121, criticality) | 0x0,
  (intptr_t)asn1_type__local_2301,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_121, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2302,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2305[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2306[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2308[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2307[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2308,
};

const ASN1CType asn1_type_ProtocolExtensionField_122[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_122),

  offsetof(ProtocolExtensionField_122, id) | 0x0,
  (intptr_t)asn1_type__local_2305,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_122, criticality) | 0x0,
  (intptr_t)asn1_type__local_2306,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_122, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2307,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2310[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2311[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2315 = 96;

static const Criticality asn1_value__local_2316 = 1;

static const Presence asn1_value__local_2317 = 0;

static const ProtocolExtensionID asn1_value__local_2318 = 171;

static const Criticality asn1_value__local_2319 = 0;

static const Presence asn1_value__local_2320 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2314[] = {
{
  (intptr_t)&asn1_value__local_2315,
  (intptr_t)&asn1_value__local_2316,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_2317,
},
{
  (intptr_t)&asn1_value__local_2318,
  (intptr_t)&asn1_value__local_2319,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_2320,
},
};

static const ASN1CType asn1_constraint__local_2313[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2314,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2312[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2313,
};

const ASN1CType asn1_type_ProtocolExtensionField_123[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_123),

  offsetof(ProtocolExtensionField_123, id) | 0x0,
  (intptr_t)asn1_type__local_2310,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_123, criticality) | 0x0,
  (intptr_t)asn1_type__local_2311,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_123, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2312,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2321[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2322[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2326 = 96;

static const Criticality asn1_value__local_2327 = 1;

static const Presence asn1_value__local_2328 = 0;

static const ProtocolExtensionID asn1_value__local_2329 = 171;

static const Criticality asn1_value__local_2330 = 0;

static const Presence asn1_value__local_2331 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2325[] = {
{
  (intptr_t)&asn1_value__local_2326,
  (intptr_t)&asn1_value__local_2327,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_2328,
},
{
  (intptr_t)&asn1_value__local_2329,
  (intptr_t)&asn1_value__local_2330,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_2331,
},
};

static const ASN1CType asn1_constraint__local_2324[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2325,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2323[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2324,
};

const ASN1CType asn1_type_ProtocolExtensionField_124[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_124),

  offsetof(ProtocolExtensionField_124, id) | 0x0,
  (intptr_t)asn1_type__local_2321,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_124, criticality) | 0x0,
  (intptr_t)asn1_type__local_2322,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_124, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2323,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2332[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2333[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2337 = 96;

static const Criticality asn1_value__local_2338 = 1;

static const Presence asn1_value__local_2339 = 0;

static const ProtocolExtensionID asn1_value__local_2340 = 171;

static const Criticality asn1_value__local_2341 = 0;

static const Presence asn1_value__local_2342 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2336[] = {
{
  (intptr_t)&asn1_value__local_2337,
  (intptr_t)&asn1_value__local_2338,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_2339,
},
{
  (intptr_t)&asn1_value__local_2340,
  (intptr_t)&asn1_value__local_2341,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_2342,
},
};

static const ASN1CType asn1_constraint__local_2335[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2336,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2334[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2335,
};

const ASN1CType asn1_type_ProtocolExtensionField_125[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_125),

  offsetof(ProtocolExtensionField_125, id) | 0x0,
  (intptr_t)asn1_type__local_2332,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_125, criticality) | 0x0,
  (intptr_t)asn1_type__local_2333,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_125, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2334,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2343[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2344[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2346[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2345[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2346,
};

const ASN1CType asn1_type_ProtocolExtensionField_126[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_126),

  offsetof(ProtocolExtensionField_126, id) | 0x0,
  (intptr_t)asn1_type__local_2343,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_126, criticality) | 0x0,
  (intptr_t)asn1_type__local_2344,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_126, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2345,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2348[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2349[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2353 = 96;

static const Criticality asn1_value__local_2354 = 1;

static const Presence asn1_value__local_2355 = 0;

static const ProtocolExtensionID asn1_value__local_2356 = 171;

static const Criticality asn1_value__local_2357 = 0;

static const Presence asn1_value__local_2358 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2352[] = {
{
  (intptr_t)&asn1_value__local_2353,
  (intptr_t)&asn1_value__local_2354,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_2355,
},
{
  (intptr_t)&asn1_value__local_2356,
  (intptr_t)&asn1_value__local_2357,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_2358,
},
};

static const ASN1CType asn1_constraint__local_2351[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2352,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2350[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2351,
};

const ASN1CType asn1_type_ProtocolExtensionField_127[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_127),

  offsetof(ProtocolExtensionField_127, id) | 0x0,
  (intptr_t)asn1_type__local_2348,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_127, criticality) | 0x0,
  (intptr_t)asn1_type__local_2349,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_127, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2350,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2359[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2360[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2362[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2361[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2362,
};

const ASN1CType asn1_type_ProtocolExtensionField_128[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_128),

  offsetof(ProtocolExtensionField_128, id) | 0x0,
  (intptr_t)asn1_type__local_2359,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_128, criticality) | 0x0,
  (intptr_t)asn1_type__local_2360,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_128, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2361,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2364[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2365[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2367[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2366[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2367,
};

const ASN1CType asn1_type_ProtocolExtensionField_129[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_129),

  offsetof(ProtocolExtensionField_129, id) | 0x0,
  (intptr_t)asn1_type__local_2364,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_129, criticality) | 0x0,
  (intptr_t)asn1_type__local_2365,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_129, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2366,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2369[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2370[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2372[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2371[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2372,
};

const ASN1CType asn1_type_ProtocolExtensionField_130[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_130),

  offsetof(ProtocolExtensionField_130, id) | 0x0,
  (intptr_t)asn1_type__local_2369,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_130, criticality) | 0x0,
  (intptr_t)asn1_type__local_2370,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_130, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2371,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2374[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2375[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2377[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2376[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2377,
};

const ASN1CType asn1_type_ProtocolExtensionField_131[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_131),

  offsetof(ProtocolExtensionField_131, id) | 0x0,
  (intptr_t)asn1_type__local_2374,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_131, criticality) | 0x0,
  (intptr_t)asn1_type__local_2375,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_131, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2376,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2379[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2380[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2382[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2381[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2382,
};

const ASN1CType asn1_type_ProtocolExtensionField_132[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_132),

  offsetof(ProtocolExtensionField_132, id) | 0x0,
  (intptr_t)asn1_type__local_2379,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_132, criticality) | 0x0,
  (intptr_t)asn1_type__local_2380,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_132, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2381,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2384[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2385[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2389 = 250;

static const Criticality asn1_value__local_2390 = 1;

static const Presence asn1_value__local_2391 = 0;

static const ProtocolExtensionID asn1_value__local_2392 = 262;

static const Criticality asn1_value__local_2393 = 1;

static const Presence asn1_value__local_2394 = 0;

static const ProtocolExtensionID asn1_value__local_2395 = 275;

static const Criticality asn1_value__local_2396 = 1;

static const Presence asn1_value__local_2397 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2388[] = {
{
  (intptr_t)&asn1_value__local_2389,
  (intptr_t)&asn1_value__local_2390,
  (intptr_t)asn1_type_HigherBitratesThan16MbpsFlag,
  (intptr_t)&asn1_value__local_2391,
},
{
  (intptr_t)&asn1_value__local_2392,
  (intptr_t)&asn1_value__local_2393,
  (intptr_t)asn1_type_TunnelInformation,
  (intptr_t)&asn1_value__local_2394,
},
{
  (intptr_t)&asn1_value__local_2395,
  (intptr_t)&asn1_value__local_2396,
  (intptr_t)asn1_type_LHN_ID,
  (intptr_t)&asn1_value__local_2397,
},
};

static const ASN1CType asn1_constraint__local_2387[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2388,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2386[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2387,
};

const ASN1CType asn1_type_ProtocolExtensionField_133[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_133),

  offsetof(ProtocolExtensionField_133, id) | 0x0,
  (intptr_t)asn1_type__local_2384,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_133, criticality) | 0x0,
  (intptr_t)asn1_type__local_2385,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_133, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2386,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2398[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2399[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2403 = 6;

static const Criticality asn1_value__local_2404 = 1;

static const Presence asn1_value__local_2405 = 0;

static const ProtocolExtensionID asn1_value__local_2406 = 5;

static const Criticality asn1_value__local_2407 = 1;

static const Presence asn1_value__local_2408 = 0;

static const ProtocolExtensionID asn1_value__local_2409 = 250;

static const Criticality asn1_value__local_2410 = 1;

static const Presence asn1_value__local_2411 = 0;

static const ProtocolExtensionID asn1_value__local_2412 = 203;

static const Criticality asn1_value__local_2413 = 0;

static const Presence asn1_value__local_2414 = 0;

static const ProtocolExtensionID asn1_value__local_2415 = 235;

static const Criticality asn1_value__local_2416 = 0;

static const Presence asn1_value__local_2417 = 0;

static const ProtocolExtensionID asn1_value__local_2418 = 262;

static const Criticality asn1_value__local_2419 = 1;

static const Presence asn1_value__local_2420 = 0;

static const ProtocolExtensionID asn1_value__local_2421 = 275;

static const Criticality asn1_value__local_2422 = 1;

static const Presence asn1_value__local_2423 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2402[] = {
{
  (intptr_t)&asn1_value__local_2403,
  (intptr_t)&asn1_value__local_2404,
  (intptr_t)asn1_type_ChosenIntegrityProtectionAlgorithm,
  (intptr_t)&asn1_value__local_2405,
},
{
  (intptr_t)&asn1_value__local_2406,
  (intptr_t)&asn1_value__local_2407,
  (intptr_t)asn1_type_ChosenEncryptionAlgorithm,
  (intptr_t)&asn1_value__local_2408,
},
{
  (intptr_t)&asn1_value__local_2409,
  (intptr_t)&asn1_value__local_2410,
  (intptr_t)asn1_type_HigherBitratesThan16MbpsFlag,
  (intptr_t)&asn1_value__local_2411,
},
{
  (intptr_t)&asn1_value__local_2412,
  (intptr_t)&asn1_value__local_2413,
  (intptr_t)asn1_type_CSG_Id,
  (intptr_t)&asn1_value__local_2414,
},
{
  (intptr_t)&asn1_value__local_2415,
  (intptr_t)&asn1_value__local_2416,
  (intptr_t)asn1_type_Cell_Access_Mode,
  (intptr_t)&asn1_value__local_2417,
},
{
  (intptr_t)&asn1_value__local_2418,
  (intptr_t)&asn1_value__local_2419,
  (intptr_t)asn1_type_TunnelInformation,
  (intptr_t)&asn1_value__local_2420,
},
{
  (intptr_t)&asn1_value__local_2421,
  (intptr_t)&asn1_value__local_2422,
  (intptr_t)asn1_type_LHN_ID,
  (intptr_t)&asn1_value__local_2423,
},
};

static const ASN1CType asn1_constraint__local_2401[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2402,
  7,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2400[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2401,
};

const ASN1CType asn1_type_ProtocolExtensionField_134[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_134),

  offsetof(ProtocolExtensionField_134, id) | 0x0,
  (intptr_t)asn1_type__local_2398,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_134, criticality) | 0x0,
  (intptr_t)asn1_type__local_2399,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_134, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2400,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2424[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2425[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2427[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2426[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2427,
};

const ASN1CType asn1_type_ProtocolExtensionField_135[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_135),

  offsetof(ProtocolExtensionField_135, id) | 0x0,
  (intptr_t)asn1_type__local_2424,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_135, criticality) | 0x0,
  (intptr_t)asn1_type__local_2425,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_135, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2426,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2429[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2430[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2434 = 233;

static const Criticality asn1_value__local_2435 = 1;

static const Presence asn1_value__local_2436 = 0;

static const ProtocolExtensionID asn1_value__local_2437 = 239;

static const Criticality asn1_value__local_2438 = 1;

static const Presence asn1_value__local_2439 = 0;

static const ProtocolExtensionID asn1_value__local_2440 = 234;

static const Criticality asn1_value__local_2441 = 1;

static const Presence asn1_value__local_2442 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2433[] = {
{
  (intptr_t)&asn1_value__local_2434,
  (intptr_t)&asn1_value__local_2435,
  (intptr_t)asn1_type_UE_AggregateMaximumBitRate,
  (intptr_t)&asn1_value__local_2436,
},
{
  (intptr_t)&asn1_value__local_2437,
  (intptr_t)&asn1_value__local_2438,
  (intptr_t)asn1_type_MSISDN,
  (intptr_t)&asn1_value__local_2439,
},
{
  (intptr_t)&asn1_value__local_2440,
  (intptr_t)&asn1_value__local_2441,
  (intptr_t)asn1_type_CSG_Membership_Status,
  (intptr_t)&asn1_value__local_2442,
},
};

static const ASN1CType asn1_constraint__local_2432[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2433,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2431[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2432,
};

const ASN1CType asn1_type_ProtocolExtensionField_136[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_136),

  offsetof(ProtocolExtensionField_136, id) | 0x0,
  (intptr_t)asn1_type__local_2429,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_136, criticality) | 0x0,
  (intptr_t)asn1_type__local_2430,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_136, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2431,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2443[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2444[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2448 = 240;

static const Criticality asn1_value__local_2449 = 1;

static const Presence asn1_value__local_2450 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2447[] = {
{
  (intptr_t)&asn1_value__local_2448,
  (intptr_t)&asn1_value__local_2449,
  (intptr_t)asn1_type_Offload_RAB_Parameters,
  (intptr_t)&asn1_value__local_2450,
},
};

static const ASN1CType asn1_constraint__local_2446[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2447,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2445[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2446,
};

const ASN1CType asn1_type_ProtocolExtensionField_137[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_137),

  offsetof(ProtocolExtensionField_137, id) | 0x0,
  (intptr_t)asn1_type__local_2443,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_137, criticality) | 0x0,
  (intptr_t)asn1_type__local_2444,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_137, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2445,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2451[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2452[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2454[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2453[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2454,
};

const ASN1CType asn1_type_ProtocolExtensionField_138[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_138),

  offsetof(ProtocolExtensionField_138, id) | 0x0,
  (intptr_t)asn1_type__local_2451,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_138, criticality) | 0x0,
  (intptr_t)asn1_type__local_2452,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_138, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2453,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2456[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2457[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2459[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2458[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2459,
};

const ASN1CType asn1_type_ProtocolExtensionField_139[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_139),

  offsetof(ProtocolExtensionField_139, id) | 0x0,
  (intptr_t)asn1_type__local_2456,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_139, criticality) | 0x0,
  (intptr_t)asn1_type__local_2457,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_139, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2458,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2461[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2462[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2464[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2463[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2464,
};

const ASN1CType asn1_type_ProtocolExtensionField_140[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_140),

  offsetof(ProtocolExtensionField_140, id) | 0x0,
  (intptr_t)asn1_type__local_2461,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_140, criticality) | 0x0,
  (intptr_t)asn1_type__local_2462,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_140, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2463,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2466[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2467[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2471 = 96;

static const Criticality asn1_value__local_2472 = 1;

static const Presence asn1_value__local_2473 = 0;

static const ProtocolExtensionID asn1_value__local_2474 = 229;

static const Criticality asn1_value__local_2475 = 1;

static const Presence asn1_value__local_2476 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2470[] = {
{
  (intptr_t)&asn1_value__local_2471,
  (intptr_t)&asn1_value__local_2472,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_2473,
},
{
  (intptr_t)&asn1_value__local_2474,
  (intptr_t)&asn1_value__local_2475,
  (intptr_t)asn1_type_CSG_Id_List,
  (intptr_t)&asn1_value__local_2476,
},
};

static const ASN1CType asn1_constraint__local_2469[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2470,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2468[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2469,
};

const ASN1CType asn1_type_ProtocolExtensionField_141[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_141),

  offsetof(ProtocolExtensionField_141, id) | 0x0,
  (intptr_t)asn1_type__local_2466,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_141, criticality) | 0x0,
  (intptr_t)asn1_type__local_2467,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_141, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2468,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2477[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2478[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2482 = 105;

static const Criticality asn1_value__local_2483 = 1;

static const Presence asn1_value__local_2484 = 0;

static const ProtocolExtensionID asn1_value__local_2485 = 118;

static const Criticality asn1_value__local_2486 = 1;

static const Presence asn1_value__local_2487 = 0;

static const ProtocolExtensionID asn1_value__local_2488 = 127;

static const Criticality asn1_value__local_2489 = 1;

static const Presence asn1_value__local_2490 = 0;

static const ProtocolExtensionID asn1_value__local_2491 = 202;

static const Criticality asn1_value__local_2492 = 1;

static const Presence asn1_value__local_2493 = 0;

static const ProtocolExtensionID asn1_value__local_2494 = 228;

static const Criticality asn1_value__local_2495 = 1;

static const Presence asn1_value__local_2496 = 0;

static const ProtocolExtensionID asn1_value__local_2497 = 234;

static const Criticality asn1_value__local_2498 = 1;

static const Presence asn1_value__local_2499 = 0;

static const ProtocolExtensionID asn1_value__local_2500 = 249;

static const Criticality asn1_value__local_2501 = 1;

static const Presence asn1_value__local_2502 = 0;

static const ProtocolExtensionID asn1_value__local_2503 = 263;

static const Criticality asn1_value__local_2504 = 1;

static const Presence asn1_value__local_2505 = 0;

static const ProtocolExtensionID asn1_value__local_2506 = 272;

static const Criticality asn1_value__local_2507 = 1;

static const Presence asn1_value__local_2508 = 0;

static const ProtocolExtensionID asn1_value__local_2509 = 277;

static const Criticality asn1_value__local_2510 = 1;

static const Presence asn1_value__local_2511 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2481[] = {
{
  (intptr_t)&asn1_value__local_2482,
  (intptr_t)&asn1_value__local_2483,
  (intptr_t)asn1_type_SNA_Access_Information,
  (intptr_t)&asn1_value__local_2484,
},
{
  (intptr_t)&asn1_value__local_2485,
  (intptr_t)&asn1_value__local_2486,
  (intptr_t)asn1_type_UESBI_Iu,
  (intptr_t)&asn1_value__local_2487,
},
{
  (intptr_t)&asn1_value__local_2488,
  (intptr_t)&asn1_value__local_2489,
  (intptr_t)asn1_type_PLMNidentity,
  (intptr_t)&asn1_value__local_2490,
},
{
  (intptr_t)&asn1_value__local_2491,
  (intptr_t)&asn1_value__local_2492,
  (intptr_t)asn1_type_SubscriberProfileIDforRFP,
  (intptr_t)&asn1_value__local_2493,
},
{
  (intptr_t)&asn1_value__local_2494,
  (intptr_t)&asn1_value__local_2495,
  (intptr_t)asn1_type_SRVCC_Operation_Possible,
  (intptr_t)&asn1_value__local_2496,
},
{
  (intptr_t)&asn1_value__local_2497,
  (intptr_t)&asn1_value__local_2498,
  (intptr_t)asn1_type_CSG_Membership_Status,
  (intptr_t)&asn1_value__local_2499,
},
{
  (intptr_t)&asn1_value__local_2500,
  (intptr_t)&asn1_value__local_2501,
  (intptr_t)asn1_type_Management_Based_MDT_Allowed,
  (intptr_t)&asn1_value__local_2502,
},
{
  (intptr_t)&asn1_value__local_2503,
  (intptr_t)&asn1_value__local_2504,
  (intptr_t)asn1_type_MDT_PLMN_List,
  (intptr_t)&asn1_value__local_2505,
},
{
  (intptr_t)&asn1_value__local_2506,
  (intptr_t)&asn1_value__local_2507,
  (intptr_t)asn1_type_RSRVCC_Operation_Possible,
  (intptr_t)&asn1_value__local_2508,
},
{
  (intptr_t)&asn1_value__local_2509,
  (intptr_t)&asn1_value__local_2510,
  (intptr_t)asn1_type_PLMNidentity,
  (intptr_t)&asn1_value__local_2511,
},
};

static const ASN1CType asn1_constraint__local_2480[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2481,
  10,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2479[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2480,
};

const ASN1CType asn1_type_ProtocolExtensionField_142[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_142),

  offsetof(ProtocolExtensionField_142, id) | 0x0,
  (intptr_t)asn1_type__local_2477,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_142, criticality) | 0x0,
  (intptr_t)asn1_type__local_2478,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_142, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2479,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2512[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2513[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2517 = 125;

static const Criticality asn1_value__local_2518 = 1;

static const Presence asn1_value__local_2519 = 0;

static const ProtocolExtensionID asn1_value__local_2520 = 244;

static const Criticality asn1_value__local_2521 = 1;

static const Presence asn1_value__local_2522 = 0;

static const ProtocolExtensionID asn1_value__local_2523 = 251;

static const Criticality asn1_value__local_2524 = 1;

static const Presence asn1_value__local_2525 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2516[] = {
{
  (intptr_t)&asn1_value__local_2517,
  (intptr_t)&asn1_value__local_2518,
  (intptr_t)asn1_type_TracePropagationParameters,
  (intptr_t)&asn1_value__local_2519,
},
{
  (intptr_t)&asn1_value__local_2520,
  (intptr_t)&asn1_value__local_2521,
  (intptr_t)asn1_type_MDT_Configuration,
  (intptr_t)&asn1_value__local_2522,
},
{
  (intptr_t)&asn1_value__local_2523,
  (intptr_t)&asn1_value__local_2524,
  (intptr_t)asn1_type_TransportLayerAddress,
  (intptr_t)&asn1_value__local_2525,
},
};

static const ASN1CType asn1_constraint__local_2515[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2516,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2514[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2515,
};

const ASN1CType asn1_type_ProtocolExtensionField_143[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_143),

  offsetof(ProtocolExtensionField_143, id) | 0x0,
  (intptr_t)asn1_type__local_2512,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_143, criticality) | 0x0,
  (intptr_t)asn1_type__local_2513,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_143, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2514,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2526[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2527[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2529[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2528[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2529,
};

const ASN1CType asn1_type_ProtocolExtensionField_144[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_144),

  offsetof(ProtocolExtensionField_144, id) | 0x0,
  (intptr_t)asn1_type__local_2526,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_144, criticality) | 0x0,
  (intptr_t)asn1_type__local_2527,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_144, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2528,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2531[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2532[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2536 = 111;

static const Criticality asn1_value__local_2537 = 1;

static const Presence asn1_value__local_2538 = 0;

static const ProtocolExtensionID asn1_value__local_2539 = 112;

static const Criticality asn1_value__local_2540 = 1;

static const Presence asn1_value__local_2541 = 0;

static const ProtocolExtensionID asn1_value__local_2542 = 113;

static const Criticality asn1_value__local_2543 = 1;

static const Presence asn1_value__local_2544 = 0;

static const ProtocolExtensionID asn1_value__local_2545 = 114;

static const Criticality asn1_value__local_2546 = 1;

static const Presence asn1_value__local_2547 = 0;

static const ProtocolExtensionID asn1_value__local_2548 = 164;

static const Criticality asn1_value__local_2549 = 1;

static const Presence asn1_value__local_2550 = 0;

static const ProtocolExtensionID asn1_value__local_2551 = 168;

static const Criticality asn1_value__local_2552 = 1;

static const Presence asn1_value__local_2553 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2535[] = {
{
  (intptr_t)&asn1_value__local_2536,
  (intptr_t)&asn1_value__local_2537,
  (intptr_t)asn1_type_VerticalAccuracyCode,
  (intptr_t)&asn1_value__local_2538,
},
{
  (intptr_t)&asn1_value__local_2539,
  (intptr_t)&asn1_value__local_2540,
  (intptr_t)asn1_type_ResponseTime,
  (intptr_t)&asn1_value__local_2541,
},
{
  (intptr_t)&asn1_value__local_2542,
  (intptr_t)&asn1_value__local_2543,
  (intptr_t)asn1_type_PositioningPriority,
  (intptr_t)&asn1_value__local_2544,
},
{
  (intptr_t)&asn1_value__local_2545,
  (intptr_t)&asn1_value__local_2546,
  (intptr_t)asn1_type_ClientType,
  (intptr_t)&asn1_value__local_2547,
},
{
  (intptr_t)&asn1_value__local_2548,
  (intptr_t)&asn1_value__local_2549,
  (intptr_t)asn1_type_IncludeVelocity,
  (intptr_t)&asn1_value__local_2550,
},
{
  (intptr_t)&asn1_value__local_2551,
  (intptr_t)&asn1_value__local_2552,
  (intptr_t)asn1_type_PeriodicLocationInfo,
  (intptr_t)&asn1_value__local_2553,
},
};

static const ASN1CType asn1_constraint__local_2534[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2535,
  6,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2533[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2534,
};

const ASN1CType asn1_type_ProtocolExtensionField_145[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_145),

  offsetof(ProtocolExtensionField_145, id) | 0x0,
  (intptr_t)asn1_type__local_2531,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_145, criticality) | 0x0,
  (intptr_t)asn1_type__local_2532,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_145, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2533,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2554[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2555[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2559 = 97;

static const Criticality asn1_value__local_2560 = 1;

static const Presence asn1_value__local_2561 = 0;

static const ProtocolExtensionID asn1_value__local_2562 = 119;

static const Criticality asn1_value__local_2563 = 1;

static const Presence asn1_value__local_2564 = 0;

static const ProtocolExtensionID asn1_value__local_2565 = 120;

static const Criticality asn1_value__local_2566 = 1;

static const Presence asn1_value__local_2567 = 0;

static const ProtocolExtensionID asn1_value__local_2568 = 122;

static const Criticality asn1_value__local_2569 = 1;

static const Presence asn1_value__local_2570 = 0;

static const ProtocolExtensionID asn1_value__local_2571 = 165;

static const Criticality asn1_value__local_2572 = 1;

static const Presence asn1_value__local_2573 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2558[] = {
{
  (intptr_t)&asn1_value__local_2559,
  (intptr_t)&asn1_value__local_2560,
  (intptr_t)asn1_type_LastKnownServiceArea,
  (intptr_t)&asn1_value__local_2561,
},
{
  (intptr_t)&asn1_value__local_2562,
  (intptr_t)&asn1_value__local_2563,
  (intptr_t)asn1_type_PositionData,
  (intptr_t)&asn1_value__local_2564,
},
{
  (intptr_t)&asn1_value__local_2565,
  (intptr_t)&asn1_value__local_2566,
  (intptr_t)asn1_type_PositionDataSpecificToGERANIuMode,
  (intptr_t)&asn1_value__local_2567,
},
{
  (intptr_t)&asn1_value__local_2568,
  (intptr_t)&asn1_value__local_2569,
  (intptr_t)asn1_type_AccuracyFulfilmentIndicator,
  (intptr_t)&asn1_value__local_2570,
},
{
  (intptr_t)&asn1_value__local_2571,
  (intptr_t)&asn1_value__local_2572,
  (intptr_t)asn1_type_VelocityEstimate,
  (intptr_t)&asn1_value__local_2573,
},
};

static const ASN1CType asn1_constraint__local_2557[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2558,
  5,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2556[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2557,
};

const ASN1CType asn1_type_ProtocolExtensionField_146[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_146),

  offsetof(ProtocolExtensionField_146, id) | 0x0,
  (intptr_t)asn1_type__local_2554,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_146, criticality) | 0x0,
  (intptr_t)asn1_type__local_2555,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_146, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2556,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2574[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2575[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2579 = 108;

static const Criticality asn1_value__local_2580 = 1;

static const Presence asn1_value__local_2581 = 0;

static const ProtocolExtensionID asn1_value__local_2582 = 127;

static const Criticality asn1_value__local_2583 = 1;

static const Presence asn1_value__local_2584 = 0;

static const ProtocolExtensionID asn1_value__local_2585 = 23;

static const Criticality asn1_value__local_2586 = 1;

static const Presence asn1_value__local_2587 = 0;

static const ProtocolExtensionID asn1_value__local_2588 = 130;

static const Criticality asn1_value__local_2589 = 1;

static const Presence asn1_value__local_2590 = 0;

static const ProtocolExtensionID asn1_value__local_2591 = 166;

static const Criticality asn1_value__local_2592 = 1;

static const Presence asn1_value__local_2593 = 0;

static const ProtocolExtensionID asn1_value__local_2594 = 171;

static const Criticality asn1_value__local_2595 = 0;

static const Presence asn1_value__local_2596 = 0;

static const ProtocolExtensionID asn1_value__local_2597 = 203;

static const Criticality asn1_value__local_2598 = 0;

static const Presence asn1_value__local_2599 = 0;

static const ProtocolExtensionID asn1_value__local_2600 = 235;

static const Criticality asn1_value__local_2601 = 0;

static const Presence asn1_value__local_2602 = 0;

static const ProtocolExtensionID asn1_value__local_2603 = 241;

static const Criticality asn1_value__local_2604 = 1;

static const Presence asn1_value__local_2605 = 0;

static const ProtocolExtensionID asn1_value__local_2606 = 250;

static const Criticality asn1_value__local_2607 = 1;

static const Presence asn1_value__local_2608 = 0;

static const ProtocolExtensionID asn1_value__local_2609 = 262;

static const Criticality asn1_value__local_2610 = 1;

static const Presence asn1_value__local_2611 = 0;

static const ProtocolExtensionID asn1_value__local_2612 = 273;

static const Criticality asn1_value__local_2613 = 1;

static const Presence asn1_value__local_2614 = 0;

static const ProtocolExtensionID asn1_value__local_2615 = 275;

static const Criticality asn1_value__local_2616 = 1;

static const Presence asn1_value__local_2617 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2578[] = {
{
  (intptr_t)&asn1_value__local_2579,
  (intptr_t)&asn1_value__local_2580,
  (intptr_t)asn1_type_GERAN_Classmark,
  (intptr_t)&asn1_value__local_2581,
},
{
  (intptr_t)&asn1_value__local_2582,
  (intptr_t)&asn1_value__local_2583,
  (intptr_t)asn1_type_PLMNidentity,
  (intptr_t)&asn1_value__local_2584,
},
{
  (intptr_t)&asn1_value__local_2585,
  (intptr_t)&asn1_value__local_2586,
  (intptr_t)asn1_type_PermanentNAS_UE_ID,
  (intptr_t)&asn1_value__local_2587,
},
{
  (intptr_t)&asn1_value__local_2588,
  (intptr_t)&asn1_value__local_2589,
  (intptr_t)asn1_type_NAS_SequenceNumber,
  (intptr_t)&asn1_value__local_2590,
},
{
  (intptr_t)&asn1_value__local_2591,
  (intptr_t)&asn1_value__local_2592,
  (intptr_t)asn1_type_RedirectAttemptFlag,
  (intptr_t)&asn1_value__local_2593,
},
{
  (intptr_t)&asn1_value__local_2594,
  (intptr_t)&asn1_value__local_2595,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_2596,
},
{
  (intptr_t)&asn1_value__local_2597,
  (intptr_t)&asn1_value__local_2598,
  (intptr_t)asn1_type_CSG_Id,
  (intptr_t)&asn1_value__local_2599,
},
{
  (intptr_t)&asn1_value__local_2600,
  (intptr_t)&asn1_value__local_2601,
  (intptr_t)asn1_type_Cell_Access_Mode,
  (intptr_t)&asn1_value__local_2602,
},
{
  (intptr_t)&asn1_value__local_2603,
  (intptr_t)&asn1_value__local_2604,
  (intptr_t)asn1_type_TransportLayerAddress,
  (intptr_t)&asn1_value__local_2605,
},
{
  (intptr_t)&asn1_value__local_2606,
  (intptr_t)&asn1_value__local_2607,
  (intptr_t)asn1_type_HigherBitratesThan16MbpsFlag,
  (intptr_t)&asn1_value__local_2608,
},
{
  (intptr_t)&asn1_value__local_2609,
  (intptr_t)&asn1_value__local_2610,
  (intptr_t)asn1_type_TunnelInformation,
  (intptr_t)&asn1_value__local_2611,
},
{
  (intptr_t)&asn1_value__local_2612,
  (intptr_t)&asn1_value__local_2613,
  (intptr_t)asn1_type_TransportLayerAddress,
  (intptr_t)&asn1_value__local_2614,
},
{
  (intptr_t)&asn1_value__local_2615,
  (intptr_t)&asn1_value__local_2616,
  (intptr_t)asn1_type_LHN_ID,
  (intptr_t)&asn1_value__local_2617,
},
};

static const ASN1CType asn1_constraint__local_2577[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2578,
  13,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2576[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2577,
};

const ASN1CType asn1_type_ProtocolExtensionField_147[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_147),

  offsetof(ProtocolExtensionField_147, id) | 0x0,
  (intptr_t)asn1_type__local_2574,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_147, criticality) | 0x0,
  (intptr_t)asn1_type__local_2575,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_147, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2576,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2618[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2619[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2623 = 129;

static const Criticality asn1_value__local_2624 = 1;

static const Presence asn1_value__local_2625 = 0;

static const ProtocolExtensionID asn1_value__local_2626 = 128;

static const Criticality asn1_value__local_2627 = 1;

static const Presence asn1_value__local_2628 = 0;

static const ProtocolExtensionID asn1_value__local_2629 = 202;

static const Criticality asn1_value__local_2630 = 1;

static const Presence asn1_value__local_2631 = 0;

static const ProtocolExtensionID asn1_value__local_2632 = 241;

static const Criticality asn1_value__local_2633 = 1;

static const Presence asn1_value__local_2634 = 0;

static const ProtocolExtensionID asn1_value__local_2635 = 273;

static const Criticality asn1_value__local_2636 = 1;

static const Presence asn1_value__local_2637 = 0;

static const ProtocolExtensionID asn1_value__local_2638 = 275;

static const Criticality asn1_value__local_2639 = 1;

static const Presence asn1_value__local_2640 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2622[] = {
{
  (intptr_t)&asn1_value__local_2623,
  (intptr_t)&asn1_value__local_2624,
  (intptr_t)asn1_type_RedirectionIndication,
  (intptr_t)&asn1_value__local_2625,
},
{
  (intptr_t)&asn1_value__local_2626,
  (intptr_t)&asn1_value__local_2627,
  (intptr_t)asn1_type_RedirectionCompleted,
  (intptr_t)&asn1_value__local_2628,
},
{
  (intptr_t)&asn1_value__local_2629,
  (intptr_t)&asn1_value__local_2630,
  (intptr_t)asn1_type_SubscriberProfileIDforRFP,
  (intptr_t)&asn1_value__local_2631,
},
{
  (intptr_t)&asn1_value__local_2632,
  (intptr_t)&asn1_value__local_2633,
  (intptr_t)asn1_type_TransportLayerAddress,
  (intptr_t)&asn1_value__local_2634,
},
{
  (intptr_t)&asn1_value__local_2635,
  (intptr_t)&asn1_value__local_2636,
  (intptr_t)asn1_type_TransportLayerAddress,
  (intptr_t)&asn1_value__local_2637,
},
{
  (intptr_t)&asn1_value__local_2638,
  (intptr_t)&asn1_value__local_2639,
  (intptr_t)asn1_type_LHN_ID,
  (intptr_t)&asn1_value__local_2640,
},
};

static const ASN1CType asn1_constraint__local_2621[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2622,
  6,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2620[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2621,
};

const ASN1CType asn1_type_ProtocolExtensionField_148[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_148),

  offsetof(ProtocolExtensionField_148, id) | 0x0,
  (intptr_t)asn1_type__local_2618,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_148, criticality) | 0x0,
  (intptr_t)asn1_type__local_2619,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_148, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2620,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2641[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2642[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2646 = 3;

static const Criticality asn1_value__local_2647 = 1;

static const Presence asn1_value__local_2648 = 0;

static const ProtocolExtensionID asn1_value__local_2649 = 96;

static const Criticality asn1_value__local_2650 = 1;

static const Presence asn1_value__local_2651 = 0;

static const ProtocolExtensionID asn1_value__local_2652 = 171;

static const Criticality asn1_value__local_2653 = 0;

static const Presence asn1_value__local_2654 = 0;

static const ProtocolExtensionID asn1_value__local_2655 = 245;

static const Criticality asn1_value__local_2656 = 1;

static const Presence asn1_value__local_2657 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2645[] = {
{
  (intptr_t)&asn1_value__local_2646,
  (intptr_t)&asn1_value__local_2647,
  (intptr_t)asn1_type_CN_DomainIndicator,
  (intptr_t)&asn1_value__local_2648,
},
{
  (intptr_t)&asn1_value__local_2649,
  (intptr_t)&asn1_value__local_2650,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_2651,
},
{
  (intptr_t)&asn1_value__local_2652,
  (intptr_t)&asn1_value__local_2653,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_2654,
},
{
  (intptr_t)&asn1_value__local_2655,
  (intptr_t)&asn1_value__local_2656,
  (intptr_t)asn1_type_Priority_Class_Indicator,
  (intptr_t)&asn1_value__local_2657,
},
};

static const ASN1CType asn1_constraint__local_2644[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2645,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2643[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2644,
};

const ASN1CType asn1_type_ProtocolExtensionField_149[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_149),

  offsetof(ProtocolExtensionField_149, id) | 0x0,
  (intptr_t)asn1_type__local_2641,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_149, criticality) | 0x0,
  (intptr_t)asn1_type__local_2642,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_149, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2643,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2658[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2659[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2663 = 96;

static const Criticality asn1_value__local_2664 = 1;

static const Presence asn1_value__local_2665 = 0;

static const ProtocolExtensionID asn1_value__local_2666 = 171;

static const Criticality asn1_value__local_2667 = 0;

static const Presence asn1_value__local_2668 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2662[] = {
{
  (intptr_t)&asn1_value__local_2663,
  (intptr_t)&asn1_value__local_2664,
  (intptr_t)asn1_type_GlobalCN_ID,
  (intptr_t)&asn1_value__local_2665,
},
{
  (intptr_t)&asn1_value__local_2666,
  (intptr_t)&asn1_value__local_2667,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_2668,
},
};

static const ASN1CType asn1_constraint__local_2661[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2662,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2660[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2661,
};

const ASN1CType asn1_type_ProtocolExtensionField_150[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_150),

  offsetof(ProtocolExtensionField_150, id) | 0x0,
  (intptr_t)asn1_type__local_2658,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_150, criticality) | 0x0,
  (intptr_t)asn1_type__local_2659,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_150, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2660,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2669[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2670[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2672[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2671[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2672,
};

const ASN1CType asn1_type_ProtocolExtensionField_151[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_151),

  offsetof(ProtocolExtensionField_151, id) | 0x0,
  (intptr_t)asn1_type__local_2669,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_151, criticality) | 0x0,
  (intptr_t)asn1_type__local_2670,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_151, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2671,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2674[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2675[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2679 = 103;

static const Criticality asn1_value__local_2680 = 1;

static const Presence asn1_value__local_2681 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2678[] = {
{
  (intptr_t)&asn1_value__local_2679,
  (intptr_t)&asn1_value__local_2680,
  (intptr_t)asn1_type_RRC_Container,
  (intptr_t)&asn1_value__local_2681,
},
};

static const ASN1CType asn1_constraint__local_2677[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2678,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2676[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2677,
};

const ASN1CType asn1_type_ProtocolExtensionField_152[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_152),

  offsetof(ProtocolExtensionField_152, id) | 0x0,
  (intptr_t)asn1_type__local_2674,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_152, criticality) | 0x0,
  (intptr_t)asn1_type__local_2675,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_152, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2676,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2682[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2683[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2687 = 233;

static const Criticality asn1_value__local_2688 = 1;

static const Presence asn1_value__local_2689 = 0;

static const ProtocolExtensionID asn1_value__local_2690 = 239;

static const Criticality asn1_value__local_2691 = 1;

static const Presence asn1_value__local_2692 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2686[] = {
{
  (intptr_t)&asn1_value__local_2687,
  (intptr_t)&asn1_value__local_2688,
  (intptr_t)asn1_type_UE_AggregateMaximumBitRate,
  (intptr_t)&asn1_value__local_2689,
},
{
  (intptr_t)&asn1_value__local_2690,
  (intptr_t)&asn1_value__local_2691,
  (intptr_t)asn1_type_MSISDN,
  (intptr_t)&asn1_value__local_2692,
},
};

static const ASN1CType asn1_constraint__local_2685[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2686,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2684[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2685,
};

const ASN1CType asn1_type_ProtocolExtensionField_153[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_153),

  offsetof(ProtocolExtensionField_153, id) | 0x0,
  (intptr_t)asn1_type__local_2682,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_153, criticality) | 0x0,
  (intptr_t)asn1_type__local_2683,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_153, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2684,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2693[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2694[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2698 = 231;

static const Criticality asn1_value__local_2699 = 1;

static const Presence asn1_value__local_2700 = 0;

static const ProtocolExtensionID asn1_value__local_2701 = 242;

static const Criticality asn1_value__local_2702 = 1;

static const Presence asn1_value__local_2703 = 0;

static const ProtocolExtensionID asn1_value__local_2704 = 274;

static const Criticality asn1_value__local_2705 = 1;

static const Presence asn1_value__local_2706 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2697[] = {
{
  (intptr_t)&asn1_value__local_2698,
  (intptr_t)&asn1_value__local_2699,
  (intptr_t)asn1_type_E_UTRAN_Service_Handover,
  (intptr_t)&asn1_value__local_2700,
},
{
  (intptr_t)&asn1_value__local_2701,
  (intptr_t)&asn1_value__local_2702,
  (intptr_t)asn1_type_Correlation_ID,
  (intptr_t)&asn1_value__local_2703,
},
{
  (intptr_t)&asn1_value__local_2704,
  (intptr_t)&asn1_value__local_2705,
  (intptr_t)asn1_type_Correlation_ID,
  (intptr_t)&asn1_value__local_2706,
},
};

static const ASN1CType asn1_constraint__local_2696[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2697,
  3,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2695[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2696,
};

const ASN1CType asn1_type_ProtocolExtensionField_154[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_154),

  offsetof(ProtocolExtensionField_154, id) | 0x0,
  (intptr_t)asn1_type__local_2693,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_154, criticality) | 0x0,
  (intptr_t)asn1_type__local_2694,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_154, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2695,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2707[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2708[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2710[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2709[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2710,
};

const ASN1CType asn1_type_ProtocolExtensionField_155[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_155),

  offsetof(ProtocolExtensionField_155, id) | 0x0,
  (intptr_t)asn1_type__local_2707,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_155, criticality) | 0x0,
  (intptr_t)asn1_type__local_2708,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_155, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2709,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2712[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2713[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2717 = 89;

static const Criticality asn1_value__local_2718 = 1;

static const Presence asn1_value__local_2719 = 0;

static const ProtocolExtensionID asn1_value__local_2720 = 107;

static const Criticality asn1_value__local_2721 = 1;

static const Presence asn1_value__local_2722 = 0;

static const ProtocolExtensionID asn1_value__local_2723 = 238;

static const Criticality asn1_value__local_2724 = 1;

static const Presence asn1_value__local_2725 = 0;

static const ProtocolExtensionID asn1_value__local_2726 = 240;

static const Criticality asn1_value__local_2727 = 1;

static const Presence asn1_value__local_2728 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2716[] = {
{
  (intptr_t)&asn1_value__local_2717,
  (intptr_t)&asn1_value__local_2718,
  (intptr_t)asn1_type_Alt_RAB_Parameters,
  (intptr_t)&asn1_value__local_2719,
},
{
  (intptr_t)&asn1_value__local_2720,
  (intptr_t)&asn1_value__local_2721,
  (intptr_t)asn1_type_GERAN_BSC_Container,
  (intptr_t)&asn1_value__local_2722,
},
{
  (intptr_t)&asn1_value__local_2723,
  (intptr_t)&asn1_value__local_2724,
  (intptr_t)asn1_type_PDP_TypeInformation_extension,
  (intptr_t)&asn1_value__local_2725,
},
{
  (intptr_t)&asn1_value__local_2726,
  (intptr_t)&asn1_value__local_2727,
  (intptr_t)asn1_type_Offload_RAB_Parameters,
  (intptr_t)&asn1_value__local_2728,
},
};

static const ASN1CType asn1_constraint__local_2715[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2716,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2714[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2715,
};

const ASN1CType asn1_type_ProtocolExtensionField_156[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_156),

  offsetof(ProtocolExtensionField_156, id) | 0x0,
  (intptr_t)asn1_type__local_2712,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_156, criticality) | 0x0,
  (intptr_t)asn1_type__local_2713,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_156, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2714,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2729[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2730[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2734 = 110;

static const Criticality asn1_value__local_2735 = 1;

static const Presence asn1_value__local_2736 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2733[] = {
{
  (intptr_t)&asn1_value__local_2734,
  (intptr_t)&asn1_value__local_2735,
  (intptr_t)asn1_type_GERAN_Iumode_RAB_FailedList_RABAssgntResponse,
  (intptr_t)&asn1_value__local_2736,
},
};

static const ASN1CType asn1_constraint__local_2732[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2733,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2731[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2732,
};

const ASN1CType asn1_type_ProtocolExtensionField_157[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_157),

  offsetof(ProtocolExtensionField_157, id) | 0x0,
  (intptr_t)asn1_type__local_2729,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_157, criticality) | 0x0,
  (intptr_t)asn1_type__local_2730,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_157, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2731,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2737[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2738[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2742 = 90;

static const Criticality asn1_value__local_2743 = 1;

static const Presence asn1_value__local_2744 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2741[] = {
{
  (intptr_t)&asn1_value__local_2742,
  (intptr_t)&asn1_value__local_2743,
  (intptr_t)asn1_type_Ass_RAB_Parameters,
  (intptr_t)&asn1_value__local_2744,
},
};

static const ASN1CType asn1_constraint__local_2740[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2741,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2739[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2740,
};

const ASN1CType asn1_type_ProtocolExtensionField_158[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_158),

  offsetof(ProtocolExtensionField_158, id) | 0x0,
  (intptr_t)asn1_type__local_2737,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_158, criticality) | 0x0,
  (intptr_t)asn1_type__local_2738,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_158, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2739,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2745[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2746[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2748[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2747[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2748,
};

const ASN1CType asn1_type_ProtocolExtensionField_159[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_159),

  offsetof(ProtocolExtensionField_159, id) | 0x0,
  (intptr_t)asn1_type__local_2745,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_159, criticality) | 0x0,
  (intptr_t)asn1_type__local_2746,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_159, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2747,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2750[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2751[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2753[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2752[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2753,
};

const ASN1CType asn1_type_ProtocolExtensionField_160[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_160),

  offsetof(ProtocolExtensionField_160, id) | 0x0,
  (intptr_t)asn1_type__local_2750,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_160, criticality) | 0x0,
  (intptr_t)asn1_type__local_2751,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_160, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2752,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2755[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2756[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2758[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2757[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2758,
};

const ASN1CType asn1_type_ProtocolExtensionField_161[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_161),

  offsetof(ProtocolExtensionField_161, id) | 0x0,
  (intptr_t)asn1_type__local_2755,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_161, criticality) | 0x0,
  (intptr_t)asn1_type__local_2756,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_161, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2757,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2760[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2761[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2763[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2762[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2763,
};

const ASN1CType asn1_type_ProtocolExtensionField_162[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_162),

  offsetof(ProtocolExtensionField_162, id) | 0x0,
  (intptr_t)asn1_type__local_2760,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_162, criticality) | 0x0,
  (intptr_t)asn1_type__local_2761,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_162, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2762,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2765[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2766[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2770 = 103;

static const Criticality asn1_value__local_2771 = 1;

static const Presence asn1_value__local_2772 = 0;

static const ProtocolExtensionID asn1_value__local_2773 = 247;

static const Criticality asn1_value__local_2774 = 0;

static const Presence asn1_value__local_2775 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2769[] = {
{
  (intptr_t)&asn1_value__local_2770,
  (intptr_t)&asn1_value__local_2771,
  (intptr_t)asn1_type_RRC_Container,
  (intptr_t)&asn1_value__local_2772,
},
{
  (intptr_t)&asn1_value__local_2773,
  (intptr_t)&asn1_value__local_2774,
  (intptr_t)asn1_type_RNSAPRelocationParameters,
  (intptr_t)&asn1_value__local_2775,
},
};

static const ASN1CType asn1_constraint__local_2768[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2769,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2767[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2768,
};

const ASN1CType asn1_type_ProtocolExtensionField_163[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_163),

  offsetof(ProtocolExtensionField_163, id) | 0x0,
  (intptr_t)asn1_type__local_2765,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_163, criticality) | 0x0,
  (intptr_t)asn1_type__local_2766,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_163, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2767,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2776[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2777[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2779[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2778[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2779,
};

const ASN1CType asn1_type_ProtocolExtensionField_164[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_164),

  offsetof(ProtocolExtensionField_164, id) | 0x0,
  (intptr_t)asn1_type__local_2776,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_164, criticality) | 0x0,
  (intptr_t)asn1_type__local_2777,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_164, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2778,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2781[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2782[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2784[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2783[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2784,
};

const ASN1CType asn1_type_ProtocolExtensionField_165[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_165),

  offsetof(ProtocolExtensionField_165, id) | 0x0,
  (intptr_t)asn1_type__local_2781,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_165, criticality) | 0x0,
  (intptr_t)asn1_type__local_2782,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_165, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2783,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2786[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2787[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2791 = 12;

static const Criticality asn1_value__local_2792 = 1;

static const Presence asn1_value__local_2793 = 0;

static const ProtocolExtensionID asn1_value__local_2794 = 11;

static const Criticality asn1_value__local_2795 = 1;

static const Presence asn1_value__local_2796 = 0;

static const ProtocolExtensionID asn1_value__local_2797 = 233;

static const Criticality asn1_value__local_2798 = 1;

static const Presence asn1_value__local_2799 = 0;

static const ProtocolExtensionID asn1_value__local_2800 = 248;

static const Criticality asn1_value__local_2801 = 0;

static const Presence asn1_value__local_2802 = 0;

static const ProtocolExtensionID asn1_value__local_2803 = 203;

static const Criticality asn1_value__local_2804 = 0;

static const Presence asn1_value__local_2805 = 0;

static const ProtocolExtensionID asn1_value__local_2806 = 234;

static const Criticality asn1_value__local_2807 = 0;

static const Presence asn1_value__local_2808 = 0;

static const ProtocolExtensionID asn1_value__local_2809 = 261;

static const Criticality asn1_value__local_2810 = 1;

static const Presence asn1_value__local_2811 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2790[] = {
{
  (intptr_t)&asn1_value__local_2791,
  (intptr_t)&asn1_value__local_2792,
  (intptr_t)asn1_type_IntegrityProtectionInformation,
  (intptr_t)&asn1_value__local_2793,
},
{
  (intptr_t)&asn1_value__local_2794,
  (intptr_t)&asn1_value__local_2795,
  (intptr_t)asn1_type_EncryptionInformation,
  (intptr_t)&asn1_value__local_2796,
},
{
  (intptr_t)&asn1_value__local_2797,
  (intptr_t)&asn1_value__local_2798,
  (intptr_t)asn1_type_UE_AggregateMaximumBitRate,
  (intptr_t)&asn1_value__local_2799,
},
{
  (intptr_t)&asn1_value__local_2800,
  (intptr_t)&asn1_value__local_2801,
  (intptr_t)asn1_type_RABParametersList,
  (intptr_t)&asn1_value__local_2802,
},
{
  (intptr_t)&asn1_value__local_2803,
  (intptr_t)&asn1_value__local_2804,
  (intptr_t)asn1_type_CSG_Id,
  (intptr_t)&asn1_value__local_2805,
},
{
  (intptr_t)&asn1_value__local_2806,
  (intptr_t)&asn1_value__local_2807,
  (intptr_t)asn1_type_CSG_Membership_Status,
  (intptr_t)&asn1_value__local_2808,
},
{
  (intptr_t)&asn1_value__local_2809,
  (intptr_t)&asn1_value__local_2810,
  (intptr_t)asn1_type_PLMNidentity,
  (intptr_t)&asn1_value__local_2811,
},
};

static const ASN1CType asn1_constraint__local_2789[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2790,
  7,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2788[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2789,
};

const ASN1CType asn1_type_ProtocolExtensionField_166[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_166),

  offsetof(ProtocolExtensionField_166, id) | 0x0,
  (intptr_t)asn1_type__local_2786,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_166, criticality) | 0x0,
  (intptr_t)asn1_type__local_2787,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_166, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2788,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2812[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2813[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2817 = 231;

static const Criticality asn1_value__local_2818 = 1;

static const Presence asn1_value__local_2819 = 0;

static const ProtocolExtensionID asn1_value__local_2820 = 238;

static const Criticality asn1_value__local_2821 = 1;

static const Presence asn1_value__local_2822 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2816[] = {
{
  (intptr_t)&asn1_value__local_2817,
  (intptr_t)&asn1_value__local_2818,
  (intptr_t)asn1_type_E_UTRAN_Service_Handover,
  (intptr_t)&asn1_value__local_2819,
},
{
  (intptr_t)&asn1_value__local_2820,
  (intptr_t)&asn1_value__local_2821,
  (intptr_t)asn1_type_PDP_TypeInformation_extension,
  (intptr_t)&asn1_value__local_2822,
},
};

static const ASN1CType asn1_constraint__local_2815[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2816,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2814[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2815,
};

const ASN1CType asn1_type_ProtocolExtensionField_167[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_167),

  offsetof(ProtocolExtensionField_167, id) | 0x0,
  (intptr_t)asn1_type__local_2812,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_167, criticality) | 0x0,
  (intptr_t)asn1_type__local_2813,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_167, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2814,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2823[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2824[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2826[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2825[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2826,
};

const ASN1CType asn1_type_ProtocolExtensionField_168[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_168),

  offsetof(ProtocolExtensionField_168, id) | 0x0,
  (intptr_t)asn1_type__local_2823,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_168, criticality) | 0x0,
  (intptr_t)asn1_type__local_2824,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_168, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2825,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2828[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2829[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2831[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2830[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2831,
};

const ASN1CType asn1_type_ProtocolExtensionField_169[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_169),

  offsetof(ProtocolExtensionField_169, id) | 0x0,
  (intptr_t)asn1_type__local_2828,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_169, criticality) | 0x0,
  (intptr_t)asn1_type__local_2829,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_169, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2830,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2833[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2834[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2836[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2835[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2836,
};

const ASN1CType asn1_type_ProtocolExtensionField_170[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_170),

  offsetof(ProtocolExtensionField_170, id) | 0x0,
  (intptr_t)asn1_type__local_2833,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_170, criticality) | 0x0,
  (intptr_t)asn1_type__local_2834,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_170, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2835,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2838[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2839[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2841[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2840[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2841,
};

const ASN1CType asn1_type_ProtocolExtensionField_171[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_171),

  offsetof(ProtocolExtensionField_171, id) | 0x0,
  (intptr_t)asn1_type__local_2838,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_171, criticality) | 0x0,
  (intptr_t)asn1_type__local_2839,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_171, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2840,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2843[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2844[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2846[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2845[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2846,
};

const ASN1CType asn1_type_ProtocolExtensionField_172[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_172),

  offsetof(ProtocolExtensionField_172, id) | 0x0,
  (intptr_t)asn1_type__local_2843,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_172, criticality) | 0x0,
  (intptr_t)asn1_type__local_2844,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_172, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2845,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2848[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2849[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2851[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2850[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2851,
};

const ASN1CType asn1_type_ProtocolExtensionField_173[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_173),

  offsetof(ProtocolExtensionField_173, id) | 0x0,
  (intptr_t)asn1_type__local_2848,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_173, criticality) | 0x0,
  (intptr_t)asn1_type__local_2849,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_173, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2850,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2853[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2854[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2856[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2855[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2856,
};

const ASN1CType asn1_type_ProtocolExtensionField_174[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_174),

  offsetof(ProtocolExtensionField_174, id) | 0x0,
  (intptr_t)asn1_type__local_2853,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_174, criticality) | 0x0,
  (intptr_t)asn1_type__local_2854,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_174, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2855,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2858[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2859[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2863 = 115;

static const Criticality asn1_value__local_2864 = 0;

static const Presence asn1_value__local_2865 = 0;

static const ProtocolExtensionID asn1_value__local_2866 = 185;

static const Criticality asn1_value__local_2867 = 0;

static const Presence asn1_value__local_2868 = 1;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2862[] = {
{
  (intptr_t)&asn1_value__local_2863,
  (intptr_t)&asn1_value__local_2864,
  (intptr_t)asn1_type_LocationRelatedDataRequestTypeSpecificToGERANIuMode,
  (intptr_t)&asn1_value__local_2865,
},
{
  (intptr_t)&asn1_value__local_2866,
  (intptr_t)&asn1_value__local_2867,
  (intptr_t)asn1_type_RequestedGANSSAssistanceData,
  (intptr_t)&asn1_value__local_2868,
},
};

static const ASN1CType asn1_constraint__local_2861[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2862,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2860[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2861,
};

const ASN1CType asn1_type_ProtocolExtensionField_175[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_175),

  offsetof(ProtocolExtensionField_175, id) | 0x0,
  (intptr_t)asn1_type__local_2858,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_175, criticality) | 0x0,
  (intptr_t)asn1_type__local_2859,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_175, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2860,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2869[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2870[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2874 = 9;

static const Criticality asn1_value__local_2875 = 1;

static const Presence asn1_value__local_2876 = 0;

static const ProtocolExtensionID asn1_value__local_2877 = 186;

static const Criticality asn1_value__local_2878 = 1;

static const Presence asn1_value__local_2879 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2873[] = {
{
  (intptr_t)&asn1_value__local_2874,
  (intptr_t)&asn1_value__local_2875,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_2876,
},
{
  (intptr_t)&asn1_value__local_2877,
  (intptr_t)&asn1_value__local_2878,
  (intptr_t)asn1_type_BroadcastAssistanceDataDecipheringKeys,
  (intptr_t)&asn1_value__local_2879,
},
};

static const ASN1CType asn1_constraint__local_2872[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2873,
  2,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2871[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2872,
};

const ASN1CType asn1_type_ProtocolExtensionField_176[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_176),

  offsetof(ProtocolExtensionField_176, id) | 0x0,
  (intptr_t)asn1_type__local_2869,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_176, criticality) | 0x0,
  (intptr_t)asn1_type__local_2870,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_176, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2871,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2880[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2881[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2885 = 9;

static const Criticality asn1_value__local_2886 = 1;

static const Presence asn1_value__local_2887 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2884[] = {
{
  (intptr_t)&asn1_value__local_2885,
  (intptr_t)&asn1_value__local_2886,
  (intptr_t)asn1_type_CriticalityDiagnostics,
  (intptr_t)&asn1_value__local_2887,
},
};

static const ASN1CType asn1_constraint__local_2883[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2884,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2882[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2883,
};

const ASN1CType asn1_type_ProtocolExtensionField_177[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_177),

  offsetof(ProtocolExtensionField_177, id) | 0x0,
  (intptr_t)asn1_type__local_2880,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_177, criticality) | 0x0,
  (intptr_t)asn1_type__local_2881,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_177, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2882,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2888[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2889[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2891[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2890[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2891,
};

const ASN1CType asn1_type_ProtocolExtensionField_178[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_178),

  offsetof(ProtocolExtensionField_178, id) | 0x0,
  (intptr_t)asn1_type__local_2888,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_178, criticality) | 0x0,
  (intptr_t)asn1_type__local_2889,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_178, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2890,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2893[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2894[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2898 = 171;

static const Criticality asn1_value__local_2899 = 0;

static const Presence asn1_value__local_2900 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2897[] = {
{
  (intptr_t)&asn1_value__local_2898,
  (intptr_t)&asn1_value__local_2899,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_2900,
},
};

static const ASN1CType asn1_constraint__local_2896[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2897,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2895[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2896,
};

const ASN1CType asn1_type_ProtocolExtensionField_179[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_179),

  offsetof(ProtocolExtensionField_179, id) | 0x0,
  (intptr_t)asn1_type__local_2893,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_179, criticality) | 0x0,
  (intptr_t)asn1_type__local_2894,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_179, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2895,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2901[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2902[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2906 = 171;

static const Criticality asn1_value__local_2907 = 0;

static const Presence asn1_value__local_2908 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2905[] = {
{
  (intptr_t)&asn1_value__local_2906,
  (intptr_t)&asn1_value__local_2907,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_2908,
},
};

static const ASN1CType asn1_constraint__local_2904[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2905,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2903[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2904,
};

const ASN1CType asn1_type_ProtocolExtensionField_180[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_180),

  offsetof(ProtocolExtensionField_180, id) | 0x0,
  (intptr_t)asn1_type__local_2901,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_180, criticality) | 0x0,
  (intptr_t)asn1_type__local_2902,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_180, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2903,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2909[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2910[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2912[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2911[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2912,
};

const ASN1CType asn1_type_ProtocolExtensionField_181[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_181),

  offsetof(ProtocolExtensionField_181, id) | 0x0,
  (intptr_t)asn1_type__local_2909,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_181, criticality) | 0x0,
  (intptr_t)asn1_type__local_2910,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_181, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2911,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2914[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2915[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2919 = 171;

static const Criticality asn1_value__local_2920 = 0;

static const Presence asn1_value__local_2921 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2918[] = {
{
  (intptr_t)&asn1_value__local_2919,
  (intptr_t)&asn1_value__local_2920,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_2921,
},
};

static const ASN1CType asn1_constraint__local_2917[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2918,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2916[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2917,
};

const ASN1CType asn1_type_ProtocolExtensionField_182[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_182),

  offsetof(ProtocolExtensionField_182, id) | 0x0,
  (intptr_t)asn1_type__local_2914,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_182, criticality) | 0x0,
  (intptr_t)asn1_type__local_2915,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_182, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2916,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2922[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2923[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2927 = 171;

static const Criticality asn1_value__local_2928 = 0;

static const Presence asn1_value__local_2929 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2926[] = {
{
  (intptr_t)&asn1_value__local_2927,
  (intptr_t)&asn1_value__local_2928,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_2929,
},
};

static const ASN1CType asn1_constraint__local_2925[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2926,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2924[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2925,
};

const ASN1CType asn1_type_ProtocolExtensionField_183[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_183),

  offsetof(ProtocolExtensionField_183, id) | 0x0,
  (intptr_t)asn1_type__local_2922,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_183, criticality) | 0x0,
  (intptr_t)asn1_type__local_2923,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_183, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2924,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2930[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2931[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2933[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2932[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2933,
};

const ASN1CType asn1_type_ProtocolExtensionField_184[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_184),

  offsetof(ProtocolExtensionField_184, id) | 0x0,
  (intptr_t)asn1_type__local_2930,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_184, criticality) | 0x0,
  (intptr_t)asn1_type__local_2931,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_184, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2932,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2935[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2936[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2938[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2937[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2938,
};

const ASN1CType asn1_type_ProtocolExtensionField_185[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_185),

  offsetof(ProtocolExtensionField_185, id) | 0x0,
  (intptr_t)asn1_type__local_2935,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_185, criticality) | 0x0,
  (intptr_t)asn1_type__local_2936,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_185, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2937,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2940[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2941[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2945 = 169;

static const Criticality asn1_value__local_2946 = 1;

static const Presence asn1_value__local_2947 = 0;

static const ProtocolExtensionID asn1_value__local_2948 = 201;

static const Criticality asn1_value__local_2949 = 1;

static const Presence asn1_value__local_2950 = 0;

static const ProtocolExtensionID asn1_value__local_2951 = 238;

static const Criticality asn1_value__local_2952 = 1;

static const Presence asn1_value__local_2953 = 0;

static const ProtocolExtensionID asn1_value__local_2954 = 276;

static const Criticality asn1_value__local_2955 = 1;

static const Presence asn1_value__local_2956 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2944[] = {
{
  (intptr_t)&asn1_value__local_2945,
  (intptr_t)&asn1_value__local_2946,
  (intptr_t)asn1_type_MBMSCountingInformation,
  (intptr_t)&asn1_value__local_2947,
},
{
  (intptr_t)&asn1_value__local_2948,
  (intptr_t)&asn1_value__local_2949,
  (intptr_t)asn1_type_MBMSSynchronisationInformation,
  (intptr_t)&asn1_value__local_2950,
},
{
  (intptr_t)&asn1_value__local_2951,
  (intptr_t)&asn1_value__local_2952,
  (intptr_t)asn1_type_PDP_TypeInformation_extension,
  (intptr_t)&asn1_value__local_2953,
},
{
  (intptr_t)&asn1_value__local_2954,
  (intptr_t)&asn1_value__local_2955,
  (intptr_t)asn1_type_Session_Re_establishment_Indicator,
  (intptr_t)&asn1_value__local_2956,
},
};

static const ASN1CType asn1_constraint__local_2943[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2944,
  4,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2942[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2943,
};

const ASN1CType asn1_type_ProtocolExtensionField_186[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_186),

  offsetof(ProtocolExtensionField_186, id) | 0x0,
  (intptr_t)asn1_type__local_2940,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_186, criticality) | 0x0,
  (intptr_t)asn1_type__local_2941,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_186, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2942,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2957[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2958[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_2962 = 236;

static const Criticality asn1_value__local_2963 = 0;

static const Presence asn1_value__local_2964 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_2961[] = {
{
  (intptr_t)&asn1_value__local_2962,
  (intptr_t)&asn1_value__local_2963,
  (intptr_t)asn1_type_IPMulticastAddress,
  (intptr_t)&asn1_value__local_2964,
},
};

static const ASN1CType asn1_constraint__local_2960[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_2961,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2959[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2960,
};

const ASN1CType asn1_type_ProtocolExtensionField_187[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_187),

  offsetof(ProtocolExtensionField_187, id) | 0x0,
  (intptr_t)asn1_type__local_2957,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_187, criticality) | 0x0,
  (intptr_t)asn1_type__local_2958,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_187, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2959,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2965[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2966[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2968[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2967[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2968,
};

const ASN1CType asn1_type_ProtocolExtensionField_188[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_188),

  offsetof(ProtocolExtensionField_188, id) | 0x0,
  (intptr_t)asn1_type__local_2965,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_188, criticality) | 0x0,
  (intptr_t)asn1_type__local_2966,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_188, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2967,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2970[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2971[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2973[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2972[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2973,
};

const ASN1CType asn1_type_ProtocolExtensionField_189[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_189),

  offsetof(ProtocolExtensionField_189, id) | 0x0,
  (intptr_t)asn1_type__local_2970,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_189, criticality) | 0x0,
  (intptr_t)asn1_type__local_2971,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_189, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2972,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2975[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2976[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2978[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2977[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2978,
};

const ASN1CType asn1_type_ProtocolExtensionField_190[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_190),

  offsetof(ProtocolExtensionField_190, id) | 0x0,
  (intptr_t)asn1_type__local_2975,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_190, criticality) | 0x0,
  (intptr_t)asn1_type__local_2976,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_190, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2977,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2980[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2981[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2983[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2982[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2983,
};

const ASN1CType asn1_type_ProtocolExtensionField_191[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_191),

  offsetof(ProtocolExtensionField_191, id) | 0x0,
  (intptr_t)asn1_type__local_2980,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_191, criticality) | 0x0,
  (intptr_t)asn1_type__local_2981,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_191, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2982,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2985[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2986[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2988[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2987[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2988,
};

const ASN1CType asn1_type_ProtocolExtensionField_192[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_192),

  offsetof(ProtocolExtensionField_192, id) | 0x0,
  (intptr_t)asn1_type__local_2985,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_192, criticality) | 0x0,
  (intptr_t)asn1_type__local_2986,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_192, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2987,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2990[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2991[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2993[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2992[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2993,
};

const ASN1CType asn1_type_ProtocolExtensionField_193[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_193),

  offsetof(ProtocolExtensionField_193, id) | 0x0,
  (intptr_t)asn1_type__local_2990,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_193, criticality) | 0x0,
  (intptr_t)asn1_type__local_2991,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_193, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2992,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_2995[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_2996[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_2998[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_2997[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_2998,
};

const ASN1CType asn1_type_ProtocolExtensionField_194[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_194),

  offsetof(ProtocolExtensionField_194, id) | 0x0,
  (intptr_t)asn1_type__local_2995,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_194, criticality) | 0x0,
  (intptr_t)asn1_type__local_2996,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_194, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_2997,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3000[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3001[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3003[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3002[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3003,
};

const ASN1CType asn1_type_ProtocolExtensionField_195[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_195),

  offsetof(ProtocolExtensionField_195, id) | 0x0,
  (intptr_t)asn1_type__local_3000,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_195, criticality) | 0x0,
  (intptr_t)asn1_type__local_3001,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_195, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3002,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3005[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3006[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3008[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3007[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3008,
};

const ASN1CType asn1_type_ProtocolExtensionField_196[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_196),

  offsetof(ProtocolExtensionField_196, id) | 0x0,
  (intptr_t)asn1_type__local_3005,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_196, criticality) | 0x0,
  (intptr_t)asn1_type__local_3006,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_196, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3007,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3010[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3011[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3013[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3012[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3013,
};

const ASN1CType asn1_type_ProtocolExtensionField_197[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_197),

  offsetof(ProtocolExtensionField_197, id) | 0x0,
  (intptr_t)asn1_type__local_3010,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_197, criticality) | 0x0,
  (intptr_t)asn1_type__local_3011,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_197, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3012,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3015[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3016[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3018[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3017[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3018,
};

const ASN1CType asn1_type_ProtocolExtensionField_198[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_198),

  offsetof(ProtocolExtensionField_198, id) | 0x0,
  (intptr_t)asn1_type__local_3015,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_198, criticality) | 0x0,
  (intptr_t)asn1_type__local_3016,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_198, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3017,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3020[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3021[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_3025 = 171;

static const Criticality asn1_value__local_3026 = 0;

static const Presence asn1_value__local_3027 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_3024[] = {
{
  (intptr_t)&asn1_value__local_3025,
  (intptr_t)&asn1_value__local_3026,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_3027,
},
};

static const ASN1CType asn1_constraint__local_3023[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_3024,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3022[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3023,
};

const ASN1CType asn1_type_ProtocolExtensionField_199[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_199),

  offsetof(ProtocolExtensionField_199, id) | 0x0,
  (intptr_t)asn1_type__local_3020,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_199, criticality) | 0x0,
  (intptr_t)asn1_type__local_3021,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_199, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3022,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3028[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3029[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3031[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3030[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3031,
};

const ASN1CType asn1_type_ProtocolExtensionField_200[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_200),

  offsetof(ProtocolExtensionField_200, id) | 0x0,
  (intptr_t)asn1_type__local_3028,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_200, criticality) | 0x0,
  (intptr_t)asn1_type__local_3029,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_200, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3030,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3033[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3034[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3036[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3035[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3036,
};

const ASN1CType asn1_type_ProtocolExtensionField_201[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_201),

  offsetof(ProtocolExtensionField_201, id) | 0x0,
  (intptr_t)asn1_type__local_3033,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_201, criticality) | 0x0,
  (intptr_t)asn1_type__local_3034,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_201, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3035,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3038[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3039[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3041[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3040[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3041,
};

const ASN1CType asn1_type_ProtocolExtensionField_202[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_202),

  offsetof(ProtocolExtensionField_202, id) | 0x0,
  (intptr_t)asn1_type__local_3038,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_202, criticality) | 0x0,
  (intptr_t)asn1_type__local_3039,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_202, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3040,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3043[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3044[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProtocolExtensionID asn1_value__local_3048 = 171;

static const Criticality asn1_value__local_3049 = 0;

static const Presence asn1_value__local_3050 = 0;

static const RANAP_PROTOCOL_EXTENSION asn1_value__local_3047[] = {
{
  (intptr_t)&asn1_value__local_3048,
  (intptr_t)&asn1_value__local_3049,
  (intptr_t)asn1_type_ExtendedRNC_ID,
  (intptr_t)&asn1_value__local_3050,
},
};

static const ASN1CType asn1_constraint__local_3046[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  (intptr_t)asn1_value__local_3047,
  1,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3045[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3046,
};

const ASN1CType asn1_type_ProtocolExtensionField_203[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_203),

  offsetof(ProtocolExtensionField_203, id) | 0x0,
  (intptr_t)asn1_type__local_3043,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_203, criticality) | 0x0,
  (intptr_t)asn1_type__local_3044,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_203, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3045,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3051[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3052[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3054[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3053[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3054,
};

const ASN1CType asn1_type_ProtocolExtensionField_204[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_204),

  offsetof(ProtocolExtensionField_204, id) | 0x0,
  (intptr_t)asn1_type__local_3051,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_204, criticality) | 0x0,
  (intptr_t)asn1_type__local_3052,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_204, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3053,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3056[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3057[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3059[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3058[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3059,
};

const ASN1CType asn1_type_ProtocolExtensionField_205[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_205),

  offsetof(ProtocolExtensionField_205, id) | 0x0,
  (intptr_t)asn1_type__local_3056,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_205, criticality) | 0x0,
  (intptr_t)asn1_type__local_3057,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_205, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3058,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3061[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3062[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3064[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3063[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3064,
};

const ASN1CType asn1_type_ProtocolExtensionField_206[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_206),

  offsetof(ProtocolExtensionField_206, id) | 0x0,
  (intptr_t)asn1_type__local_3061,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_206, criticality) | 0x0,
  (intptr_t)asn1_type__local_3062,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_206, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3063,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3066[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3067[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3069[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3068[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3069,
};

const ASN1CType asn1_type_ProtocolExtensionField_207[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_207),

  offsetof(ProtocolExtensionField_207, id) | 0x0,
  (intptr_t)asn1_type__local_3066,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_207, criticality) | 0x0,
  (intptr_t)asn1_type__local_3067,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_207, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3068,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3071[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3072[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3074[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3073[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3074,
};

const ASN1CType asn1_type_ProtocolExtensionField_208[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_208),

  offsetof(ProtocolExtensionField_208, id) | 0x0,
  (intptr_t)asn1_type__local_3071,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_208, criticality) | 0x0,
  (intptr_t)asn1_type__local_3072,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_208, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3073,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3076[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3077[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3079[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3078[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3079,
};

const ASN1CType asn1_type_ProtocolExtensionField_209[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_209),

  offsetof(ProtocolExtensionField_209, id) | 0x0,
  (intptr_t)asn1_type__local_3076,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_209, criticality) | 0x0,
  (intptr_t)asn1_type__local_3077,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_209, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3078,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3081[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3082[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3084[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3083[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3084,
};

const ASN1CType asn1_type_ProtocolExtensionField_210[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_210),

  offsetof(ProtocolExtensionField_210, id) | 0x0,
  (intptr_t)asn1_type__local_3081,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_210, criticality) | 0x0,
  (intptr_t)asn1_type__local_3082,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_210, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3083,
  0,
  (intptr_t)"extensionValue",

};

static const ASN1CType asn1_type__local_3086[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolExtensionID,
};

static const ASN1CType asn1_type__local_3087[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3089[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PROTOCOL_EXTENSION,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3088[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3089,
};

const ASN1CType asn1_type_ProtocolExtensionField_211[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(ProtocolExtensionField_211),

  offsetof(ProtocolExtensionField_211, id) | 0x0,
  (intptr_t)asn1_type__local_3086,
  0,
  (intptr_t)"id",

  offsetof(ProtocolExtensionField_211, criticality) | 0x0,
  (intptr_t)asn1_type__local_3087,
  0,
  (intptr_t)"criticality",

  offsetof(ProtocolExtensionField_211, extensionValue) | 0x0,
  (intptr_t)asn1_type__local_3088,
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

static const ASN1CType asn1_type__local_3091[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100000,
  (intptr_t)asn1_type_PrivateIE_ID,
};

static const ASN1CType asn1_type__local_3092[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_constraint__local_3094[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_PRIVATE_IES,
  2,
  0,
  0,
  1,
  0,
  0x80000000,
  0,
};

static const ASN1CType asn1_type__local_3093[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3094,
};

const ASN1CType asn1_type_PrivateIE_Field_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(PrivateIE_Field_1),

  offsetof(PrivateIE_Field_1, id) | 0x0,
  (intptr_t)asn1_type__local_3091,
  0,
  (intptr_t)"id",

  offsetof(PrivateIE_Field_1, criticality) | 0x0,
  (intptr_t)asn1_type__local_3092,
  0,
  (intptr_t)"criticality",

  offsetof(PrivateIE_Field_1, value) | 0x0,
  (intptr_t)asn1_type__local_3093,
  0,
  (intptr_t)"value",

};

const ASN1CType asn1_type_AccuracyFulfilmentIndicator[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"requested-Accuracy-Fulfilled",
  (intptr_t)"requested-Accuracy-Not-Fulfilled",
  (intptr_t)"AccuracyFulfilmentIndicator",
};

const ASN1CType asn1_type_AllocationOrRetentionPriority[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100009,
  5,
  sizeof(AllocationOrRetentionPriority),

  offsetof(AllocationOrRetentionPriority, priorityLevel) | 0x0,
  (intptr_t)asn1_type_PriorityLevel,
  0,
  (intptr_t)"priorityLevel",

  offsetof(AllocationOrRetentionPriority, pre_emptionCapability) | 0x0,
  (intptr_t)asn1_type_Pre_emptionCapability,
  0,
  (intptr_t)"pre-emptionCapability",

  offsetof(AllocationOrRetentionPriority, pre_emptionVulnerability) | 0x0,
  (intptr_t)asn1_type_Pre_emptionVulnerability,
  0,
  (intptr_t)"pre-emptionVulnerability",

  offsetof(AllocationOrRetentionPriority, queuingAllowed) | 0x0,
  (intptr_t)asn1_type_QueuingAllowed,
  0,
  (intptr_t)"queuingAllowed",

  offsetof(AllocationOrRetentionPriority, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_1,
  offsetof(AllocationOrRetentionPriority, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"AllocationOrRetentionPriority",
};

const ASN1CType asn1_type_Alt_RAB_Parameters[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(Alt_RAB_Parameters),

  offsetof(Alt_RAB_Parameters, altMaxBitrateInf) | 0x8000000,
  (intptr_t)asn1_type_Alt_RAB_Parameter_MaxBitrateInf,
  offsetof(Alt_RAB_Parameters, altMaxBitrateInf_option),
  (intptr_t)"altMaxBitrateInf",

  offsetof(Alt_RAB_Parameters, altGuaranteedBitRateInf) | 0x8000000,
  (intptr_t)asn1_type_Alt_RAB_Parameter_GuaranteedBitrateInf,
  offsetof(Alt_RAB_Parameters, altGuaranteedBitRateInf_option),
  (intptr_t)"altGuaranteedBitRateInf",

  offsetof(Alt_RAB_Parameters, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_2,
  offsetof(Alt_RAB_Parameters, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"Alt-RAB-Parameters",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_ExtendedGuaranteedBitrateInf[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(Alt_RAB_Parameter_ExtendedGuaranteedBitrateInf),

  offsetof(Alt_RAB_Parameter_ExtendedGuaranteedBitrateInf, altExtendedGuaranteedBitrateType) | 0x0,
  (intptr_t)asn1_type_Alt_RAB_Parameter_GuaranteedBitrateType,
  0,
  (intptr_t)"altExtendedGuaranteedBitrateType",

  offsetof(Alt_RAB_Parameter_ExtendedGuaranteedBitrateInf, altExtendedGuaranteedBitrates) | 0x8000000,
  (intptr_t)asn1_type_Alt_RAB_Parameter_ExtendedGuaranteedBitrates,
  offsetof(Alt_RAB_Parameter_ExtendedGuaranteedBitrateInf, altExtendedGuaranteedBitrates_option),
  (intptr_t)"altExtendedGuaranteedBitrates",

  (intptr_t)"Alt-RAB-Parameter-ExtendedGuaranteedBitrateInf",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_ExtendedGuaranteedBitrates[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x10,
  sizeof(Alt_RAB_Parameter_ExtendedGuaranteedBitrateList),
  (intptr_t)asn1_type_Alt_RAB_Parameter_ExtendedGuaranteedBitrateList,
  0,
  (intptr_t)"Alt-RAB-Parameter-ExtendedGuaranteedBitrates",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_ExtendedGuaranteedBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x2,
  sizeof(ExtendedGuaranteedBitrate),
  (intptr_t)asn1_type_ExtendedGuaranteedBitrate,
  0,
  (intptr_t)"Alt-RAB-Parameter-ExtendedGuaranteedBitrateList",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_GuaranteedBitrateInf[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  sizeof(Alt_RAB_Parameter_GuaranteedBitrateInf),

  offsetof(Alt_RAB_Parameter_GuaranteedBitrateInf, altGuaranteedBitrateType) | 0x0,
  (intptr_t)asn1_type_Alt_RAB_Parameter_GuaranteedBitrateType,
  0,
  (intptr_t)"altGuaranteedBitrateType",

  offsetof(Alt_RAB_Parameter_GuaranteedBitrateInf, altGuaranteedBitrates) | 0x8000000,
  (intptr_t)asn1_type_Alt_RAB_Parameter_GuaranteedBitrates,
  offsetof(Alt_RAB_Parameter_GuaranteedBitrateInf, altGuaranteedBitrates_option),
  (intptr_t)"altGuaranteedBitrates",

  (intptr_t)"Alt-RAB-Parameter-GuaranteedBitrateInf",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_GuaranteedBitrateType[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  3,
  0,
  (intptr_t)"unspecified",
  (intptr_t)"value-range",
  (intptr_t)"discrete-values",
  (intptr_t)"Alt-RAB-Parameter-GuaranteedBitrateType",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_GuaranteedBitrates[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x10,
  sizeof(Alt_RAB_Parameter_GuaranteedBitrateList),
  (intptr_t)asn1_type_Alt_RAB_Parameter_GuaranteedBitrateList,
  0,
  (intptr_t)"Alt-RAB-Parameter-GuaranteedBitrates",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_GuaranteedBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x2,
  sizeof(GuaranteedBitrate),
  (intptr_t)asn1_type_GuaranteedBitrate,
  0,
  (intptr_t)"Alt-RAB-Parameter-GuaranteedBitrateList",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_SupportedGuaranteedBitrateInf[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(Alt_RAB_Parameter_SupportedGuaranteedBitrateInf),

  offsetof(Alt_RAB_Parameter_SupportedGuaranteedBitrateInf, altSupportedGuaranteedBitrateType) | 0x0,
  (intptr_t)asn1_type_Alt_RAB_Parameter_GuaranteedBitrateType,
  0,
  (intptr_t)"altSupportedGuaranteedBitrateType",

  offsetof(Alt_RAB_Parameter_SupportedGuaranteedBitrateInf, altSupportedGuaranteedBitrates) | 0x8000000,
  (intptr_t)asn1_type_Alt_RAB_Parameter_SupportedGuaranteedBitrates,
  offsetof(Alt_RAB_Parameter_SupportedGuaranteedBitrateInf, altSupportedGuaranteedBitrates_option),
  (intptr_t)"altSupportedGuaranteedBitrates",

  offsetof(Alt_RAB_Parameter_SupportedGuaranteedBitrateInf, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_3,
  offsetof(Alt_RAB_Parameter_SupportedGuaranteedBitrateInf, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"Alt-RAB-Parameter-SupportedGuaranteedBitrateInf",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_SupportedGuaranteedBitrates[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x10,
  sizeof(SupportedRAB_ParameterBitrateList),
  (intptr_t)asn1_type_SupportedRAB_ParameterBitrateList,
  0,
  (intptr_t)"Alt-RAB-Parameter-SupportedGuaranteedBitrates",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_ExtendedMaxBitrateInf[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(Alt_RAB_Parameter_ExtendedMaxBitrateInf),

  offsetof(Alt_RAB_Parameter_ExtendedMaxBitrateInf, altExtendedMaxBitrateType) | 0x0,
  (intptr_t)asn1_type_Alt_RAB_Parameter_MaxBitrateType,
  0,
  (intptr_t)"altExtendedMaxBitrateType",

  offsetof(Alt_RAB_Parameter_ExtendedMaxBitrateInf, altExtendedMaxBitrates) | 0x8000000,
  (intptr_t)asn1_type_Alt_RAB_Parameter_ExtendedMaxBitrates,
  offsetof(Alt_RAB_Parameter_ExtendedMaxBitrateInf, altExtendedMaxBitrates_option),
  (intptr_t)"altExtendedMaxBitrates",

  (intptr_t)"Alt-RAB-Parameter-ExtendedMaxBitrateInf",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_ExtendedMaxBitrates[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x10,
  sizeof(Alt_RAB_Parameter_ExtendedMaxBitrateList),
  (intptr_t)asn1_type_Alt_RAB_Parameter_ExtendedMaxBitrateList,
  0,
  (intptr_t)"Alt-RAB-Parameter-ExtendedMaxBitrates",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_ExtendedMaxBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x2,
  sizeof(ExtendedMaxBitrate),
  (intptr_t)asn1_type_ExtendedMaxBitrate,
  0,
  (intptr_t)"Alt-RAB-Parameter-ExtendedMaxBitrateList",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_MaxBitrateInf[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  2,
  sizeof(Alt_RAB_Parameter_MaxBitrateInf),

  offsetof(Alt_RAB_Parameter_MaxBitrateInf, altMaxBitrateType) | 0x0,
  (intptr_t)asn1_type_Alt_RAB_Parameter_MaxBitrateType,
  0,
  (intptr_t)"altMaxBitrateType",

  offsetof(Alt_RAB_Parameter_MaxBitrateInf, altMaxBitrates) | 0x8000000,
  (intptr_t)asn1_type_Alt_RAB_Parameter_MaxBitrates,
  offsetof(Alt_RAB_Parameter_MaxBitrateInf, altMaxBitrates_option),
  (intptr_t)"altMaxBitrates",

  (intptr_t)"Alt-RAB-Parameter-MaxBitrateInf",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_MaxBitrateType[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  3,
  0,
  (intptr_t)"unspecified",
  (intptr_t)"value-range",
  (intptr_t)"discrete-values",
  (intptr_t)"Alt-RAB-Parameter-MaxBitrateType",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_MaxBitrates[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x10,
  sizeof(Alt_RAB_Parameter_MaxBitrateList),
  (intptr_t)asn1_type_Alt_RAB_Parameter_MaxBitrateList,
  0,
  (intptr_t)"Alt-RAB-Parameter-MaxBitrates",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_MaxBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x2,
  sizeof(MaxBitrate),
  (intptr_t)asn1_type_MaxBitrate,
  0,
  (intptr_t)"Alt-RAB-Parameter-MaxBitrateList",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_SupportedMaxBitrateInf[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(Alt_RAB_Parameter_SupportedMaxBitrateInf),

  offsetof(Alt_RAB_Parameter_SupportedMaxBitrateInf, altSupportedMaxBitrateType) | 0x0,
  (intptr_t)asn1_type_Alt_RAB_Parameter_MaxBitrateType,
  0,
  (intptr_t)"altSupportedMaxBitrateType",

  offsetof(Alt_RAB_Parameter_SupportedMaxBitrateInf, altSupportedMaxBitrates) | 0x8000000,
  (intptr_t)asn1_type_Alt_RAB_Parameter_SupportedMaxBitrates,
  offsetof(Alt_RAB_Parameter_SupportedMaxBitrateInf, altSupportedMaxBitrates_option),
  (intptr_t)"altSupportedMaxBitrates",

  offsetof(Alt_RAB_Parameter_SupportedMaxBitrateInf, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_4,
  offsetof(Alt_RAB_Parameter_SupportedMaxBitrateInf, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"Alt-RAB-Parameter-SupportedMaxBitrateInf",
};

const ASN1CType asn1_type_Alt_RAB_Parameter_SupportedMaxBitrates[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x10,
  sizeof(SupportedRAB_ParameterBitrateList),
  (intptr_t)asn1_type_SupportedRAB_ParameterBitrateList,
  0,
  (intptr_t)"Alt-RAB-Parameter-SupportedMaxBitrates",
};

const ASN1CType asn1_type_AlternativeRABConfigurationRequest[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"alternative-RAB-configuration-Requested",
  (intptr_t)"AlternativeRABConfigurationRequest",
};

const ASN1CType asn1_type_APN[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x1,
  0xff,
  (intptr_t)"APN",
};

static const ASN1CType asn1_type__local_3096[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_SAI,
};

const ASN1CType asn1_type_AreaIdentity[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  2,
  0,
  sizeof(AreaIdentity),
  offsetof(AreaIdentity, choice),
  offsetof(AreaIdentity, u),
  (intptr_t)asn1_type__local_3096,
  (intptr_t)"sAI",
  (intptr_t)asn1_type_GeographicalArea,
  (intptr_t)"geographicalArea",
  (intptr_t)"AreaIdentity",
};

const ASN1CType asn1_type_Ass_RAB_Parameters[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(Ass_RAB_Parameters),

  offsetof(Ass_RAB_Parameters, assMaxBitrateInf) | 0x8000000,
  (intptr_t)asn1_type_Ass_RAB_Parameter_MaxBitrateList,
  offsetof(Ass_RAB_Parameters, assMaxBitrateInf_option),
  (intptr_t)"assMaxBitrateInf",

  offsetof(Ass_RAB_Parameters, assGuaranteedBitRateInf) | 0x8000000,
  (intptr_t)asn1_type_Ass_RAB_Parameter_GuaranteedBitrateList,
  offsetof(Ass_RAB_Parameters, assGuaranteedBitRateInf_option),
  (intptr_t)"assGuaranteedBitRateInf",

  offsetof(Ass_RAB_Parameters, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_5,
  offsetof(Ass_RAB_Parameters, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"Ass-RAB-Parameters",
};

const ASN1CType asn1_type_Ass_RAB_Parameter_ExtendedGuaranteedBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x2,
  sizeof(ExtendedGuaranteedBitrate),
  (intptr_t)asn1_type_ExtendedGuaranteedBitrate,
  0,
  (intptr_t)"Ass-RAB-Parameter-ExtendedGuaranteedBitrateList",
};

const ASN1CType asn1_type_Ass_RAB_Parameter_ExtendedMaxBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x2,
  sizeof(ExtendedMaxBitrate),
  (intptr_t)asn1_type_ExtendedMaxBitrate,
  0,
  (intptr_t)"Ass-RAB-Parameter-ExtendedMaxBitrateList",
};

const ASN1CType asn1_type_Ass_RAB_Parameter_GuaranteedBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x2,
  sizeof(GuaranteedBitrate),
  (intptr_t)asn1_type_GuaranteedBitrate,
  0,
  (intptr_t)"Ass-RAB-Parameter-GuaranteedBitrateList",
};

const ASN1CType asn1_type_Ass_RAB_Parameter_MaxBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x2,
  sizeof(MaxBitrate),
  (intptr_t)asn1_type_MaxBitrate,
  0,
  (intptr_t)"Ass-RAB-Parameter-MaxBitrateList",
};

const ASN1CType asn1_type_AuthorisedPLMNs[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x20,
  sizeof(AuthorisedPLMNs_1),
  (intptr_t)asn1_type_AuthorisedPLMNs_1,
  0,
  (intptr_t)"AuthorisedPLMNs",
};

static const ASN1CType asn1_type__local_3097[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

const ASN1CType asn1_type_AuthorisedPLMNs_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  3,
  sizeof(AuthorisedPLMNs_1),

  offsetof(AuthorisedPLMNs_1, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_3097,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(AuthorisedPLMNs_1, authorisedSNAsList) | 0x8000000,
  (intptr_t)asn1_type_AuthorisedSNAs,
  offsetof(AuthorisedPLMNs_1, authorisedSNAsList_option),
  (intptr_t)"authorisedSNAsList",

  offsetof(AuthorisedPLMNs_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_6,
  offsetof(AuthorisedPLMNs_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

const ASN1CType asn1_type_AuthorisedSNAs[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x10000,
  sizeof(SNAC),
  (intptr_t)asn1_type_SNAC,
  0,
  (intptr_t)"AuthorisedSNAs",
};

const ASN1CType asn1_type_BindingID[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x4,
  0x4,
  (intptr_t)"BindingID",
};

static const ASN1CType asn1_type__local_3098[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x1,
  0x1,
};

static const ASN1CType asn1_type__local_3099[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x38,
  0x38,
};

static const ASN1CType asn1_type__local_3100[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x38,
  0x38,
};

const ASN1CType asn1_type_BroadcastAssistanceDataDecipheringKeys[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(BroadcastAssistanceDataDecipheringKeys),

  offsetof(BroadcastAssistanceDataDecipheringKeys, cipheringKeyFlag) | 0x0,
  (intptr_t)asn1_type__local_3098,
  0,
  (intptr_t)"cipheringKeyFlag",

  offsetof(BroadcastAssistanceDataDecipheringKeys, currentDecipheringKey) | 0x0,
  (intptr_t)asn1_type__local_3099,
  0,
  (intptr_t)"currentDecipheringKey",

  offsetof(BroadcastAssistanceDataDecipheringKeys, nextDecipheringKey) | 0x0,
  (intptr_t)asn1_type__local_3100,
  0,
  (intptr_t)"nextDecipheringKey",

  (intptr_t)"BroadcastAssistanceDataDecipheringKeys",
};

const ASN1CType asn1_type_Cause[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  6,
  1,
  sizeof(Cause),
  offsetof(Cause, choice),
  offsetof(Cause, u),
  (intptr_t)asn1_type_CauseRadioNetwork,
  (intptr_t)"radioNetwork",
  (intptr_t)asn1_type_CauseTransmissionNetwork,
  (intptr_t)"transmissionNetwork",
  (intptr_t)asn1_type_CauseNAS,
  (intptr_t)"nAS",
  (intptr_t)asn1_type_CauseProtocol,
  (intptr_t)"protocol",
  (intptr_t)asn1_type_CauseMisc,
  (intptr_t)"misc",
  (intptr_t)asn1_type_CauseNon_Standard,
  (intptr_t)"non-Standard",
  (intptr_t)asn1_type_CauseRadioNetworkExtension,
  (intptr_t)"radioNetworkExtension",
  (intptr_t)"Cause",
};

const ASN1CType asn1_type_CauseMisc[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100004,
  0x71,
  0x80,
  (intptr_t)"CauseMisc",
};

const ASN1CType asn1_type_CauseNAS[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100002,
  0x51,
  0x60,
  (intptr_t)"CauseNAS",
};

const ASN1CType asn1_type_CauseProtocol[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100003,
  0x61,
  0x70,
  (intptr_t)"CauseProtocol",
};

const ASN1CType asn1_type_CauseRadioNetwork[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x40,
  (intptr_t)"CauseRadioNetwork",
};

const ASN1CType asn1_type_CauseRadioNetworkExtension[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100006,
  0x101,
  0x200,
  (intptr_t)"CauseRadioNetworkExtension",
};

const ASN1CType asn1_type_CauseNon_Standard[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100005,
  0x81,
  0x100,
  (intptr_t)"CauseNon-Standard",
};

const ASN1CType asn1_type_CauseTransmissionNetwork[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x41,
  0x50,
  (intptr_t)"CauseTransmissionNetwork",
};

const ASN1CType asn1_type_Cell_Access_Mode[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"hybrid",
  (intptr_t)"Cell-Access-Mode",
};

const ASN1CType asn1_type_CellBased[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  2,
  sizeof(CellBased),

  offsetof(CellBased, cellIdList) | 0x0,
  (intptr_t)asn1_type_CellIdList,
  0,
  (intptr_t)"cellIdList",

  offsetof(CellBased, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_7,
  offsetof(CellBased, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"CellBased",
};

const ASN1CType asn1_type_CellIdList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x20,
  sizeof(Cell_Id),
  (intptr_t)asn1_type_Cell_Id,
  0,
  (intptr_t)"CellIdList",
};

const ASN1CType asn1_type_Cell_Id[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xfffffff,
  (intptr_t)"Cell-Id",
};

const ASN1CType asn1_type_Cell_Capacity_Class_Value[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x7800000 | 0x100000,
  0x1,
  0x64,
  (intptr_t)"Cell-Capacity-Class-Value",
};

const ASN1CType asn1_type_CellLoadInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  5,
  sizeof(CellLoadInformation),

  offsetof(CellLoadInformation, cell_Capacity_Class_Value) | 0x0,
  (intptr_t)asn1_type_Cell_Capacity_Class_Value,
  0,
  (intptr_t)"cell-Capacity-Class-Value",

  offsetof(CellLoadInformation, loadValue) | 0x0,
  (intptr_t)asn1_type_LoadValue,
  0,
  (intptr_t)"loadValue",

  offsetof(CellLoadInformation, rTLoadValue) | 0x8000000,
  (intptr_t)asn1_type_RTLoadValue,
  offsetof(CellLoadInformation, rTLoadValue_option),
  (intptr_t)"rTLoadValue",

  offsetof(CellLoadInformation, nRTLoadInformationValue) | 0x8000000,
  (intptr_t)asn1_type_NRTLoadInformationValue,
  offsetof(CellLoadInformation, nRTLoadInformationValue_option),
  (intptr_t)"nRTLoadInformationValue",

  offsetof(CellLoadInformation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_8,
  offsetof(CellLoadInformation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"CellLoadInformation",
};

static const ASN1CType asn1_type__local_3101[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_CellLoadInformation,
};

static const ASN1CType asn1_type__local_3102[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_CellLoadInformation,
};

const ASN1CType asn1_type_CellLoadInformationGroup[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  4,
  sizeof(CellLoadInformationGroup),

  offsetof(CellLoadInformationGroup, sourceCellID) | 0x0,
  (intptr_t)asn1_type_SourceCellID,
  0,
  (intptr_t)"sourceCellID",

  offsetof(CellLoadInformationGroup, uplinkCellLoadInformation) | 0x8000000,
  (intptr_t)asn1_type__local_3101,
  offsetof(CellLoadInformationGroup, uplinkCellLoadInformation_option),
  (intptr_t)"uplinkCellLoadInformation",

  offsetof(CellLoadInformationGroup, downlinkCellLoadInformation) | 0x8000000,
  (intptr_t)asn1_type__local_3102,
  offsetof(CellLoadInformationGroup, downlinkCellLoadInformation_option),
  (intptr_t)"downlinkCellLoadInformation",

  offsetof(CellLoadInformationGroup, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_9,
  offsetof(CellLoadInformationGroup, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"CellLoadInformationGroup",
};

const ASN1CType asn1_type_CellType[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  4,
  0,
  (intptr_t)"macro",
  (intptr_t)"micro",
  (intptr_t)"pico",
  (intptr_t)"femto",
  (intptr_t)"CellType",
};

const ASN1CType asn1_type_ClientType[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  8,
  0,
  (intptr_t)"emergency-Services",
  (intptr_t)"value-Added-Services",
  (intptr_t)"pLMN-Operator-Services",
  (intptr_t)"lawful-Intercept-Services",
  (intptr_t)"pLMN-Operator-Broadcast-Services",
  (intptr_t)"pLMN-Operator-O-et-M",
  (intptr_t)"pLMN-Operator-Anonymous-Statistics",
  (intptr_t)"pLMN-Operator-Target-MS-Service-Support",
  (intptr_t)"ClientType",
};

static const ASN1CType asn1_type__local_3103[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProcedureCode,
};

static const ASN1CType asn1_type__local_3104[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_Criticality,
};

const ASN1CType asn1_type_CriticalityDiagnostics[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  5,
  sizeof(CriticalityDiagnostics),

  offsetof(CriticalityDiagnostics, procedureCode) | 0x8000000,
  (intptr_t)asn1_type__local_3103,
  offsetof(CriticalityDiagnostics, procedureCode_option),
  (intptr_t)"procedureCode",

  offsetof(CriticalityDiagnostics, triggeringMessage) | 0x8000000,
  (intptr_t)asn1_type_TriggeringMessage,
  offsetof(CriticalityDiagnostics, triggeringMessage_option),
  (intptr_t)"triggeringMessage",

  offsetof(CriticalityDiagnostics, procedureCriticality) | 0x8000000,
  (intptr_t)asn1_type__local_3104,
  offsetof(CriticalityDiagnostics, procedureCriticality_option),
  (intptr_t)"procedureCriticality",

  offsetof(CriticalityDiagnostics, iEsCriticalityDiagnostics) | 0x8000000,
  (intptr_t)asn1_type_CriticalityDiagnostics_IE_List,
  offsetof(CriticalityDiagnostics, iEsCriticalityDiagnostics_option),
  (intptr_t)"iEsCriticalityDiagnostics",

  offsetof(CriticalityDiagnostics, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_10,
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

static const ASN1CType asn1_type__local_3105[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_Criticality,
};

static const ASN1CType asn1_type__local_3106[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

const ASN1CType asn1_type_CriticalityDiagnostics_IE_List_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  4,
  sizeof(CriticalityDiagnostics_IE_List_1),

  offsetof(CriticalityDiagnostics_IE_List_1, iECriticality) | 0x0,
  (intptr_t)asn1_type__local_3105,
  0,
  (intptr_t)"iECriticality",

  offsetof(CriticalityDiagnostics_IE_List_1, iE_ID) | 0x0,
  (intptr_t)asn1_type__local_3106,
  0,
  (intptr_t)"iE-ID",

  offsetof(CriticalityDiagnostics_IE_List_1, repetitionNumber) | 0x8000000,
  (intptr_t)asn1_type_RepetitionNumber0,
  offsetof(CriticalityDiagnostics_IE_List_1, repetitionNumber_option),
  (intptr_t)"repetitionNumber",

  offsetof(CriticalityDiagnostics_IE_List_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_11,
  offsetof(CriticalityDiagnostics_IE_List_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

const ASN1CType asn1_type_MessageStructure[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x100,
  sizeof(MessageStructure_1),
  (intptr_t)asn1_type_MessageStructure_1,
  0,
  (intptr_t)"MessageStructure",
};

static const ASN1CType asn1_type__local_3107[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProtocolIE_ID,
};

const ASN1CType asn1_type_MessageStructure_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  3,
  sizeof(MessageStructure_1),

  offsetof(MessageStructure_1, iE_ID) | 0x0,
  (intptr_t)asn1_type__local_3107,
  0,
  (intptr_t)"iE-ID",

  offsetof(MessageStructure_1, repetitionNumber) | 0x8000000,
  (intptr_t)asn1_type_RepetitionNumber1,
  offsetof(MessageStructure_1, repetitionNumber_option),
  (intptr_t)"repetitionNumber",

  offsetof(MessageStructure_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_12,
  offsetof(MessageStructure_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

static const ASN1CType asn1_type__local_3108[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

static const ASN1CType asn1_type__local_3109[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_LAC,
};

const ASN1CType asn1_type_CGI[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  4,
  sizeof(CGI),

  offsetof(CGI, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_3108,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(CGI, lAC) | 0x0,
  (intptr_t)asn1_type__local_3109,
  0,
  (intptr_t)"lAC",

  offsetof(CGI, cI) | 0x0,
  (intptr_t)asn1_type_CI,
  0,
  (intptr_t)"cI",

  offsetof(CGI, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_13,
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

const ASN1CType asn1_type_ClassmarkInformation2[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"ClassmarkInformation2",
};

const ASN1CType asn1_type_ClassmarkInformation3[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"ClassmarkInformation3",
};

const ASN1CType asn1_type_CN_DomainIndicator[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0xa,
  2,
  (intptr_t)"cs-domain",
  (intptr_t)"ps-domain",
  (intptr_t)"CN-DomainIndicator",
};

const ASN1CType asn1_type_CN_ID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x0,
  0xfff,
  (intptr_t)"CN-ID",
};

const ASN1CType asn1_type_Correlation_ID[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x4,
  0x4,
  (intptr_t)"Correlation-ID",
};

const ASN1CType asn1_type_CSFB_Information[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"csfb",
  (intptr_t)"csfb-high-priority",
  (intptr_t)"CSFB-Information",
};

const ASN1CType asn1_type_CSG_Id[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x3,
  0x1b,
  0x1b,
  (intptr_t)"CSG-Id",
};

const ASN1CType asn1_type_CSG_Id_List[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x100,
  sizeof(CSG_Id),
  (intptr_t)asn1_type_CSG_Id,
  0,
  (intptr_t)"CSG-Id-List",
};

const ASN1CType asn1_type_CSG_Membership_Status[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"member",
  (intptr_t)"non-member",
  (intptr_t)"CSG-Membership-Status",
};

const ASN1CType asn1_type_DataPDUType[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100004,
  2,
  0,
  (intptr_t)"pDUtype0",
  (intptr_t)"pDUtype1",
  (intptr_t)"DataPDUType",
};

const ASN1CType asn1_type_DataVolumeReference[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x0,
  0xff,
  (intptr_t)"DataVolumeReference",
};

const ASN1CType asn1_type_DataVolumeReportingIndication[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0xa,
  2,
  (intptr_t)"do-report",
  (intptr_t)"do-not-report",
  (intptr_t)"DataVolumeReportingIndication",
};

const ASN1CType asn1_type_DCH_ID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x0,
  0xff,
  (intptr_t)"DCH-ID",
};

const ASN1CType asn1_type_DeliveryOfErroneousSDU[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100002,
  3,
  (intptr_t)"yes",
  (intptr_t)"no",
  (intptr_t)"no-error-detection-consideration",
  (intptr_t)"DeliveryOfErroneousSDU",
};

const ASN1CType asn1_type_DeliveryOrder[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100004,
  2,
  (intptr_t)"delivery-order-requested",
  (intptr_t)"delivery-order-not-requested",
  (intptr_t)"DeliveryOrder",
};

const ASN1CType asn1_type_DeltaRAListofIdleModeUEs[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x10,
  3,
  sizeof(DeltaRAListofIdleModeUEs),

  offsetof(DeltaRAListofIdleModeUEs, newRAListofIdleModeUEs) | 0x8000000,
  (intptr_t)asn1_type_NewRAListofIdleModeUEs,
  offsetof(DeltaRAListofIdleModeUEs, newRAListofIdleModeUEs_option),
  (intptr_t)"newRAListofIdleModeUEs",

  offsetof(DeltaRAListofIdleModeUEs, rAListwithNoIdleModeUEsAnyMore) | 0x8000000,
  (intptr_t)asn1_type_RAListwithNoIdleModeUEsAnyMore,
  offsetof(DeltaRAListofIdleModeUEs, rAListwithNoIdleModeUEsAnyMore_option),
  (intptr_t)"rAListwithNoIdleModeUEsAnyMore",

  offsetof(DeltaRAListofIdleModeUEs, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_14,
  offsetof(DeltaRAListofIdleModeUEs, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"DeltaRAListofIdleModeUEs",
};

const ASN1CType asn1_type_NewRAListofIdleModeUEs[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x10000,
  sizeof(RAC),
  (intptr_t)asn1_type_RAC,
  0,
  (intptr_t)"NewRAListofIdleModeUEs",
};

const ASN1CType asn1_type_RAListwithNoIdleModeUEsAnyMore[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x10000,
  sizeof(RAC),
  (intptr_t)asn1_type_RAC,
  0,
  (intptr_t)"RAListwithNoIdleModeUEsAnyMore",
};

const ASN1CType asn1_type_ForwardingIndication[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"forwarding-admitted",
  (intptr_t)"ForwardingIndication",
};

const ASN1CType asn1_type_DL_GTP_PDU_SequenceNumber[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xffff,
  (intptr_t)"DL-GTP-PDU-SequenceNumber",
};

const ASN1CType asn1_type_DL_N_PDU_SequenceNumber[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xffff,
  (intptr_t)"DL-N-PDU-SequenceNumber",
};

const ASN1CType asn1_type_D_RNTI[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xfffff,
  (intptr_t)"D-RNTI",
};

const ASN1CType asn1_type_DRX_CycleLengthCoefficient[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x6,
  0x9,
  (intptr_t)"DRX-CycleLengthCoefficient",
};

const ASN1CType asn1_type_DSCH_ID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x0,
  0xff,
  (intptr_t)"DSCH-ID",
};

const ASN1CType asn1_type_EARFCN_Extended[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x7800000 | 0x2,
  0x10000,
  0x3ffff,
  (intptr_t)"EARFCN-Extended",
};

const ASN1CType asn1_type_E_DCH_MAC_d_Flow_ID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0x7,
  (intptr_t)"E-DCH-MAC-d-Flow-ID",
};

static const ASN1CType asn1_type__local_3110[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x14,
  0x14,
};

static const ASN1CType asn1_type__local_3111[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1c,
  0x1c,
};

const ASN1CType asn1_type_ENB_ID[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  0,
  sizeof(ENB_ID),
  offsetof(ENB_ID, choice),
  offsetof(ENB_ID, u),
  (intptr_t)asn1_type__local_3110,
  (intptr_t)"macroENB-ID",
  (intptr_t)asn1_type__local_3111,
  (intptr_t)"homeENB-ID",
  (intptr_t)"ENB-ID",
};

const ASN1CType asn1_type_EncryptionAlgorithm[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xf,
  (intptr_t)"EncryptionAlgorithm",
};

static const ASN1CType asn1_type__local_3112[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_EncryptionKey,
};

const ASN1CType asn1_type_EncryptionInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x10,
  3,
  sizeof(EncryptionInformation),

  offsetof(EncryptionInformation, permittedAlgorithms) | 0x0,
  (intptr_t)asn1_type_PermittedEncryptionAlgorithms,
  0,
  (intptr_t)"permittedAlgorithms",

  offsetof(EncryptionInformation, key) | 0x0,
  (intptr_t)asn1_type__local_3112,
  0,
  (intptr_t)"key",

  offsetof(EncryptionInformation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_15,
  offsetof(EncryptionInformation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"EncryptionInformation",
};

const ASN1CType asn1_type_EncryptionKey[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x3,
  0x80,
  0x80,
  (intptr_t)"EncryptionKey",
};

const ASN1CType asn1_type_End_Of_CSFB[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"end-of-CSFB",
  (intptr_t)"End-Of-CSFB",
};

const ASN1CType asn1_type_EquipmentsToBeTraced[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100002,
  4,
  0,
  sizeof(EquipmentsToBeTraced),
  offsetof(EquipmentsToBeTraced, choice),
  offsetof(EquipmentsToBeTraced, u),
  (intptr_t)asn1_type_IMEIList,
  (intptr_t)"iMEIlist",
  (intptr_t)asn1_type_IMEISVList,
  (intptr_t)"iMEISVlist",
  (intptr_t)asn1_type_IMEIGroup,
  (intptr_t)"iMEIgroup",
  (intptr_t)asn1_type_IMEISVGroup,
  (intptr_t)"iMEISVgroup",
  (intptr_t)"EquipmentsToBeTraced",
};

const ASN1CType asn1_type_E_UTRAN_Service_Handover[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"handover-to-E-UTRAN-shall-not-be-performed",
  (intptr_t)"E-UTRAN-Service-Handover",
};

const ASN1CType asn1_type_Event[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  3,
  3,
  (intptr_t)"stop-change-of-service-area",
  (intptr_t)"direct",
  (intptr_t)"change-of-servicearea",
  (intptr_t)"stop-direct",
  (intptr_t)"periodic",
  (intptr_t)"stop-periodic",
  (intptr_t)"Event",
};

static const ASN1CType asn1_type__local_3113[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0xffffff88,
  0xa5,
};

const ASN1CType asn1_type_Event1F_Parameters[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  sizeof(Event1F_Parameters),

  offsetof(Event1F_Parameters, measurementQuantity) | 0x0,
  (intptr_t)asn1_type_MeasurementQuantity,
  0,
  (intptr_t)"measurementQuantity",

  offsetof(Event1F_Parameters, threshold) | 0x0,
  (intptr_t)asn1_type__local_3113,
  0,
  (intptr_t)"threshold",

  (intptr_t)"Event1F-Parameters",
};

static const ASN1CType asn1_type__local_3114[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0xffffff88,
  0xffffffe7,
};

const ASN1CType asn1_type_Event1I_Parameters[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  1,
  sizeof(Event1I_Parameters),

  offsetof(Event1I_Parameters, threshold) | 0x0,
  (intptr_t)asn1_type__local_3114,
  0,
  (intptr_t)"threshold",

  (intptr_t)"Event1I-Parameters",
};

const ASN1CType asn1_type_ExtendedGuaranteedBitrate[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0xf42401,
  0xf424000,
  (intptr_t)"ExtendedGuaranteedBitrate",
};

const ASN1CType asn1_type_ExtendedMaxBitrate[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0xf42401,
  0xf424000,
  (intptr_t)"ExtendedMaxBitrate",
};

const ASN1CType asn1_type_ExtendedRNC_ID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x1000,
  0xffff,
  (intptr_t)"ExtendedRNC-ID",
};

const ASN1CType asn1_type_FrameSequenceNumber[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xf,
  (intptr_t)"FrameSequenceNumber",
};

const ASN1CType asn1_type_FrequenceLayerConvergenceFlag[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"no-FLC-flag",
  (intptr_t)"FrequenceLayerConvergenceFlag",
};

const ASN1CType asn1_type_GANSS_PositioningDataSet[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x9,
  sizeof(GANSS_PositioningMethodAndUsage),
  (intptr_t)asn1_type_GANSS_PositioningMethodAndUsage,
  0,
  (intptr_t)"GANSS-PositioningDataSet",
};

const ASN1CType asn1_type_GANSS_PositioningMethodAndUsage[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x1,
  0x1,
  (intptr_t)"GANSS-PositioningMethodAndUsage",
};

const ASN1CType asn1_type_GeographicalArea[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  3,
  4,
  sizeof(GeographicalArea),
  offsetof(GeographicalArea, choice),
  offsetof(GeographicalArea, u),
  (intptr_t)asn1_type_GA_Point,
  (intptr_t)"point",
  (intptr_t)asn1_type_GA_PointWithUnCertainty,
  (intptr_t)"pointWithUnCertainty",
  (intptr_t)asn1_type_GA_Polygon,
  (intptr_t)"polygon",
  (intptr_t)asn1_type_GA_PointWithUnCertaintyEllipse,
  (intptr_t)"pointWithUncertaintyEllipse",
  (intptr_t)asn1_type_GA_PointWithAltitude,
  (intptr_t)"pointWithAltitude",
  (intptr_t)asn1_type_GA_PointWithAltitudeAndUncertaintyEllipsoid,
  (intptr_t)"pointWithAltitudeAndUncertaintyEllipsoid",
  (intptr_t)asn1_type_GA_EllipsoidArc,
  (intptr_t)"ellipsoidArc",
  (intptr_t)"GeographicalArea",
};

static const ASN1CType asn1_type__local_3115[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x0,
  0x7fffff,
};

static const ASN1CType asn1_type__local_3116[] = {
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
  (intptr_t)asn1_type__local_3115,
  0,
  (intptr_t)"latitude",

  offsetof(GeographicalCoordinates, longitude) | 0x0,
  (intptr_t)asn1_type__local_3116,
  0,
  (intptr_t)"longitude",

  offsetof(GeographicalCoordinates, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_16,
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

static const ASN1CType asn1_type__local_3117[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x0,
  0x7fff,
};

const ASN1CType asn1_type_GA_AltitudeAndDirection[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  sizeof(GA_AltitudeAndDirection),

  offsetof(GA_AltitudeAndDirection, directionOfAltitude) | 0x0,
  (intptr_t)asn1_type_GA_AltitudeAndDirection_1,
  0,
  (intptr_t)"directionOfAltitude",

  offsetof(GA_AltitudeAndDirection, altitude) | 0x0,
  (intptr_t)asn1_type__local_3117,
  0,
  (intptr_t)"altitude",

  (intptr_t)"GA-AltitudeAndDirection",
};

const ASN1CType asn1_type_GA_AltitudeAndDirection_1[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  2,
  (intptr_t)"height",
  (intptr_t)"depth",
};

static const ASN1CType asn1_type__local_3118[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x0,
  0xffff,
};

static const ASN1CType asn1_type__local_3119[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x0,
  0x7f,
};

static const ASN1CType asn1_type__local_3120[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x0,
  0xb3,
};

static const ASN1CType asn1_type__local_3121[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x0,
  0xb3,
};

static const ASN1CType asn1_type__local_3122[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100005,
  0x0,
  0x7f,
};

const ASN1CType asn1_type_GA_EllipsoidArc[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100006,
  7,
  sizeof(GA_EllipsoidArc),

  offsetof(GA_EllipsoidArc, geographicalCoordinates) | 0x0,
  (intptr_t)asn1_type_GeographicalCoordinates,
  0,
  (intptr_t)"geographicalCoordinates",

  offsetof(GA_EllipsoidArc, innerRadius) | 0x0,
  (intptr_t)asn1_type__local_3118,
  0,
  (intptr_t)"innerRadius",

  offsetof(GA_EllipsoidArc, uncertaintyRadius) | 0x0,
  (intptr_t)asn1_type__local_3119,
  0,
  (intptr_t)"uncertaintyRadius",

  offsetof(GA_EllipsoidArc, offsetAngle) | 0x0,
  (intptr_t)asn1_type__local_3120,
  0,
  (intptr_t)"offsetAngle",

  offsetof(GA_EllipsoidArc, includedAngle) | 0x0,
  (intptr_t)asn1_type__local_3121,
  0,
  (intptr_t)"includedAngle",

  offsetof(GA_EllipsoidArc, confidence) | 0x0,
  (intptr_t)asn1_type__local_3122,
  0,
  (intptr_t)"confidence",

  offsetof(GA_EllipsoidArc, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_17,
  offsetof(GA_EllipsoidArc, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"GA-EllipsoidArc",
};

const ASN1CType asn1_type_GA_Point[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  2,
  sizeof(GA_Point),

  offsetof(GA_Point, geographicalCoordinates) | 0x0,
  (intptr_t)asn1_type_GeographicalCoordinates,
  0,
  (intptr_t)"geographicalCoordinates",

  offsetof(GA_Point, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_18,
  offsetof(GA_Point, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"GA-Point",
};

const ASN1CType asn1_type_GA_PointWithAltitude[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100004,
  3,
  sizeof(GA_PointWithAltitude),

  offsetof(GA_PointWithAltitude, geographicalCoordinates) | 0x0,
  (intptr_t)asn1_type_GeographicalCoordinates,
  0,
  (intptr_t)"geographicalCoordinates",

  offsetof(GA_PointWithAltitude, altitudeAndDirection) | 0x0,
  (intptr_t)asn1_type_GA_AltitudeAndDirection,
  0,
  (intptr_t)"altitudeAndDirection",

  offsetof(GA_PointWithAltitude, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_19,
  offsetof(GA_PointWithAltitude, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"GA-PointWithAltitude",
};

static const ASN1CType asn1_type__local_3123[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_GA_UncertaintyEllipse,
};

static const ASN1CType asn1_type__local_3124[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x0,
  0x7f,
};

static const ASN1CType asn1_type__local_3125[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100004,
  0x0,
  0x7f,
};

const ASN1CType asn1_type_GA_PointWithAltitudeAndUncertaintyEllipsoid[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100005,
  6,
  sizeof(GA_PointWithAltitudeAndUncertaintyEllipsoid),

  offsetof(GA_PointWithAltitudeAndUncertaintyEllipsoid, geographicalCoordinates) | 0x0,
  (intptr_t)asn1_type_GeographicalCoordinates,
  0,
  (intptr_t)"geographicalCoordinates",

  offsetof(GA_PointWithAltitudeAndUncertaintyEllipsoid, altitudeAndDirection) | 0x0,
  (intptr_t)asn1_type_GA_AltitudeAndDirection,
  0,
  (intptr_t)"altitudeAndDirection",

  offsetof(GA_PointWithAltitudeAndUncertaintyEllipsoid, uncertaintyEllipse) | 0x0,
  (intptr_t)asn1_type__local_3123,
  0,
  (intptr_t)"uncertaintyEllipse",

  offsetof(GA_PointWithAltitudeAndUncertaintyEllipsoid, uncertaintyAltitude) | 0x0,
  (intptr_t)asn1_type__local_3124,
  0,
  (intptr_t)"uncertaintyAltitude",

  offsetof(GA_PointWithAltitudeAndUncertaintyEllipsoid, confidence) | 0x0,
  (intptr_t)asn1_type__local_3125,
  0,
  (intptr_t)"confidence",

  offsetof(GA_PointWithAltitudeAndUncertaintyEllipsoid, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_20,
  offsetof(GA_PointWithAltitudeAndUncertaintyEllipsoid, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"GA-PointWithAltitudeAndUncertaintyEllipsoid",
};

static const ASN1CType asn1_type__local_3126[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x0,
  0x7f,
};

const ASN1CType asn1_type_GA_PointWithUnCertainty[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  3,
  sizeof(GA_PointWithUnCertainty),

  offsetof(GA_PointWithUnCertainty, geographicalCoordinates) | 0x0,
  (intptr_t)asn1_type_GeographicalCoordinates,
  0,
  (intptr_t)"geographicalCoordinates",

  offsetof(GA_PointWithUnCertainty, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_21,
  offsetof(GA_PointWithUnCertainty, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  offsetof(GA_PointWithUnCertainty, uncertaintyCode) | 0x0,
  (intptr_t)asn1_type__local_3126,
  0,
  (intptr_t)"uncertaintyCode",

  (intptr_t)"GA-PointWithUnCertainty",
};

static const ASN1CType asn1_type__local_3127[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_GA_UncertaintyEllipse,
};

static const ASN1CType asn1_type__local_3128[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x0,
  0x7f,
};

const ASN1CType asn1_type_GA_PointWithUnCertaintyEllipse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100003,
  4,
  sizeof(GA_PointWithUnCertaintyEllipse),

  offsetof(GA_PointWithUnCertaintyEllipse, geographicalCoordinates) | 0x0,
  (intptr_t)asn1_type_GeographicalCoordinates,
  0,
  (intptr_t)"geographicalCoordinates",

  offsetof(GA_PointWithUnCertaintyEllipse, uncertaintyEllipse) | 0x0,
  (intptr_t)asn1_type__local_3127,
  0,
  (intptr_t)"uncertaintyEllipse",

  offsetof(GA_PointWithUnCertaintyEllipse, confidence) | 0x0,
  (intptr_t)asn1_type__local_3128,
  0,
  (intptr_t)"confidence",

  offsetof(GA_PointWithUnCertaintyEllipse, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_22,
  offsetof(GA_PointWithUnCertaintyEllipse, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"GA-PointWithUnCertaintyEllipse",
};

const ASN1CType asn1_type_GA_Polygon[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100002,
  0x1,
  0xf,
  sizeof(GA_Polygon_1),
  (intptr_t)asn1_type_GA_Polygon_1,
  0,
  (intptr_t)"GA-Polygon",
};

const ASN1CType asn1_type_GA_Polygon_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  2,
  sizeof(GA_Polygon_1),

  offsetof(GA_Polygon_1, geographicalCoordinates) | 0x0,
  (intptr_t)asn1_type_GeographicalCoordinates,
  0,
  (intptr_t)"geographicalCoordinates",

  offsetof(GA_Polygon_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_23,
  offsetof(GA_Polygon_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

static const ASN1CType asn1_type__local_3129[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0x7f,
};

static const ASN1CType asn1_type__local_3130[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x0,
  0x7f,
};

static const ASN1CType asn1_type__local_3131[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x0,
  0xb3,
};

const ASN1CType asn1_type_GA_UncertaintyEllipse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(GA_UncertaintyEllipse),

  offsetof(GA_UncertaintyEllipse, uncertaintySemi_major) | 0x0,
  (intptr_t)asn1_type__local_3129,
  0,
  (intptr_t)"uncertaintySemi-major",

  offsetof(GA_UncertaintyEllipse, uncertaintySemi_minor) | 0x0,
  (intptr_t)asn1_type__local_3130,
  0,
  (intptr_t)"uncertaintySemi-minor",

  offsetof(GA_UncertaintyEllipse, orientationOfMajorAxis) | 0x0,
  (intptr_t)asn1_type__local_3131,
  0,
  (intptr_t)"orientationOfMajorAxis",

  (intptr_t)"GA-UncertaintyEllipse",
};

const ASN1CType asn1_type_GERAN_BSC_Container[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"GERAN-BSC-Container",
};

static const ASN1CType asn1_type__local_3132[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_LAI,
};

static const ASN1CType asn1_type__local_3133[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_RAC,
};

const ASN1CType asn1_type_GERAN_Cell_ID[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  4,
  sizeof(GERAN_Cell_ID),

  offsetof(GERAN_Cell_ID, lAI) | 0x0,
  (intptr_t)asn1_type__local_3132,
  0,
  (intptr_t)"lAI",

  offsetof(GERAN_Cell_ID, rAC) | 0x0,
  (intptr_t)asn1_type__local_3133,
  0,
  (intptr_t)"rAC",

  offsetof(GERAN_Cell_ID, cI) | 0x0,
  (intptr_t)asn1_type_CI,
  0,
  (intptr_t)"cI",

  offsetof(GERAN_Cell_ID, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_24,
  offsetof(GERAN_Cell_ID, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"GERAN-Cell-ID",
};

const ASN1CType asn1_type_GERAN_Classmark[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"GERAN-Classmark",
};

static const ASN1CType asn1_type__local_3134[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

const ASN1CType asn1_type_GlobalCN_ID[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x10,
  2,
  sizeof(GlobalCN_ID),

  offsetof(GlobalCN_ID, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_3134,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(GlobalCN_ID, cN_ID) | 0x0,
  (intptr_t)asn1_type_CN_ID,
  0,
  (intptr_t)"cN-ID",

  (intptr_t)"GlobalCN-ID",
};

static const ASN1CType asn1_type__local_3135[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

static const ASN1CType asn1_type__local_3136[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_RNC_ID,
};

const ASN1CType asn1_type_GlobalRNC_ID[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x10,
  2,
  sizeof(GlobalRNC_ID),

  offsetof(GlobalRNC_ID, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_3135,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(GlobalRNC_ID, rNC_ID) | 0x0,
  (intptr_t)asn1_type__local_3136,
  0,
  (intptr_t)"rNC-ID",

  (intptr_t)"GlobalRNC-ID",
};

const ASN1CType asn1_type_GTP_TEI[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x4,
  0x4,
  (intptr_t)"GTP-TEI",
};

const ASN1CType asn1_type_GuaranteedBitrate[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xf42400,
  (intptr_t)"GuaranteedBitrate",
};

const ASN1CType asn1_type_HigherBitratesThan16MbpsFlag[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"allowed",
  (intptr_t)"not-allowed",
  (intptr_t)"HigherBitratesThan16MbpsFlag",
};

const ASN1CType asn1_type_HS_DSCH_MAC_d_Flow_ID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0x7,
  (intptr_t)"HS-DSCH-MAC-d-Flow-ID",
};

const ASN1CType asn1_type_IMEI[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x8,
  0x8,
  (intptr_t)"IMEI",
};

static const ASN1CType asn1_type__local_3137[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_IMEI,
};

static const ASN1CType asn1_type__local_3138[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x7,
  0x7,
};

const ASN1CType asn1_type_IMEIGroup[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100002,
  3,
  sizeof(IMEIGroup),

  offsetof(IMEIGroup, iMEI) | 0x0,
  (intptr_t)asn1_type__local_3137,
  0,
  (intptr_t)"iMEI",

  offsetof(IMEIGroup, iMEIMask) | 0x0,
  (intptr_t)asn1_type__local_3138,
  0,
  (intptr_t)"iMEIMask",

  offsetof(IMEIGroup, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_25,
  offsetof(IMEIGroup, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"IMEIGroup",
};

const ASN1CType asn1_type_IMEIList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x40,
  sizeof(IMEI),
  (intptr_t)asn1_type_IMEI,
  0,
  (intptr_t)"IMEIList",
};

const ASN1CType asn1_type_IMEISV[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x8,
  0x8,
  (intptr_t)"IMEISV",
};

static const ASN1CType asn1_type__local_3139[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_IMEISV,
};

static const ASN1CType asn1_type__local_3140[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x7,
  0x7,
};

const ASN1CType asn1_type_IMEISVGroup[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100003,
  3,
  sizeof(IMEISVGroup),

  offsetof(IMEISVGroup, iMEISV) | 0x0,
  (intptr_t)asn1_type__local_3139,
  0,
  (intptr_t)"iMEISV",

  offsetof(IMEISVGroup, iMEISVMask) | 0x0,
  (intptr_t)asn1_type__local_3140,
  0,
  (intptr_t)"iMEISVMask",

  offsetof(IMEISVGroup, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_26,
  offsetof(IMEISVGroup, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"IMEISVGroup",
};

const ASN1CType asn1_type_IMEISVList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x40,
  sizeof(IMEISV),
  (intptr_t)asn1_type_IMEISV,
  0,
  (intptr_t)"IMEISVList",
};

const ASN1CType asn1_type_ImmediateMDT[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  4,
  sizeof(ImmediateMDT),

  offsetof(ImmediateMDT, measurementsToActivate) | 0x0,
  (intptr_t)asn1_type_MeasurementsToActivate,
  0,
  (intptr_t)"measurementsToActivate",

  offsetof(ImmediateMDT, m1report) | 0x8000000,
  (intptr_t)asn1_type_M1Report,
  offsetof(ImmediateMDT, m1report_option),
  (intptr_t)"m1report",

  offsetof(ImmediateMDT, m2report) | 0x8000000,
  (intptr_t)asn1_type_M2Report,
  offsetof(ImmediateMDT, m2report_option),
  (intptr_t)"m2report",

  offsetof(ImmediateMDT, iE_Extensions) | 0x28000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_27,
  offsetof(ImmediateMDT, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"ImmediateMDT",
};

const ASN1CType asn1_type_IncludeVelocity[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0xa,
  1,
  (intptr_t)"requested",
  (intptr_t)"IncludeVelocity",
};

const ASN1CType asn1_type_InformationExchangeID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xfffff,
  (intptr_t)"InformationExchangeID",
};

const ASN1CType asn1_type_InformationExchangeType[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"transfer",
  (intptr_t)"request",
  (intptr_t)"InformationExchangeType",
};

const ASN1CType asn1_type_InformationRequested[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  2,
  0,
  sizeof(InformationRequested),
  offsetof(InformationRequested, choice),
  offsetof(InformationRequested, u),
  (intptr_t)asn1_type_RequestedMBMSIPMulticastAddressandAPNRequest,
  (intptr_t)"requestedMBMSIPMulticastAddressandAPNRequest",
  (intptr_t)asn1_type_RequestedMulticastServiceList,
  (intptr_t)"requestedMulticastServiceList",
  (intptr_t)"InformationRequested",
};

static const ASN1CType asn1_type__local_3141[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100001,
  (intptr_t)asn1_type_PermanentNAS_UE_ID,
};

const ASN1CType asn1_type_InformationRequestType[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  2,
  0,
  sizeof(InformationRequestType),
  offsetof(InformationRequestType, choice),
  offsetof(InformationRequestType, u),
  (intptr_t)asn1_type_MBMSIPMulticastAddressandAPNRequest,
  (intptr_t)"mBMSIPMulticastAddressandAPNRequest",
  (intptr_t)asn1_type__local_3141,
  (intptr_t)"permanentNAS-UE-ID",
  (intptr_t)"InformationRequestType",
};

const ASN1CType asn1_type_InformationTransferID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xfffff,
  (intptr_t)"InformationTransferID",
};

const ASN1CType asn1_type_InformationTransferType[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  1,
  0,
  sizeof(InformationTransferType),
  offsetof(InformationTransferType, choice),
  offsetof(InformationTransferType, u),
  (intptr_t)asn1_type_RNCTraceInformation,
  (intptr_t)"rNCTraceInformation",
  (intptr_t)"InformationTransferType",
};

const ASN1CType asn1_type_IntegrityProtectionAlgorithm[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xf,
  (intptr_t)"IntegrityProtectionAlgorithm",
};

static const ASN1CType asn1_type__local_3142[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_IntegrityProtectionKey,
};

const ASN1CType asn1_type_IntegrityProtectionInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x10,
  3,
  sizeof(IntegrityProtectionInformation),

  offsetof(IntegrityProtectionInformation, permittedAlgorithms) | 0x0,
  (intptr_t)asn1_type_PermittedIntegrityProtectionAlgorithms,
  0,
  (intptr_t)"permittedAlgorithms",

  offsetof(IntegrityProtectionInformation, key) | 0x0,
  (intptr_t)asn1_type__local_3142,
  0,
  (intptr_t)"key",

  offsetof(IntegrityProtectionInformation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_28,
  offsetof(IntegrityProtectionInformation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"IntegrityProtectionInformation",
};

const ASN1CType asn1_type_IntegrityProtectionKey[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x3,
  0x80,
  0x80,
  (intptr_t)"IntegrityProtectionKey",
};

const ASN1CType asn1_type_InterSystemInformationTransferType[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  1,
  0,
  sizeof(InterSystemInformationTransferType),
  offsetof(InterSystemInformationTransferType, choice),
  offsetof(InterSystemInformationTransferType, u),
  (intptr_t)asn1_type_RIM_Transfer,
  (intptr_t)"rIM-Transfer",
  (intptr_t)"InterSystemInformationTransferType",
};

static const ASN1CType asn1_type__local_3143[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_CellLoadInformation,
};

static const ASN1CType asn1_type__local_3144[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_CellLoadInformation,
};

const ASN1CType asn1_type_InterSystemInformation_TransparentContainer[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(InterSystemInformation_TransparentContainer),

  offsetof(InterSystemInformation_TransparentContainer, downlinkCellLoadInformation) | 0x8000000,
  (intptr_t)asn1_type__local_3143,
  offsetof(InterSystemInformation_TransparentContainer, downlinkCellLoadInformation_option),
  (intptr_t)"downlinkCellLoadInformation",

  offsetof(InterSystemInformation_TransparentContainer, uplinkCellLoadInformation) | 0x8000000,
  (intptr_t)asn1_type__local_3144,
  offsetof(InterSystemInformation_TransparentContainer, uplinkCellLoadInformation_option),
  (intptr_t)"uplinkCellLoadInformation",

  offsetof(InterSystemInformation_TransparentContainer, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_29,
  offsetof(InterSystemInformation_TransparentContainer, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"InterSystemInformation-TransparentContainer",
};

const ASN1CType asn1_type_IPMulticastAddress[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x4,
  0x10,
  (intptr_t)"IPMulticastAddress",
};

const ASN1CType asn1_type_IuSignallingConnectionIdentifier[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x3,
  0x18,
  0x18,
  (intptr_t)"IuSignallingConnectionIdentifier",
};

static const ASN1CType asn1_type__local_3145[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_GTP_TEI,
};

const ASN1CType asn1_type_IuTransportAssociation[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  2,
  0,
  sizeof(IuTransportAssociation),
  offsetof(IuTransportAssociation, choice),
  offsetof(IuTransportAssociation, u),
  (intptr_t)asn1_type__local_3145,
  (intptr_t)"gTP-TEI",
  (intptr_t)asn1_type_BindingID,
  (intptr_t)"bindingID",
  (intptr_t)"IuTransportAssociation",
};

const ASN1CType asn1_type_KeyStatus[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"old",
  (intptr_t)"new",
  (intptr_t)"KeyStatus",
};

const ASN1CType asn1_type_LA_LIST[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x10000,
  sizeof(LA_LIST_1),
  (intptr_t)asn1_type_LA_LIST_1,
  0,
  (intptr_t)"LA-LIST",
};

static const ASN1CType asn1_type__local_3146[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_LAC,
};

const ASN1CType asn1_type_LA_LIST_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  3,
  sizeof(LA_LIST_1),

  offsetof(LA_LIST_1, lAC) | 0x0,
  (intptr_t)asn1_type__local_3146,
  0,
  (intptr_t)"lAC",

  offsetof(LA_LIST_1, listOF_SNAs) | 0x0,
  (intptr_t)asn1_type_ListOF_SNAs,
  0,
  (intptr_t)"listOF-SNAs",

  offsetof(LA_LIST_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_30,
  offsetof(LA_LIST_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

const ASN1CType asn1_type_LAC[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x2,
  0x2,
  (intptr_t)"LAC",
};

static const ASN1CType asn1_type__local_3147[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

static const ASN1CType asn1_type__local_3148[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_LAC,
};

const ASN1CType asn1_type_LAI[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x10,
  3,
  sizeof(LAI),

  offsetof(LAI, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_3147,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(LAI, lAC) | 0x0,
  (intptr_t)asn1_type__local_3148,
  0,
  (intptr_t)"lAC",

  offsetof(LAI, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_31,
  offsetof(LAI, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"LAI",
};

static const ASN1CType asn1_type__local_3149[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_SAI,
};

static const ASN1CType asn1_type__local_3150[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x0,
  0x7fff,
};

const ASN1CType asn1_type_LastKnownServiceArea[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(LastKnownServiceArea),

  offsetof(LastKnownServiceArea, sAI) | 0x0,
  (intptr_t)asn1_type__local_3149,
  0,
  (intptr_t)"sAI",

  offsetof(LastKnownServiceArea, ageOfSAI) | 0x0,
  (intptr_t)asn1_type__local_3150,
  0,
  (intptr_t)"ageOfSAI",

  offsetof(LastKnownServiceArea, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_32,
  offsetof(LastKnownServiceArea, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"LastKnownServiceArea",
};

static const ASN1CType asn1_type__local_3151[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_UTRAN_CellID,
};

const ASN1CType asn1_type_LastVisitedUTRANCell_Item[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  4,
  sizeof(LastVisitedUTRANCell_Item),

  offsetof(LastVisitedUTRANCell_Item, uTRAN_CellID) | 0x0,
  (intptr_t)asn1_type__local_3151,
  0,
  (intptr_t)"uTRAN-CellID",

  offsetof(LastVisitedUTRANCell_Item, cellType) | 0x0,
  (intptr_t)asn1_type_CellType,
  0,
  (intptr_t)"cellType",

  offsetof(LastVisitedUTRANCell_Item, time_UE_StayedInCell) | 0x0,
  (intptr_t)asn1_type_Time_UE_StayedInCell,
  0,
  (intptr_t)"time-UE-StayedInCell",

  offsetof(LastVisitedUTRANCell_Item, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_33,
  offsetof(LastVisitedUTRANCell_Item, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"LastVisitedUTRANCell-Item",
};

const ASN1CType asn1_type_LHN_ID[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x20,
  0x100,
  (intptr_t)"LHN-ID",
};

const ASN1CType asn1_type_Links_to_log[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  3,
  0,
  (intptr_t)"uplink",
  (intptr_t)"downlink",
  (intptr_t)"both-uplink-and-downlink",
  (intptr_t)"Links-to-log",
};

const ASN1CType asn1_type_ListOF_SNAs[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x10000,
  sizeof(SNAC),
  (intptr_t)asn1_type_SNAC,
  0,
  (intptr_t)"ListOF-SNAs",
};

const ASN1CType asn1_type_ListOfInterfacesToTrace[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100002,
  0x1,
  0x10,
  sizeof(InterfacesToTraceItem),
  (intptr_t)asn1_type_InterfacesToTraceItem,
  0,
  (intptr_t)"ListOfInterfacesToTrace",
};

const ASN1CType asn1_type_InterfacesToTraceItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(InterfacesToTraceItem),

  offsetof(InterfacesToTraceItem, interface) | 0x0,
  (intptr_t)asn1_type_InterfacesToTraceItem_1,
  0,
  (intptr_t)"interface",

  offsetof(InterfacesToTraceItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_34,
  offsetof(InterfacesToTraceItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"InterfacesToTraceItem",
};

const ASN1CType asn1_type_InterfacesToTraceItem_1[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100000,
  5,
  0,
  (intptr_t)"iu-cs",
  (intptr_t)"iu-ps",
  (intptr_t)"iur",
  (intptr_t)"iub",
  (intptr_t)"uu",
};

const ASN1CType asn1_type_LoadValue[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x0,
  0x64,
  (intptr_t)"LoadValue",
};

const ASN1CType asn1_type_LocationRelatedDataRequestType[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(LocationRelatedDataRequestType),

  offsetof(LocationRelatedDataRequestType, requestedLocationRelatedDataType) | 0x0,
  (intptr_t)asn1_type_RequestedLocationRelatedDataType,
  0,
  (intptr_t)"requestedLocationRelatedDataType",

  offsetof(LocationRelatedDataRequestType, requestedGPSAssistanceData) | 0x8000000,
  (intptr_t)asn1_type_RequestedGPSAssistanceData,
  offsetof(LocationRelatedDataRequestType, requestedGPSAssistanceData_option),
  (intptr_t)"requestedGPSAssistanceData",

  (intptr_t)"LocationRelatedDataRequestType",
};

const ASN1CType asn1_type_LocationRelatedDataRequestTypeSpecificToGERANIuMode[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  3,
  0,
  (intptr_t)"decipheringKeysEOTD",
  (intptr_t)"dedicatedMobileAssistedEOTDAssistanceData",
  (intptr_t)"dedicatedMobileBasedEOTDAssistanceData",
  (intptr_t)"LocationRelatedDataRequestTypeSpecificToGERANIuMode",
};

static const ASN1CType asn1_type__local_3152[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_VerticalAccuracyCode,
};

static const ASN1CType asn1_type__local_3153[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100004,
  (intptr_t)asn1_type_PositioningPriority,
};

static const ASN1CType asn1_type__local_3154[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100005,
  (intptr_t)asn1_type_PositioningPriority,
};

static const ASN1CType asn1_type__local_3155[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100006,
  (intptr_t)asn1_type_ClientType,
};

static const ASN1CType asn1_type__local_3156[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100007,
  (intptr_t)asn1_type_ClientType,
};

static const ASN1CType asn1_type__local_3157[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100008,
  (intptr_t)asn1_type_ResponseTime,
};

static const ASN1CType asn1_type__local_3158[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100009,
  (intptr_t)asn1_type_IncludeVelocity,
};

static const ASN1CType asn1_type__local_3159[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x10000a,
  (intptr_t)asn1_type_PeriodicLocationInfo,
};

const ASN1CType asn1_type_LocationReportingTransferInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  12,
  sizeof(LocationReportingTransferInformation),

  offsetof(LocationReportingTransferInformation, reportChangeOfSAI) | 0x8000000,
  (intptr_t)asn1_type_ReportChangeOfSAI,
  offsetof(LocationReportingTransferInformation, reportChangeOfSAI_option),
  (intptr_t)"reportChangeOfSAI",

  offsetof(LocationReportingTransferInformation, periodicReportingIndicator) | 0x8000000,
  (intptr_t)asn1_type_PeriodicReportingIndicator,
  offsetof(LocationReportingTransferInformation, periodicReportingIndicator_option),
  (intptr_t)"periodicReportingIndicator",

  offsetof(LocationReportingTransferInformation, directReportingIndicator) | 0x8000000,
  (intptr_t)asn1_type_DirectReportingIndicator,
  offsetof(LocationReportingTransferInformation, directReportingIndicator_option),
  (intptr_t)"directReportingIndicator",

  offsetof(LocationReportingTransferInformation, verticalAccuracyCode) | 0x8000000,
  (intptr_t)asn1_type__local_3152,
  offsetof(LocationReportingTransferInformation, verticalAccuracyCode_option),
  (intptr_t)"verticalAccuracyCode",

  offsetof(LocationReportingTransferInformation, positioningPriorityChangeSAI) | 0x8000000,
  (intptr_t)asn1_type__local_3153,
  offsetof(LocationReportingTransferInformation, positioningPriorityChangeSAI_option),
  (intptr_t)"positioningPriorityChangeSAI",

  offsetof(LocationReportingTransferInformation, positioningPriorityDirect) | 0x8000000,
  (intptr_t)asn1_type__local_3154,
  offsetof(LocationReportingTransferInformation, positioningPriorityDirect_option),
  (intptr_t)"positioningPriorityDirect",

  offsetof(LocationReportingTransferInformation, clientTypePeriodic) | 0x8000000,
  (intptr_t)asn1_type__local_3155,
  offsetof(LocationReportingTransferInformation, clientTypePeriodic_option),
  (intptr_t)"clientTypePeriodic",

  offsetof(LocationReportingTransferInformation, clientTypeDirect) | 0x8000000,
  (intptr_t)asn1_type__local_3156,
  offsetof(LocationReportingTransferInformation, clientTypeDirect_option),
  (intptr_t)"clientTypeDirect",

  offsetof(LocationReportingTransferInformation, responseTime) | 0x8000000,
  (intptr_t)asn1_type__local_3157,
  offsetof(LocationReportingTransferInformation, responseTime_option),
  (intptr_t)"responseTime",

  offsetof(LocationReportingTransferInformation, includeVelocity) | 0x8000000,
  (intptr_t)asn1_type__local_3158,
  offsetof(LocationReportingTransferInformation, includeVelocity_option),
  (intptr_t)"includeVelocity",

  offsetof(LocationReportingTransferInformation, periodicLocationInfo) | 0x8000000,
  (intptr_t)asn1_type__local_3159,
  offsetof(LocationReportingTransferInformation, periodicLocationInfo_option),
  (intptr_t)"periodicLocationInfo",

  offsetof(LocationReportingTransferInformation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_35,
  offsetof(LocationReportingTransferInformation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"LocationReportingTransferInformation",
};

const ASN1CType asn1_type_ReportChangeOfSAI[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  1,
  0,
  (intptr_t)"requested",
  (intptr_t)"ReportChangeOfSAI",
};

const ASN1CType asn1_type_PeriodicReportingIndicator[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  0,
  (intptr_t)"periodicSAI",
  (intptr_t)"periodicGeo",
  (intptr_t)"PeriodicReportingIndicator",
};

const ASN1CType asn1_type_DirectReportingIndicator[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100002,
  2,
  0,
  (intptr_t)"directSAI",
  (intptr_t)"directGeo",
  (intptr_t)"DirectReportingIndicator",
};

const ASN1CType asn1_type_L3_Information[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"L3-Information",
};

const ASN1CType asn1_type_M1Report[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  0,
  sizeof(M1Report),
  offsetof(M1Report, choice),
  offsetof(M1Report, u),
  (intptr_t)asn1_type_MDT_Report_Parameters,
  (intptr_t)"periodic",
  (intptr_t)asn1_type_Event1F_Parameters,
  (intptr_t)"event1F",
  (intptr_t)"M1Report",
};

const ASN1CType asn1_type_M2Report[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100002,
  2,
  0,
  sizeof(M2Report),
  offsetof(M2Report, choice),
  offsetof(M2Report, u),
  (intptr_t)asn1_type_MDT_Report_Parameters,
  (intptr_t)"periodic",
  (intptr_t)asn1_type_Event1I_Parameters,
  (intptr_t)"event1I",
  (intptr_t)"M2Report",
};

static const ASN1CType asn1_type__local_3160[] = {
  (ASN1_CTYPE_NULL << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
};

const ASN1CType asn1_type_M4Report[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  2,
  0,
  sizeof(M4Report),
  offsetof(M4Report, choice),
  offsetof(M4Report, u),
  (intptr_t)asn1_type__local_3160,
  (intptr_t)"all",
  (intptr_t)asn1_type_M4_Collection_Parameters,
  (intptr_t)"m4-collection-parameters",
  (intptr_t)"M4Report",
};

const ASN1CType asn1_type_M4_Collection_Parameters[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  3,
  sizeof(M4_Collection_Parameters),

  offsetof(M4_Collection_Parameters, m4_period) | 0x0,
  (intptr_t)asn1_type_M4_Period,
  0,
  (intptr_t)"m4-period",

  offsetof(M4_Collection_Parameters, m4_threshold) | 0x8000000,
  (intptr_t)asn1_type_M4_Threshold,
  offsetof(M4_Collection_Parameters, m4_threshold_option),
  (intptr_t)"m4-threshold",

  offsetof(M4_Collection_Parameters, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_36,
  offsetof(M4_Collection_Parameters, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"M4-Collection-Parameters",
};

const ASN1CType asn1_type_M4_Period[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  8,
  0,
  (intptr_t)"ms100",
  (intptr_t)"ms250",
  (intptr_t)"ms500",
  (intptr_t)"ms1000",
  (intptr_t)"ms2000",
  (intptr_t)"ms3000",
  (intptr_t)"ms4000",
  (intptr_t)"ms6000",
  (intptr_t)"M4-Period",
};

const ASN1CType asn1_type_M4_Threshold[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x0,
  0x1f,
  (intptr_t)"M4-Threshold",
};

static const ASN1CType asn1_type__local_3161[] = {
  (ASN1_CTYPE_NULL << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
};

const ASN1CType asn1_type_M5Report[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  2,
  0,
  sizeof(M5Report),
  offsetof(M5Report, choice),
  offsetof(M5Report, u),
  (intptr_t)asn1_type__local_3161,
  (intptr_t)"when-available",
  (intptr_t)asn1_type_M5_Period,
  (intptr_t)"m5-period",
  (intptr_t)"M5Report",
};

const ASN1CType asn1_type_M5_Period[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  8,
  0,
  (intptr_t)"ms100",
  (intptr_t)"ms250",
  (intptr_t)"ms500",
  (intptr_t)"ms1000",
  (intptr_t)"ms2000",
  (intptr_t)"ms3000",
  (intptr_t)"ms4000",
  (intptr_t)"ms6000",
  (intptr_t)"M5-Period",
};

const ASN1CType asn1_type_M6Report[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(M6Report),

  offsetof(M6Report, m6_period) | 0x0,
  (intptr_t)asn1_type_M6_Period,
  0,
  (intptr_t)"m6-period",

  offsetof(M6Report, m6_links_to_log) | 0x0,
  (intptr_t)asn1_type_Links_to_log,
  0,
  (intptr_t)"m6-links-to-log",

  offsetof(M6Report, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_37,
  offsetof(M6Report, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"M6Report",
};

const ASN1CType asn1_type_M6_Period[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  13,
  0,
  (intptr_t)"ms1000",
  (intptr_t)"ms2000",
  (intptr_t)"ms3000",
  (intptr_t)"ms4000",
  (intptr_t)"ms6000",
  (intptr_t)"ms8000",
  (intptr_t)"ms12000",
  (intptr_t)"ms16000",
  (intptr_t)"ms20000",
  (intptr_t)"ms24000",
  (intptr_t)"ms28000",
  (intptr_t)"ms32000",
  (intptr_t)"ms64000",
  (intptr_t)"M6-Period",
};

const ASN1CType asn1_type_M7Report[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(M7Report),

  offsetof(M7Report, m7_period) | 0x0,
  (intptr_t)asn1_type_M7_Period,
  0,
  (intptr_t)"m7-period",

  offsetof(M7Report, m7_links_to_log) | 0x0,
  (intptr_t)asn1_type_Links_to_log,
  0,
  (intptr_t)"m7-links-to-log",

  offsetof(M7Report, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_38,
  offsetof(M7Report, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"M7Report",
};

const ASN1CType asn1_type_M7_Period[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  13,
  0,
  (intptr_t)"ms1000",
  (intptr_t)"ms2000",
  (intptr_t)"ms3000",
  (intptr_t)"ms4000",
  (intptr_t)"ms6000",
  (intptr_t)"ms8000",
  (intptr_t)"ms12000",
  (intptr_t)"ms16000",
  (intptr_t)"ms20000",
  (intptr_t)"ms24000",
  (intptr_t)"ms28000",
  (intptr_t)"ms32000",
  (intptr_t)"ms64000",
  (intptr_t)"M7-Period",
};

const ASN1CType asn1_type_Management_Based_MDT_Allowed[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"allowed",
  (intptr_t)"Management-Based-MDT-Allowed",
};

const ASN1CType asn1_type_MaxBitrate[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x1,
  0xf42400,
  (intptr_t)"MaxBitrate",
};

const ASN1CType asn1_type_MaxSDU_Size[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100005,
  0x0,
  0x8000,
  (intptr_t)"MaxSDU-Size",
};

const ASN1CType asn1_type_MBMS_PTP_RAB_ID[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x8,
  0x8,
  (intptr_t)"MBMS-PTP-RAB-ID",
};

const ASN1CType asn1_type_MBMSBearerServiceType[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"multicast",
  (intptr_t)"broadcast",
  (intptr_t)"MBMSBearerServiceType",
};

const ASN1CType asn1_type_MBMSCNDe_Registration[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"normalsessionstop",
  (intptr_t)"deregister",
  (intptr_t)"MBMSCNDe-Registration",
};

const ASN1CType asn1_type_MBMSCountingInformation[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"counting",
  (intptr_t)"notcounting",
  (intptr_t)"MBMSCountingInformation",
};

const ASN1CType asn1_type_MBMSHCIndicator[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  2,
  0,
  (intptr_t)"uncompressed-header",
  (intptr_t)"compressed-header",
  (intptr_t)"MBMSHCIndicator",
};

const ASN1CType asn1_type_MBMSIPMulticastAddressandAPNRequest[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x200,
  sizeof(TMGI),
  (intptr_t)asn1_type_TMGI,
  0,
  (intptr_t)"MBMSIPMulticastAddressandAPNRequest",
};

const ASN1CType asn1_type_MBMSLinkingInformation[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"uE-has-joined-multicast-services",
  (intptr_t)"MBMSLinkingInformation",
};

const ASN1CType asn1_type_MBMSRegistrationRequestType[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"register",
  (intptr_t)"deregister",
  (intptr_t)"MBMSRegistrationRequestType",
};

const ASN1CType asn1_type_MBMSServiceArea[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"MBMSServiceArea",
};

const ASN1CType asn1_type_MBMSSessionDuration[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x3,
  0x3,
  (intptr_t)"MBMSSessionDuration",
};

const ASN1CType asn1_type_MBMSSessionIdentity[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x1,
  0x1,
  (intptr_t)"MBMSSessionIdentity",
};

const ASN1CType asn1_type_MBMSSessionRepetitionNumber[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x1,
  0x1,
  (intptr_t)"MBMSSessionRepetitionNumber",
};

const ASN1CType asn1_type_MDT_Activation[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  3,
  0,
  (intptr_t)"immediateMDTonly",
  (intptr_t)"loggedMDTonly",
  (intptr_t)"immediateMDTandTrace",
  (intptr_t)"MDT-Activation",
};

static const ASN1CType asn1_type__local_3162[] = {
  (ASN1_CTYPE_NULL << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
};

const ASN1CType asn1_type_MDTAreaScope[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  4,
  0,
  sizeof(MDTAreaScope),
  offsetof(MDTAreaScope, choice),
  offsetof(MDTAreaScope, u),
  (intptr_t)asn1_type_CellBased,
  (intptr_t)"cellbased",
  (intptr_t)asn1_type_LABased,
  (intptr_t)"labased",
  (intptr_t)asn1_type_RABased,
  (intptr_t)"rabased",
  (intptr_t)asn1_type__local_3162,
  (intptr_t)"plmn-area-based",
  (intptr_t)"MDTAreaScope",
};

const ASN1CType asn1_type_MDT_Configuration[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  4,
  sizeof(MDT_Configuration),

  offsetof(MDT_Configuration, mdtActivation) | 0x0,
  (intptr_t)asn1_type_MDT_Activation,
  0,
  (intptr_t)"mdtActivation",

  offsetof(MDT_Configuration, mdtAreaScope) | 0x0,
  (intptr_t)asn1_type_MDTAreaScope,
  0,
  (intptr_t)"mdtAreaScope",

  offsetof(MDT_Configuration, mdtMode) | 0x0,
  (intptr_t)asn1_type_MDTMode,
  0,
  (intptr_t)"mdtMode",

  offsetof(MDT_Configuration, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_39,
  offsetof(MDT_Configuration, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"MDT-Configuration",
};

const ASN1CType asn1_type_MDTMode[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100002,
  2,
  0,
  sizeof(MDTMode),
  offsetof(MDTMode, choice),
  offsetof(MDTMode, u),
  (intptr_t)asn1_type_ImmediateMDT,
  (intptr_t)"immediateMDT",
  (intptr_t)asn1_type_LoggedMDT,
  (intptr_t)"loggedMDT",
  (intptr_t)"MDTMode",
};

const ASN1CType asn1_type_MDT_PLMN_List[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x10,
  sizeof(PLMNidentity),
  (intptr_t)asn1_type_PLMNidentity,
  0,
  (intptr_t)"MDT-PLMN-List",
};

const ASN1CType asn1_type_MDT_Report_Parameters[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  2,
  sizeof(MDT_Report_Parameters),

  offsetof(MDT_Report_Parameters, reportInterval) | 0x0,
  (intptr_t)asn1_type_ReportInterval,
  0,
  (intptr_t)"reportInterval",

  offsetof(MDT_Report_Parameters, reportAmount) | 0x0,
  (intptr_t)asn1_type_ReportAmount,
  0,
  (intptr_t)"reportAmount",

  (intptr_t)"MDT-Report-Parameters",
};

const ASN1CType asn1_type_MeasurementQuantity[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  3,
  0,
  (intptr_t)"cpichEcNo",
  (intptr_t)"cpichRSCP",
  (intptr_t)"pathloss",
  (intptr_t)"MeasurementQuantity",
};

const ASN1CType asn1_type_MeasurementsToActivate[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x8,
  0x8,
  (intptr_t)"MeasurementsToActivate",
};

const ASN1CType asn1_type_MSISDN[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x1,
  0x9,
  (intptr_t)"MSISDN",
};

const ASN1CType asn1_type_NAS_PDU[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"NAS-PDU",
};

const ASN1CType asn1_type_NAS_SequenceNumber[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x3,
  0x2,
  0x2,
  (intptr_t)"NAS-SequenceNumber",
};

const ASN1CType asn1_type_NAS_SynchronisationIndicator[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x4,
  0x4,
  (intptr_t)"NAS-SynchronisationIndicator",
};

const ASN1CType asn1_type_NewBSS_To_OldBSS_Information[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"NewBSS-To-OldBSS-Information",
};

const ASN1CType asn1_type_NonSearchingIndication[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0xa,
  2,
  (intptr_t)"non-searching",
  (intptr_t)"searching",
  (intptr_t)"NonSearchingIndication",
};

const ASN1CType asn1_type_NRTLoadInformationValue[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100003,
  0x0,
  0x3,
  (intptr_t)"NRTLoadInformationValue",
};

const ASN1CType asn1_type_NumberOfIuInstances[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x2,
  (intptr_t)"NumberOfIuInstances",
};

const ASN1CType asn1_type_NumberOfSteps[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x1,
  0x10,
  (intptr_t)"NumberOfSteps",
};

const ASN1CType asn1_type_Offload_RAB_Parameters[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(Offload_RAB_Parameters),

  offsetof(Offload_RAB_Parameters, accessPointName) | 0x0,
  (intptr_t)asn1_type_Offload_RAB_Parameters_APN,
  0,
  (intptr_t)"accessPointName",

  offsetof(Offload_RAB_Parameters, chargingCharacteristics) | 0x0,
  (intptr_t)asn1_type_Offload_RAB_Parameters_ChargingCharacteristics,
  0,
  (intptr_t)"chargingCharacteristics",

  offsetof(Offload_RAB_Parameters, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_40,
  offsetof(Offload_RAB_Parameters, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"Offload-RAB-Parameters",
};

const ASN1CType asn1_type_Offload_RAB_Parameters_APN[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0xff,
  (intptr_t)"Offload-RAB-Parameters-APN",
};

const ASN1CType asn1_type_Offload_RAB_Parameters_ChargingCharacteristics[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x2,
  0x2,
  (intptr_t)"Offload-RAB-Parameters-ChargingCharacteristics",
};

const ASN1CType asn1_type_OldBSS_ToNewBSS_Information[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"OldBSS-ToNewBSS-Information",
};

const ASN1CType asn1_type_OMC_ID[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x3,
  0x16,
  (intptr_t)"OMC-ID",
};

const ASN1CType asn1_type_Out_Of_UTRAN[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"cell-reselection-to-EUTRAN",
  (intptr_t)"Out-Of-UTRAN",
};

static const ASN1CType asn1_type__local_3163[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_LAI,
};

static const ASN1CType asn1_type__local_3164[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_RAI,
};

const ASN1CType asn1_type_PagingAreaID[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  2,
  0,
  sizeof(PagingAreaID),
  offsetof(PagingAreaID, choice),
  offsetof(PagingAreaID, u),
  (intptr_t)asn1_type__local_3163,
  (intptr_t)"lAI",
  (intptr_t)asn1_type__local_3164,
  (intptr_t)"rAI",
  (intptr_t)"PagingAreaID",
};

const ASN1CType asn1_type_PagingCause[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  5,
  1,
  (intptr_t)"terminating-conversational-call",
  (intptr_t)"terminating-streaming-call",
  (intptr_t)"terminating-interactive-call",
  (intptr_t)"terminating-background-call",
  (intptr_t)"terminating-low-priority-signalling",
  (intptr_t)"terminating-high-priority-signalling",
  (intptr_t)"PagingCause",
};

const ASN1CType asn1_type_PDP_TypeInformation[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x2,
  sizeof(PDP_Type),
  (intptr_t)asn1_type_PDP_Type,
  0,
  (intptr_t)"PDP-TypeInformation",
};

const ASN1CType asn1_type_PDP_Type[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  5,
  0,
  (intptr_t)"empty",
  (intptr_t)"ppp",
  (intptr_t)"osp-ihoss",
  (intptr_t)"ipv4",
  (intptr_t)"ipv6",
  (intptr_t)"PDP-Type",
};

const ASN1CType asn1_type_PDP_TypeInformation_extension[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x2,
  sizeof(PDP_Type_extension),
  (intptr_t)asn1_type_PDP_Type_extension,
  0,
  (intptr_t)"PDP-TypeInformation-extension",
};

const ASN1CType asn1_type_PDP_Type_extension[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"ipv4-and-ipv6",
  (intptr_t)"PDP-Type-extension",
};

const ASN1CType asn1_type_PDUType14FrameSequenceNumber[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0x3,
  (intptr_t)"PDUType14FrameSequenceNumber",
};

static const ASN1CType asn1_type__local_3165[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x3800000 | 0x100000,
  0x1,
  0x83d5ff,
};

static const ASN1CType asn1_type__local_3166[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x3800000 | 0x100001,
  0x1,
  0x83d5ff,
};

const ASN1CType asn1_type_PeriodicLocationInfo[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(PeriodicLocationInfo),

  offsetof(PeriodicLocationInfo, reportingAmount) | 0x0,
  (intptr_t)asn1_type__local_3165,
  0,
  (intptr_t)"reportingAmount",

  offsetof(PeriodicLocationInfo, reportingInterval) | 0x0,
  (intptr_t)asn1_type__local_3166,
  0,
  (intptr_t)"reportingInterval",

  offsetof(PeriodicLocationInfo, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_41,
  offsetof(PeriodicLocationInfo, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"PeriodicLocationInfo",
};

static const ASN1CType asn1_type__local_3167[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_IMSI,
};

const ASN1CType asn1_type_PermanentNAS_UE_ID[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  1,
  0,
  sizeof(PermanentNAS_UE_ID),
  offsetof(PermanentNAS_UE_ID, choice),
  offsetof(PermanentNAS_UE_ID, u),
  (intptr_t)asn1_type__local_3167,
  (intptr_t)"iMSI",
  (intptr_t)"PermanentNAS-UE-ID",
};

const ASN1CType asn1_type_PermittedEncryptionAlgorithms[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x10,
  sizeof(EncryptionAlgorithm),
  (intptr_t)asn1_type_EncryptionAlgorithm,
  0,
  (intptr_t)"PermittedEncryptionAlgorithms",
};

const ASN1CType asn1_type_PermittedIntegrityProtectionAlgorithms[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x10,
  sizeof(IntegrityProtectionAlgorithm),
  (intptr_t)asn1_type_IntegrityProtectionAlgorithm,
  0,
  (intptr_t)"PermittedIntegrityProtectionAlgorithms",
};

const ASN1CType asn1_type_LABased[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  sizeof(LABased),

  offsetof(LABased, laiList) | 0x0,
  (intptr_t)asn1_type_LAI_List,
  0,
  (intptr_t)"laiList",

  offsetof(LABased, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_42,
  offsetof(LABased, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"LABased",
};

const ASN1CType asn1_type_LAI_List[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x8,
  sizeof(LAI),
  (intptr_t)asn1_type_LAI,
  0,
  (intptr_t)"LAI-List",
};

const ASN1CType asn1_type_LoggedMDT[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  3,
  sizeof(LoggedMDT),

  offsetof(LoggedMDT, loggingInterval) | 0x0,
  (intptr_t)asn1_type_LoggingInterval,
  0,
  (intptr_t)"loggingInterval",

  offsetof(LoggedMDT, loggingDuration) | 0x0,
  (intptr_t)asn1_type_LoggingDuration,
  0,
  (intptr_t)"loggingDuration",

  offsetof(LoggedMDT, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_43,
  offsetof(LoggedMDT, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"LoggedMDT",
};

const ASN1CType asn1_type_LoggingInterval[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  8,
  0,
  (intptr_t)"s1d28",
  (intptr_t)"s2d56",
  (intptr_t)"s5d12",
  (intptr_t)"s10d24",
  (intptr_t)"s20d48",
  (intptr_t)"s30d72",
  (intptr_t)"s40d96",
  (intptr_t)"s61d44",
  (intptr_t)"LoggingInterval",
};

const ASN1CType asn1_type_LoggingDuration[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  6,
  0,
  (intptr_t)"min10",
  (intptr_t)"min20",
  (intptr_t)"min40",
  (intptr_t)"min60",
  (intptr_t)"min90",
  (intptr_t)"min120",
  (intptr_t)"LoggingDuration",
};

const ASN1CType asn1_type_PLMNs_in_shared_network[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x20,
  sizeof(PLMNs_in_shared_network_1),
  (intptr_t)asn1_type_PLMNs_in_shared_network_1,
  0,
  (intptr_t)"PLMNs-in-shared-network",
};

static const ASN1CType asn1_type__local_3168[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

const ASN1CType asn1_type_PLMNs_in_shared_network_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  3,
  sizeof(PLMNs_in_shared_network_1),

  offsetof(PLMNs_in_shared_network_1, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_3168,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(PLMNs_in_shared_network_1, lA_LIST) | 0x0,
  (intptr_t)asn1_type_LA_LIST,
  0,
  (intptr_t)"lA-LIST",

  offsetof(PLMNs_in_shared_network_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_44,
  offsetof(PLMNs_in_shared_network_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

const ASN1CType asn1_type_Port_Number[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x2,
  0x2,
  (intptr_t)"Port-Number",
};

const ASN1CType asn1_type_PositioningDataDiscriminator[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x4,
  0x4,
  (intptr_t)"PositioningDataDiscriminator",
};

const ASN1CType asn1_type_PositioningDataSet[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x9,
  sizeof(PositioningMethodAndUsage),
  (intptr_t)asn1_type_PositioningMethodAndUsage,
  0,
  (intptr_t)"PositioningDataSet",
};

const ASN1CType asn1_type_PositioningMethodAndUsage[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x1,
  0x1,
  (intptr_t)"PositioningMethodAndUsage",
};

const ASN1CType asn1_type_PositioningPriority[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"high-Priority",
  (intptr_t)"normal-Priority",
  (intptr_t)"PositioningPriority",
};

const ASN1CType asn1_type_PositionData[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(PositionData),

  offsetof(PositionData, positioningDataDiscriminator) | 0x0,
  (intptr_t)asn1_type_PositioningDataDiscriminator,
  0,
  (intptr_t)"positioningDataDiscriminator",

  offsetof(PositionData, positioningDataSet) | 0x8000000,
  (intptr_t)asn1_type_PositioningDataSet,
  offsetof(PositionData, positioningDataSet_option),
  (intptr_t)"positioningDataSet",

  offsetof(PositionData, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_45,
  offsetof(PositionData, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"PositionData",
};

const ASN1CType asn1_type_PositionDataSpecificToGERANIuMode[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"PositionDataSpecificToGERANIuMode",
};

const ASN1CType asn1_type_Pre_emptionCapability[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  2,
  (intptr_t)"shall-not-trigger-pre-emption",
  (intptr_t)"may-trigger-pre-emption",
  (intptr_t)"Pre-emptionCapability",
};

const ASN1CType asn1_type_Pre_emptionVulnerability[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100002,
  2,
  (intptr_t)"not-pre-emptable",
  (intptr_t)"pre-emptable",
  (intptr_t)"Pre-emptionVulnerability",
};

const ASN1CType asn1_type_PriorityLevel[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x0,
  0xf,
  (intptr_t)"PriorityLevel",
};

const ASN1CType asn1_type_Priority_Class_Indicator[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x3,
  0x8,
  0x8,
  (intptr_t)"Priority-Class-Indicator",
};

const ASN1CType asn1_type_ProvidedData[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  1,
  0,
  sizeof(ProvidedData),
  offsetof(ProvidedData, choice),
  offsetof(ProvidedData, u),
  (intptr_t)asn1_type_Shared_Network_Information,
  (intptr_t)"shared-network-information",
  (intptr_t)"ProvidedData",
};

const ASN1CType asn1_type_P_TMSI[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x4,
  0x4,
  (intptr_t)"P-TMSI",
};

const ASN1CType asn1_type_QueuingAllowed[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100003,
  2,
  (intptr_t)"queueing-not-allowed",
  (intptr_t)"queueing-allowed",
  (intptr_t)"QueuingAllowed",
};

const ASN1CType asn1_type_RAB_AsymmetryIndicator[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  4,
  0,
  (intptr_t)"symmetric-bidirectional",
  (intptr_t)"asymmetric-unidirectional-downlink",
  (intptr_t)"asymmetric-unidirectional-uplink",
  (intptr_t)"asymmetric-bidirectional",
  (intptr_t)"RAB-AsymmetryIndicator",
};

const ASN1CType asn1_type_RABased[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100002,
  2,
  sizeof(RABased),

  offsetof(RABased, raiList) | 0x0,
  (intptr_t)asn1_type_RAI_List,
  0,
  (intptr_t)"raiList",

  offsetof(RABased, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_46,
  offsetof(RABased, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RABased",
};

const ASN1CType asn1_type_RAI_List[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x8,
  sizeof(RAI),
  (intptr_t)asn1_type_RAI,
  0,
  (intptr_t)"RAI-List",
};

const ASN1CType asn1_type_RABDataVolumeReport[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100002,
  0x1,
  0x2,
  sizeof(RABDataVolumeReport_1),
  (intptr_t)asn1_type_RABDataVolumeReport_1,
  0,
  (intptr_t)"RABDataVolumeReport",
};

const ASN1CType asn1_type_RABDataVolumeReport_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  3,
  sizeof(RABDataVolumeReport_1),

  offsetof(RABDataVolumeReport_1, dl_UnsuccessfullyTransmittedDataVolume) | 0x0,
  (intptr_t)asn1_type_UnsuccessfullyTransmittedDataVolume,
  0,
  (intptr_t)"dl-UnsuccessfullyTransmittedDataVolume",

  offsetof(RABDataVolumeReport_1, dataVolumeReference) | 0x8000000,
  (intptr_t)asn1_type_DataVolumeReference,
  offsetof(RABDataVolumeReport_1, dataVolumeReference_option),
  (intptr_t)"dataVolumeReference",

  offsetof(RABDataVolumeReport_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_47,
  offsetof(RABDataVolumeReport_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

const ASN1CType asn1_type_RAB_ID[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x3,
  0x8,
  0x8,
  (intptr_t)"RAB-ID",
};

const ASN1CType asn1_type_RAB_Parameter_ExtendedGuaranteedBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x2,
  sizeof(ExtendedGuaranteedBitrate),
  (intptr_t)asn1_type_ExtendedGuaranteedBitrate,
  0,
  (intptr_t)"RAB-Parameter-ExtendedGuaranteedBitrateList",
};

const ASN1CType asn1_type_RAB_Parameter_ExtendedMaxBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x2,
  sizeof(ExtendedMaxBitrate),
  (intptr_t)asn1_type_ExtendedMaxBitrate,
  0,
  (intptr_t)"RAB-Parameter-ExtendedMaxBitrateList",
};

const ASN1CType asn1_type_RAB_Parameter_GuaranteedBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100003,
  0x1,
  0x2,
  sizeof(GuaranteedBitrate),
  (intptr_t)asn1_type_GuaranteedBitrate,
  0,
  (intptr_t)"RAB-Parameter-GuaranteedBitrateList",
};

const ASN1CType asn1_type_RAB_Parameter_MaxBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100002,
  0x1,
  0x2,
  sizeof(MaxBitrate),
  (intptr_t)asn1_type_MaxBitrate,
  0,
  (intptr_t)"RAB-Parameter-MaxBitrateList",
};

const ASN1CType asn1_type_RAB_Parameters[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  13,
  sizeof(RAB_Parameters),

  offsetof(RAB_Parameters, trafficClass) | 0x0,
  (intptr_t)asn1_type_TrafficClass,
  0,
  (intptr_t)"trafficClass",

  offsetof(RAB_Parameters, rAB_AsymmetryIndicator) | 0x0,
  (intptr_t)asn1_type_RAB_AsymmetryIndicator,
  0,
  (intptr_t)"rAB-AsymmetryIndicator",

  offsetof(RAB_Parameters, maxBitrate) | 0x0,
  (intptr_t)asn1_type_RAB_Parameter_MaxBitrateList,
  0,
  (intptr_t)"maxBitrate",

  offsetof(RAB_Parameters, guaranteedBitRate) | 0x8000000,
  (intptr_t)asn1_type_RAB_Parameter_GuaranteedBitrateList,
  offsetof(RAB_Parameters, guaranteedBitRate_option),
  (intptr_t)"guaranteedBitRate",

  offsetof(RAB_Parameters, deliveryOrder) | 0x0,
  (intptr_t)asn1_type_DeliveryOrder,
  0,
  (intptr_t)"deliveryOrder",

  offsetof(RAB_Parameters, maxSDU_Size) | 0x0,
  (intptr_t)asn1_type_MaxSDU_Size,
  0,
  (intptr_t)"maxSDU-Size",

  offsetof(RAB_Parameters, sDU_Parameters) | 0x0,
  (intptr_t)asn1_type_SDU_Parameters,
  0,
  (intptr_t)"sDU-Parameters",

  offsetof(RAB_Parameters, transferDelay) | 0x8000000,
  (intptr_t)asn1_type_TransferDelay,
  offsetof(RAB_Parameters, transferDelay_option),
  (intptr_t)"transferDelay",

  offsetof(RAB_Parameters, trafficHandlingPriority) | 0x8000000,
  (intptr_t)asn1_type_TrafficHandlingPriority,
  offsetof(RAB_Parameters, trafficHandlingPriority_option),
  (intptr_t)"trafficHandlingPriority",

  offsetof(RAB_Parameters, allocationOrRetentionPriority) | 0x8000000,
  (intptr_t)asn1_type_AllocationOrRetentionPriority,
  offsetof(RAB_Parameters, allocationOrRetentionPriority_option),
  (intptr_t)"allocationOrRetentionPriority",

  offsetof(RAB_Parameters, sourceStatisticsDescriptor) | 0x8000000,
  (intptr_t)asn1_type_SourceStatisticsDescriptor,
  offsetof(RAB_Parameters, sourceStatisticsDescriptor_option),
  (intptr_t)"sourceStatisticsDescriptor",

  offsetof(RAB_Parameters, relocationRequirement) | 0x8000000,
  (intptr_t)asn1_type_RelocationRequirement,
  offsetof(RAB_Parameters, relocationRequirement_option),
  (intptr_t)"relocationRequirement",

  offsetof(RAB_Parameters, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_48,
  offsetof(RAB_Parameters, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-Parameters",
};

const ASN1CType asn1_type_RABParametersList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x100,
  sizeof(RABParametersList_1),
  (intptr_t)asn1_type_RABParametersList_1,
  0,
  (intptr_t)"RABParametersList",
};

static const ASN1CType asn1_type__local_3169[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3170[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_CN_DomainIndicator,
};

const ASN1CType asn1_type_RABParametersList_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  5,
  sizeof(RABParametersList_1),

  offsetof(RABParametersList_1, rab_Id) | 0x0,
  (intptr_t)asn1_type__local_3169,
  0,
  (intptr_t)"rab-Id",

  offsetof(RABParametersList_1, cn_domain) | 0x0,
  (intptr_t)asn1_type__local_3170,
  0,
  (intptr_t)"cn-domain",

  offsetof(RABParametersList_1, rabDataVolumeReport) | 0x8000000,
  (intptr_t)asn1_type_RABDataVolumeReport,
  offsetof(RABParametersList_1, rabDataVolumeReport_option),
  (intptr_t)"rabDataVolumeReport",

  offsetof(RABParametersList_1, upInformation) | 0x8000000,
  (intptr_t)asn1_type_UPInformation,
  offsetof(RABParametersList_1, upInformation_option),
  (intptr_t)"upInformation",

  offsetof(RABParametersList_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_49,
  offsetof(RABParametersList_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

const ASN1CType asn1_type_RAB_SubflowCombinationBitRate[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x0,
  0xf42400,
  (intptr_t)"RAB-SubflowCombinationBitRate",
};

const ASN1CType asn1_type_RAB_TrCH_Mapping[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10000b,
  0x1,
  0x100,
  sizeof(RAB_TrCH_MappingItem),
  (intptr_t)asn1_type_RAB_TrCH_MappingItem,
  0,
  (intptr_t)"RAB-TrCH-Mapping",
};

static const ASN1CType asn1_type__local_3171[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

const ASN1CType asn1_type_RAB_TrCH_MappingItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(RAB_TrCH_MappingItem),

  offsetof(RAB_TrCH_MappingItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3171,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_TrCH_MappingItem, trCH_ID_List) | 0x0,
  (intptr_t)asn1_type_TrCH_ID_List,
  0,
  (intptr_t)"trCH-ID-List",

  offsetof(RAB_TrCH_MappingItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_50,
  offsetof(RAB_TrCH_MappingItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-TrCH-MappingItem",
};

const ASN1CType asn1_type_RAC[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x1,
  0x1,
  (intptr_t)"RAC",
};

static const ASN1CType asn1_type__local_3172[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_LAI,
};

static const ASN1CType asn1_type__local_3173[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_RAC,
};

const ASN1CType asn1_type_RAI[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(RAI),

  offsetof(RAI, lAI) | 0x0,
  (intptr_t)asn1_type__local_3172,
  0,
  (intptr_t)"lAI",

  offsetof(RAI, rAC) | 0x0,
  (intptr_t)asn1_type__local_3173,
  0,
  (intptr_t)"rAC",

  offsetof(RAI, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_51,
  offsetof(RAI, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAI",
};

const ASN1CType asn1_type_RAListofIdleModeUEs[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  2,
  0,
  sizeof(RAListofIdleModeUEs),
  offsetof(RAListofIdleModeUEs, choice),
  offsetof(RAListofIdleModeUEs, u),
  (intptr_t)asn1_type_NotEmptyRAListofIdleModeUEs,
  (intptr_t)"notEmptyRAListofIdleModeUEs",
  (intptr_t)asn1_type_RAListofIdleModeUEs_1,
  (intptr_t)"emptyFullRAListofIdleModeUEs",
  (intptr_t)"RAListofIdleModeUEs",
};

const ASN1CType asn1_type_RAListofIdleModeUEs_1[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100001,
  2,
  0,
  (intptr_t)"emptylist",
  (intptr_t)"fulllist",
};

const ASN1CType asn1_type_NotEmptyRAListofIdleModeUEs[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100000,
  2,
  sizeof(NotEmptyRAListofIdleModeUEs),

  offsetof(NotEmptyRAListofIdleModeUEs, rAofIdleModeUEs) | 0x0,
  (intptr_t)asn1_type_RAofIdleModeUEs,
  0,
  (intptr_t)"rAofIdleModeUEs",

  offsetof(NotEmptyRAListofIdleModeUEs, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_52,
  offsetof(NotEmptyRAListofIdleModeUEs, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"NotEmptyRAListofIdleModeUEs",
};

const ASN1CType asn1_type_RAofIdleModeUEs[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x10000,
  sizeof(RAC),
  (intptr_t)asn1_type_RAC,
  0,
  (intptr_t)"RAofIdleModeUEs",
};

const ASN1CType asn1_type_LAListofIdleModeUEs[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x10000,
  sizeof(LAI),
  (intptr_t)asn1_type_LAI,
  0,
  (intptr_t)"LAListofIdleModeUEs",
};

const ASN1CType asn1_type_RAT_Type[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"utran",
  (intptr_t)"geran",
  (intptr_t)"RAT-Type",
};

const ASN1CType asn1_type_RateControlAllowed[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0xa,
  2,
  (intptr_t)"not-allowed",
  (intptr_t)"allowed",
  (intptr_t)"RateControlAllowed",
};

const ASN1CType asn1_type_RedirectAttemptFlag[] = {
  (ASN1_CTYPE_NULL << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x5,
  (intptr_t)"RedirectAttemptFlag",
};

const ASN1CType asn1_type_RedirectionCompleted[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"redirection-completed",
  (intptr_t)"RedirectionCompleted",
};

const ASN1CType asn1_type_RejectCauseValue[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  6,
  2,
  (intptr_t)"pLMN-Not-Allowed",
  (intptr_t)"location-Area-Not-Allowed",
  (intptr_t)"roaming-Not-Allowed-In-This-Location-Area",
  (intptr_t)"no-Suitable-Cell-In-Location-Area",
  (intptr_t)"gPRS-Services-Not-Allowed-In-This-PLMN",
  (intptr_t)"cS-PS-coordination-required",
  (intptr_t)"network-failure",
  (intptr_t)"not-authorized-for-this-CSG",
  (intptr_t)"RejectCauseValue",
};

const ASN1CType asn1_type_RelocationRequirement[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10000b,
  2,
  1,
  (intptr_t)"lossless",
  (intptr_t)"none",
  (intptr_t)"realtime",
  (intptr_t)"RelocationRequirement",
};

const ASN1CType asn1_type_RelocationType[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"ue-not-involved",
  (intptr_t)"ue-involved",
  (intptr_t)"RelocationType",
};

const ASN1CType asn1_type_RepetitionNumber0[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100002,
  0x0,
  0xff,
  (intptr_t)"RepetitionNumber0",
};

const ASN1CType asn1_type_RepetitionNumber1[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x100,
  (intptr_t)"RepetitionNumber1",
};

const ASN1CType asn1_type_ReportArea[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  0,
  (intptr_t)"service-area",
  (intptr_t)"geographical-area",
  (intptr_t)"ReportArea",
};

const ASN1CType asn1_type_ReportInterval[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  13,
  2,
  (intptr_t)"ms250",
  (intptr_t)"ms500",
  (intptr_t)"ms1000",
  (intptr_t)"ms2000",
  (intptr_t)"ms3000",
  (intptr_t)"ms4000",
  (intptr_t)"ms6000",
  (intptr_t)"ms12000",
  (intptr_t)"ms16000",
  (intptr_t)"ms20000",
  (intptr_t)"ms24000",
  (intptr_t)"ms32000",
  (intptr_t)"ms64000",
  (intptr_t)"ms8000",
  (intptr_t)"ms28000",
  (intptr_t)"ReportInterval",
};

const ASN1CType asn1_type_ReportAmount[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  8,
  0,
  (intptr_t)"n1",
  (intptr_t)"n2",
  (intptr_t)"n4",
  (intptr_t)"n8",
  (intptr_t)"n16",
  (intptr_t)"n32",
  (intptr_t)"n64",
  (intptr_t)"infinity",
  (intptr_t)"ReportAmount",
};

const ASN1CType asn1_type_RequestedGPSAssistanceData[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x26,
  (intptr_t)"RequestedGPSAssistanceData",
};

const ASN1CType asn1_type_RequestedGANSSAssistanceData[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x1,
  0xc9,
  (intptr_t)"RequestedGANSSAssistanceData",
};

const ASN1CType asn1_type_RequestedLocationRelatedDataType[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  4,
  4,
  (intptr_t)"decipheringKeysUEBasedOTDOA",
  (intptr_t)"decipheringKeysAssistedGPS",
  (intptr_t)"dedicatedAssistanceDataUEBasedOTDOA",
  (intptr_t)"dedicatedAssistanceDataAssistedGPS",
  (intptr_t)"decipheringKeysAssistedGANSS",
  (intptr_t)"dedicatedAssistanceDataAssistedGANSS",
  (intptr_t)"decipheringKeysAssistedGPSandGANSS",
  (intptr_t)"dedicatedAssistanceDataAssistedGPSandGANSS",
  (intptr_t)"RequestedLocationRelatedDataType",
};

const ASN1CType asn1_type_RequestedMBMSIPMulticastAddressandAPNRequest[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x200,
  sizeof(MBMSIPMulticastAddressandAPNlist),
  (intptr_t)asn1_type_MBMSIPMulticastAddressandAPNlist,
  0,
  (intptr_t)"RequestedMBMSIPMulticastAddressandAPNRequest",
};

static const ASN1CType asn1_type__local_3174[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_TMGI,
};

static const ASN1CType asn1_type__local_3175[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_IPMulticastAddress,
};

static const ASN1CType asn1_type__local_3176[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_APN,
};

const ASN1CType asn1_type_MBMSIPMulticastAddressandAPNlist[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  4,
  sizeof(MBMSIPMulticastAddressandAPNlist),

  offsetof(MBMSIPMulticastAddressandAPNlist, tMGI) | 0x0,
  (intptr_t)asn1_type__local_3174,
  0,
  (intptr_t)"tMGI",

  offsetof(MBMSIPMulticastAddressandAPNlist, iPMulticastAddress) | 0x0,
  (intptr_t)asn1_type__local_3175,
  0,
  (intptr_t)"iPMulticastAddress",

  offsetof(MBMSIPMulticastAddressandAPNlist, aPN) | 0x0,
  (intptr_t)asn1_type__local_3176,
  0,
  (intptr_t)"aPN",

  offsetof(MBMSIPMulticastAddressandAPNlist, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_53,
  offsetof(MBMSIPMulticastAddressandAPNlist, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"MBMSIPMulticastAddressandAPNlist",
};

const ASN1CType asn1_type_RequestedMulticastServiceList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x80,
  sizeof(TMGI),
  (intptr_t)asn1_type_TMGI,
  0,
  (intptr_t)"RequestedMulticastServiceList",
};

const ASN1CType asn1_type_Requested_RAB_Parameter_Values[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  3,
  sizeof(Requested_RAB_Parameter_Values),

  offsetof(Requested_RAB_Parameter_Values, requestedMaxBitrates) | 0x8000000,
  (intptr_t)asn1_type_Requested_RAB_Parameter_MaxBitrateList,
  offsetof(Requested_RAB_Parameter_Values, requestedMaxBitrates_option),
  (intptr_t)"requestedMaxBitrates",

  offsetof(Requested_RAB_Parameter_Values, requestedGuaranteedBitrates) | 0x8000000,
  (intptr_t)asn1_type_Requested_RAB_Parameter_GuaranteedBitrateList,
  offsetof(Requested_RAB_Parameter_Values, requestedGuaranteedBitrates_option),
  (intptr_t)"requestedGuaranteedBitrates",

  offsetof(Requested_RAB_Parameter_Values, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_54,
  offsetof(Requested_RAB_Parameter_Values, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"Requested-RAB-Parameter-Values",
};

const ASN1CType asn1_type_Requested_RAB_Parameter_ExtendedMaxBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x2,
  sizeof(ExtendedMaxBitrate),
  (intptr_t)asn1_type_ExtendedMaxBitrate,
  0,
  (intptr_t)"Requested-RAB-Parameter-ExtendedMaxBitrateList",
};

const ASN1CType asn1_type_Requested_RAB_Parameter_ExtendedGuaranteedBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x2,
  sizeof(ExtendedGuaranteedBitrate),
  (intptr_t)asn1_type_ExtendedGuaranteedBitrate,
  0,
  (intptr_t)"Requested-RAB-Parameter-ExtendedGuaranteedBitrateList",
};

const ASN1CType asn1_type_Requested_RAB_Parameter_MaxBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x2,
  sizeof(MaxBitrate),
  (intptr_t)asn1_type_MaxBitrate,
  0,
  (intptr_t)"Requested-RAB-Parameter-MaxBitrateList",
};

const ASN1CType asn1_type_Requested_RAB_Parameter_GuaranteedBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x2,
  sizeof(GuaranteedBitrate),
  (intptr_t)asn1_type_GuaranteedBitrate,
  0,
  (intptr_t)"Requested-RAB-Parameter-GuaranteedBitrateList",
};

static const ASN1CType asn1_type__local_3177[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x0,
  0x7f,
};

const ASN1CType asn1_type_RequestType[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(RequestType),

  offsetof(RequestType, event) | 0x0,
  (intptr_t)asn1_type_Event,
  0,
  (intptr_t)"event",

  offsetof(RequestType, reportArea) | 0x0,
  (intptr_t)asn1_type_ReportArea,
  0,
  (intptr_t)"reportArea",

  offsetof(RequestType, accuracyCode) | 0x8000000,
  (intptr_t)asn1_type__local_3177,
  offsetof(RequestType, accuracyCode_option),
  (intptr_t)"accuracyCode",

  (intptr_t)"RequestType",
};

static const ASN1CType asn1_type__local_3178[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x1,
  0x9,
};

static const ASN1CType asn1_type__local_3179[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0x8,
};

const ASN1CType asn1_type_ResidualBitErrorRatio[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  3,
  sizeof(ResidualBitErrorRatio),

  offsetof(ResidualBitErrorRatio, mantissa) | 0x0,
  (intptr_t)asn1_type__local_3178,
  0,
  (intptr_t)"mantissa",

  offsetof(ResidualBitErrorRatio, exponent) | 0x0,
  (intptr_t)asn1_type__local_3179,
  0,
  (intptr_t)"exponent",

  offsetof(ResidualBitErrorRatio, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_55,
  offsetof(ResidualBitErrorRatio, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"ResidualBitErrorRatio",
};

const ASN1CType asn1_type_ResponseTime[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"lowdelay",
  (intptr_t)"delaytolerant",
  (intptr_t)"ResponseTime",
};

const ASN1CType asn1_type_RIMInformation[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x100000,
  0x0,
  (intptr_t)"RIMInformation",
};

const ASN1CType asn1_type_RIM_Transfer[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100000,
  3,
  sizeof(RIM_Transfer),

  offsetof(RIM_Transfer, rIMInformation) | 0x0,
  (intptr_t)asn1_type_RIMInformation,
  0,
  (intptr_t)"rIMInformation",

  offsetof(RIM_Transfer, rIMRoutingAddress) | 0x8000000,
  (intptr_t)asn1_type_RIMRoutingAddress,
  offsetof(RIM_Transfer, rIMRoutingAddress_option),
  (intptr_t)"rIMRoutingAddress",

  offsetof(RIM_Transfer, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_56,
  offsetof(RIM_Transfer, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RIM-Transfer",
};

const ASN1CType asn1_type_RIMRoutingAddress[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  2,
  1,
  sizeof(RIMRoutingAddress),
  offsetof(RIMRoutingAddress, choice),
  offsetof(RIMRoutingAddress, u),
  (intptr_t)asn1_type_TargetRNC_ID,
  (intptr_t)"targetRNC-ID",
  (intptr_t)asn1_type_GERAN_Cell_ID,
  (intptr_t)"gERAN-Cell-ID",
  (intptr_t)asn1_type_TargetENB_ID,
  (intptr_t)"targeteNB-ID",
  (intptr_t)"RIMRoutingAddress",
};

const ASN1CType asn1_type_RNC_ID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xfff,
  (intptr_t)"RNC-ID",
};

static const ASN1CType asn1_type__local_3180[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_TraceReference,
};

const ASN1CType asn1_type_RNCTraceInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100000,
  4,
  sizeof(RNCTraceInformation),

  offsetof(RNCTraceInformation, traceReference) | 0x0,
  (intptr_t)asn1_type__local_3180,
  0,
  (intptr_t)"traceReference",

  offsetof(RNCTraceInformation, traceActivationIndicato) | 0x0,
  (intptr_t)asn1_type_RNCTraceInformation_1,
  0,
  (intptr_t)"traceActivationIndicato",

  offsetof(RNCTraceInformation, equipmentsToBeTraced) | 0x8000000,
  (intptr_t)asn1_type_EquipmentsToBeTraced,
  offsetof(RNCTraceInformation, equipmentsToBeTraced_option),
  (intptr_t)"equipmentsToBeTraced",

  offsetof(RNCTraceInformation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_57,
  offsetof(RNCTraceInformation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RNCTraceInformation",
};

const ASN1CType asn1_type_RNCTraceInformation_1[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  2,
  (intptr_t)"activated",
  (intptr_t)"deactivated",
};

static const ASN1CType asn1_type__local_3181[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RABParametersList,
};

static const ASN1CType asn1_type__local_3182[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_SAI,
};

const ASN1CType asn1_type_RNSAPRelocationParameters[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  5,
  sizeof(RNSAPRelocationParameters),

  offsetof(RNSAPRelocationParameters, rabParmetersList) | 0x8000000,
  (intptr_t)asn1_type__local_3181,
  offsetof(RNSAPRelocationParameters, rabParmetersList_option),
  (intptr_t)"rabParmetersList",

  offsetof(RNSAPRelocationParameters, locationReporting) | 0x8000000,
  (intptr_t)asn1_type_LocationReportingTransferInformation,
  offsetof(RNSAPRelocationParameters, locationReporting_option),
  (intptr_t)"locationReporting",

  offsetof(RNSAPRelocationParameters, traceInformation) | 0x8000000,
  (intptr_t)asn1_type_TraceInformation,
  offsetof(RNSAPRelocationParameters, traceInformation_option),
  (intptr_t)"traceInformation",

  offsetof(RNSAPRelocationParameters, sourceSAI) | 0x8000000,
  (intptr_t)asn1_type__local_3182,
  offsetof(RNSAPRelocationParameters, sourceSAI_option),
  (intptr_t)"sourceSAI",

  offsetof(RNSAPRelocationParameters, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_58,
  offsetof(RNSAPRelocationParameters, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RNSAPRelocationParameters",
};

const ASN1CType asn1_type_RRC_Container[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"RRC-Container",
};

const ASN1CType asn1_type_RTLoadValue[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100002,
  0x0,
  0x64,
  (intptr_t)"RTLoadValue",
};

const ASN1CType asn1_type_RSRVCC_HO_Indication[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"ps-only",
  (intptr_t)"RSRVCC-HO-Indication",
};

static const ASN1CType asn1_type__local_3183[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x80,
  0x80,
};

static const ASN1CType asn1_type__local_3184[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0x20,
};

const ASN1CType asn1_type_RSRVCC_Information[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(RSRVCC_Information),

  offsetof(RSRVCC_Information, nonce) | 0x0,
  (intptr_t)asn1_type__local_3183,
  0,
  (intptr_t)"nonce",

  offsetof(RSRVCC_Information, iMSInformation) | 0x0,
  (intptr_t)asn1_type__local_3184,
  0,
  (intptr_t)"iMSInformation",

  offsetof(RSRVCC_Information, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_59,
  offsetof(RSRVCC_Information, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RSRVCC-Information",
};

const ASN1CType asn1_type_RSRVCC_Operation_Possible[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"rsrvcc-possible",
  (intptr_t)"RSRVCC-Operation-Possible",
};

const ASN1CType asn1_type_SAC[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100002,
  0x2,
  0x2,
  (intptr_t)"SAC",
};

static const ASN1CType asn1_type__local_3185[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

static const ASN1CType asn1_type__local_3186[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_LAC,
};

const ASN1CType asn1_type_SAI[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x10,
  4,
  sizeof(SAI),

  offsetof(SAI, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_3185,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(SAI, lAC) | 0x0,
  (intptr_t)asn1_type__local_3186,
  0,
  (intptr_t)"lAC",

  offsetof(SAI, sAC) | 0x0,
  (intptr_t)asn1_type_SAC,
  0,
  (intptr_t)"sAC",

  offsetof(SAI, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_60,
  offsetof(SAI, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"SAI",
};

const ASN1CType asn1_type_SAPI[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"sapi-0",
  (intptr_t)"sapi-3",
  (intptr_t)"SAPI",
};

const ASN1CType asn1_type_SessionUpdateID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xfffff,
  (intptr_t)"SessionUpdateID",
};

const ASN1CType asn1_type_Shared_Network_Information[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  2,
  sizeof(Shared_Network_Information),

  offsetof(Shared_Network_Information, pLMNs_in_shared_network) | 0x0,
  (intptr_t)asn1_type_PLMNs_in_shared_network,
  0,
  (intptr_t)"pLMNs-in-shared-network",

  offsetof(Shared_Network_Information, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_61,
  offsetof(Shared_Network_Information, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"Shared-Network-Information",
};

const ASN1CType asn1_type_Session_Re_establishment_Indicator[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"true",
  (intptr_t)"Session-Re-establishment-Indicator",
};

const ASN1CType asn1_type_SignallingIndication[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"signalling",
  (intptr_t)"SignallingIndication",
};

static const ASN1CType asn1_type__local_3187[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x1,
  0x9,
};

static const ASN1CType asn1_type__local_3188[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x1,
  0x6,
};

const ASN1CType asn1_type_SDU_ErrorRatio[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100000,
  3,
  sizeof(SDU_ErrorRatio),

  offsetof(SDU_ErrorRatio, mantissa) | 0x0,
  (intptr_t)asn1_type__local_3187,
  0,
  (intptr_t)"mantissa",

  offsetof(SDU_ErrorRatio, exponent) | 0x0,
  (intptr_t)asn1_type__local_3188,
  0,
  (intptr_t)"exponent",

  offsetof(SDU_ErrorRatio, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_62,
  offsetof(SDU_ErrorRatio, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"SDU-ErrorRatio",
};

const ASN1CType asn1_type_SDU_FormatInformationParameters[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100003,
  0x1,
  0x40,
  sizeof(SDU_FormatInformationParameters_1),
  (intptr_t)asn1_type_SDU_FormatInformationParameters_1,
  0,
  (intptr_t)"SDU-FormatInformationParameters",
};

const ASN1CType asn1_type_SDU_FormatInformationParameters_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  3,
  sizeof(SDU_FormatInformationParameters_1),

  offsetof(SDU_FormatInformationParameters_1, subflowSDU_Size) | 0x8000000,
  (intptr_t)asn1_type_SubflowSDU_Size,
  offsetof(SDU_FormatInformationParameters_1, subflowSDU_Size_option),
  (intptr_t)"subflowSDU-Size",

  offsetof(SDU_FormatInformationParameters_1, rAB_SubflowCombinationBitRate) | 0x8000000,
  (intptr_t)asn1_type_RAB_SubflowCombinationBitRate,
  offsetof(SDU_FormatInformationParameters_1, rAB_SubflowCombinationBitRate_option),
  (intptr_t)"rAB-SubflowCombinationBitRate",

  offsetof(SDU_FormatInformationParameters_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_63,
  offsetof(SDU_FormatInformationParameters_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

const ASN1CType asn1_type_SDU_Parameters[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100006,
  0x1,
  0x7,
  sizeof(SDU_Parameters_1),
  (intptr_t)asn1_type_SDU_Parameters_1,
  0,
  (intptr_t)"SDU-Parameters",
};

const ASN1CType asn1_type_SDU_Parameters_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  5,
  sizeof(SDU_Parameters_1),

  offsetof(SDU_Parameters_1, sDU_ErrorRatio) | 0x8000000,
  (intptr_t)asn1_type_SDU_ErrorRatio,
  offsetof(SDU_Parameters_1, sDU_ErrorRatio_option),
  (intptr_t)"sDU-ErrorRatio",

  offsetof(SDU_Parameters_1, residualBitErrorRatio) | 0x0,
  (intptr_t)asn1_type_ResidualBitErrorRatio,
  0,
  (intptr_t)"residualBitErrorRatio",

  offsetof(SDU_Parameters_1, deliveryOfErroneousSDU) | 0x0,
  (intptr_t)asn1_type_DeliveryOfErroneousSDU,
  0,
  (intptr_t)"deliveryOfErroneousSDU",

  offsetof(SDU_Parameters_1, sDU_FormatInformationParameters) | 0x8000000,
  (intptr_t)asn1_type_SDU_FormatInformationParameters,
  offsetof(SDU_Parameters_1, sDU_FormatInformationParameters_option),
  (intptr_t)"sDU-FormatInformationParameters",

  offsetof(SDU_Parameters_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_64,
  offsetof(SDU_Parameters_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

const ASN1CType asn1_type_SNA_Access_Information[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(SNA_Access_Information),

  offsetof(SNA_Access_Information, authorisedPLMNs) | 0x0,
  (intptr_t)asn1_type_AuthorisedPLMNs,
  0,
  (intptr_t)"authorisedPLMNs",

  offsetof(SNA_Access_Information, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_65,
  offsetof(SNA_Access_Information, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"SNA-Access-Information",
};

const ASN1CType asn1_type_SNAC[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xffff,
  (intptr_t)"SNAC",
};

const ASN1CType asn1_type_Service_Handover[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  3,
  0,
  (intptr_t)"handover-to-GSM-should-be-performed",
  (intptr_t)"handover-to-GSM-should-not-be-performed",
  (intptr_t)"handover-to-GSM-shall-not-be-performed",
  (intptr_t)"Service-Handover",
};

const ASN1CType asn1_type_Source_ToTarget_TransparentContainer[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"Source-ToTarget-TransparentContainer",
};

const ASN1CType asn1_type_SourceeNodeB_ToTargeteNodeB_TransparentContainer[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"SourceeNodeB-ToTargeteNodeB-TransparentContainer",
};

const ASN1CType asn1_type_SourceCellID[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  2,
  0,
  sizeof(SourceCellID),
  offsetof(SourceCellID, choice),
  offsetof(SourceCellID, u),
  (intptr_t)asn1_type_SourceUTRANCellID,
  (intptr_t)"sourceUTRANCellID",
  (intptr_t)asn1_type_CGI,
  (intptr_t)"sourceGERANCellID",
  (intptr_t)"SourceCellID",
};

const ASN1CType asn1_type_SourceBSS_ToTargetBSS_TransparentContainer[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"SourceBSS-ToTargetBSS-TransparentContainer",
};

static const ASN1CType asn1_type__local_3189[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_SAI,
};

const ASN1CType asn1_type_SourceID[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  2,
  0,
  sizeof(SourceID),
  offsetof(SourceID, choice),
  offsetof(SourceID, u),
  (intptr_t)asn1_type_SourceRNC_ID,
  (intptr_t)"sourceRNC-ID",
  (intptr_t)asn1_type__local_3189,
  (intptr_t)"sAI",
  (intptr_t)"SourceID",
};

static const ASN1CType asn1_type__local_3190[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

static const ASN1CType asn1_type__local_3191[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_RNC_ID,
};

const ASN1CType asn1_type_SourceRNC_ID[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100000,
  3,
  sizeof(SourceRNC_ID),

  offsetof(SourceRNC_ID, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_3190,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(SourceRNC_ID, rNC_ID) | 0x0,
  (intptr_t)asn1_type__local_3191,
  0,
  (intptr_t)"rNC-ID",

  offsetof(SourceRNC_ID, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_66,
  offsetof(SourceRNC_ID, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"SourceRNC-ID",
};

static const ASN1CType asn1_type__local_3192[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RRC_Container,
};

static const ASN1CType asn1_type__local_3193[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_RelocationType,
};

static const ASN1CType asn1_type__local_3194[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_ChosenIntegrityProtectionAlgorithm,
};

static const ASN1CType asn1_type__local_3195[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100004,
  (intptr_t)asn1_type_IntegrityProtectionKey,
};

static const ASN1CType asn1_type__local_3196[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100005,
  (intptr_t)asn1_type_ChosenEncryptionAlgorithm,
};

static const ASN1CType asn1_type__local_3197[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100006,
  (intptr_t)asn1_type_EncryptionKey,
};

static const ASN1CType asn1_type__local_3198[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100007,
  (intptr_t)asn1_type_ChosenEncryptionAlgorithm,
};

static const ASN1CType asn1_type__local_3199[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100008,
  (intptr_t)asn1_type_ChosenEncryptionAlgorithm,
};

static const ASN1CType asn1_type__local_3200[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100009,
  (intptr_t)asn1_type_D_RNTI,
};

static const ASN1CType asn1_type__local_3201[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x10000a,
  (intptr_t)asn1_type_TargetCellId,
};

const ASN1CType asn1_type_SourceRNC_ToTargetRNC_TransparentContainer[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  13,
  sizeof(SourceRNC_ToTargetRNC_TransparentContainer),

  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, rRC_Container) | 0x0,
  (intptr_t)asn1_type__local_3192,
  0,
  (intptr_t)"rRC-Container",

  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, numberOfIuInstances) | 0x0,
  (intptr_t)asn1_type_NumberOfIuInstances,
  0,
  (intptr_t)"numberOfIuInstances",

  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, relocationType) | 0x0,
  (intptr_t)asn1_type__local_3193,
  0,
  (intptr_t)"relocationType",

  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, chosenIntegrityProtectionAlgorithm) | 0x8000000,
  (intptr_t)asn1_type__local_3194,
  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, chosenIntegrityProtectionAlgorithm_option),
  (intptr_t)"chosenIntegrityProtectionAlgorithm",

  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, integrityProtectionKey) | 0x8000000,
  (intptr_t)asn1_type__local_3195,
  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, integrityProtectionKey_option),
  (intptr_t)"integrityProtectionKey",

  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, chosenEncryptionAlgorithForSignalling) | 0x8000000,
  (intptr_t)asn1_type__local_3196,
  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, chosenEncryptionAlgorithForSignalling_option),
  (intptr_t)"chosenEncryptionAlgorithForSignalling",

  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, cipheringKey) | 0x8000000,
  (intptr_t)asn1_type__local_3197,
  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, cipheringKey_option),
  (intptr_t)"cipheringKey",

  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, chosenEncryptionAlgorithForCS) | 0x8000000,
  (intptr_t)asn1_type__local_3198,
  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, chosenEncryptionAlgorithForCS_option),
  (intptr_t)"chosenEncryptionAlgorithForCS",

  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, chosenEncryptionAlgorithForPS) | 0x8000000,
  (intptr_t)asn1_type__local_3199,
  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, chosenEncryptionAlgorithForPS_option),
  (intptr_t)"chosenEncryptionAlgorithForPS",

  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, d_RNTI) | 0x8000000,
  (intptr_t)asn1_type__local_3200,
  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, d_RNTI_option),
  (intptr_t)"d-RNTI",

  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, targetCellId) | 0x8000000,
  (intptr_t)asn1_type__local_3201,
  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, targetCellId_option),
  (intptr_t)"targetCellId",

  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, rAB_TrCH_Mapping) | 0x8000000,
  (intptr_t)asn1_type_RAB_TrCH_Mapping,
  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, rAB_TrCH_Mapping_option),
  (intptr_t)"rAB-TrCH-Mapping",

  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_67,
  offsetof(SourceRNC_ToTargetRNC_TransparentContainer, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"SourceRNC-ToTargetRNC-TransparentContainer",
};

static const ASN1CType asn1_type__local_3202[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0x61,
};

static const ASN1CType asn1_type__local_3203[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x0,
  0x22,
};

const ASN1CType asn1_type_IRAT_Measurement_Configuration[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x10,
  4,
  sizeof(IRAT_Measurement_Configuration),

  offsetof(IRAT_Measurement_Configuration, rSRP) | 0x8000000,
  (intptr_t)asn1_type__local_3202,
  offsetof(IRAT_Measurement_Configuration, rSRP_option),
  (intptr_t)"rSRP",

  offsetof(IRAT_Measurement_Configuration, rSRQ) | 0x8000000,
  (intptr_t)asn1_type__local_3203,
  offsetof(IRAT_Measurement_Configuration, rSRQ_option),
  (intptr_t)"rSRQ",

  offsetof(IRAT_Measurement_Configuration, iRATmeasurementParameters) | 0x0,
  (intptr_t)asn1_type_IRATmeasurementParameters,
  0,
  (intptr_t)"iRATmeasurementParameters",

  offsetof(IRAT_Measurement_Configuration, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_68,
  offsetof(IRAT_Measurement_Configuration, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"IRAT-Measurement-Configuration",
};

static const ASN1CType asn1_type__local_3204[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x1,
  0x64,
};

const ASN1CType asn1_type_IRATmeasurementParameters[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100002,
  3,
  sizeof(IRATmeasurementParameters),

  offsetof(IRATmeasurementParameters, measurementDuration) | 0x0,
  (intptr_t)asn1_type__local_3204,
  0,
  (intptr_t)"measurementDuration",

  offsetof(IRATmeasurementParameters, eUTRANFrequencies) | 0x8000000,
  (intptr_t)asn1_type_EUTRANFrequencies,
  offsetof(IRATmeasurementParameters, eUTRANFrequencies_option),
  (intptr_t)"eUTRANFrequencies",

  offsetof(IRATmeasurementParameters, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_69,
  offsetof(IRATmeasurementParameters, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"IRATmeasurementParameters",
};

static const ASN1CType asn1_type__local_3205[] = {
  (ASN1_CTYPE_BOOLEAN << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
};

static const ASN1CType asn1_type__local_3206[] = {
  (ASN1_CTYPE_BOOLEAN << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
};

const ASN1CType asn1_type_RSRQ_Type[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x10,
  2,
  sizeof(RSRQ_Type),

  offsetof(RSRQ_Type, allSymbols) | 0x0,
  (intptr_t)asn1_type__local_3205,
  0,
  (intptr_t)"allSymbols",

  offsetof(RSRQ_Type, wideBand) | 0x0,
  (intptr_t)asn1_type__local_3206,
  0,
  (intptr_t)"wideBand",

  (intptr_t)"RSRQ-Type",
};

const ASN1CType asn1_type_RSRQ_Extension[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x7800000 | 0x2,
  0xffffffe2,
  0x2e,
  (intptr_t)"RSRQ-Extension",
};

const ASN1CType asn1_type_EUTRANFrequencies[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x8,
  sizeof(EUTRANFrequencies_1),
  (intptr_t)asn1_type_EUTRANFrequencies_1,
  0,
  (intptr_t)"EUTRANFrequencies",
};

static const ASN1CType asn1_type__local_3207[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xffff,
};

const ASN1CType asn1_type_EUTRANFrequencies_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x0 | 0x10,
  3,
  sizeof(EUTRANFrequencies_1),

  offsetof(EUTRANFrequencies_1, earfcn) | 0x0,
  (intptr_t)asn1_type__local_3207,
  0,
  (intptr_t)"earfcn",

  offsetof(EUTRANFrequencies_1, measBand) | 0x8000000,
  (intptr_t)asn1_type_MeasBand,
  offsetof(EUTRANFrequencies_1, measBand_option),
  (intptr_t)"measBand",

  offsetof(EUTRANFrequencies_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_70,
  offsetof(EUTRANFrequencies_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

const ASN1CType asn1_type_MeasBand[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  6,
  (intptr_t)"v6",
  (intptr_t)"v15",
  (intptr_t)"v25",
  (intptr_t)"v50",
  (intptr_t)"v75",
  (intptr_t)"v100",
  (intptr_t)"MeasBand",
};

const ASN1CType asn1_type_SubscriberProfileIDforRFP[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x1,
  0x100,
  (intptr_t)"SubscriberProfileIDforRFP",
};

const ASN1CType asn1_type_SourceStatisticsDescriptor[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10000a,
  2,
  0,
  (intptr_t)"speech",
  (intptr_t)"unknown",
  (intptr_t)"SourceStatisticsDescriptor",
};

const ASN1CType asn1_type_SupportedRAB_ParameterBitrateList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x2,
  sizeof(SupportedBitrate),
  (intptr_t)asn1_type_SupportedBitrate,
  0,
  (intptr_t)"SupportedRAB-ParameterBitrateList",
};

const ASN1CType asn1_type_SupportedBitrate[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x7800000 | 0x2,
  0x1,
  0x3b9aca00,
  (intptr_t)"SupportedBitrate",
};

static const ASN1CType asn1_type__local_3208[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

static const ASN1CType asn1_type__local_3209[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_TargetCellId,
};

const ASN1CType asn1_type_SourceUTRANCellID[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100000,
  3,
  sizeof(SourceUTRANCellID),

  offsetof(SourceUTRANCellID, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_3208,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(SourceUTRANCellID, uTRANcellID) | 0x0,
  (intptr_t)asn1_type__local_3209,
  0,
  (intptr_t)"uTRANcellID",

  offsetof(SourceUTRANCellID, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_71,
  offsetof(SourceUTRANCellID, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"SourceUTRANCellID",
};

const ASN1CType asn1_type_SRB_ID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x20,
  (intptr_t)"SRB-ID",
};

const ASN1CType asn1_type_SRB_TrCH_Mapping[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x8,
  sizeof(SRB_TrCH_MappingItem),
  (intptr_t)asn1_type_SRB_TrCH_MappingItem,
  0,
  (intptr_t)"SRB-TrCH-Mapping",
};

static const ASN1CType asn1_type__local_3210[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_TrCH_ID,
};

const ASN1CType asn1_type_SRB_TrCH_MappingItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(SRB_TrCH_MappingItem),

  offsetof(SRB_TrCH_MappingItem, sRB_ID) | 0x0,
  (intptr_t)asn1_type_SRB_ID,
  0,
  (intptr_t)"sRB-ID",

  offsetof(SRB_TrCH_MappingItem, trCH_ID) | 0x0,
  (intptr_t)asn1_type__local_3210,
  0,
  (intptr_t)"trCH-ID",

  offsetof(SRB_TrCH_MappingItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_72,
  offsetof(SRB_TrCH_MappingItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"SRB-TrCH-MappingItem",
};

const ASN1CType asn1_type_SRVCC_HO_Indication[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"ps-and-cs",
  (intptr_t)"cs-only",
  (intptr_t)"SRVCC-HO-Indication",
};

static const ASN1CType asn1_type__local_3211[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x80,
  0x80,
};

const ASN1CType asn1_type_SRVCC_Information[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(SRVCC_Information),

  offsetof(SRVCC_Information, nonce) | 0x0,
  (intptr_t)asn1_type__local_3211,
  0,
  (intptr_t)"nonce",

  offsetof(SRVCC_Information, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_73,
  offsetof(SRVCC_Information, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"SRVCC-Information",
};

const ASN1CType asn1_type_SRVCC_Operation_Possible[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  1,
  0,
  (intptr_t)"srvcc-possible",
  (intptr_t)"SRVCC-Operation-Possible",
};

const ASN1CType asn1_type_SubflowSDU_Size[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x0,
  0xfff,
  (intptr_t)"SubflowSDU-Size",
};

const ASN1CType asn1_type_TAC[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x2,
  0x2,
  (intptr_t)"TAC",
};

static const ASN1CType asn1_type__local_3212[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

const ASN1CType asn1_type_TAI[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100003,
  3,
  sizeof(TAI),

  offsetof(TAI, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_3212,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(TAI, tAC) | 0x0,
  (intptr_t)asn1_type_TAC,
  0,
  (intptr_t)"tAC",

  offsetof(TAI, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_74,
  offsetof(TAI, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"TAI",
};

const ASN1CType asn1_type_Target_ToSource_TransparentContainer[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"Target-ToSource-TransparentContainer",
};

const ASN1CType asn1_type_TargeteNodeB_ToSourceeNodeB_TransparentContainer[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"TargeteNodeB-ToSourceeNodeB-TransparentContainer",
};

const ASN1CType asn1_type_TargetBSS_ToSourceBSS_TransparentContainer[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"TargetBSS-ToSourceBSS-TransparentContainer",
};

const ASN1CType asn1_type_TargetCellId[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xfffffff,
  (intptr_t)"TargetCellId",
};

const ASN1CType asn1_type_TargetID[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  2,
  1,
  sizeof(TargetID),
  offsetof(TargetID, choice),
  offsetof(TargetID, u),
  (intptr_t)asn1_type_TargetRNC_ID,
  (intptr_t)"targetRNC-ID",
  (intptr_t)asn1_type_CGI,
  (intptr_t)"cGI",
  (intptr_t)asn1_type_TargetENB_ID,
  (intptr_t)"targeteNB-ID",
  (intptr_t)"TargetID",
};

static const ASN1CType asn1_type__local_3213[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

const ASN1CType asn1_type_TargetENB_ID[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100002,
  4,
  sizeof(TargetENB_ID),

  offsetof(TargetENB_ID, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_3213,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(TargetENB_ID, eNB_ID) | 0x0,
  (intptr_t)asn1_type_ENB_ID,
  0,
  (intptr_t)"eNB-ID",

  offsetof(TargetENB_ID, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_75,
  offsetof(TargetENB_ID, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  offsetof(TargetENB_ID, selectedTAI) | 0x0,
  (intptr_t)asn1_type_TAI,
  0,
  (intptr_t)"selectedTAI",

  (intptr_t)"TargetENB-ID",
};

static const ASN1CType asn1_type__local_3214[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_LAI,
};

static const ASN1CType asn1_type__local_3215[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_RAC,
};

static const ASN1CType asn1_type__local_3216[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_RNC_ID,
};

const ASN1CType asn1_type_TargetRNC_ID[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100000,
  4,
  sizeof(TargetRNC_ID),

  offsetof(TargetRNC_ID, lAI) | 0x0,
  (intptr_t)asn1_type__local_3214,
  0,
  (intptr_t)"lAI",

  offsetof(TargetRNC_ID, rAC) | 0x8000000,
  (intptr_t)asn1_type__local_3215,
  offsetof(TargetRNC_ID, rAC_option),
  (intptr_t)"rAC",

  offsetof(TargetRNC_ID, rNC_ID) | 0x0,
  (intptr_t)asn1_type__local_3216,
  0,
  (intptr_t)"rNC-ID",

  offsetof(TargetRNC_ID, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_76,
  offsetof(TargetRNC_ID, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"TargetRNC-ID",
};

static const ASN1CType asn1_type__local_3217[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RRC_Container,
};

static const ASN1CType asn1_type__local_3218[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_D_RNTI,
};

const ASN1CType asn1_type_TargetRNC_ToSourceRNC_TransparentContainer[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(TargetRNC_ToSourceRNC_TransparentContainer),

  offsetof(TargetRNC_ToSourceRNC_TransparentContainer, rRC_Container) | 0x0,
  (intptr_t)asn1_type__local_3217,
  0,
  (intptr_t)"rRC-Container",

  offsetof(TargetRNC_ToSourceRNC_TransparentContainer, d_RNTI) | 0x8000000,
  (intptr_t)asn1_type__local_3218,
  offsetof(TargetRNC_ToSourceRNC_TransparentContainer, d_RNTI_option),
  (intptr_t)"d-RNTI",

  offsetof(TargetRNC_ToSourceRNC_TransparentContainer, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_77,
  offsetof(TargetRNC_ToSourceRNC_TransparentContainer, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"TargetRNC-ToSourceRNC-TransparentContainer",
};

const ASN1CType asn1_type_TBCD_STRING[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"TBCD-STRING",
};

const ASN1CType asn1_type_TBCD_STRING_1[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x4,
  0x3,
  0x8,
};

const ASN1CType asn1_type_TBCD_STRING_2[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x4,
  0x3,
  0x3,
};

const ASN1CType asn1_type_TemporaryUE_ID[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  2,
  0,
  sizeof(TemporaryUE_ID),
  offsetof(TemporaryUE_ID, choice),
  offsetof(TemporaryUE_ID, u),
  (intptr_t)asn1_type_TMSI,
  (intptr_t)"tMSI",
  (intptr_t)asn1_type_P_TMSI,
  (intptr_t)"p-TMSI",
  (intptr_t)"TemporaryUE-ID",
};

const ASN1CType asn1_type_Time_UE_StayedInCell[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100002,
  0x0,
  0xfff,
  (intptr_t)"Time-UE-StayedInCell",
};

const ASN1CType asn1_type_Time_UE_StayedInCell_EnhancedGranularity[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0x9ff6,
  (intptr_t)"Time-UE-StayedInCell-EnhancedGranularity",
};

const ASN1CType asn1_type_TimeToMBMSDataTransfer[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x1,
  0x1,
  (intptr_t)"TimeToMBMSDataTransfer",
};

const ASN1CType asn1_type_TimingDifferenceULDL[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x1,
  0x1,
  (intptr_t)"TimingDifferenceULDL",
};

static const ASN1CType asn1_type__local_3219[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

static const ASN1CType asn1_type__local_3220[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x3,
  0x3,
};

const ASN1CType asn1_type_TMGI[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x10,
  3,
  sizeof(TMGI),

  offsetof(TMGI, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_3219,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(TMGI, serviceID) | 0x0,
  (intptr_t)asn1_type__local_3220,
  0,
  (intptr_t)"serviceID",

  offsetof(TMGI, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_78,
  offsetof(TMGI, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"TMGI",
};

const ASN1CType asn1_type_TMSI[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x4,
  0x4,
  (intptr_t)"TMSI",
};

const ASN1CType asn1_type_TraceDepth[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  3,
  0,
  (intptr_t)"minimum",
  (intptr_t)"medium",
  (intptr_t)"maximum",
  (intptr_t)"TraceDepth",
};

static const ASN1CType asn1_type__local_3221[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_TraceReference,
};

static const ASN1CType asn1_type__local_3222[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100001,
  (intptr_t)asn1_type_UE_ID,
};

static const ASN1CType asn1_type__local_3223[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_TracePropagationParameters,
};

const ASN1CType asn1_type_TraceInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100002,
  4,
  sizeof(TraceInformation),

  offsetof(TraceInformation, traceReference) | 0x0,
  (intptr_t)asn1_type__local_3221,
  0,
  (intptr_t)"traceReference",

  offsetof(TraceInformation, ue_identity) | 0x0,
  (intptr_t)asn1_type__local_3222,
  0,
  (intptr_t)"ue-identity",

  offsetof(TraceInformation, tracePropagationParameters) | 0x8000000,
  (intptr_t)asn1_type__local_3223,
  offsetof(TraceInformation, tracePropagationParameters_option),
  (intptr_t)"tracePropagationParameters",

  offsetof(TraceInformation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_79,
  offsetof(TraceInformation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"TraceInformation",
};

static const ASN1CType asn1_type__local_3224[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_TraceRecordingSessionReference,
};

const ASN1CType asn1_type_TracePropagationParameters[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  4,
  sizeof(TracePropagationParameters),

  offsetof(TracePropagationParameters, traceRecordingSessionReference) | 0x0,
  (intptr_t)asn1_type__local_3224,
  0,
  (intptr_t)"traceRecordingSessionReference",

  offsetof(TracePropagationParameters, traceDepth) | 0x0,
  (intptr_t)asn1_type_TraceDepth,
  0,
  (intptr_t)"traceDepth",

  offsetof(TracePropagationParameters, listOfInterfacesToTrace) | 0x8000000,
  (intptr_t)asn1_type_ListOfInterfacesToTrace,
  offsetof(TracePropagationParameters, listOfInterfacesToTrace_option),
  (intptr_t)"listOfInterfacesToTrace",

  offsetof(TracePropagationParameters, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_80,
  offsetof(TracePropagationParameters, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"TracePropagationParameters",
};

static const ASN1CType asn1_type__local_3225[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_TraceReference,
};

static const ASN1CType asn1_type__local_3226[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_TraceRecordingSessionReference,
};

const ASN1CType asn1_type_TraceRecordingSessionInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(TraceRecordingSessionInformation),

  offsetof(TraceRecordingSessionInformation, traceReference) | 0x0,
  (intptr_t)asn1_type__local_3225,
  0,
  (intptr_t)"traceReference",

  offsetof(TraceRecordingSessionInformation, traceRecordingSessionReference) | 0x0,
  (intptr_t)asn1_type__local_3226,
  0,
  (intptr_t)"traceRecordingSessionReference",

  offsetof(TraceRecordingSessionInformation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_81,
  offsetof(TraceRecordingSessionInformation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"TraceRecordingSessionInformation",
};

const ASN1CType asn1_type_TraceRecordingSessionReference[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xffff,
  (intptr_t)"TraceRecordingSessionReference",
};

const ASN1CType asn1_type_TraceReference[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x2,
  0x3,
  (intptr_t)"TraceReference",
};

const ASN1CType asn1_type_TraceType[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x1,
  0x1,
  (intptr_t)"TraceType",
};

const ASN1CType asn1_type_TrafficClass[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  4,
  0,
  (intptr_t)"conversational",
  (intptr_t)"streaming",
  (intptr_t)"interactive",
  (intptr_t)"background",
  (intptr_t)"TrafficClass",
};

const ASN1CType asn1_type_TrafficHandlingPriority[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100008,
  0x0,
  0xf,
  (intptr_t)"TrafficHandlingPriority",
};

const ASN1CType asn1_type_TransferDelay[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100007,
  0x0,
  0xffff,
  (intptr_t)"TransferDelay",
};

const ASN1CType asn1_type_UnsuccessfullyTransmittedDataVolume[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x0,
  0xffffffff,
  (intptr_t)"UnsuccessfullyTransmittedDataVolume",
};

const ASN1CType asn1_type_TransportLayerAddress[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x7800000 | 0x3,
  0x1,
  0xa0,
  (intptr_t)"TransportLayerAddress",
};

const ASN1CType asn1_type_TrCH_ID[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  4,
  sizeof(TrCH_ID),

  offsetof(TrCH_ID, dCH_ID) | 0x8000000,
  (intptr_t)asn1_type_DCH_ID,
  offsetof(TrCH_ID, dCH_ID_option),
  (intptr_t)"dCH-ID",

  offsetof(TrCH_ID, dSCH_ID) | 0x8000000,
  (intptr_t)asn1_type_DSCH_ID,
  offsetof(TrCH_ID, dSCH_ID_option),
  (intptr_t)"dSCH-ID",

  offsetof(TrCH_ID, uSCH_ID) | 0x8000000,
  (intptr_t)asn1_type_USCH_ID,
  offsetof(TrCH_ID, uSCH_ID_option),
  (intptr_t)"uSCH-ID",

  offsetof(TrCH_ID, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_82,
  offsetof(TrCH_ID, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"TrCH-ID",
};

const ASN1CType asn1_type_TrCH_ID_List[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x7,
  sizeof(TrCH_ID),
  (intptr_t)asn1_type_TrCH_ID,
  0,
  (intptr_t)"TrCH-ID-List",
};

const ASN1CType asn1_type_TriggerID[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x4,
  0x3,
  0x16,
  (intptr_t)"TriggerID",
};

static const ASN1CType asn1_type__local_3227[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_TransportLayerAddress,
};

const ASN1CType asn1_type_TunnelInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(TunnelInformation),

  offsetof(TunnelInformation, transportLayerAddress) | 0x0,
  (intptr_t)asn1_type__local_3227,
  0,
  (intptr_t)"transportLayerAddress",

  offsetof(TunnelInformation, uDP_Port_Number) | 0x8000000,
  (intptr_t)asn1_type_Port_Number,
  offsetof(TunnelInformation, uDP_Port_Number_option),
  (intptr_t)"uDP-Port-Number",

  offsetof(TunnelInformation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_83,
  offsetof(TunnelInformation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"TunnelInformation",
};

const ASN1CType asn1_type_TypeOfError[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"not-understood",
  (intptr_t)"missing",
  (intptr_t)"TypeOfError",
};

const ASN1CType asn1_type_UE_AggregateMaximumBitRate[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(UE_AggregateMaximumBitRate),

  offsetof(UE_AggregateMaximumBitRate, uE_AggregateMaximumBitRateDownlink) | 0x8000000,
  (intptr_t)asn1_type_UE_AggregateMaximumBitRateDownlink,
  offsetof(UE_AggregateMaximumBitRate, uE_AggregateMaximumBitRateDownlink_option),
  (intptr_t)"uE-AggregateMaximumBitRateDownlink",

  offsetof(UE_AggregateMaximumBitRate, uE_AggregateMaximumBitRateUplink) | 0x8000000,
  (intptr_t)asn1_type_UE_AggregateMaximumBitRateUplink,
  offsetof(UE_AggregateMaximumBitRate, uE_AggregateMaximumBitRateUplink_option),
  (intptr_t)"uE-AggregateMaximumBitRateUplink",

  (intptr_t)"UE-AggregateMaximumBitRate",
};

const ASN1CType asn1_type_UE_AggregateMaximumBitRateDownlink[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x3b9aca00,
  (intptr_t)"UE-AggregateMaximumBitRateDownlink",
};

const ASN1CType asn1_type_UE_AggregateMaximumBitRateUplink[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x3b9aca00,
  (intptr_t)"UE-AggregateMaximumBitRateUplink",
};

const ASN1CType asn1_type_UE_History_Information[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x4,
  0x0,
  (intptr_t)"UE-History-Information",
};

static const ASN1CType asn1_type__local_3228[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_IMSI,
};

static const ASN1CType asn1_type__local_3229[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_IMEI,
};

static const ASN1CType asn1_type__local_3230[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_IMEISV,
};

const ASN1CType asn1_type_UE_ID[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  2,
  1,
  sizeof(UE_ID),
  offsetof(UE_ID, choice),
  offsetof(UE_ID, u),
  (intptr_t)asn1_type__local_3228,
  (intptr_t)"imsi",
  (intptr_t)asn1_type__local_3229,
  (intptr_t)"imei",
  (intptr_t)asn1_type__local_3230,
  (intptr_t)"imeisv",
  (intptr_t)"UE-ID",
};

const ASN1CType asn1_type_UESBI_Iu[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(UESBI_Iu),

  offsetof(UESBI_Iu, uESBI_IuA) | 0x8000000,
  (intptr_t)asn1_type_UESBI_IuA,
  offsetof(UESBI_Iu, uESBI_IuA_option),
  (intptr_t)"uESBI-IuA",

  offsetof(UESBI_Iu, uESBI_IuB) | 0x8000000,
  (intptr_t)asn1_type_UESBI_IuB,
  offsetof(UESBI_Iu, uESBI_IuB_option),
  (intptr_t)"uESBI-IuB",

  offsetof(UESBI_Iu, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_84,
  offsetof(UESBI_Iu, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"UESBI-Iu",
};

const ASN1CType asn1_type_UESBI_IuA[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100000,
  0x1,
  0x80,
  (intptr_t)"UESBI-IuA",
};

const ASN1CType asn1_type_UESBI_IuB[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x1,
  0x80,
  (intptr_t)"UESBI-IuB",
};

const ASN1CType asn1_type_UL_GTP_PDU_SequenceNumber[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xffff,
  (intptr_t)"UL-GTP-PDU-SequenceNumber",
};

const ASN1CType asn1_type_UL_N_PDU_SequenceNumber[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0xffff,
  (intptr_t)"UL-N-PDU-SequenceNumber",
};

static const ASN1CType asn1_type__local_3231[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_FrameSequenceNumber,
};

static const ASN1CType asn1_type__local_3232[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_FrameSequenceNumber,
};

static const ASN1CType asn1_type__local_3233[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_PDUType14FrameSequenceNumber,
};

static const ASN1CType asn1_type__local_3234[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_PDUType14FrameSequenceNumber,
};

const ASN1CType asn1_type_UPInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100003,
  7,
  sizeof(UPInformation),

  offsetof(UPInformation, frameSeqNoUL) | 0x0,
  (intptr_t)asn1_type__local_3231,
  0,
  (intptr_t)"frameSeqNoUL",

  offsetof(UPInformation, frameSeqNoDL) | 0x0,
  (intptr_t)asn1_type__local_3232,
  0,
  (intptr_t)"frameSeqNoDL",

  offsetof(UPInformation, pdu14FrameSeqNoUL) | 0x0,
  (intptr_t)asn1_type__local_3233,
  0,
  (intptr_t)"pdu14FrameSeqNoUL",

  offsetof(UPInformation, pdu14FrameSeqNoDL) | 0x0,
  (intptr_t)asn1_type__local_3234,
  0,
  (intptr_t)"pdu14FrameSeqNoDL",

  offsetof(UPInformation, dataPDUType) | 0x0,
  (intptr_t)asn1_type_DataPDUType,
  0,
  (intptr_t)"dataPDUType",

  offsetof(UPInformation, upinitialisationFrame) | 0x0,
  (intptr_t)asn1_type_UPInitialisationFrame,
  0,
  (intptr_t)"upinitialisationFrame",

  offsetof(UPInformation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_85,
  offsetof(UPInformation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"UPInformation",
};

const ASN1CType asn1_type_UPInitialisationFrame[] = {
  (ASN1_CTYPE_OCTET_STRING << ASN1_CTYPE_SHIFT) | 0x5000000 | 0x100005,
  0x0,
  (intptr_t)"UPInitialisationFrame",
};

const ASN1CType asn1_type_UP_ModeVersions[] = {
  (ASN1_CTYPE_BIT_STRING << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100001,
  0x10,
  0x10,
  (intptr_t)"UP-ModeVersions",
};

const ASN1CType asn1_type_USCH_ID[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x100002,
  0x0,
  0xff,
  (intptr_t)"USCH-ID",
};

const ASN1CType asn1_type_UserPlaneMode[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  2,
  0,
  (intptr_t)"transparent-mode",
  (intptr_t)"support-mode-for-predefined-SDU-sizes",
  (intptr_t)"UserPlaneMode",
};

static const ASN1CType asn1_type__local_3235[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PLMNidentity,
};

static const ASN1CType asn1_type__local_3236[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_TargetCellId,
};

const ASN1CType asn1_type_UTRAN_CellID[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x10,
  3,
  sizeof(UTRAN_CellID),

  offsetof(UTRAN_CellID, pLMNidentity) | 0x0,
  (intptr_t)asn1_type__local_3235,
  0,
  (intptr_t)"pLMNidentity",

  offsetof(UTRAN_CellID, cellID) | 0x0,
  (intptr_t)asn1_type__local_3236,
  0,
  (intptr_t)"cellID",

  offsetof(UTRAN_CellID, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_86,
  offsetof(UTRAN_CellID, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"UTRAN-CellID",
};

const ASN1CType asn1_type_VelocityEstimate[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  4,
  0,
  sizeof(VelocityEstimate),
  offsetof(VelocityEstimate, choice),
  offsetof(VelocityEstimate, u),
  (intptr_t)asn1_type_HorizontalVelocity,
  (intptr_t)"horizontalVelocity",
  (intptr_t)asn1_type_HorizontalWithVerticalVelocity,
  (intptr_t)"horizontalWithVerticalVelocity",
  (intptr_t)asn1_type_HorizontalVelocityWithUncertainty,
  (intptr_t)"horizontalVelocityWithUncertainty",
  (intptr_t)asn1_type_HorizontalWithVerticalVelocityAndUncertainty,
  (intptr_t)"horizontalWithVeritcalVelocityAndUncertainty",
  (intptr_t)"VelocityEstimate",
};

const ASN1CType asn1_type_HorizontalVelocity[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100000,
  2,
  sizeof(HorizontalVelocity),

  offsetof(HorizontalVelocity, horizontalSpeedAndBearing) | 0x0,
  (intptr_t)asn1_type_HorizontalSpeedAndBearing,
  0,
  (intptr_t)"horizontalSpeedAndBearing",

  offsetof(HorizontalVelocity, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_87,
  offsetof(HorizontalVelocity, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"HorizontalVelocity",
};

const ASN1CType asn1_type_HorizontalWithVerticalVelocity[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100001,
  3,
  sizeof(HorizontalWithVerticalVelocity),

  offsetof(HorizontalWithVerticalVelocity, horizontalSpeedAndBearing) | 0x0,
  (intptr_t)asn1_type_HorizontalSpeedAndBearing,
  0,
  (intptr_t)"horizontalSpeedAndBearing",

  offsetof(HorizontalWithVerticalVelocity, veritcalVelocity) | 0x0,
  (intptr_t)asn1_type_VerticalVelocity,
  0,
  (intptr_t)"veritcalVelocity",

  offsetof(HorizontalWithVerticalVelocity, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_88,
  offsetof(HorizontalWithVerticalVelocity, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"HorizontalWithVerticalVelocity",
};

static const ASN1CType asn1_type__local_3237[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x0,
  0xff,
};

const ASN1CType asn1_type_HorizontalVelocityWithUncertainty[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100002,
  3,
  sizeof(HorizontalVelocityWithUncertainty),

  offsetof(HorizontalVelocityWithUncertainty, horizontalSpeedAndBearing) | 0x0,
  (intptr_t)asn1_type_HorizontalSpeedAndBearing,
  0,
  (intptr_t)"horizontalSpeedAndBearing",

  offsetof(HorizontalVelocityWithUncertainty, uncertaintySpeed) | 0x0,
  (intptr_t)asn1_type__local_3237,
  0,
  (intptr_t)"uncertaintySpeed",

  offsetof(HorizontalVelocityWithUncertainty, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_89,
  offsetof(HorizontalVelocityWithUncertainty, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"HorizontalVelocityWithUncertainty",
};

static const ASN1CType asn1_type__local_3238[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100002,
  0x0,
  0xff,
};

static const ASN1CType asn1_type__local_3239[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100003,
  0x0,
  0xff,
};

const ASN1CType asn1_type_HorizontalWithVerticalVelocityAndUncertainty[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100003,
  5,
  sizeof(HorizontalWithVerticalVelocityAndUncertainty),

  offsetof(HorizontalWithVerticalVelocityAndUncertainty, horizontalSpeedAndBearing) | 0x0,
  (intptr_t)asn1_type_HorizontalSpeedAndBearing,
  0,
  (intptr_t)"horizontalSpeedAndBearing",

  offsetof(HorizontalWithVerticalVelocityAndUncertainty, veritcalVelocity) | 0x0,
  (intptr_t)asn1_type_VerticalVelocity,
  0,
  (intptr_t)"veritcalVelocity",

  offsetof(HorizontalWithVerticalVelocityAndUncertainty, horizontalUncertaintySpeed) | 0x0,
  (intptr_t)asn1_type__local_3238,
  0,
  (intptr_t)"horizontalUncertaintySpeed",

  offsetof(HorizontalWithVerticalVelocityAndUncertainty, verticalUncertaintySpeed) | 0x0,
  (intptr_t)asn1_type__local_3239,
  0,
  (intptr_t)"verticalUncertaintySpeed",

  offsetof(HorizontalWithVerticalVelocityAndUncertainty, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_90,
  offsetof(HorizontalWithVerticalVelocityAndUncertainty, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"HorizontalWithVerticalVelocityAndUncertainty",
};

static const ASN1CType asn1_type__local_3240[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0x167,
};

static const ASN1CType asn1_type__local_3241[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100001,
  0x0,
  0x7ff,
};

const ASN1CType asn1_type_HorizontalSpeedAndBearing[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100000,
  2,
  sizeof(HorizontalSpeedAndBearing),

  offsetof(HorizontalSpeedAndBearing, bearing) | 0x0,
  (intptr_t)asn1_type__local_3240,
  0,
  (intptr_t)"bearing",

  offsetof(HorizontalSpeedAndBearing, horizontalSpeed) | 0x0,
  (intptr_t)asn1_type__local_3241,
  0,
  (intptr_t)"horizontalSpeed",

  (intptr_t)"HorizontalSpeedAndBearing",
};

static const ASN1CType asn1_type__local_3242[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x1800000 | 0x100000,
  0x0,
  0xff,
};

const ASN1CType asn1_type_VerticalVelocity[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  2,
  sizeof(VerticalVelocity),

  offsetof(VerticalVelocity, veritcalSpeed) | 0x0,
  (intptr_t)asn1_type__local_3242,
  0,
  (intptr_t)"veritcalSpeed",

  offsetof(VerticalVelocity, veritcalSpeedDirection) | 0x0,
  (intptr_t)asn1_type_VerticalSpeedDirection,
  0,
  (intptr_t)"veritcalSpeedDirection",

  (intptr_t)"VerticalVelocity",
};

const ASN1CType asn1_type_VerticalSpeedDirection[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  2,
  (intptr_t)"upward",
  (intptr_t)"downward",
  (intptr_t)"VerticalSpeedDirection",
};

const ASN1CType asn1_type_VerticalAccuracyCode[] = {
  (ASN1_CTYPE_INTEGER << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x2,
  0x0,
  0x7f,
  (intptr_t)"VerticalAccuracyCode",
};

const ASN1CType asn1_type_VoiceSupportMatchIndicator[] = {
  (ASN1_CTYPE_ENUMERATED << ASN1_CTYPE_SHIFT) | 0x6000000 | 0xa,
  2,
  0,
  (intptr_t)"supported",
  (intptr_t)"not-supported",
  (intptr_t)"VoiceSupportMatchIndicator",
};

const ASN1CType asn1_type_Iu_ReleaseCommand[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(Iu_ReleaseCommand),

  offsetof(Iu_ReleaseCommand, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_1,
  0,
  (intptr_t)"protocolIEs",

  offsetof(Iu_ReleaseCommand, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_91,
  offsetof(Iu_ReleaseCommand, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"Iu-ReleaseCommand",
};

const ASN1CType asn1_type_Iu_ReleaseComplete[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(Iu_ReleaseComplete),

  offsetof(Iu_ReleaseComplete, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_2,
  0,
  (intptr_t)"protocolIEs",

  offsetof(Iu_ReleaseComplete, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_92,
  offsetof(Iu_ReleaseComplete, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"Iu-ReleaseComplete",
};

static const ASN1CType asn1_type__local_3243[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3244[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_DataVolumeList,
};

const ASN1CType asn1_type_RAB_DataVolumeReportItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(RAB_DataVolumeReportItem),

  offsetof(RAB_DataVolumeReportItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3243,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_DataVolumeReportItem, dl_UnsuccessfullyTransmittedDataVolume) | 0x8000000,
  (intptr_t)asn1_type__local_3244,
  offsetof(RAB_DataVolumeReportItem, dl_UnsuccessfullyTransmittedDataVolume_option),
  (intptr_t)"dl-UnsuccessfullyTransmittedDataVolume",

  offsetof(RAB_DataVolumeReportItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_93,
  offsetof(RAB_DataVolumeReportItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-DataVolumeReportItem",
};

static const ASN1CType asn1_type__local_3245[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3246[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_DL_GTP_PDU_SequenceNumber,
};

static const ASN1CType asn1_type__local_3247[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_UL_GTP_PDU_SequenceNumber,
};

const ASN1CType asn1_type_RAB_ReleasedItem_IuRelComp[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  4,
  sizeof(RAB_ReleasedItem_IuRelComp),

  offsetof(RAB_ReleasedItem_IuRelComp, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3245,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_ReleasedItem_IuRelComp, dL_GTP_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3246,
  offsetof(RAB_ReleasedItem_IuRelComp, dL_GTP_PDU_SequenceNumber_option),
  (intptr_t)"dL-GTP-PDU-SequenceNumber",

  offsetof(RAB_ReleasedItem_IuRelComp, uL_GTP_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3247,
  offsetof(RAB_ReleasedItem_IuRelComp, uL_GTP_PDU_SequenceNumber_option),
  (intptr_t)"uL-GTP-PDU-SequenceNumber",

  offsetof(RAB_ReleasedItem_IuRelComp, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_94,
  offsetof(RAB_ReleasedItem_IuRelComp, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-ReleasedItem-IuRelComp",
};

const ASN1CType asn1_type_RelocationRequired[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RelocationRequired),

  offsetof(RelocationRequired, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_5,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RelocationRequired, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_95,
  offsetof(RelocationRequired, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RelocationRequired",
};

const ASN1CType asn1_type_RelocationCommand[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RelocationCommand),

  offsetof(RelocationCommand, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_6,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RelocationCommand, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_96,
  offsetof(RelocationCommand, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RelocationCommand",
};

static const ASN1CType asn1_type__local_3248[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

const ASN1CType asn1_type_RAB_RelocationReleaseItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RAB_RelocationReleaseItem),

  offsetof(RAB_RelocationReleaseItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3248,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_RelocationReleaseItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_97,
  offsetof(RAB_RelocationReleaseItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-RelocationReleaseItem",
};

static const ASN1CType asn1_type__local_3249[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3250[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_TransportLayerAddress,
};

static const ASN1CType asn1_type__local_3251[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100002,
  (intptr_t)asn1_type_IuTransportAssociation,
};

const ASN1CType asn1_type_RAB_DataForwardingItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  4,
  sizeof(RAB_DataForwardingItem),

  offsetof(RAB_DataForwardingItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3249,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_DataForwardingItem, transportLayerAddress) | 0x0,
  (intptr_t)asn1_type__local_3250,
  0,
  (intptr_t)"transportLayerAddress",

  offsetof(RAB_DataForwardingItem, iuTransportAssociation) | 0x0,
  (intptr_t)asn1_type__local_3251,
  0,
  (intptr_t)"iuTransportAssociation",

  offsetof(RAB_DataForwardingItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_98,
  offsetof(RAB_DataForwardingItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-DataForwardingItem",
};

const ASN1CType asn1_type_RelocationPreparationFailure[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RelocationPreparationFailure),

  offsetof(RelocationPreparationFailure, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_9,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RelocationPreparationFailure, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_99,
  offsetof(RelocationPreparationFailure, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RelocationPreparationFailure",
};

const ASN1CType asn1_type_RelocationRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RelocationRequest),

  offsetof(RelocationRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_10,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RelocationRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_100,
  offsetof(RelocationRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RelocationRequest",
};

static const ASN1CType asn1_type__local_3252[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3253[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_RAB_Parameters,
};

static const ASN1CType asn1_type__local_3254[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_DataVolumeReportingIndication,
};

static const ASN1CType asn1_type__local_3255[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100004,
  (intptr_t)asn1_type_PDP_TypeInformation,
};

static const ASN1CType asn1_type__local_3256[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100005,
  (intptr_t)asn1_type_UserPlaneInformation,
};

static const ASN1CType asn1_type__local_3257[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100006,
  (intptr_t)asn1_type_TransportLayerAddress,
};

static const ASN1CType asn1_type__local_3258[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100007,
  (intptr_t)asn1_type_IuTransportAssociation,
};

static const ASN1CType asn1_type__local_3259[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100008,
  (intptr_t)asn1_type_Service_Handover,
};

const ASN1CType asn1_type_RAB_SetupItem_RelocReq[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  10,
  sizeof(RAB_SetupItem_RelocReq),

  offsetof(RAB_SetupItem_RelocReq, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3252,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_SetupItem_RelocReq, nAS_SynchronisationIndicator) | 0x8000000,
  (intptr_t)asn1_type_NAS_SynchronisationIndicator,
  offsetof(RAB_SetupItem_RelocReq, nAS_SynchronisationIndicator_option),
  (intptr_t)"nAS-SynchronisationIndicator",

  offsetof(RAB_SetupItem_RelocReq, rAB_Parameters) | 0x0,
  (intptr_t)asn1_type__local_3253,
  0,
  (intptr_t)"rAB-Parameters",

  offsetof(RAB_SetupItem_RelocReq, dataVolumeReportingIndication) | 0x8000000,
  (intptr_t)asn1_type__local_3254,
  offsetof(RAB_SetupItem_RelocReq, dataVolumeReportingIndication_option),
  (intptr_t)"dataVolumeReportingIndication",

  offsetof(RAB_SetupItem_RelocReq, pDP_TypeInformation) | 0x8000000,
  (intptr_t)asn1_type__local_3255,
  offsetof(RAB_SetupItem_RelocReq, pDP_TypeInformation_option),
  (intptr_t)"pDP-TypeInformation",

  offsetof(RAB_SetupItem_RelocReq, userPlaneInformation) | 0x0,
  (intptr_t)asn1_type__local_3256,
  0,
  (intptr_t)"userPlaneInformation",

  offsetof(RAB_SetupItem_RelocReq, transportLayerAddress) | 0x0,
  (intptr_t)asn1_type__local_3257,
  0,
  (intptr_t)"transportLayerAddress",

  offsetof(RAB_SetupItem_RelocReq, iuTransportAssociation) | 0x0,
  (intptr_t)asn1_type__local_3258,
  0,
  (intptr_t)"iuTransportAssociation",

  offsetof(RAB_SetupItem_RelocReq, service_Handover) | 0x8000000,
  (intptr_t)asn1_type__local_3259,
  offsetof(RAB_SetupItem_RelocReq, service_Handover_option),
  (intptr_t)"service-Handover",

  offsetof(RAB_SetupItem_RelocReq, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_101,
  offsetof(RAB_SetupItem_RelocReq, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-SetupItem-RelocReq",
};

const ASN1CType asn1_type_UserPlaneInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(UserPlaneInformation),

  offsetof(UserPlaneInformation, userPlaneMode) | 0x0,
  (intptr_t)asn1_type_UserPlaneMode,
  0,
  (intptr_t)"userPlaneMode",

  offsetof(UserPlaneInformation, uP_ModeVersions) | 0x0,
  (intptr_t)asn1_type_UP_ModeVersions,
  0,
  (intptr_t)"uP-ModeVersions",

  offsetof(UserPlaneInformation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_102,
  offsetof(UserPlaneInformation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"UserPlaneInformation",
};

static const ASN1CType asn1_type__local_3260[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_JoinedMBMSBearerService_IEs,
};

const ASN1CType asn1_type_CNMBMSLinkingInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(CNMBMSLinkingInformation),

  offsetof(CNMBMSLinkingInformation, joinedMBMSBearerService_IEs) | 0x0,
  (intptr_t)asn1_type__local_3260,
  0,
  (intptr_t)"joinedMBMSBearerService-IEs",

  offsetof(CNMBMSLinkingInformation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_103,
  offsetof(CNMBMSLinkingInformation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"CNMBMSLinkingInformation",
};

const ASN1CType asn1_type_JoinedMBMSBearerService_IEs[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x80,
  sizeof(JoinedMBMSBearerService_IEs_1),
  (intptr_t)asn1_type_JoinedMBMSBearerService_IEs_1,
  0,
  (intptr_t)"JoinedMBMSBearerService-IEs",
};

static const ASN1CType asn1_type__local_3261[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_TMGI,
};

const ASN1CType asn1_type_JoinedMBMSBearerService_IEs_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  3,
  sizeof(JoinedMBMSBearerService_IEs_1),

  offsetof(JoinedMBMSBearerService_IEs_1, tMGI) | 0x0,
  (intptr_t)asn1_type__local_3261,
  0,
  (intptr_t)"tMGI",

  offsetof(JoinedMBMSBearerService_IEs_1, mBMS_PTP_RAB_ID) | 0x0,
  (intptr_t)asn1_type_MBMS_PTP_RAB_ID,
  0,
  (intptr_t)"mBMS-PTP-RAB-ID",

  offsetof(JoinedMBMSBearerService_IEs_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_104,
  offsetof(JoinedMBMSBearerService_IEs_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

const ASN1CType asn1_type_RelocationRequestAcknowledge[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RelocationRequestAcknowledge),

  offsetof(RelocationRequestAcknowledge, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_12,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RelocationRequestAcknowledge, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_105,
  offsetof(RelocationRequestAcknowledge, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RelocationRequestAcknowledge",
};

static const ASN1CType asn1_type__local_3262[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3263[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_TransportLayerAddress,
};

static const ASN1CType asn1_type__local_3264[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100002,
  (intptr_t)asn1_type_IuTransportAssociation,
};

const ASN1CType asn1_type_RAB_SetupItem_RelocReqAck[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  4,
  sizeof(RAB_SetupItem_RelocReqAck),

  offsetof(RAB_SetupItem_RelocReqAck, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3262,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_SetupItem_RelocReqAck, transportLayerAddress) | 0x8000000,
  (intptr_t)asn1_type__local_3263,
  offsetof(RAB_SetupItem_RelocReqAck, transportLayerAddress_option),
  (intptr_t)"transportLayerAddress",

  offsetof(RAB_SetupItem_RelocReqAck, iuTransportAssociation) | 0x8000000,
  (intptr_t)asn1_type__local_3264,
  offsetof(RAB_SetupItem_RelocReqAck, iuTransportAssociation_option),
  (intptr_t)"iuTransportAssociation",

  offsetof(RAB_SetupItem_RelocReqAck, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_106,
  offsetof(RAB_SetupItem_RelocReqAck, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-SetupItem-RelocReqAck",
};

static const ASN1CType asn1_type__local_3265[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3266[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100001,
  (intptr_t)asn1_type_Cause,
};

const ASN1CType asn1_type_RAB_FailedItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(RAB_FailedItem),

  offsetof(RAB_FailedItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3265,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_FailedItem, cause) | 0x0,
  (intptr_t)asn1_type__local_3266,
  0,
  (intptr_t)"cause",

  offsetof(RAB_FailedItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_107,
  offsetof(RAB_FailedItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-FailedItem",
};

const ASN1CType asn1_type_RelocationFailure[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RelocationFailure),

  offsetof(RelocationFailure, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_15,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RelocationFailure, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_108,
  offsetof(RelocationFailure, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RelocationFailure",
};

const ASN1CType asn1_type_RelocationCancel[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RelocationCancel),

  offsetof(RelocationCancel, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_16,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RelocationCancel, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_109,
  offsetof(RelocationCancel, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RelocationCancel",
};

const ASN1CType asn1_type_RelocationCancelAcknowledge[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RelocationCancelAcknowledge),

  offsetof(RelocationCancelAcknowledge, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_17,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RelocationCancelAcknowledge, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_110,
  offsetof(RelocationCancelAcknowledge, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RelocationCancelAcknowledge",
};

const ASN1CType asn1_type_SRNS_ContextRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(SRNS_ContextRequest),

  offsetof(SRNS_ContextRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_18,
  0,
  (intptr_t)"protocolIEs",

  offsetof(SRNS_ContextRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_111,
  offsetof(SRNS_ContextRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"SRNS-ContextRequest",
};

static const ASN1CType asn1_type__local_3267[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

const ASN1CType asn1_type_RAB_DataForwardingItem_SRNS_CtxReq[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RAB_DataForwardingItem_SRNS_CtxReq),

  offsetof(RAB_DataForwardingItem_SRNS_CtxReq, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3267,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_DataForwardingItem_SRNS_CtxReq, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_112,
  offsetof(RAB_DataForwardingItem_SRNS_CtxReq, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-DataForwardingItem-SRNS-CtxReq",
};

const ASN1CType asn1_type_SRNS_ContextResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(SRNS_ContextResponse),

  offsetof(SRNS_ContextResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_20,
  0,
  (intptr_t)"protocolIEs",

  offsetof(SRNS_ContextResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_113,
  offsetof(SRNS_ContextResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"SRNS-ContextResponse",
};

static const ASN1CType asn1_type__local_3268[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3269[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_DL_GTP_PDU_SequenceNumber,
};

static const ASN1CType asn1_type__local_3270[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_UL_GTP_PDU_SequenceNumber,
};

static const ASN1CType asn1_type__local_3271[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_DL_N_PDU_SequenceNumber,
};

static const ASN1CType asn1_type__local_3272[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100004,
  (intptr_t)asn1_type_UL_N_PDU_SequenceNumber,
};

const ASN1CType asn1_type_RAB_ContextItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  6,
  sizeof(RAB_ContextItem),

  offsetof(RAB_ContextItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3268,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_ContextItem, dl_GTP_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3269,
  offsetof(RAB_ContextItem, dl_GTP_PDU_SequenceNumber_option),
  (intptr_t)"dl-GTP-PDU-SequenceNumber",

  offsetof(RAB_ContextItem, ul_GTP_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3270,
  offsetof(RAB_ContextItem, ul_GTP_PDU_SequenceNumber_option),
  (intptr_t)"ul-GTP-PDU-SequenceNumber",

  offsetof(RAB_ContextItem, dl_N_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3271,
  offsetof(RAB_ContextItem, dl_N_PDU_SequenceNumber_option),
  (intptr_t)"dl-N-PDU-SequenceNumber",

  offsetof(RAB_ContextItem, ul_N_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3272,
  offsetof(RAB_ContextItem, ul_N_PDU_SequenceNumber_option),
  (intptr_t)"ul-N-PDU-SequenceNumber",

  offsetof(RAB_ContextItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_114,
  offsetof(RAB_ContextItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-ContextItem",
};

static const ASN1CType asn1_type__local_3273[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3274[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100001,
  (intptr_t)asn1_type_Cause,
};

const ASN1CType asn1_type_RABs_ContextFailedtoTransferItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(RABs_ContextFailedtoTransferItem),

  offsetof(RABs_ContextFailedtoTransferItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3273,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RABs_ContextFailedtoTransferItem, cause) | 0x0,
  (intptr_t)asn1_type__local_3274,
  0,
  (intptr_t)"cause",

  offsetof(RABs_ContextFailedtoTransferItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_115,
  offsetof(RABs_ContextFailedtoTransferItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RABs-ContextFailedtoTransferItem",
};

const ASN1CType asn1_type_SecurityModeCommand[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(SecurityModeCommand),

  offsetof(SecurityModeCommand, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_23,
  0,
  (intptr_t)"protocolIEs",

  offsetof(SecurityModeCommand, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_116,
  offsetof(SecurityModeCommand, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"SecurityModeCommand",
};

const ASN1CType asn1_type_SecurityModeComplete[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(SecurityModeComplete),

  offsetof(SecurityModeComplete, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_24,
  0,
  (intptr_t)"protocolIEs",

  offsetof(SecurityModeComplete, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_117,
  offsetof(SecurityModeComplete, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"SecurityModeComplete",
};

const ASN1CType asn1_type_SecurityModeReject[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(SecurityModeReject),

  offsetof(SecurityModeReject, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_25,
  0,
  (intptr_t)"protocolIEs",

  offsetof(SecurityModeReject, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_118,
  offsetof(SecurityModeReject, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"SecurityModeReject",
};

const ASN1CType asn1_type_DataVolumeReportRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(DataVolumeReportRequest),

  offsetof(DataVolumeReportRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_26,
  0,
  (intptr_t)"protocolIEs",

  offsetof(DataVolumeReportRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_119,
  offsetof(DataVolumeReportRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"DataVolumeReportRequest",
};

static const ASN1CType asn1_type__local_3275[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

const ASN1CType asn1_type_RAB_DataVolumeReportRequestItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RAB_DataVolumeReportRequestItem),

  offsetof(RAB_DataVolumeReportRequestItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3275,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_DataVolumeReportRequestItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_120,
  offsetof(RAB_DataVolumeReportRequestItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-DataVolumeReportRequestItem",
};

const ASN1CType asn1_type_DataVolumeReport[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(DataVolumeReport),

  offsetof(DataVolumeReport, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_28,
  0,
  (intptr_t)"protocolIEs",

  offsetof(DataVolumeReport, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_121,
  offsetof(DataVolumeReport, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"DataVolumeReport",
};

static const ASN1CType asn1_type__local_3276[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3277[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100001,
  (intptr_t)asn1_type_Cause,
};

const ASN1CType asn1_type_RABs_failed_to_reportItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(RABs_failed_to_reportItem),

  offsetof(RABs_failed_to_reportItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3276,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RABs_failed_to_reportItem, cause) | 0x0,
  (intptr_t)asn1_type__local_3277,
  0,
  (intptr_t)"cause",

  offsetof(RABs_failed_to_reportItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_122,
  offsetof(RABs_failed_to_reportItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RABs-failed-to-reportItem",
};

const ASN1CType asn1_type_Reset[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(Reset),

  offsetof(Reset, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_30,
  0,
  (intptr_t)"protocolIEs",

  offsetof(Reset, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_123,
  offsetof(Reset, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"Reset",
};

const ASN1CType asn1_type_ResetAcknowledge[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(ResetAcknowledge),

  offsetof(ResetAcknowledge, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_31,
  0,
  (intptr_t)"protocolIEs",

  offsetof(ResetAcknowledge, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_124,
  offsetof(ResetAcknowledge, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"ResetAcknowledge",
};

const ASN1CType asn1_type_ResetResource[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(ResetResource),

  offsetof(ResetResource, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_32,
  0,
  (intptr_t)"protocolIEs",

  offsetof(ResetResource, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_125,
  offsetof(ResetResource, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"ResetResource",
};

static const ASN1CType asn1_type__local_3278[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_IuSignallingConnectionIdentifier,
};

const ASN1CType asn1_type_ResetResourceItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(ResetResourceItem),

  offsetof(ResetResourceItem, iuSigConId) | 0x0,
  (intptr_t)asn1_type__local_3278,
  0,
  (intptr_t)"iuSigConId",

  offsetof(ResetResourceItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_126,
  offsetof(ResetResourceItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"ResetResourceItem",
};

const ASN1CType asn1_type_ResetResourceAcknowledge[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(ResetResourceAcknowledge),

  offsetof(ResetResourceAcknowledge, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_34,
  0,
  (intptr_t)"protocolIEs",

  offsetof(ResetResourceAcknowledge, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_127,
  offsetof(ResetResourceAcknowledge, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"ResetResourceAcknowledge",
};

static const ASN1CType asn1_type__local_3279[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_IuSignallingConnectionIdentifier,
};

const ASN1CType asn1_type_ResetResourceAckItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(ResetResourceAckItem),

  offsetof(ResetResourceAckItem, iuSigConId) | 0x0,
  (intptr_t)asn1_type__local_3279,
  0,
  (intptr_t)"iuSigConId",

  offsetof(ResetResourceAckItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_128,
  offsetof(ResetResourceAckItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"ResetResourceAckItem",
};

const ASN1CType asn1_type_RAB_ReleaseRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RAB_ReleaseRequest),

  offsetof(RAB_ReleaseRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_36,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RAB_ReleaseRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_129,
  offsetof(RAB_ReleaseRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RAB-ReleaseRequest",
};

static const ASN1CType asn1_type__local_3280[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3281[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100001,
  (intptr_t)asn1_type_Cause,
};

const ASN1CType asn1_type_RAB_ReleaseItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(RAB_ReleaseItem),

  offsetof(RAB_ReleaseItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3280,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_ReleaseItem, cause) | 0x0,
  (intptr_t)asn1_type__local_3281,
  0,
  (intptr_t)"cause",

  offsetof(RAB_ReleaseItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_130,
  offsetof(RAB_ReleaseItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-ReleaseItem",
};

const ASN1CType asn1_type_Iu_ReleaseRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(Iu_ReleaseRequest),

  offsetof(Iu_ReleaseRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_38,
  0,
  (intptr_t)"protocolIEs",

  offsetof(Iu_ReleaseRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_131,
  offsetof(Iu_ReleaseRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"Iu-ReleaseRequest",
};

const ASN1CType asn1_type_RelocationDetect[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RelocationDetect),

  offsetof(RelocationDetect, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_39,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RelocationDetect, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_132,
  offsetof(RelocationDetect, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RelocationDetect",
};

const ASN1CType asn1_type_RelocationComplete[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RelocationComplete),

  offsetof(RelocationComplete, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_40,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RelocationComplete, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_133,
  offsetof(RelocationComplete, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RelocationComplete",
};

const ASN1CType asn1_type_EnhancedRelocationCompleteRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(EnhancedRelocationCompleteRequest),

  offsetof(EnhancedRelocationCompleteRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_41,
  0,
  (intptr_t)"protocolIEs",

  offsetof(EnhancedRelocationCompleteRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_134,
  offsetof(EnhancedRelocationCompleteRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"EnhancedRelocationCompleteRequest",
};

static const ASN1CType asn1_type__local_3282[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3283[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_TransportLayerAddress,
};

static const ASN1CType asn1_type__local_3284[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100002,
  (intptr_t)asn1_type_IuTransportAssociation,
};

static const ASN1CType asn1_type__local_3285[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_Ass_RAB_Parameters,
};

const ASN1CType asn1_type_RAB_SetupItem_EnhancedRelocCompleteReq[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  5,
  sizeof(RAB_SetupItem_EnhancedRelocCompleteReq),

  offsetof(RAB_SetupItem_EnhancedRelocCompleteReq, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3282,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_SetupItem_EnhancedRelocCompleteReq, transportLayerAddressReq1) | 0x8000000,
  (intptr_t)asn1_type__local_3283,
  offsetof(RAB_SetupItem_EnhancedRelocCompleteReq, transportLayerAddressReq1_option),
  (intptr_t)"transportLayerAddressReq1",

  offsetof(RAB_SetupItem_EnhancedRelocCompleteReq, iuTransportAssociationReq1) | 0x8000000,
  (intptr_t)asn1_type__local_3284,
  offsetof(RAB_SetupItem_EnhancedRelocCompleteReq, iuTransportAssociationReq1_option),
  (intptr_t)"iuTransportAssociationReq1",

  offsetof(RAB_SetupItem_EnhancedRelocCompleteReq, ass_RAB_Parameters) | 0x8000000,
  (intptr_t)asn1_type__local_3285,
  offsetof(RAB_SetupItem_EnhancedRelocCompleteReq, ass_RAB_Parameters_option),
  (intptr_t)"ass-RAB-Parameters",

  offsetof(RAB_SetupItem_EnhancedRelocCompleteReq, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_135,
  offsetof(RAB_SetupItem_EnhancedRelocCompleteReq, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-SetupItem-EnhancedRelocCompleteReq",
};

const ASN1CType asn1_type_EnhancedRelocationCompleteResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(EnhancedRelocationCompleteResponse),

  offsetof(EnhancedRelocationCompleteResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_43,
  0,
  (intptr_t)"protocolIEs",

  offsetof(EnhancedRelocationCompleteResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_136,
  offsetof(EnhancedRelocationCompleteResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"EnhancedRelocationCompleteResponse",
};

static const ASN1CType asn1_type__local_3286[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3287[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_RAB_Parameters,
};

static const ASN1CType asn1_type__local_3288[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_UserPlaneInformation,
};

static const ASN1CType asn1_type__local_3289[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_TransportLayerAddress,
};

static const ASN1CType asn1_type__local_3290[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100004,
  (intptr_t)asn1_type_IuTransportAssociation,
};

static const ASN1CType asn1_type__local_3291[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100005,
  (intptr_t)asn1_type_RAB_ToBeReleasedList_EnhancedRelocCompleteRes,
};

const ASN1CType asn1_type_RAB_SetupItem_EnhancedRelocCompleteRes[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  7,
  sizeof(RAB_SetupItem_EnhancedRelocCompleteRes),

  offsetof(RAB_SetupItem_EnhancedRelocCompleteRes, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3286,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_SetupItem_EnhancedRelocCompleteRes, rAB_Parameters) | 0x8000000,
  (intptr_t)asn1_type__local_3287,
  offsetof(RAB_SetupItem_EnhancedRelocCompleteRes, rAB_Parameters_option),
  (intptr_t)"rAB-Parameters",

  offsetof(RAB_SetupItem_EnhancedRelocCompleteRes, userPlaneInformation) | 0x0,
  (intptr_t)asn1_type__local_3288,
  0,
  (intptr_t)"userPlaneInformation",

  offsetof(RAB_SetupItem_EnhancedRelocCompleteRes, transportLayerAddressRes1) | 0x8000000,
  (intptr_t)asn1_type__local_3289,
  offsetof(RAB_SetupItem_EnhancedRelocCompleteRes, transportLayerAddressRes1_option),
  (intptr_t)"transportLayerAddressRes1",

  offsetof(RAB_SetupItem_EnhancedRelocCompleteRes, iuTransportAssociationRes1) | 0x8000000,
  (intptr_t)asn1_type__local_3290,
  offsetof(RAB_SetupItem_EnhancedRelocCompleteRes, iuTransportAssociationRes1_option),
  (intptr_t)"iuTransportAssociationRes1",

  offsetof(RAB_SetupItem_EnhancedRelocCompleteRes, rab2beReleasedList) | 0x8000000,
  (intptr_t)asn1_type__local_3291,
  offsetof(RAB_SetupItem_EnhancedRelocCompleteRes, rab2beReleasedList_option),
  (intptr_t)"rab2beReleasedList",

  offsetof(RAB_SetupItem_EnhancedRelocCompleteRes, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_137,
  offsetof(RAB_SetupItem_EnhancedRelocCompleteRes, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-SetupItem-EnhancedRelocCompleteRes",
};

static const ASN1CType asn1_type__local_3292[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3293[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100001,
  (intptr_t)asn1_type_Cause,
};

const ASN1CType asn1_type_RAB_ToBeReleasedItem_EnhancedRelocCompleteRes[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(RAB_ToBeReleasedItem_EnhancedRelocCompleteRes),

  offsetof(RAB_ToBeReleasedItem_EnhancedRelocCompleteRes, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3292,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_ToBeReleasedItem_EnhancedRelocCompleteRes, cause) | 0x0,
  (intptr_t)asn1_type__local_3293,
  0,
  (intptr_t)"cause",

  offsetof(RAB_ToBeReleasedItem_EnhancedRelocCompleteRes, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_138,
  offsetof(RAB_ToBeReleasedItem_EnhancedRelocCompleteRes, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-ToBeReleasedItem-EnhancedRelocCompleteRes",
};

const ASN1CType asn1_type_EnhancedRelocationCompleteFailure[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(EnhancedRelocationCompleteFailure),

  offsetof(EnhancedRelocationCompleteFailure, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_46,
  0,
  (intptr_t)"protocolIEs",

  offsetof(EnhancedRelocationCompleteFailure, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_139,
  offsetof(EnhancedRelocationCompleteFailure, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"EnhancedRelocationCompleteFailure",
};

const ASN1CType asn1_type_EnhancedRelocationCompleteConfirm[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(EnhancedRelocationCompleteConfirm),

  offsetof(EnhancedRelocationCompleteConfirm, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_47,
  0,
  (intptr_t)"protocolIEs",

  offsetof(EnhancedRelocationCompleteConfirm, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_140,
  offsetof(EnhancedRelocationCompleteConfirm, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"EnhancedRelocationCompleteConfirm",
};

const ASN1CType asn1_type_Paging[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(Paging),

  offsetof(Paging, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_48,
  0,
  (intptr_t)"protocolIEs",

  offsetof(Paging, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_141,
  offsetof(Paging, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"Paging",
};

const ASN1CType asn1_type_CommonID[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(CommonID),

  offsetof(CommonID, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_49,
  0,
  (intptr_t)"protocolIEs",

  offsetof(CommonID, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_142,
  offsetof(CommonID, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"CommonID",
};

const ASN1CType asn1_type_CN_InvokeTrace[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(CN_InvokeTrace),

  offsetof(CN_InvokeTrace, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_50,
  0,
  (intptr_t)"protocolIEs",

  offsetof(CN_InvokeTrace, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_143,
  offsetof(CN_InvokeTrace, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"CN-InvokeTrace",
};

const ASN1CType asn1_type_CN_DeactivateTrace[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(CN_DeactivateTrace),

  offsetof(CN_DeactivateTrace, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_51,
  0,
  (intptr_t)"protocolIEs",

  offsetof(CN_DeactivateTrace, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_144,
  offsetof(CN_DeactivateTrace, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"CN-DeactivateTrace",
};

const ASN1CType asn1_type_LocationReportingControl[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(LocationReportingControl),

  offsetof(LocationReportingControl, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_52,
  0,
  (intptr_t)"protocolIEs",

  offsetof(LocationReportingControl, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_145,
  offsetof(LocationReportingControl, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"LocationReportingControl",
};

const ASN1CType asn1_type_LocationReport[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(LocationReport),

  offsetof(LocationReport, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_53,
  0,
  (intptr_t)"protocolIEs",

  offsetof(LocationReport, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_146,
  offsetof(LocationReport, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"LocationReport",
};

const ASN1CType asn1_type_InitialUE_Message[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(InitialUE_Message),

  offsetof(InitialUE_Message, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_54,
  0,
  (intptr_t)"protocolIEs",

  offsetof(InitialUE_Message, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_147,
  offsetof(InitialUE_Message, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"InitialUE-Message",
};

const ASN1CType asn1_type_DirectTransfer[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(DirectTransfer),

  offsetof(DirectTransfer, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_55,
  0,
  (intptr_t)"protocolIEs",

  offsetof(DirectTransfer, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_148,
  offsetof(DirectTransfer, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"DirectTransfer",
};

const ASN1CType asn1_type_RedirectionIndication[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x0,
  0xffff,
  sizeof(ProtocolIE_Field_56),
  (intptr_t)asn1_type_ProtocolIE_Field_56,
  0,
  (intptr_t)"RedirectionIndication",
};

const ASN1CType asn1_type_Overload[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(Overload),

  offsetof(Overload, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_56,
  0,
  (intptr_t)"protocolIEs",

  offsetof(Overload, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_149,
  offsetof(Overload, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"Overload",
};

const ASN1CType asn1_type_ErrorIndication[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(ErrorIndication),

  offsetof(ErrorIndication, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_57,
  0,
  (intptr_t)"protocolIEs",

  offsetof(ErrorIndication, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_150,
  offsetof(ErrorIndication, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"ErrorIndication",
};

const ASN1CType asn1_type_SRNS_DataForwardCommand[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(SRNS_DataForwardCommand),

  offsetof(SRNS_DataForwardCommand, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_58,
  0,
  (intptr_t)"protocolIEs",

  offsetof(SRNS_DataForwardCommand, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_151,
  offsetof(SRNS_DataForwardCommand, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"SRNS-DataForwardCommand",
};

const ASN1CType asn1_type_ForwardSRNS_Context[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(ForwardSRNS_Context),

  offsetof(ForwardSRNS_Context, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_59,
  0,
  (intptr_t)"protocolIEs",

  offsetof(ForwardSRNS_Context, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_152,
  offsetof(ForwardSRNS_Context, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"ForwardSRNS-Context",
};

const ASN1CType asn1_type_RAB_AssignmentRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RAB_AssignmentRequest),

  offsetof(RAB_AssignmentRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_60,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RAB_AssignmentRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_153,
  offsetof(RAB_AssignmentRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RAB-AssignmentRequest",
};

static const ASN1CType asn1_type__local_3294[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3295[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_RAB_Parameters,
};

static const ASN1CType asn1_type__local_3296[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_UserPlaneInformation,
};

static const ASN1CType asn1_type__local_3297[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100004,
  (intptr_t)asn1_type_TransportLayerInformation,
};

static const ASN1CType asn1_type__local_3298[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100005,
  (intptr_t)asn1_type_Service_Handover,
};

const ASN1CType asn1_type_RAB_SetupOrModifyItemFirst[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  7,
  sizeof(RAB_SetupOrModifyItemFirst),

  offsetof(RAB_SetupOrModifyItemFirst, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3294,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_SetupOrModifyItemFirst, nAS_SynchronisationIndicator) | 0x8000000,
  (intptr_t)asn1_type_NAS_SynchronisationIndicator,
  offsetof(RAB_SetupOrModifyItemFirst, nAS_SynchronisationIndicator_option),
  (intptr_t)"nAS-SynchronisationIndicator",

  offsetof(RAB_SetupOrModifyItemFirst, rAB_Parameters) | 0x8000000,
  (intptr_t)asn1_type__local_3295,
  offsetof(RAB_SetupOrModifyItemFirst, rAB_Parameters_option),
  (intptr_t)"rAB-Parameters",

  offsetof(RAB_SetupOrModifyItemFirst, userPlaneInformation) | 0x8000000,
  (intptr_t)asn1_type__local_3296,
  offsetof(RAB_SetupOrModifyItemFirst, userPlaneInformation_option),
  (intptr_t)"userPlaneInformation",

  offsetof(RAB_SetupOrModifyItemFirst, transportLayerInformation) | 0x8000000,
  (intptr_t)asn1_type__local_3297,
  offsetof(RAB_SetupOrModifyItemFirst, transportLayerInformation_option),
  (intptr_t)"transportLayerInformation",

  offsetof(RAB_SetupOrModifyItemFirst, service_Handover) | 0x8000000,
  (intptr_t)asn1_type__local_3298,
  offsetof(RAB_SetupOrModifyItemFirst, service_Handover_option),
  (intptr_t)"service-Handover",

  offsetof(RAB_SetupOrModifyItemFirst, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_154,
  offsetof(RAB_SetupOrModifyItemFirst, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-SetupOrModifyItemFirst",
};

static const ASN1CType asn1_type__local_3299[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_TransportLayerAddress,
};

static const ASN1CType asn1_type__local_3300[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100001,
  (intptr_t)asn1_type_IuTransportAssociation,
};

const ASN1CType asn1_type_TransportLayerInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(TransportLayerInformation),

  offsetof(TransportLayerInformation, transportLayerAddress) | 0x0,
  (intptr_t)asn1_type__local_3299,
  0,
  (intptr_t)"transportLayerAddress",

  offsetof(TransportLayerInformation, iuTransportAssociation) | 0x0,
  (intptr_t)asn1_type__local_3300,
  0,
  (intptr_t)"iuTransportAssociation",

  offsetof(TransportLayerInformation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_155,
  offsetof(TransportLayerInformation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"TransportLayerInformation",
};

static const ASN1CType asn1_type__local_3301[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_PDP_TypeInformation,
};

static const ASN1CType asn1_type__local_3302[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_DataVolumeReportingIndication,
};

static const ASN1CType asn1_type__local_3303[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_DL_GTP_PDU_SequenceNumber,
};

static const ASN1CType asn1_type__local_3304[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_UL_GTP_PDU_SequenceNumber,
};

static const ASN1CType asn1_type__local_3305[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100004,
  (intptr_t)asn1_type_DL_N_PDU_SequenceNumber,
};

static const ASN1CType asn1_type__local_3306[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100005,
  (intptr_t)asn1_type_UL_N_PDU_SequenceNumber,
};

const ASN1CType asn1_type_RAB_SetupOrModifyItemSecond[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  7,
  sizeof(RAB_SetupOrModifyItemSecond),

  offsetof(RAB_SetupOrModifyItemSecond, pDP_TypeInformation) | 0x8000000,
  (intptr_t)asn1_type__local_3301,
  offsetof(RAB_SetupOrModifyItemSecond, pDP_TypeInformation_option),
  (intptr_t)"pDP-TypeInformation",

  offsetof(RAB_SetupOrModifyItemSecond, dataVolumeReportingIndication) | 0x8000000,
  (intptr_t)asn1_type__local_3302,
  offsetof(RAB_SetupOrModifyItemSecond, dataVolumeReportingIndication_option),
  (intptr_t)"dataVolumeReportingIndication",

  offsetof(RAB_SetupOrModifyItemSecond, dl_GTP_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3303,
  offsetof(RAB_SetupOrModifyItemSecond, dl_GTP_PDU_SequenceNumber_option),
  (intptr_t)"dl-GTP-PDU-SequenceNumber",

  offsetof(RAB_SetupOrModifyItemSecond, ul_GTP_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3304,
  offsetof(RAB_SetupOrModifyItemSecond, ul_GTP_PDU_SequenceNumber_option),
  (intptr_t)"ul-GTP-PDU-SequenceNumber",

  offsetof(RAB_SetupOrModifyItemSecond, dl_N_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3305,
  offsetof(RAB_SetupOrModifyItemSecond, dl_N_PDU_SequenceNumber_option),
  (intptr_t)"dl-N-PDU-SequenceNumber",

  offsetof(RAB_SetupOrModifyItemSecond, ul_N_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3306,
  offsetof(RAB_SetupOrModifyItemSecond, ul_N_PDU_SequenceNumber_option),
  (intptr_t)"ul-N-PDU-SequenceNumber",

  offsetof(RAB_SetupOrModifyItemSecond, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_156,
  offsetof(RAB_SetupOrModifyItemSecond, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-SetupOrModifyItemSecond",
};

const ASN1CType asn1_type_RAB_AssignmentResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RAB_AssignmentResponse),

  offsetof(RAB_AssignmentResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_61,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RAB_AssignmentResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_157,
  offsetof(RAB_AssignmentResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RAB-AssignmentResponse",
};

static const ASN1CType asn1_type__local_3307[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3308[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_TransportLayerAddress,
};

static const ASN1CType asn1_type__local_3309[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100002,
  (intptr_t)asn1_type_IuTransportAssociation,
};

static const ASN1CType asn1_type__local_3310[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_DataVolumeList,
};

const ASN1CType asn1_type_RAB_SetupOrModifiedItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  5,
  sizeof(RAB_SetupOrModifiedItem),

  offsetof(RAB_SetupOrModifiedItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3307,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_SetupOrModifiedItem, transportLayerAddress) | 0x8000000,
  (intptr_t)asn1_type__local_3308,
  offsetof(RAB_SetupOrModifiedItem, transportLayerAddress_option),
  (intptr_t)"transportLayerAddress",

  offsetof(RAB_SetupOrModifiedItem, iuTransportAssociation) | 0x8000000,
  (intptr_t)asn1_type__local_3309,
  offsetof(RAB_SetupOrModifiedItem, iuTransportAssociation_option),
  (intptr_t)"iuTransportAssociation",

  offsetof(RAB_SetupOrModifiedItem, dl_dataVolumes) | 0x8000000,
  (intptr_t)asn1_type__local_3310,
  offsetof(RAB_SetupOrModifiedItem, dl_dataVolumes_option),
  (intptr_t)"dl-dataVolumes",

  offsetof(RAB_SetupOrModifiedItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_158,
  offsetof(RAB_SetupOrModifiedItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-SetupOrModifiedItem",
};

static const ASN1CType asn1_type__local_3311[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3312[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_DataVolumeList,
};

static const ASN1CType asn1_type__local_3313[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_DL_GTP_PDU_SequenceNumber,
};

static const ASN1CType asn1_type__local_3314[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_UL_GTP_PDU_SequenceNumber,
};

const ASN1CType asn1_type_RAB_ReleasedItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  5,
  sizeof(RAB_ReleasedItem),

  offsetof(RAB_ReleasedItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3311,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_ReleasedItem, dl_dataVolumes) | 0x8000000,
  (intptr_t)asn1_type__local_3312,
  offsetof(RAB_ReleasedItem, dl_dataVolumes_option),
  (intptr_t)"dl-dataVolumes",

  offsetof(RAB_ReleasedItem, dL_GTP_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3313,
  offsetof(RAB_ReleasedItem, dL_GTP_PDU_SequenceNumber_option),
  (intptr_t)"dL-GTP-PDU-SequenceNumber",

  offsetof(RAB_ReleasedItem, uL_GTP_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3314,
  offsetof(RAB_ReleasedItem, uL_GTP_PDU_SequenceNumber_option),
  (intptr_t)"uL-GTP-PDU-SequenceNumber",

  offsetof(RAB_ReleasedItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_159,
  offsetof(RAB_ReleasedItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-ReleasedItem",
};

const ASN1CType asn1_type_DataVolumeList[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x2,
  sizeof(DataVolumeList_1),
  (intptr_t)asn1_type_DataVolumeList_1,
  0,
  (intptr_t)"DataVolumeList",
};

const ASN1CType asn1_type_DataVolumeList_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  3,
  sizeof(DataVolumeList_1),

  offsetof(DataVolumeList_1, dl_UnsuccessfullyTransmittedDataVolume) | 0x0,
  (intptr_t)asn1_type_UnsuccessfullyTransmittedDataVolume,
  0,
  (intptr_t)"dl-UnsuccessfullyTransmittedDataVolume",

  offsetof(DataVolumeList_1, dataVolumeReference) | 0x8000000,
  (intptr_t)asn1_type_DataVolumeReference,
  offsetof(DataVolumeList_1, dataVolumeReference_option),
  (intptr_t)"dataVolumeReference",

  offsetof(DataVolumeList_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_160,
  offsetof(DataVolumeList_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

static const ASN1CType asn1_type__local_3315[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

const ASN1CType asn1_type_RAB_QueuedItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RAB_QueuedItem),

  offsetof(RAB_QueuedItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3315,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_QueuedItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_161,
  offsetof(RAB_QueuedItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-QueuedItem",
};

static const ASN1CType asn1_type__local_3316[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3317[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100001,
  (intptr_t)asn1_type_Cause,
};

static const ASN1CType asn1_type__local_3318[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_GERAN_Classmark,
};

const ASN1CType asn1_type_GERAN_Iumode_RAB_Failed_RABAssgntResponse_Item[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  4,
  sizeof(GERAN_Iumode_RAB_Failed_RABAssgntResponse_Item),

  offsetof(GERAN_Iumode_RAB_Failed_RABAssgntResponse_Item, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3316,
  0,
  (intptr_t)"rAB-ID",

  offsetof(GERAN_Iumode_RAB_Failed_RABAssgntResponse_Item, cause) | 0x0,
  (intptr_t)asn1_type__local_3317,
  0,
  (intptr_t)"cause",

  offsetof(GERAN_Iumode_RAB_Failed_RABAssgntResponse_Item, gERAN_Classmark) | 0x8000000,
  (intptr_t)asn1_type__local_3318,
  offsetof(GERAN_Iumode_RAB_Failed_RABAssgntResponse_Item, gERAN_Classmark_option),
  (intptr_t)"gERAN-Classmark",

  offsetof(GERAN_Iumode_RAB_Failed_RABAssgntResponse_Item, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_162,
  offsetof(GERAN_Iumode_RAB_Failed_RABAssgntResponse_Item, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"GERAN-Iumode-RAB-Failed-RABAssgntResponse-Item",
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

const ASN1CType asn1_type_RANAP_RelocationInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RANAP_RelocationInformation),

  offsetof(RANAP_RelocationInformation, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_66,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RANAP_RelocationInformation, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_163,
  offsetof(RANAP_RelocationInformation, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RANAP-RelocationInformation",
};

static const ASN1CType asn1_type__local_3319[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_NAS_PDU,
};

static const ASN1CType asn1_type__local_3320[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_SAPI,
};

static const ASN1CType asn1_type__local_3321[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_CN_DomainIndicator,
};

const ASN1CType asn1_type_DirectTransferInformationItem_RANAP_RelocInf[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  4,
  sizeof(DirectTransferInformationItem_RANAP_RelocInf),

  offsetof(DirectTransferInformationItem_RANAP_RelocInf, nAS_PDU) | 0x0,
  (intptr_t)asn1_type__local_3319,
  0,
  (intptr_t)"nAS-PDU",

  offsetof(DirectTransferInformationItem_RANAP_RelocInf, sAPI) | 0x0,
  (intptr_t)asn1_type__local_3320,
  0,
  (intptr_t)"sAPI",

  offsetof(DirectTransferInformationItem_RANAP_RelocInf, cN_DomainIndicator) | 0x0,
  (intptr_t)asn1_type__local_3321,
  0,
  (intptr_t)"cN-DomainIndicator",

  offsetof(DirectTransferInformationItem_RANAP_RelocInf, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_164,
  offsetof(DirectTransferInformationItem_RANAP_RelocInf, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"DirectTransferInformationItem-RANAP-RelocInf",
};

static const ASN1CType asn1_type__local_3322[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3323[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_DL_GTP_PDU_SequenceNumber,
};

static const ASN1CType asn1_type__local_3324[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_UL_GTP_PDU_SequenceNumber,
};

static const ASN1CType asn1_type__local_3325[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_DL_N_PDU_SequenceNumber,
};

static const ASN1CType asn1_type__local_3326[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100004,
  (intptr_t)asn1_type_UL_N_PDU_SequenceNumber,
};

const ASN1CType asn1_type_RAB_ContextItem_RANAP_RelocInf[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  6,
  sizeof(RAB_ContextItem_RANAP_RelocInf),

  offsetof(RAB_ContextItem_RANAP_RelocInf, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3322,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_ContextItem_RANAP_RelocInf, dl_GTP_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3323,
  offsetof(RAB_ContextItem_RANAP_RelocInf, dl_GTP_PDU_SequenceNumber_option),
  (intptr_t)"dl-GTP-PDU-SequenceNumber",

  offsetof(RAB_ContextItem_RANAP_RelocInf, ul_GTP_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3324,
  offsetof(RAB_ContextItem_RANAP_RelocInf, ul_GTP_PDU_SequenceNumber_option),
  (intptr_t)"ul-GTP-PDU-SequenceNumber",

  offsetof(RAB_ContextItem_RANAP_RelocInf, dl_N_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3325,
  offsetof(RAB_ContextItem_RANAP_RelocInf, dl_N_PDU_SequenceNumber_option),
  (intptr_t)"dl-N-PDU-SequenceNumber",

  offsetof(RAB_ContextItem_RANAP_RelocInf, ul_N_PDU_SequenceNumber) | 0x8000000,
  (intptr_t)asn1_type__local_3326,
  offsetof(RAB_ContextItem_RANAP_RelocInf, ul_N_PDU_SequenceNumber_option),
  (intptr_t)"ul-N-PDU-SequenceNumber",

  offsetof(RAB_ContextItem_RANAP_RelocInf, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_165,
  offsetof(RAB_ContextItem_RANAP_RelocInf, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-ContextItem-RANAP-RelocInf",
};

const ASN1CType asn1_type_RANAP_EnhancedRelocationInformationRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RANAP_EnhancedRelocationInformationRequest),

  offsetof(RANAP_EnhancedRelocationInformationRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_69,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RANAP_EnhancedRelocationInformationRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_166,
  offsetof(RANAP_EnhancedRelocationInformationRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RANAP-EnhancedRelocationInformationRequest",
};

static const ASN1CType asn1_type__local_3327[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3328[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_CN_DomainIndicator,
};

static const ASN1CType asn1_type__local_3329[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_RAB_Parameters,
};

static const ASN1CType asn1_type__local_3330[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_DataVolumeReportingIndication,
};

static const ASN1CType asn1_type__local_3331[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100004,
  (intptr_t)asn1_type_PDP_TypeInformation,
};

static const ASN1CType asn1_type__local_3332[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100005,
  (intptr_t)asn1_type_UserPlaneInformation,
};

static const ASN1CType asn1_type__local_3333[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100006,
  (intptr_t)asn1_type_TNLInformationEnhRelInfoReq,
};

static const ASN1CType asn1_type__local_3334[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100007,
  (intptr_t)asn1_type_TNLInformationEnhRelInfoReq,
};

static const ASN1CType asn1_type__local_3335[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100008,
  (intptr_t)asn1_type_Service_Handover,
};

static const ASN1CType asn1_type__local_3336[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100009,
  (intptr_t)asn1_type_Alt_RAB_Parameters,
};

const ASN1CType asn1_type_RAB_SetupItem_EnhRelocInfoReq[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  11,
  sizeof(RAB_SetupItem_EnhRelocInfoReq),

  offsetof(RAB_SetupItem_EnhRelocInfoReq, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3327,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_SetupItem_EnhRelocInfoReq, cN_DomainIndicator) | 0x0,
  (intptr_t)asn1_type__local_3328,
  0,
  (intptr_t)"cN-DomainIndicator",

  offsetof(RAB_SetupItem_EnhRelocInfoReq, rAB_Parameters) | 0x0,
  (intptr_t)asn1_type__local_3329,
  0,
  (intptr_t)"rAB-Parameters",

  offsetof(RAB_SetupItem_EnhRelocInfoReq, dataVolumeReportingIndication) | 0x8000000,
  (intptr_t)asn1_type__local_3330,
  offsetof(RAB_SetupItem_EnhRelocInfoReq, dataVolumeReportingIndication_option),
  (intptr_t)"dataVolumeReportingIndication",

  offsetof(RAB_SetupItem_EnhRelocInfoReq, pDP_TypeInformation) | 0x8000000,
  (intptr_t)asn1_type__local_3331,
  offsetof(RAB_SetupItem_EnhRelocInfoReq, pDP_TypeInformation_option),
  (intptr_t)"pDP-TypeInformation",

  offsetof(RAB_SetupItem_EnhRelocInfoReq, userPlaneInformation) | 0x0,
  (intptr_t)asn1_type__local_3332,
  0,
  (intptr_t)"userPlaneInformation",

  offsetof(RAB_SetupItem_EnhRelocInfoReq, dataForwardingInformation) | 0x8000000,
  (intptr_t)asn1_type__local_3333,
  offsetof(RAB_SetupItem_EnhRelocInfoReq, dataForwardingInformation_option),
  (intptr_t)"dataForwardingInformation",

  offsetof(RAB_SetupItem_EnhRelocInfoReq, sourceSideIuULTNLInfo) | 0x8000000,
  (intptr_t)asn1_type__local_3334,
  offsetof(RAB_SetupItem_EnhRelocInfoReq, sourceSideIuULTNLInfo_option),
  (intptr_t)"sourceSideIuULTNLInfo",

  offsetof(RAB_SetupItem_EnhRelocInfoReq, service_Handover) | 0x8000000,
  (intptr_t)asn1_type__local_3335,
  offsetof(RAB_SetupItem_EnhRelocInfoReq, service_Handover_option),
  (intptr_t)"service-Handover",

  offsetof(RAB_SetupItem_EnhRelocInfoReq, alt_RAB_Parameters) | 0x8000000,
  (intptr_t)asn1_type__local_3336,
  offsetof(RAB_SetupItem_EnhRelocInfoReq, alt_RAB_Parameters_option),
  (intptr_t)"alt-RAB-Parameters",

  offsetof(RAB_SetupItem_EnhRelocInfoReq, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_167,
  offsetof(RAB_SetupItem_EnhRelocInfoReq, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-SetupItem-EnhRelocInfoReq",
};

static const ASN1CType asn1_type__local_3337[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_TransportLayerAddress,
};

static const ASN1CType asn1_type__local_3338[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100001,
  (intptr_t)asn1_type_IuTransportAssociation,
};

const ASN1CType asn1_type_TNLInformationEnhRelInfoReq[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(TNLInformationEnhRelInfoReq),

  offsetof(TNLInformationEnhRelInfoReq, transportLayerAddress) | 0x0,
  (intptr_t)asn1_type__local_3337,
  0,
  (intptr_t)"transportLayerAddress",

  offsetof(TNLInformationEnhRelInfoReq, iuTransportAssociation) | 0x0,
  (intptr_t)asn1_type__local_3338,
  0,
  (intptr_t)"iuTransportAssociation",

  offsetof(TNLInformationEnhRelInfoReq, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_168,
  offsetof(TNLInformationEnhRelInfoReq, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"TNLInformationEnhRelInfoReq",
};

const ASN1CType asn1_type_RANAP_EnhancedRelocationInformationResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RANAP_EnhancedRelocationInformationResponse),

  offsetof(RANAP_EnhancedRelocationInformationResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_71,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RANAP_EnhancedRelocationInformationResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_169,
  offsetof(RANAP_EnhancedRelocationInformationResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RANAP-EnhancedRelocationInformationResponse",
};

static const ASN1CType asn1_type__local_3339[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_CN_DomainIndicator,
};

static const ASN1CType asn1_type__local_3340[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3341[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100003,
  (intptr_t)asn1_type_Ass_RAB_Parameters,
};

const ASN1CType asn1_type_RAB_SetupItem_EnhRelocInfoRes[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  5,
  sizeof(RAB_SetupItem_EnhRelocInfoRes),

  offsetof(RAB_SetupItem_EnhRelocInfoRes, cN_DomainIndicator) | 0x0,
  (intptr_t)asn1_type__local_3339,
  0,
  (intptr_t)"cN-DomainIndicator",

  offsetof(RAB_SetupItem_EnhRelocInfoRes, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3340,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_SetupItem_EnhRelocInfoRes, dataForwardingInformation) | 0x8000000,
  (intptr_t)asn1_type_TNLInformationEnhRelInfoRes,
  offsetof(RAB_SetupItem_EnhRelocInfoRes, dataForwardingInformation_option),
  (intptr_t)"dataForwardingInformation",

  offsetof(RAB_SetupItem_EnhRelocInfoRes, ass_RAB_Parameters) | 0x8000000,
  (intptr_t)asn1_type__local_3341,
  offsetof(RAB_SetupItem_EnhRelocInfoRes, ass_RAB_Parameters_option),
  (intptr_t)"ass-RAB-Parameters",

  offsetof(RAB_SetupItem_EnhRelocInfoRes, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_170,
  offsetof(RAB_SetupItem_EnhRelocInfoRes, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-SetupItem-EnhRelocInfoRes",
};

static const ASN1CType asn1_type__local_3342[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_CN_DomainIndicator,
};

static const ASN1CType asn1_type__local_3343[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_RAB_ID,
};

static const ASN1CType asn1_type__local_3344[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100002,
  (intptr_t)asn1_type_Cause,
};

const ASN1CType asn1_type_RAB_FailedItem_EnhRelocInfoRes[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  4,
  sizeof(RAB_FailedItem_EnhRelocInfoRes),

  offsetof(RAB_FailedItem_EnhRelocInfoRes, cN_DomainIndicator) | 0x0,
  (intptr_t)asn1_type__local_3342,
  0,
  (intptr_t)"cN-DomainIndicator",

  offsetof(RAB_FailedItem_EnhRelocInfoRes, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3343,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_FailedItem_EnhRelocInfoRes, cause) | 0x0,
  (intptr_t)asn1_type__local_3344,
  0,
  (intptr_t)"cause",

  offsetof(RAB_FailedItem_EnhRelocInfoRes, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_171,
  offsetof(RAB_FailedItem_EnhRelocInfoRes, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-FailedItem-EnhRelocInfoRes",
};

static const ASN1CType asn1_type__local_3345[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_TransportLayerAddress,
};

static const ASN1CType asn1_type__local_3346[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100001,
  (intptr_t)asn1_type_IuTransportAssociation,
};

const ASN1CType asn1_type_TNLInformationEnhRelInfoRes[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x100002,
  3,
  sizeof(TNLInformationEnhRelInfoRes),

  offsetof(TNLInformationEnhRelInfoRes, dl_forwardingTransportLayerAddress) | 0x0,
  (intptr_t)asn1_type__local_3345,
  0,
  (intptr_t)"dl-forwardingTransportLayerAddress",

  offsetof(TNLInformationEnhRelInfoRes, dl_forwardingTransportAssociation) | 0x0,
  (intptr_t)asn1_type__local_3346,
  0,
  (intptr_t)"dl-forwardingTransportAssociation",

  offsetof(TNLInformationEnhRelInfoRes, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_172,
  offsetof(TNLInformationEnhRelInfoRes, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"TNLInformationEnhRelInfoRes",
};

const ASN1CType asn1_type_RAB_ModifyRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(RAB_ModifyRequest),

  offsetof(RAB_ModifyRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_74,
  0,
  (intptr_t)"protocolIEs",

  offsetof(RAB_ModifyRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_173,
  offsetof(RAB_ModifyRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"RAB-ModifyRequest",
};

static const ASN1CType asn1_type__local_3347[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_RAB_ID,
};

const ASN1CType asn1_type_RAB_ModifyItem[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  3,
  sizeof(RAB_ModifyItem),

  offsetof(RAB_ModifyItem, rAB_ID) | 0x0,
  (intptr_t)asn1_type__local_3347,
  0,
  (intptr_t)"rAB-ID",

  offsetof(RAB_ModifyItem, requested_RAB_Parameter_Values) | 0x0,
  (intptr_t)asn1_type_Requested_RAB_Parameter_Values,
  0,
  (intptr_t)"requested-RAB-Parameter-Values",

  offsetof(RAB_ModifyItem, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_174,
  offsetof(RAB_ModifyItem, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"RAB-ModifyItem",
};

const ASN1CType asn1_type_LocationRelatedDataRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(LocationRelatedDataRequest),

  offsetof(LocationRelatedDataRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_76,
  0,
  (intptr_t)"protocolIEs",

  offsetof(LocationRelatedDataRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_175,
  offsetof(LocationRelatedDataRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"LocationRelatedDataRequest",
};

const ASN1CType asn1_type_LocationRelatedDataResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(LocationRelatedDataResponse),

  offsetof(LocationRelatedDataResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_77,
  0,
  (intptr_t)"protocolIEs",

  offsetof(LocationRelatedDataResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_176,
  offsetof(LocationRelatedDataResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"LocationRelatedDataResponse",
};

const ASN1CType asn1_type_LocationRelatedDataFailure[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(LocationRelatedDataFailure),

  offsetof(LocationRelatedDataFailure, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_78,
  0,
  (intptr_t)"protocolIEs",

  offsetof(LocationRelatedDataFailure, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_177,
  offsetof(LocationRelatedDataFailure, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"LocationRelatedDataFailure",
};

const ASN1CType asn1_type_InformationTransferIndication[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(InformationTransferIndication),

  offsetof(InformationTransferIndication, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_79,
  0,
  (intptr_t)"protocolIEs",

  offsetof(InformationTransferIndication, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_178,
  offsetof(InformationTransferIndication, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"InformationTransferIndication",
};

const ASN1CType asn1_type_InformationTransferConfirmation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(InformationTransferConfirmation),

  offsetof(InformationTransferConfirmation, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_80,
  0,
  (intptr_t)"protocolIEs",

  offsetof(InformationTransferConfirmation, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_179,
  offsetof(InformationTransferConfirmation, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"InformationTransferConfirmation",
};

const ASN1CType asn1_type_InformationTransferFailure[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(InformationTransferFailure),

  offsetof(InformationTransferFailure, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_81,
  0,
  (intptr_t)"protocolIEs",

  offsetof(InformationTransferFailure, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_180,
  offsetof(InformationTransferFailure, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"InformationTransferFailure",
};

const ASN1CType asn1_type_UESpecificInformationIndication[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(UESpecificInformationIndication),

  offsetof(UESpecificInformationIndication, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_82,
  0,
  (intptr_t)"protocolIEs",

  offsetof(UESpecificInformationIndication, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_181,
  offsetof(UESpecificInformationIndication, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"UESpecificInformationIndication",
};

const ASN1CType asn1_type_DirectInformationTransfer[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(DirectInformationTransfer),

  offsetof(DirectInformationTransfer, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_83,
  0,
  (intptr_t)"protocolIEs",

  offsetof(DirectInformationTransfer, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_182,
  offsetof(DirectInformationTransfer, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"DirectInformationTransfer",
};

const ASN1CType asn1_type_UplinkInformationExchangeRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(UplinkInformationExchangeRequest),

  offsetof(UplinkInformationExchangeRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_84,
  0,
  (intptr_t)"protocolIEs",

  offsetof(UplinkInformationExchangeRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_183,
  offsetof(UplinkInformationExchangeRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"UplinkInformationExchangeRequest",
};

const ASN1CType asn1_type_UplinkInformationExchangeResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(UplinkInformationExchangeResponse),

  offsetof(UplinkInformationExchangeResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_85,
  0,
  (intptr_t)"protocolIEs",

  offsetof(UplinkInformationExchangeResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_184,
  offsetof(UplinkInformationExchangeResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"UplinkInformationExchangeResponse",
};

const ASN1CType asn1_type_UplinkInformationExchangeFailure[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(UplinkInformationExchangeFailure),

  offsetof(UplinkInformationExchangeFailure, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_86,
  0,
  (intptr_t)"protocolIEs",

  offsetof(UplinkInformationExchangeFailure, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_185,
  offsetof(UplinkInformationExchangeFailure, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"UplinkInformationExchangeFailure",
};

const ASN1CType asn1_type_MBMSSessionStart[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSSessionStart),

  offsetof(MBMSSessionStart, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_87,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSSessionStart, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_186,
  offsetof(MBMSSessionStart, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSSessionStart",
};

static const ASN1CType asn1_type__local_3348[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_IPMulticastAddress,
};

static const ASN1CType asn1_type__local_3349[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100002,
  (intptr_t)asn1_type_GTP_TEI,
};

const ASN1CType asn1_type_MBMSSynchronisationInformation[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  4,
  sizeof(MBMSSynchronisationInformation),

  offsetof(MBMSSynchronisationInformation, mBMSHCIndicator) | 0x0,
  (intptr_t)asn1_type_MBMSHCIndicator,
  0,
  (intptr_t)"mBMSHCIndicator",

  offsetof(MBMSSynchronisationInformation, iPMulticastAddress) | 0x0,
  (intptr_t)asn1_type__local_3348,
  0,
  (intptr_t)"iPMulticastAddress",

  offsetof(MBMSSynchronisationInformation, gTPDLTEID) | 0x0,
  (intptr_t)asn1_type__local_3349,
  0,
  (intptr_t)"gTPDLTEID",

  offsetof(MBMSSynchronisationInformation, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_187,
  offsetof(MBMSSynchronisationInformation, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

  (intptr_t)"MBMSSynchronisationInformation",
};

const ASN1CType asn1_type_MBMSSessionStartResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSSessionStartResponse),

  offsetof(MBMSSessionStartResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_88,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSSessionStartResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_188,
  offsetof(MBMSSessionStartResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSSessionStartResponse",
};

const ASN1CType asn1_type_MBMSSessionStartFailure[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSSessionStartFailure),

  offsetof(MBMSSessionStartFailure, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_89,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSSessionStartFailure, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_189,
  offsetof(MBMSSessionStartFailure, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSSessionStartFailure",
};

const ASN1CType asn1_type_MBMSSessionUpdate[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSSessionUpdate),

  offsetof(MBMSSessionUpdate, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_90,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSSessionUpdate, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_190,
  offsetof(MBMSSessionUpdate, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSSessionUpdate",
};

const ASN1CType asn1_type_MBMSSessionUpdateResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSSessionUpdateResponse),

  offsetof(MBMSSessionUpdateResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_91,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSSessionUpdateResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_191,
  offsetof(MBMSSessionUpdateResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSSessionUpdateResponse",
};

const ASN1CType asn1_type_MBMSSessionUpdateFailure[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSSessionUpdateFailure),

  offsetof(MBMSSessionUpdateFailure, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_92,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSSessionUpdateFailure, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_192,
  offsetof(MBMSSessionUpdateFailure, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSSessionUpdateFailure",
};

const ASN1CType asn1_type_MBMSSessionStop[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSSessionStop),

  offsetof(MBMSSessionStop, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_93,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSSessionStop, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_193,
  offsetof(MBMSSessionStop, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSSessionStop",
};

const ASN1CType asn1_type_MBMSSessionStopResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSSessionStopResponse),

  offsetof(MBMSSessionStopResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_94,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSSessionStopResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_194,
  offsetof(MBMSSessionStopResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSSessionStopResponse",
};

const ASN1CType asn1_type_MBMSUELinkingRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSUELinkingRequest),

  offsetof(MBMSUELinkingRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_95,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSUELinkingRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_195,
  offsetof(MBMSUELinkingRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSUELinkingRequest",
};

const ASN1CType asn1_type_LeftMBMSBearerService_IEs[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x80,
  sizeof(LeftMBMSBearerService_IEs_1),
  (intptr_t)asn1_type_LeftMBMSBearerService_IEs_1,
  0,
  (intptr_t)"LeftMBMSBearerService-IEs",
};

static const ASN1CType asn1_type__local_3350[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_TMGI,
};

const ASN1CType asn1_type_LeftMBMSBearerService_IEs_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  2,
  sizeof(LeftMBMSBearerService_IEs_1),

  offsetof(LeftMBMSBearerService_IEs_1, tMGI) | 0x0,
  (intptr_t)asn1_type__local_3350,
  0,
  (intptr_t)"tMGI",

  offsetof(LeftMBMSBearerService_IEs_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_196,
  offsetof(LeftMBMSBearerService_IEs_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

const ASN1CType asn1_type_MBMSUELinkingResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSUELinkingResponse),

  offsetof(MBMSUELinkingResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_96,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSUELinkingResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_197,
  offsetof(MBMSUELinkingResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSUELinkingResponse",
};

const ASN1CType asn1_type_UnsuccessfulLinking_IEs[] = {
  (ASN1_CTYPE_SEQUENCE_OF << ASN1_CTYPE_SHIFT) | 0x5800000 | 0x10,
  0x1,
  0x80,
  sizeof(UnsuccessfulLinking_IEs_1),
  (intptr_t)asn1_type_UnsuccessfulLinking_IEs_1,
  0,
  (intptr_t)"UnsuccessfulLinking-IEs",
};

static const ASN1CType asn1_type__local_3351[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_TMGI,
};

static const ASN1CType asn1_type__local_3352[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x100001,
  (intptr_t)asn1_type_Cause,
};

const ASN1CType asn1_type_UnsuccessfulLinking_IEs_1[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x2000000 | 0x10,
  3,
  sizeof(UnsuccessfulLinking_IEs_1),

  offsetof(UnsuccessfulLinking_IEs_1, tMGI) | 0x0,
  (intptr_t)asn1_type__local_3351,
  0,
  (intptr_t)"tMGI",

  offsetof(UnsuccessfulLinking_IEs_1, cause) | 0x0,
  (intptr_t)asn1_type__local_3352,
  0,
  (intptr_t)"cause",

  offsetof(UnsuccessfulLinking_IEs_1, iE_Extensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_198,
  offsetof(UnsuccessfulLinking_IEs_1, iE_Extensions_option),
  (intptr_t)"iE-Extensions",

};

const ASN1CType asn1_type_MBMSRegistrationRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSRegistrationRequest),

  offsetof(MBMSRegistrationRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_97,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSRegistrationRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_199,
  offsetof(MBMSRegistrationRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSRegistrationRequest",
};

const ASN1CType asn1_type_MBMSRegistrationResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSRegistrationResponse),

  offsetof(MBMSRegistrationResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_98,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSRegistrationResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_200,
  offsetof(MBMSRegistrationResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSRegistrationResponse",
};

const ASN1CType asn1_type_MBMSRegistrationFailure[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSRegistrationFailure),

  offsetof(MBMSRegistrationFailure, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_99,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSRegistrationFailure, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_201,
  offsetof(MBMSRegistrationFailure, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSRegistrationFailure",
};

const ASN1CType asn1_type_MBMSCNDe_RegistrationRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSCNDe_RegistrationRequest),

  offsetof(MBMSCNDe_RegistrationRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_100,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSCNDe_RegistrationRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_202,
  offsetof(MBMSCNDe_RegistrationRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSCNDe-RegistrationRequest",
};

const ASN1CType asn1_type_MBMSCNDe_RegistrationResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSCNDe_RegistrationResponse),

  offsetof(MBMSCNDe_RegistrationResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_101,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSCNDe_RegistrationResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_203,
  offsetof(MBMSCNDe_RegistrationResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSCNDe-RegistrationResponse",
};

const ASN1CType asn1_type_MBMSRABEstablishmentIndication[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSRABEstablishmentIndication),

  offsetof(MBMSRABEstablishmentIndication, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_102,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSRABEstablishmentIndication, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_204,
  offsetof(MBMSRABEstablishmentIndication, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSRABEstablishmentIndication",
};

const ASN1CType asn1_type_MBMSRABReleaseRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSRABReleaseRequest),

  offsetof(MBMSRABReleaseRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_103,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSRABReleaseRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_205,
  offsetof(MBMSRABReleaseRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSRABReleaseRequest",
};

const ASN1CType asn1_type_MBMSRABRelease[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSRABRelease),

  offsetof(MBMSRABRelease, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_104,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSRABRelease, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_206,
  offsetof(MBMSRABRelease, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSRABRelease",
};

const ASN1CType asn1_type_MBMSRABReleaseFailure[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(MBMSRABReleaseFailure),

  offsetof(MBMSRABReleaseFailure, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_105,
  0,
  (intptr_t)"protocolIEs",

  offsetof(MBMSRABReleaseFailure, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_207,
  offsetof(MBMSRABReleaseFailure, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"MBMSRABReleaseFailure",
};

const ASN1CType asn1_type_SRVCC_CSKeysRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(SRVCC_CSKeysRequest),

  offsetof(SRVCC_CSKeysRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_106,
  0,
  (intptr_t)"protocolIEs",

  offsetof(SRVCC_CSKeysRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_208,
  offsetof(SRVCC_CSKeysRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"SRVCC-CSKeysRequest",
};

const ASN1CType asn1_type_SRVCC_CSKeysResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(SRVCC_CSKeysResponse),

  offsetof(SRVCC_CSKeysResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_107,
  0,
  (intptr_t)"protocolIEs",

  offsetof(SRVCC_CSKeysResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_209,
  offsetof(SRVCC_CSKeysResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"SRVCC-CSKeysResponse",
};

const ASN1CType asn1_type_UeRadioCapabilityMatchRequest[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(UeRadioCapabilityMatchRequest),

  offsetof(UeRadioCapabilityMatchRequest, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_108,
  0,
  (intptr_t)"protocolIEs",

  offsetof(UeRadioCapabilityMatchRequest, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_210,
  offsetof(UeRadioCapabilityMatchRequest, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"UeRadioCapabilityMatchRequest",
};

const ASN1CType asn1_type_UeRadioCapabilityMatchResponse[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x10,
  2,
  sizeof(UeRadioCapabilityMatchResponse),

  offsetof(UeRadioCapabilityMatchResponse, protocolIEs) | 0x0,
  (intptr_t)asn1_type_ProtocolIE_Container_109,
  0,
  (intptr_t)"protocolIEs",

  offsetof(UeRadioCapabilityMatchResponse, protocolExtensions) | 0x8000000,
  (intptr_t)asn1_type_ProtocolExtensionContainer_211,
  offsetof(UeRadioCapabilityMatchResponse, protocolExtensions_option),
  (intptr_t)"protocolExtensions",

  (intptr_t)"UeRadioCapabilityMatchResponse",
};

static const Criticality asn1_value__local_3353 = 1;

const ASN1CType asn1_type_RANAP_ELEMENTARY_PROCEDURE[] = {
  (ASN1_CTYPE_OBJECT_CLASS << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x0,
  6,

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

  0x8,
  0,
  0,
  (intptr_t)"&Outcome",

  0x1,
  (intptr_t)asn1_type_ProcedureCode,
  0,
  (intptr_t)"&procedureCode",

  0x11,
  (intptr_t)asn1_type_Criticality,
  (intptr_t)&asn1_value__local_3353,
  (intptr_t)"&criticality",
  (intptr_t)"RANAP-ELEMENTARY-PROCEDURE",
};

const ASN1CType asn1_type_RANAP_PDU[] = {
  (ASN1_CTYPE_CHOICE << ASN1_CTYPE_SHIFT) | 0x6000000 | 0x0,
  4,
  0,
  sizeof(RANAP_PDU),
  offsetof(RANAP_PDU, choice),
  offsetof(RANAP_PDU, u),
  (intptr_t)asn1_type_InitiatingMessage,
  (intptr_t)"initiatingMessage",
  (intptr_t)asn1_type_SuccessfulOutcome,
  (intptr_t)"successfulOutcome",
  (intptr_t)asn1_type_UnsuccessfulOutcome,
  (intptr_t)"unsuccessfulOutcome",
  (intptr_t)asn1_type_Outcome,
  (intptr_t)"outcome",
  (intptr_t)"RANAP-PDU",
};

static const ASN1CType asn1_type__local_3354[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProcedureCode,
};

static const ASN1CType asn1_type__local_3355[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProcedureCode asn1_value__local_3359 = 1;

static const Criticality asn1_value__local_3360 = 0;

static const ProcedureCode asn1_value__local_3361 = 2;

static const Criticality asn1_value__local_3362 = 0;

static const ProcedureCode asn1_value__local_3363 = 3;

static const Criticality asn1_value__local_3364 = 0;

static const ProcedureCode asn1_value__local_3365 = 4;

static const Criticality asn1_value__local_3366 = 0;

static const ProcedureCode asn1_value__local_3367 = 5;

static const Criticality asn1_value__local_3368 = 0;

static const ProcedureCode asn1_value__local_3369 = 6;

static const Criticality asn1_value__local_3370 = 0;

static const ProcedureCode asn1_value__local_3371 = 7;

static const Criticality asn1_value__local_3372 = 0;

static const ProcedureCode asn1_value__local_3373 = 9;

static const Criticality asn1_value__local_3374 = 0;

static const ProcedureCode asn1_value__local_3375 = 27;

static const Criticality asn1_value__local_3376 = 0;

static const ProcedureCode asn1_value__local_3377 = 30;

static const Criticality asn1_value__local_3378 = 0;

static const ProcedureCode asn1_value__local_3379 = 31;

static const Criticality asn1_value__local_3380 = 0;

static const ProcedureCode asn1_value__local_3381 = 33;

static const Criticality asn1_value__local_3382 = 0;

static const ProcedureCode asn1_value__local_3383 = 35;

static const Criticality asn1_value__local_3384 = 0;

static const ProcedureCode asn1_value__local_3385 = 36;

static const Criticality asn1_value__local_3386 = 0;

static const ProcedureCode asn1_value__local_3387 = 37;

static const Criticality asn1_value__local_3388 = 0;

static const ProcedureCode asn1_value__local_3389 = 38;

static const Criticality asn1_value__local_3390 = 0;

static const ProcedureCode asn1_value__local_3391 = 39;

static const Criticality asn1_value__local_3392 = 0;

static const ProcedureCode asn1_value__local_3393 = 40;

static const Criticality asn1_value__local_3394 = 0;

static const ProcedureCode asn1_value__local_3395 = 42;

static const Criticality asn1_value__local_3396 = 0;

static const ProcedureCode asn1_value__local_3397 = 43;

static const Criticality asn1_value__local_3398 = 0;

static const ProcedureCode asn1_value__local_3399 = 45;

static const Criticality asn1_value__local_3400 = 0;

static const ProcedureCode asn1_value__local_3401 = 46;

static const Criticality asn1_value__local_3402 = 0;

static const ProcedureCode asn1_value__local_3403 = 47;

static const Criticality asn1_value__local_3404 = 1;

static const ProcedureCode asn1_value__local_3405 = 10;

static const Criticality asn1_value__local_3406 = 1;

static const ProcedureCode asn1_value__local_3407 = 11;

static const Criticality asn1_value__local_3408 = 1;

static const ProcedureCode asn1_value__local_3409 = 12;

static const Criticality asn1_value__local_3410 = 1;

static const ProcedureCode asn1_value__local_3411 = 13;

static const Criticality asn1_value__local_3412 = 1;

static const ProcedureCode asn1_value__local_3413 = 14;

static const Criticality asn1_value__local_3414 = 1;

static const ProcedureCode asn1_value__local_3415 = 15;

static const Criticality asn1_value__local_3416 = 1;

static const ProcedureCode asn1_value__local_3417 = 16;

static const Criticality asn1_value__local_3418 = 1;

static const ProcedureCode asn1_value__local_3419 = 26;

static const Criticality asn1_value__local_3420 = 1;

static const ProcedureCode asn1_value__local_3421 = 17;

static const Criticality asn1_value__local_3422 = 1;

static const ProcedureCode asn1_value__local_3423 = 18;

static const Criticality asn1_value__local_3424 = 1;

static const ProcedureCode asn1_value__local_3425 = 19;

static const Criticality asn1_value__local_3426 = 1;

static const ProcedureCode asn1_value__local_3427 = 20;

static const Criticality asn1_value__local_3428 = 1;

static const ProcedureCode asn1_value__local_3429 = 21;

static const Criticality asn1_value__local_3430 = 1;

static const ProcedureCode asn1_value__local_3431 = 22;

static const Criticality asn1_value__local_3432 = 1;

static const ProcedureCode asn1_value__local_3433 = 23;

static const Criticality asn1_value__local_3434 = 1;

static const ProcedureCode asn1_value__local_3435 = 24;

static const Criticality asn1_value__local_3436 = 1;

static const ProcedureCode asn1_value__local_3437 = 25;

static const Criticality asn1_value__local_3438 = 1;

static const ProcedureCode asn1_value__local_3439 = 28;

static const Criticality asn1_value__local_3440 = 1;

static const ProcedureCode asn1_value__local_3441 = 29;

static const Criticality asn1_value__local_3442 = 1;

static const ProcedureCode asn1_value__local_3443 = 32;

static const Criticality asn1_value__local_3444 = 1;

static const ProcedureCode asn1_value__local_3445 = 34;

static const Criticality asn1_value__local_3446 = 1;

static const ProcedureCode asn1_value__local_3447 = 41;

static const Criticality asn1_value__local_3448 = 1;

static const ProcedureCode asn1_value__local_3449 = 44;

static const Criticality asn1_value__local_3450 = 1;

static const ProcedureCode asn1_value__local_3451 = 0;

static const Criticality asn1_value__local_3452 = 0;

static const RANAP_ELEMENTARY_PROCEDURE asn1_value__local_3358[] = {
{
  (intptr_t)asn1_type_Iu_ReleaseCommand,
  (intptr_t)asn1_type_Iu_ReleaseComplete,
  0,
  0,
  (intptr_t)&asn1_value__local_3359,
  (intptr_t)&asn1_value__local_3360,
},
{
  (intptr_t)asn1_type_RelocationRequired,
  (intptr_t)asn1_type_RelocationCommand,
  (intptr_t)asn1_type_RelocationPreparationFailure,
  0,
  (intptr_t)&asn1_value__local_3361,
  (intptr_t)&asn1_value__local_3362,
},
{
  (intptr_t)asn1_type_RelocationRequest,
  (intptr_t)asn1_type_RelocationRequestAcknowledge,
  (intptr_t)asn1_type_RelocationFailure,
  0,
  (intptr_t)&asn1_value__local_3363,
  (intptr_t)&asn1_value__local_3364,
},
{
  (intptr_t)asn1_type_RelocationCancel,
  (intptr_t)asn1_type_RelocationCancelAcknowledge,
  0,
  0,
  (intptr_t)&asn1_value__local_3365,
  (intptr_t)&asn1_value__local_3366,
},
{
  (intptr_t)asn1_type_SRNS_ContextRequest,
  (intptr_t)asn1_type_SRNS_ContextResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3367,
  (intptr_t)&asn1_value__local_3368,
},
{
  (intptr_t)asn1_type_SecurityModeCommand,
  (intptr_t)asn1_type_SecurityModeComplete,
  (intptr_t)asn1_type_SecurityModeReject,
  0,
  (intptr_t)&asn1_value__local_3369,
  (intptr_t)&asn1_value__local_3370,
},
{
  (intptr_t)asn1_type_DataVolumeReportRequest,
  (intptr_t)asn1_type_DataVolumeReport,
  0,
  0,
  (intptr_t)&asn1_value__local_3371,
  (intptr_t)&asn1_value__local_3372,
},
{
  (intptr_t)asn1_type_Reset,
  (intptr_t)asn1_type_ResetAcknowledge,
  0,
  0,
  (intptr_t)&asn1_value__local_3373,
  (intptr_t)&asn1_value__local_3374,
},
{
  (intptr_t)asn1_type_ResetResource,
  (intptr_t)asn1_type_ResetResourceAcknowledge,
  0,
  0,
  (intptr_t)&asn1_value__local_3375,
  (intptr_t)&asn1_value__local_3376,
},
{
  (intptr_t)asn1_type_LocationRelatedDataRequest,
  (intptr_t)asn1_type_LocationRelatedDataResponse,
  (intptr_t)asn1_type_LocationRelatedDataFailure,
  0,
  (intptr_t)&asn1_value__local_3377,
  (intptr_t)&asn1_value__local_3378,
},
{
  (intptr_t)asn1_type_InformationTransferIndication,
  (intptr_t)asn1_type_InformationTransferConfirmation,
  (intptr_t)asn1_type_InformationTransferFailure,
  0,
  (intptr_t)&asn1_value__local_3379,
  (intptr_t)&asn1_value__local_3380,
},
{
  (intptr_t)asn1_type_UplinkInformationExchangeRequest,
  (intptr_t)asn1_type_UplinkInformationExchangeResponse,
  (intptr_t)asn1_type_UplinkInformationExchangeFailure,
  0,
  (intptr_t)&asn1_value__local_3381,
  (intptr_t)&asn1_value__local_3382,
},
{
  (intptr_t)asn1_type_MBMSSessionStart,
  (intptr_t)asn1_type_MBMSSessionStartResponse,
  (intptr_t)asn1_type_MBMSSessionStartFailure,
  0,
  (intptr_t)&asn1_value__local_3383,
  (intptr_t)&asn1_value__local_3384,
},
{
  (intptr_t)asn1_type_MBMSSessionUpdate,
  (intptr_t)asn1_type_MBMSSessionUpdateResponse,
  (intptr_t)asn1_type_MBMSSessionUpdateFailure,
  0,
  (intptr_t)&asn1_value__local_3385,
  (intptr_t)&asn1_value__local_3386,
},
{
  (intptr_t)asn1_type_MBMSSessionStop,
  (intptr_t)asn1_type_MBMSSessionStopResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3387,
  (intptr_t)&asn1_value__local_3388,
},
{
  (intptr_t)asn1_type_MBMSUELinkingRequest,
  0,
  0,
  (intptr_t)asn1_type_MBMSUELinkingResponse,
  (intptr_t)&asn1_value__local_3389,
  (intptr_t)&asn1_value__local_3390,
},
{
  (intptr_t)asn1_type_MBMSRegistrationRequest,
  (intptr_t)asn1_type_MBMSRegistrationResponse,
  (intptr_t)asn1_type_MBMSRegistrationFailure,
  0,
  (intptr_t)&asn1_value__local_3391,
  (intptr_t)&asn1_value__local_3392,
},
{
  (intptr_t)asn1_type_MBMSCNDe_RegistrationRequest,
  (intptr_t)asn1_type_MBMSCNDe_RegistrationResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3393,
  (intptr_t)&asn1_value__local_3394,
},
{
  (intptr_t)asn1_type_MBMSRABReleaseRequest,
  (intptr_t)asn1_type_MBMSRABRelease,
  (intptr_t)asn1_type_MBMSRABReleaseFailure,
  0,
  (intptr_t)&asn1_value__local_3395,
  (intptr_t)&asn1_value__local_3396,
},
{
  (intptr_t)asn1_type_EnhancedRelocationCompleteRequest,
  (intptr_t)asn1_type_EnhancedRelocationCompleteResponse,
  (intptr_t)asn1_type_EnhancedRelocationCompleteFailure,
  0,
  (intptr_t)&asn1_value__local_3397,
  (intptr_t)&asn1_value__local_3398,
},
{
  (intptr_t)asn1_type_RANAP_EnhancedRelocationInformationRequest,
  (intptr_t)asn1_type_RANAP_EnhancedRelocationInformationResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3399,
  (intptr_t)&asn1_value__local_3400,
},
{
  (intptr_t)asn1_type_SRVCC_CSKeysRequest,
  0,
  0,
  (intptr_t)asn1_type_SRVCC_CSKeysResponse,
  (intptr_t)&asn1_value__local_3401,
  (intptr_t)&asn1_value__local_3402,
},
{
  (intptr_t)asn1_type_UeRadioCapabilityMatchRequest,
  0,
  0,
  (intptr_t)asn1_type_UeRadioCapabilityMatchResponse,
  (intptr_t)&asn1_value__local_3403,
  (intptr_t)&asn1_value__local_3404,
},
{
  (intptr_t)asn1_type_RAB_ReleaseRequest,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3405,
  (intptr_t)&asn1_value__local_3406,
},
{
  (intptr_t)asn1_type_Iu_ReleaseRequest,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3407,
  (intptr_t)&asn1_value__local_3408,
},
{
  (intptr_t)asn1_type_RelocationDetect,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3409,
  (intptr_t)&asn1_value__local_3410,
},
{
  (intptr_t)asn1_type_RelocationComplete,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3411,
  (intptr_t)&asn1_value__local_3412,
},
{
  (intptr_t)asn1_type_Paging,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3413,
  (intptr_t)&asn1_value__local_3414,
},
{
  (intptr_t)asn1_type_CommonID,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3415,
  (intptr_t)&asn1_value__local_3416,
},
{
  (intptr_t)asn1_type_CN_InvokeTrace,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3417,
  (intptr_t)&asn1_value__local_3418,
},
{
  (intptr_t)asn1_type_CN_DeactivateTrace,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3419,
  (intptr_t)&asn1_value__local_3420,
},
{
  (intptr_t)asn1_type_LocationReportingControl,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3421,
  (intptr_t)&asn1_value__local_3422,
},
{
  (intptr_t)asn1_type_LocationReport,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3423,
  (intptr_t)&asn1_value__local_3424,
},
{
  (intptr_t)asn1_type_InitialUE_Message,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3425,
  (intptr_t)&asn1_value__local_3426,
},
{
  (intptr_t)asn1_type_DirectTransfer,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3427,
  (intptr_t)&asn1_value__local_3428,
},
{
  (intptr_t)asn1_type_Overload,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3429,
  (intptr_t)&asn1_value__local_3430,
},
{
  (intptr_t)asn1_type_ErrorIndication,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3431,
  (intptr_t)&asn1_value__local_3432,
},
{
  (intptr_t)asn1_type_SRNS_DataForwardCommand,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3433,
  (intptr_t)&asn1_value__local_3434,
},
{
  (intptr_t)asn1_type_ForwardSRNS_Context,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3435,
  (intptr_t)&asn1_value__local_3436,
},
{
  (intptr_t)asn1_type_PrivateMessage,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3437,
  (intptr_t)&asn1_value__local_3438,
},
{
  (intptr_t)asn1_type_RANAP_RelocationInformation,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3439,
  (intptr_t)&asn1_value__local_3440,
},
{
  (intptr_t)asn1_type_RAB_ModifyRequest,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3441,
  (intptr_t)&asn1_value__local_3442,
},
{
  (intptr_t)asn1_type_UESpecificInformationIndication,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3443,
  (intptr_t)&asn1_value__local_3444,
},
{
  (intptr_t)asn1_type_DirectInformationTransfer,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3445,
  (intptr_t)&asn1_value__local_3446,
},
{
  (intptr_t)asn1_type_MBMSRABEstablishmentIndication,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3447,
  (intptr_t)&asn1_value__local_3448,
},
{
  (intptr_t)asn1_type_EnhancedRelocationCompleteConfirm,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3449,
  (intptr_t)&asn1_value__local_3450,
},
{
  (intptr_t)asn1_type_RAB_AssignmentRequest,
  0,
  0,
  (intptr_t)asn1_type_RAB_AssignmentResponse,
  (intptr_t)&asn1_value__local_3451,
  (intptr_t)&asn1_value__local_3452,
},
};

static const ASN1CType asn1_constraint__local_3357[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_ELEMENTARY_PROCEDURE,
  0,
  (intptr_t)asn1_value__local_3358,
  47,
  1,
  0,
  0x80000000,
  4,
};

static const ASN1CType asn1_type__local_3356[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3357,
};

const ASN1CType asn1_type_InitiatingMessage[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100000,
  3,
  sizeof(InitiatingMessage),

  offsetof(InitiatingMessage, procedureCode) | 0x0,
  (intptr_t)asn1_type__local_3354,
  0,
  (intptr_t)"procedureCode",

  offsetof(InitiatingMessage, criticality) | 0x0,
  (intptr_t)asn1_type__local_3355,
  0,
  (intptr_t)"criticality",

  offsetof(InitiatingMessage, value) | 0x0,
  (intptr_t)asn1_type__local_3356,
  0,
  (intptr_t)"value",

  (intptr_t)"InitiatingMessage",
};

static const ASN1CType asn1_type__local_3453[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProcedureCode,
};

static const ASN1CType asn1_type__local_3454[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProcedureCode asn1_value__local_3458 = 1;

static const Criticality asn1_value__local_3459 = 0;

static const ProcedureCode asn1_value__local_3460 = 2;

static const Criticality asn1_value__local_3461 = 0;

static const ProcedureCode asn1_value__local_3462 = 3;

static const Criticality asn1_value__local_3463 = 0;

static const ProcedureCode asn1_value__local_3464 = 4;

static const Criticality asn1_value__local_3465 = 0;

static const ProcedureCode asn1_value__local_3466 = 5;

static const Criticality asn1_value__local_3467 = 0;

static const ProcedureCode asn1_value__local_3468 = 6;

static const Criticality asn1_value__local_3469 = 0;

static const ProcedureCode asn1_value__local_3470 = 7;

static const Criticality asn1_value__local_3471 = 0;

static const ProcedureCode asn1_value__local_3472 = 9;

static const Criticality asn1_value__local_3473 = 0;

static const ProcedureCode asn1_value__local_3474 = 27;

static const Criticality asn1_value__local_3475 = 0;

static const ProcedureCode asn1_value__local_3476 = 30;

static const Criticality asn1_value__local_3477 = 0;

static const ProcedureCode asn1_value__local_3478 = 31;

static const Criticality asn1_value__local_3479 = 0;

static const ProcedureCode asn1_value__local_3480 = 33;

static const Criticality asn1_value__local_3481 = 0;

static const ProcedureCode asn1_value__local_3482 = 35;

static const Criticality asn1_value__local_3483 = 0;

static const ProcedureCode asn1_value__local_3484 = 36;

static const Criticality asn1_value__local_3485 = 0;

static const ProcedureCode asn1_value__local_3486 = 37;

static const Criticality asn1_value__local_3487 = 0;

static const ProcedureCode asn1_value__local_3488 = 38;

static const Criticality asn1_value__local_3489 = 0;

static const ProcedureCode asn1_value__local_3490 = 39;

static const Criticality asn1_value__local_3491 = 0;

static const ProcedureCode asn1_value__local_3492 = 40;

static const Criticality asn1_value__local_3493 = 0;

static const ProcedureCode asn1_value__local_3494 = 42;

static const Criticality asn1_value__local_3495 = 0;

static const ProcedureCode asn1_value__local_3496 = 43;

static const Criticality asn1_value__local_3497 = 0;

static const ProcedureCode asn1_value__local_3498 = 45;

static const Criticality asn1_value__local_3499 = 0;

static const ProcedureCode asn1_value__local_3500 = 46;

static const Criticality asn1_value__local_3501 = 0;

static const ProcedureCode asn1_value__local_3502 = 47;

static const Criticality asn1_value__local_3503 = 1;

static const ProcedureCode asn1_value__local_3504 = 10;

static const Criticality asn1_value__local_3505 = 1;

static const ProcedureCode asn1_value__local_3506 = 11;

static const Criticality asn1_value__local_3507 = 1;

static const ProcedureCode asn1_value__local_3508 = 12;

static const Criticality asn1_value__local_3509 = 1;

static const ProcedureCode asn1_value__local_3510 = 13;

static const Criticality asn1_value__local_3511 = 1;

static const ProcedureCode asn1_value__local_3512 = 14;

static const Criticality asn1_value__local_3513 = 1;

static const ProcedureCode asn1_value__local_3514 = 15;

static const Criticality asn1_value__local_3515 = 1;

static const ProcedureCode asn1_value__local_3516 = 16;

static const Criticality asn1_value__local_3517 = 1;

static const ProcedureCode asn1_value__local_3518 = 26;

static const Criticality asn1_value__local_3519 = 1;

static const ProcedureCode asn1_value__local_3520 = 17;

static const Criticality asn1_value__local_3521 = 1;

static const ProcedureCode asn1_value__local_3522 = 18;

static const Criticality asn1_value__local_3523 = 1;

static const ProcedureCode asn1_value__local_3524 = 19;

static const Criticality asn1_value__local_3525 = 1;

static const ProcedureCode asn1_value__local_3526 = 20;

static const Criticality asn1_value__local_3527 = 1;

static const ProcedureCode asn1_value__local_3528 = 21;

static const Criticality asn1_value__local_3529 = 1;

static const ProcedureCode asn1_value__local_3530 = 22;

static const Criticality asn1_value__local_3531 = 1;

static const ProcedureCode asn1_value__local_3532 = 23;

static const Criticality asn1_value__local_3533 = 1;

static const ProcedureCode asn1_value__local_3534 = 24;

static const Criticality asn1_value__local_3535 = 1;

static const ProcedureCode asn1_value__local_3536 = 25;

static const Criticality asn1_value__local_3537 = 1;

static const ProcedureCode asn1_value__local_3538 = 28;

static const Criticality asn1_value__local_3539 = 1;

static const ProcedureCode asn1_value__local_3540 = 29;

static const Criticality asn1_value__local_3541 = 1;

static const ProcedureCode asn1_value__local_3542 = 32;

static const Criticality asn1_value__local_3543 = 1;

static const ProcedureCode asn1_value__local_3544 = 34;

static const Criticality asn1_value__local_3545 = 1;

static const ProcedureCode asn1_value__local_3546 = 41;

static const Criticality asn1_value__local_3547 = 1;

static const ProcedureCode asn1_value__local_3548 = 44;

static const Criticality asn1_value__local_3549 = 1;

static const ProcedureCode asn1_value__local_3550 = 0;

static const Criticality asn1_value__local_3551 = 0;

static const RANAP_ELEMENTARY_PROCEDURE asn1_value__local_3457[] = {
{
  (intptr_t)asn1_type_Iu_ReleaseCommand,
  (intptr_t)asn1_type_Iu_ReleaseComplete,
  0,
  0,
  (intptr_t)&asn1_value__local_3458,
  (intptr_t)&asn1_value__local_3459,
},
{
  (intptr_t)asn1_type_RelocationRequired,
  (intptr_t)asn1_type_RelocationCommand,
  (intptr_t)asn1_type_RelocationPreparationFailure,
  0,
  (intptr_t)&asn1_value__local_3460,
  (intptr_t)&asn1_value__local_3461,
},
{
  (intptr_t)asn1_type_RelocationRequest,
  (intptr_t)asn1_type_RelocationRequestAcknowledge,
  (intptr_t)asn1_type_RelocationFailure,
  0,
  (intptr_t)&asn1_value__local_3462,
  (intptr_t)&asn1_value__local_3463,
},
{
  (intptr_t)asn1_type_RelocationCancel,
  (intptr_t)asn1_type_RelocationCancelAcknowledge,
  0,
  0,
  (intptr_t)&asn1_value__local_3464,
  (intptr_t)&asn1_value__local_3465,
},
{
  (intptr_t)asn1_type_SRNS_ContextRequest,
  (intptr_t)asn1_type_SRNS_ContextResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3466,
  (intptr_t)&asn1_value__local_3467,
},
{
  (intptr_t)asn1_type_SecurityModeCommand,
  (intptr_t)asn1_type_SecurityModeComplete,
  (intptr_t)asn1_type_SecurityModeReject,
  0,
  (intptr_t)&asn1_value__local_3468,
  (intptr_t)&asn1_value__local_3469,
},
{
  (intptr_t)asn1_type_DataVolumeReportRequest,
  (intptr_t)asn1_type_DataVolumeReport,
  0,
  0,
  (intptr_t)&asn1_value__local_3470,
  (intptr_t)&asn1_value__local_3471,
},
{
  (intptr_t)asn1_type_Reset,
  (intptr_t)asn1_type_ResetAcknowledge,
  0,
  0,
  (intptr_t)&asn1_value__local_3472,
  (intptr_t)&asn1_value__local_3473,
},
{
  (intptr_t)asn1_type_ResetResource,
  (intptr_t)asn1_type_ResetResourceAcknowledge,
  0,
  0,
  (intptr_t)&asn1_value__local_3474,
  (intptr_t)&asn1_value__local_3475,
},
{
  (intptr_t)asn1_type_LocationRelatedDataRequest,
  (intptr_t)asn1_type_LocationRelatedDataResponse,
  (intptr_t)asn1_type_LocationRelatedDataFailure,
  0,
  (intptr_t)&asn1_value__local_3476,
  (intptr_t)&asn1_value__local_3477,
},
{
  (intptr_t)asn1_type_InformationTransferIndication,
  (intptr_t)asn1_type_InformationTransferConfirmation,
  (intptr_t)asn1_type_InformationTransferFailure,
  0,
  (intptr_t)&asn1_value__local_3478,
  (intptr_t)&asn1_value__local_3479,
},
{
  (intptr_t)asn1_type_UplinkInformationExchangeRequest,
  (intptr_t)asn1_type_UplinkInformationExchangeResponse,
  (intptr_t)asn1_type_UplinkInformationExchangeFailure,
  0,
  (intptr_t)&asn1_value__local_3480,
  (intptr_t)&asn1_value__local_3481,
},
{
  (intptr_t)asn1_type_MBMSSessionStart,
  (intptr_t)asn1_type_MBMSSessionStartResponse,
  (intptr_t)asn1_type_MBMSSessionStartFailure,
  0,
  (intptr_t)&asn1_value__local_3482,
  (intptr_t)&asn1_value__local_3483,
},
{
  (intptr_t)asn1_type_MBMSSessionUpdate,
  (intptr_t)asn1_type_MBMSSessionUpdateResponse,
  (intptr_t)asn1_type_MBMSSessionUpdateFailure,
  0,
  (intptr_t)&asn1_value__local_3484,
  (intptr_t)&asn1_value__local_3485,
},
{
  (intptr_t)asn1_type_MBMSSessionStop,
  (intptr_t)asn1_type_MBMSSessionStopResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3486,
  (intptr_t)&asn1_value__local_3487,
},
{
  (intptr_t)asn1_type_MBMSUELinkingRequest,
  0,
  0,
  (intptr_t)asn1_type_MBMSUELinkingResponse,
  (intptr_t)&asn1_value__local_3488,
  (intptr_t)&asn1_value__local_3489,
},
{
  (intptr_t)asn1_type_MBMSRegistrationRequest,
  (intptr_t)asn1_type_MBMSRegistrationResponse,
  (intptr_t)asn1_type_MBMSRegistrationFailure,
  0,
  (intptr_t)&asn1_value__local_3490,
  (intptr_t)&asn1_value__local_3491,
},
{
  (intptr_t)asn1_type_MBMSCNDe_RegistrationRequest,
  (intptr_t)asn1_type_MBMSCNDe_RegistrationResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3492,
  (intptr_t)&asn1_value__local_3493,
},
{
  (intptr_t)asn1_type_MBMSRABReleaseRequest,
  (intptr_t)asn1_type_MBMSRABRelease,
  (intptr_t)asn1_type_MBMSRABReleaseFailure,
  0,
  (intptr_t)&asn1_value__local_3494,
  (intptr_t)&asn1_value__local_3495,
},
{
  (intptr_t)asn1_type_EnhancedRelocationCompleteRequest,
  (intptr_t)asn1_type_EnhancedRelocationCompleteResponse,
  (intptr_t)asn1_type_EnhancedRelocationCompleteFailure,
  0,
  (intptr_t)&asn1_value__local_3496,
  (intptr_t)&asn1_value__local_3497,
},
{
  (intptr_t)asn1_type_RANAP_EnhancedRelocationInformationRequest,
  (intptr_t)asn1_type_RANAP_EnhancedRelocationInformationResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3498,
  (intptr_t)&asn1_value__local_3499,
},
{
  (intptr_t)asn1_type_SRVCC_CSKeysRequest,
  0,
  0,
  (intptr_t)asn1_type_SRVCC_CSKeysResponse,
  (intptr_t)&asn1_value__local_3500,
  (intptr_t)&asn1_value__local_3501,
},
{
  (intptr_t)asn1_type_UeRadioCapabilityMatchRequest,
  0,
  0,
  (intptr_t)asn1_type_UeRadioCapabilityMatchResponse,
  (intptr_t)&asn1_value__local_3502,
  (intptr_t)&asn1_value__local_3503,
},
{
  (intptr_t)asn1_type_RAB_ReleaseRequest,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3504,
  (intptr_t)&asn1_value__local_3505,
},
{
  (intptr_t)asn1_type_Iu_ReleaseRequest,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3506,
  (intptr_t)&asn1_value__local_3507,
},
{
  (intptr_t)asn1_type_RelocationDetect,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3508,
  (intptr_t)&asn1_value__local_3509,
},
{
  (intptr_t)asn1_type_RelocationComplete,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3510,
  (intptr_t)&asn1_value__local_3511,
},
{
  (intptr_t)asn1_type_Paging,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3512,
  (intptr_t)&asn1_value__local_3513,
},
{
  (intptr_t)asn1_type_CommonID,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3514,
  (intptr_t)&asn1_value__local_3515,
},
{
  (intptr_t)asn1_type_CN_InvokeTrace,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3516,
  (intptr_t)&asn1_value__local_3517,
},
{
  (intptr_t)asn1_type_CN_DeactivateTrace,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3518,
  (intptr_t)&asn1_value__local_3519,
},
{
  (intptr_t)asn1_type_LocationReportingControl,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3520,
  (intptr_t)&asn1_value__local_3521,
},
{
  (intptr_t)asn1_type_LocationReport,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3522,
  (intptr_t)&asn1_value__local_3523,
},
{
  (intptr_t)asn1_type_InitialUE_Message,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3524,
  (intptr_t)&asn1_value__local_3525,
},
{
  (intptr_t)asn1_type_DirectTransfer,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3526,
  (intptr_t)&asn1_value__local_3527,
},
{
  (intptr_t)asn1_type_Overload,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3528,
  (intptr_t)&asn1_value__local_3529,
},
{
  (intptr_t)asn1_type_ErrorIndication,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3530,
  (intptr_t)&asn1_value__local_3531,
},
{
  (intptr_t)asn1_type_SRNS_DataForwardCommand,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3532,
  (intptr_t)&asn1_value__local_3533,
},
{
  (intptr_t)asn1_type_ForwardSRNS_Context,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3534,
  (intptr_t)&asn1_value__local_3535,
},
{
  (intptr_t)asn1_type_PrivateMessage,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3536,
  (intptr_t)&asn1_value__local_3537,
},
{
  (intptr_t)asn1_type_RANAP_RelocationInformation,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3538,
  (intptr_t)&asn1_value__local_3539,
},
{
  (intptr_t)asn1_type_RAB_ModifyRequest,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3540,
  (intptr_t)&asn1_value__local_3541,
},
{
  (intptr_t)asn1_type_UESpecificInformationIndication,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3542,
  (intptr_t)&asn1_value__local_3543,
},
{
  (intptr_t)asn1_type_DirectInformationTransfer,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3544,
  (intptr_t)&asn1_value__local_3545,
},
{
  (intptr_t)asn1_type_MBMSRABEstablishmentIndication,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3546,
  (intptr_t)&asn1_value__local_3547,
},
{
  (intptr_t)asn1_type_EnhancedRelocationCompleteConfirm,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3548,
  (intptr_t)&asn1_value__local_3549,
},
{
  (intptr_t)asn1_type_RAB_AssignmentRequest,
  0,
  0,
  (intptr_t)asn1_type_RAB_AssignmentResponse,
  (intptr_t)&asn1_value__local_3550,
  (intptr_t)&asn1_value__local_3551,
},
};

static const ASN1CType asn1_constraint__local_3456[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_ELEMENTARY_PROCEDURE,
  1,
  (intptr_t)asn1_value__local_3457,
  47,
  1,
  0,
  0x80000000,
  4,
};

static const ASN1CType asn1_type__local_3455[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3456,
};

const ASN1CType asn1_type_SuccessfulOutcome[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100001,
  3,
  sizeof(SuccessfulOutcome),

  offsetof(SuccessfulOutcome, procedureCode) | 0x0,
  (intptr_t)asn1_type__local_3453,
  0,
  (intptr_t)"procedureCode",

  offsetof(SuccessfulOutcome, criticality) | 0x0,
  (intptr_t)asn1_type__local_3454,
  0,
  (intptr_t)"criticality",

  offsetof(SuccessfulOutcome, value) | 0x0,
  (intptr_t)asn1_type__local_3455,
  0,
  (intptr_t)"value",

  (intptr_t)"SuccessfulOutcome",
};

static const ASN1CType asn1_type__local_3552[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProcedureCode,
};

static const ASN1CType asn1_type__local_3553[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProcedureCode asn1_value__local_3557 = 1;

static const Criticality asn1_value__local_3558 = 0;

static const ProcedureCode asn1_value__local_3559 = 2;

static const Criticality asn1_value__local_3560 = 0;

static const ProcedureCode asn1_value__local_3561 = 3;

static const Criticality asn1_value__local_3562 = 0;

static const ProcedureCode asn1_value__local_3563 = 4;

static const Criticality asn1_value__local_3564 = 0;

static const ProcedureCode asn1_value__local_3565 = 5;

static const Criticality asn1_value__local_3566 = 0;

static const ProcedureCode asn1_value__local_3567 = 6;

static const Criticality asn1_value__local_3568 = 0;

static const ProcedureCode asn1_value__local_3569 = 7;

static const Criticality asn1_value__local_3570 = 0;

static const ProcedureCode asn1_value__local_3571 = 9;

static const Criticality asn1_value__local_3572 = 0;

static const ProcedureCode asn1_value__local_3573 = 27;

static const Criticality asn1_value__local_3574 = 0;

static const ProcedureCode asn1_value__local_3575 = 30;

static const Criticality asn1_value__local_3576 = 0;

static const ProcedureCode asn1_value__local_3577 = 31;

static const Criticality asn1_value__local_3578 = 0;

static const ProcedureCode asn1_value__local_3579 = 33;

static const Criticality asn1_value__local_3580 = 0;

static const ProcedureCode asn1_value__local_3581 = 35;

static const Criticality asn1_value__local_3582 = 0;

static const ProcedureCode asn1_value__local_3583 = 36;

static const Criticality asn1_value__local_3584 = 0;

static const ProcedureCode asn1_value__local_3585 = 37;

static const Criticality asn1_value__local_3586 = 0;

static const ProcedureCode asn1_value__local_3587 = 38;

static const Criticality asn1_value__local_3588 = 0;

static const ProcedureCode asn1_value__local_3589 = 39;

static const Criticality asn1_value__local_3590 = 0;

static const ProcedureCode asn1_value__local_3591 = 40;

static const Criticality asn1_value__local_3592 = 0;

static const ProcedureCode asn1_value__local_3593 = 42;

static const Criticality asn1_value__local_3594 = 0;

static const ProcedureCode asn1_value__local_3595 = 43;

static const Criticality asn1_value__local_3596 = 0;

static const ProcedureCode asn1_value__local_3597 = 45;

static const Criticality asn1_value__local_3598 = 0;

static const ProcedureCode asn1_value__local_3599 = 46;

static const Criticality asn1_value__local_3600 = 0;

static const ProcedureCode asn1_value__local_3601 = 47;

static const Criticality asn1_value__local_3602 = 1;

static const ProcedureCode asn1_value__local_3603 = 10;

static const Criticality asn1_value__local_3604 = 1;

static const ProcedureCode asn1_value__local_3605 = 11;

static const Criticality asn1_value__local_3606 = 1;

static const ProcedureCode asn1_value__local_3607 = 12;

static const Criticality asn1_value__local_3608 = 1;

static const ProcedureCode asn1_value__local_3609 = 13;

static const Criticality asn1_value__local_3610 = 1;

static const ProcedureCode asn1_value__local_3611 = 14;

static const Criticality asn1_value__local_3612 = 1;

static const ProcedureCode asn1_value__local_3613 = 15;

static const Criticality asn1_value__local_3614 = 1;

static const ProcedureCode asn1_value__local_3615 = 16;

static const Criticality asn1_value__local_3616 = 1;

static const ProcedureCode asn1_value__local_3617 = 26;

static const Criticality asn1_value__local_3618 = 1;

static const ProcedureCode asn1_value__local_3619 = 17;

static const Criticality asn1_value__local_3620 = 1;

static const ProcedureCode asn1_value__local_3621 = 18;

static const Criticality asn1_value__local_3622 = 1;

static const ProcedureCode asn1_value__local_3623 = 19;

static const Criticality asn1_value__local_3624 = 1;

static const ProcedureCode asn1_value__local_3625 = 20;

static const Criticality asn1_value__local_3626 = 1;

static const ProcedureCode asn1_value__local_3627 = 21;

static const Criticality asn1_value__local_3628 = 1;

static const ProcedureCode asn1_value__local_3629 = 22;

static const Criticality asn1_value__local_3630 = 1;

static const ProcedureCode asn1_value__local_3631 = 23;

static const Criticality asn1_value__local_3632 = 1;

static const ProcedureCode asn1_value__local_3633 = 24;

static const Criticality asn1_value__local_3634 = 1;

static const ProcedureCode asn1_value__local_3635 = 25;

static const Criticality asn1_value__local_3636 = 1;

static const ProcedureCode asn1_value__local_3637 = 28;

static const Criticality asn1_value__local_3638 = 1;

static const ProcedureCode asn1_value__local_3639 = 29;

static const Criticality asn1_value__local_3640 = 1;

static const ProcedureCode asn1_value__local_3641 = 32;

static const Criticality asn1_value__local_3642 = 1;

static const ProcedureCode asn1_value__local_3643 = 34;

static const Criticality asn1_value__local_3644 = 1;

static const ProcedureCode asn1_value__local_3645 = 41;

static const Criticality asn1_value__local_3646 = 1;

static const ProcedureCode asn1_value__local_3647 = 44;

static const Criticality asn1_value__local_3648 = 1;

static const ProcedureCode asn1_value__local_3649 = 0;

static const Criticality asn1_value__local_3650 = 0;

static const RANAP_ELEMENTARY_PROCEDURE asn1_value__local_3556[] = {
{
  (intptr_t)asn1_type_Iu_ReleaseCommand,
  (intptr_t)asn1_type_Iu_ReleaseComplete,
  0,
  0,
  (intptr_t)&asn1_value__local_3557,
  (intptr_t)&asn1_value__local_3558,
},
{
  (intptr_t)asn1_type_RelocationRequired,
  (intptr_t)asn1_type_RelocationCommand,
  (intptr_t)asn1_type_RelocationPreparationFailure,
  0,
  (intptr_t)&asn1_value__local_3559,
  (intptr_t)&asn1_value__local_3560,
},
{
  (intptr_t)asn1_type_RelocationRequest,
  (intptr_t)asn1_type_RelocationRequestAcknowledge,
  (intptr_t)asn1_type_RelocationFailure,
  0,
  (intptr_t)&asn1_value__local_3561,
  (intptr_t)&asn1_value__local_3562,
},
{
  (intptr_t)asn1_type_RelocationCancel,
  (intptr_t)asn1_type_RelocationCancelAcknowledge,
  0,
  0,
  (intptr_t)&asn1_value__local_3563,
  (intptr_t)&asn1_value__local_3564,
},
{
  (intptr_t)asn1_type_SRNS_ContextRequest,
  (intptr_t)asn1_type_SRNS_ContextResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3565,
  (intptr_t)&asn1_value__local_3566,
},
{
  (intptr_t)asn1_type_SecurityModeCommand,
  (intptr_t)asn1_type_SecurityModeComplete,
  (intptr_t)asn1_type_SecurityModeReject,
  0,
  (intptr_t)&asn1_value__local_3567,
  (intptr_t)&asn1_value__local_3568,
},
{
  (intptr_t)asn1_type_DataVolumeReportRequest,
  (intptr_t)asn1_type_DataVolumeReport,
  0,
  0,
  (intptr_t)&asn1_value__local_3569,
  (intptr_t)&asn1_value__local_3570,
},
{
  (intptr_t)asn1_type_Reset,
  (intptr_t)asn1_type_ResetAcknowledge,
  0,
  0,
  (intptr_t)&asn1_value__local_3571,
  (intptr_t)&asn1_value__local_3572,
},
{
  (intptr_t)asn1_type_ResetResource,
  (intptr_t)asn1_type_ResetResourceAcknowledge,
  0,
  0,
  (intptr_t)&asn1_value__local_3573,
  (intptr_t)&asn1_value__local_3574,
},
{
  (intptr_t)asn1_type_LocationRelatedDataRequest,
  (intptr_t)asn1_type_LocationRelatedDataResponse,
  (intptr_t)asn1_type_LocationRelatedDataFailure,
  0,
  (intptr_t)&asn1_value__local_3575,
  (intptr_t)&asn1_value__local_3576,
},
{
  (intptr_t)asn1_type_InformationTransferIndication,
  (intptr_t)asn1_type_InformationTransferConfirmation,
  (intptr_t)asn1_type_InformationTransferFailure,
  0,
  (intptr_t)&asn1_value__local_3577,
  (intptr_t)&asn1_value__local_3578,
},
{
  (intptr_t)asn1_type_UplinkInformationExchangeRequest,
  (intptr_t)asn1_type_UplinkInformationExchangeResponse,
  (intptr_t)asn1_type_UplinkInformationExchangeFailure,
  0,
  (intptr_t)&asn1_value__local_3579,
  (intptr_t)&asn1_value__local_3580,
},
{
  (intptr_t)asn1_type_MBMSSessionStart,
  (intptr_t)asn1_type_MBMSSessionStartResponse,
  (intptr_t)asn1_type_MBMSSessionStartFailure,
  0,
  (intptr_t)&asn1_value__local_3581,
  (intptr_t)&asn1_value__local_3582,
},
{
  (intptr_t)asn1_type_MBMSSessionUpdate,
  (intptr_t)asn1_type_MBMSSessionUpdateResponse,
  (intptr_t)asn1_type_MBMSSessionUpdateFailure,
  0,
  (intptr_t)&asn1_value__local_3583,
  (intptr_t)&asn1_value__local_3584,
},
{
  (intptr_t)asn1_type_MBMSSessionStop,
  (intptr_t)asn1_type_MBMSSessionStopResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3585,
  (intptr_t)&asn1_value__local_3586,
},
{
  (intptr_t)asn1_type_MBMSUELinkingRequest,
  0,
  0,
  (intptr_t)asn1_type_MBMSUELinkingResponse,
  (intptr_t)&asn1_value__local_3587,
  (intptr_t)&asn1_value__local_3588,
},
{
  (intptr_t)asn1_type_MBMSRegistrationRequest,
  (intptr_t)asn1_type_MBMSRegistrationResponse,
  (intptr_t)asn1_type_MBMSRegistrationFailure,
  0,
  (intptr_t)&asn1_value__local_3589,
  (intptr_t)&asn1_value__local_3590,
},
{
  (intptr_t)asn1_type_MBMSCNDe_RegistrationRequest,
  (intptr_t)asn1_type_MBMSCNDe_RegistrationResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3591,
  (intptr_t)&asn1_value__local_3592,
},
{
  (intptr_t)asn1_type_MBMSRABReleaseRequest,
  (intptr_t)asn1_type_MBMSRABRelease,
  (intptr_t)asn1_type_MBMSRABReleaseFailure,
  0,
  (intptr_t)&asn1_value__local_3593,
  (intptr_t)&asn1_value__local_3594,
},
{
  (intptr_t)asn1_type_EnhancedRelocationCompleteRequest,
  (intptr_t)asn1_type_EnhancedRelocationCompleteResponse,
  (intptr_t)asn1_type_EnhancedRelocationCompleteFailure,
  0,
  (intptr_t)&asn1_value__local_3595,
  (intptr_t)&asn1_value__local_3596,
},
{
  (intptr_t)asn1_type_RANAP_EnhancedRelocationInformationRequest,
  (intptr_t)asn1_type_RANAP_EnhancedRelocationInformationResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3597,
  (intptr_t)&asn1_value__local_3598,
},
{
  (intptr_t)asn1_type_SRVCC_CSKeysRequest,
  0,
  0,
  (intptr_t)asn1_type_SRVCC_CSKeysResponse,
  (intptr_t)&asn1_value__local_3599,
  (intptr_t)&asn1_value__local_3600,
},
{
  (intptr_t)asn1_type_UeRadioCapabilityMatchRequest,
  0,
  0,
  (intptr_t)asn1_type_UeRadioCapabilityMatchResponse,
  (intptr_t)&asn1_value__local_3601,
  (intptr_t)&asn1_value__local_3602,
},
{
  (intptr_t)asn1_type_RAB_ReleaseRequest,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3603,
  (intptr_t)&asn1_value__local_3604,
},
{
  (intptr_t)asn1_type_Iu_ReleaseRequest,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3605,
  (intptr_t)&asn1_value__local_3606,
},
{
  (intptr_t)asn1_type_RelocationDetect,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3607,
  (intptr_t)&asn1_value__local_3608,
},
{
  (intptr_t)asn1_type_RelocationComplete,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3609,
  (intptr_t)&asn1_value__local_3610,
},
{
  (intptr_t)asn1_type_Paging,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3611,
  (intptr_t)&asn1_value__local_3612,
},
{
  (intptr_t)asn1_type_CommonID,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3613,
  (intptr_t)&asn1_value__local_3614,
},
{
  (intptr_t)asn1_type_CN_InvokeTrace,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3615,
  (intptr_t)&asn1_value__local_3616,
},
{
  (intptr_t)asn1_type_CN_DeactivateTrace,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3617,
  (intptr_t)&asn1_value__local_3618,
},
{
  (intptr_t)asn1_type_LocationReportingControl,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3619,
  (intptr_t)&asn1_value__local_3620,
},
{
  (intptr_t)asn1_type_LocationReport,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3621,
  (intptr_t)&asn1_value__local_3622,
},
{
  (intptr_t)asn1_type_InitialUE_Message,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3623,
  (intptr_t)&asn1_value__local_3624,
},
{
  (intptr_t)asn1_type_DirectTransfer,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3625,
  (intptr_t)&asn1_value__local_3626,
},
{
  (intptr_t)asn1_type_Overload,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3627,
  (intptr_t)&asn1_value__local_3628,
},
{
  (intptr_t)asn1_type_ErrorIndication,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3629,
  (intptr_t)&asn1_value__local_3630,
},
{
  (intptr_t)asn1_type_SRNS_DataForwardCommand,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3631,
  (intptr_t)&asn1_value__local_3632,
},
{
  (intptr_t)asn1_type_ForwardSRNS_Context,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3633,
  (intptr_t)&asn1_value__local_3634,
},
{
  (intptr_t)asn1_type_PrivateMessage,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3635,
  (intptr_t)&asn1_value__local_3636,
},
{
  (intptr_t)asn1_type_RANAP_RelocationInformation,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3637,
  (intptr_t)&asn1_value__local_3638,
},
{
  (intptr_t)asn1_type_RAB_ModifyRequest,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3639,
  (intptr_t)&asn1_value__local_3640,
},
{
  (intptr_t)asn1_type_UESpecificInformationIndication,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3641,
  (intptr_t)&asn1_value__local_3642,
},
{
  (intptr_t)asn1_type_DirectInformationTransfer,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3643,
  (intptr_t)&asn1_value__local_3644,
},
{
  (intptr_t)asn1_type_MBMSRABEstablishmentIndication,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3645,
  (intptr_t)&asn1_value__local_3646,
},
{
  (intptr_t)asn1_type_EnhancedRelocationCompleteConfirm,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3647,
  (intptr_t)&asn1_value__local_3648,
},
{
  (intptr_t)asn1_type_RAB_AssignmentRequest,
  0,
  0,
  (intptr_t)asn1_type_RAB_AssignmentResponse,
  (intptr_t)&asn1_value__local_3649,
  (intptr_t)&asn1_value__local_3650,
},
};

static const ASN1CType asn1_constraint__local_3555[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_ELEMENTARY_PROCEDURE,
  2,
  (intptr_t)asn1_value__local_3556,
  47,
  1,
  0,
  0x80000000,
  4,
};

static const ASN1CType asn1_type__local_3554[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3555,
};

const ASN1CType asn1_type_UnsuccessfulOutcome[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100002,
  3,
  sizeof(UnsuccessfulOutcome),

  offsetof(UnsuccessfulOutcome, procedureCode) | 0x0,
  (intptr_t)asn1_type__local_3552,
  0,
  (intptr_t)"procedureCode",

  offsetof(UnsuccessfulOutcome, criticality) | 0x0,
  (intptr_t)asn1_type__local_3553,
  0,
  (intptr_t)"criticality",

  offsetof(UnsuccessfulOutcome, value) | 0x0,
  (intptr_t)asn1_type__local_3554,
  0,
  (intptr_t)"value",

  (intptr_t)"UnsuccessfulOutcome",
};

static const ASN1CType asn1_type__local_3651[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100000,
  (intptr_t)asn1_type_ProcedureCode,
};

static const ASN1CType asn1_type__local_3652[] = {
  (ASN1_CTYPE_TAGGED << ASN1_CTYPE_SHIFT) | 0x0 | 0x100001,
  (intptr_t)asn1_type_Criticality,
};

static const ProcedureCode asn1_value__local_3656 = 1;

static const Criticality asn1_value__local_3657 = 0;

static const ProcedureCode asn1_value__local_3658 = 2;

static const Criticality asn1_value__local_3659 = 0;

static const ProcedureCode asn1_value__local_3660 = 3;

static const Criticality asn1_value__local_3661 = 0;

static const ProcedureCode asn1_value__local_3662 = 4;

static const Criticality asn1_value__local_3663 = 0;

static const ProcedureCode asn1_value__local_3664 = 5;

static const Criticality asn1_value__local_3665 = 0;

static const ProcedureCode asn1_value__local_3666 = 6;

static const Criticality asn1_value__local_3667 = 0;

static const ProcedureCode asn1_value__local_3668 = 7;

static const Criticality asn1_value__local_3669 = 0;

static const ProcedureCode asn1_value__local_3670 = 9;

static const Criticality asn1_value__local_3671 = 0;

static const ProcedureCode asn1_value__local_3672 = 27;

static const Criticality asn1_value__local_3673 = 0;

static const ProcedureCode asn1_value__local_3674 = 30;

static const Criticality asn1_value__local_3675 = 0;

static const ProcedureCode asn1_value__local_3676 = 31;

static const Criticality asn1_value__local_3677 = 0;

static const ProcedureCode asn1_value__local_3678 = 33;

static const Criticality asn1_value__local_3679 = 0;

static const ProcedureCode asn1_value__local_3680 = 35;

static const Criticality asn1_value__local_3681 = 0;

static const ProcedureCode asn1_value__local_3682 = 36;

static const Criticality asn1_value__local_3683 = 0;

static const ProcedureCode asn1_value__local_3684 = 37;

static const Criticality asn1_value__local_3685 = 0;

static const ProcedureCode asn1_value__local_3686 = 38;

static const Criticality asn1_value__local_3687 = 0;

static const ProcedureCode asn1_value__local_3688 = 39;

static const Criticality asn1_value__local_3689 = 0;

static const ProcedureCode asn1_value__local_3690 = 40;

static const Criticality asn1_value__local_3691 = 0;

static const ProcedureCode asn1_value__local_3692 = 42;

static const Criticality asn1_value__local_3693 = 0;

static const ProcedureCode asn1_value__local_3694 = 43;

static const Criticality asn1_value__local_3695 = 0;

static const ProcedureCode asn1_value__local_3696 = 45;

static const Criticality asn1_value__local_3697 = 0;

static const ProcedureCode asn1_value__local_3698 = 46;

static const Criticality asn1_value__local_3699 = 0;

static const ProcedureCode asn1_value__local_3700 = 47;

static const Criticality asn1_value__local_3701 = 1;

static const ProcedureCode asn1_value__local_3702 = 10;

static const Criticality asn1_value__local_3703 = 1;

static const ProcedureCode asn1_value__local_3704 = 11;

static const Criticality asn1_value__local_3705 = 1;

static const ProcedureCode asn1_value__local_3706 = 12;

static const Criticality asn1_value__local_3707 = 1;

static const ProcedureCode asn1_value__local_3708 = 13;

static const Criticality asn1_value__local_3709 = 1;

static const ProcedureCode asn1_value__local_3710 = 14;

static const Criticality asn1_value__local_3711 = 1;

static const ProcedureCode asn1_value__local_3712 = 15;

static const Criticality asn1_value__local_3713 = 1;

static const ProcedureCode asn1_value__local_3714 = 16;

static const Criticality asn1_value__local_3715 = 1;

static const ProcedureCode asn1_value__local_3716 = 26;

static const Criticality asn1_value__local_3717 = 1;

static const ProcedureCode asn1_value__local_3718 = 17;

static const Criticality asn1_value__local_3719 = 1;

static const ProcedureCode asn1_value__local_3720 = 18;

static const Criticality asn1_value__local_3721 = 1;

static const ProcedureCode asn1_value__local_3722 = 19;

static const Criticality asn1_value__local_3723 = 1;

static const ProcedureCode asn1_value__local_3724 = 20;

static const Criticality asn1_value__local_3725 = 1;

static const ProcedureCode asn1_value__local_3726 = 21;

static const Criticality asn1_value__local_3727 = 1;

static const ProcedureCode asn1_value__local_3728 = 22;

static const Criticality asn1_value__local_3729 = 1;

static const ProcedureCode asn1_value__local_3730 = 23;

static const Criticality asn1_value__local_3731 = 1;

static const ProcedureCode asn1_value__local_3732 = 24;

static const Criticality asn1_value__local_3733 = 1;

static const ProcedureCode asn1_value__local_3734 = 25;

static const Criticality asn1_value__local_3735 = 1;

static const ProcedureCode asn1_value__local_3736 = 28;

static const Criticality asn1_value__local_3737 = 1;

static const ProcedureCode asn1_value__local_3738 = 29;

static const Criticality asn1_value__local_3739 = 1;

static const ProcedureCode asn1_value__local_3740 = 32;

static const Criticality asn1_value__local_3741 = 1;

static const ProcedureCode asn1_value__local_3742 = 34;

static const Criticality asn1_value__local_3743 = 1;

static const ProcedureCode asn1_value__local_3744 = 41;

static const Criticality asn1_value__local_3745 = 1;

static const ProcedureCode asn1_value__local_3746 = 44;

static const Criticality asn1_value__local_3747 = 1;

static const ProcedureCode asn1_value__local_3748 = 0;

static const Criticality asn1_value__local_3749 = 0;

static const RANAP_ELEMENTARY_PROCEDURE asn1_value__local_3655[] = {
{
  (intptr_t)asn1_type_Iu_ReleaseCommand,
  (intptr_t)asn1_type_Iu_ReleaseComplete,
  0,
  0,
  (intptr_t)&asn1_value__local_3656,
  (intptr_t)&asn1_value__local_3657,
},
{
  (intptr_t)asn1_type_RelocationRequired,
  (intptr_t)asn1_type_RelocationCommand,
  (intptr_t)asn1_type_RelocationPreparationFailure,
  0,
  (intptr_t)&asn1_value__local_3658,
  (intptr_t)&asn1_value__local_3659,
},
{
  (intptr_t)asn1_type_RelocationRequest,
  (intptr_t)asn1_type_RelocationRequestAcknowledge,
  (intptr_t)asn1_type_RelocationFailure,
  0,
  (intptr_t)&asn1_value__local_3660,
  (intptr_t)&asn1_value__local_3661,
},
{
  (intptr_t)asn1_type_RelocationCancel,
  (intptr_t)asn1_type_RelocationCancelAcknowledge,
  0,
  0,
  (intptr_t)&asn1_value__local_3662,
  (intptr_t)&asn1_value__local_3663,
},
{
  (intptr_t)asn1_type_SRNS_ContextRequest,
  (intptr_t)asn1_type_SRNS_ContextResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3664,
  (intptr_t)&asn1_value__local_3665,
},
{
  (intptr_t)asn1_type_SecurityModeCommand,
  (intptr_t)asn1_type_SecurityModeComplete,
  (intptr_t)asn1_type_SecurityModeReject,
  0,
  (intptr_t)&asn1_value__local_3666,
  (intptr_t)&asn1_value__local_3667,
},
{
  (intptr_t)asn1_type_DataVolumeReportRequest,
  (intptr_t)asn1_type_DataVolumeReport,
  0,
  0,
  (intptr_t)&asn1_value__local_3668,
  (intptr_t)&asn1_value__local_3669,
},
{
  (intptr_t)asn1_type_Reset,
  (intptr_t)asn1_type_ResetAcknowledge,
  0,
  0,
  (intptr_t)&asn1_value__local_3670,
  (intptr_t)&asn1_value__local_3671,
},
{
  (intptr_t)asn1_type_ResetResource,
  (intptr_t)asn1_type_ResetResourceAcknowledge,
  0,
  0,
  (intptr_t)&asn1_value__local_3672,
  (intptr_t)&asn1_value__local_3673,
},
{
  (intptr_t)asn1_type_LocationRelatedDataRequest,
  (intptr_t)asn1_type_LocationRelatedDataResponse,
  (intptr_t)asn1_type_LocationRelatedDataFailure,
  0,
  (intptr_t)&asn1_value__local_3674,
  (intptr_t)&asn1_value__local_3675,
},
{
  (intptr_t)asn1_type_InformationTransferIndication,
  (intptr_t)asn1_type_InformationTransferConfirmation,
  (intptr_t)asn1_type_InformationTransferFailure,
  0,
  (intptr_t)&asn1_value__local_3676,
  (intptr_t)&asn1_value__local_3677,
},
{
  (intptr_t)asn1_type_UplinkInformationExchangeRequest,
  (intptr_t)asn1_type_UplinkInformationExchangeResponse,
  (intptr_t)asn1_type_UplinkInformationExchangeFailure,
  0,
  (intptr_t)&asn1_value__local_3678,
  (intptr_t)&asn1_value__local_3679,
},
{
  (intptr_t)asn1_type_MBMSSessionStart,
  (intptr_t)asn1_type_MBMSSessionStartResponse,
  (intptr_t)asn1_type_MBMSSessionStartFailure,
  0,
  (intptr_t)&asn1_value__local_3680,
  (intptr_t)&asn1_value__local_3681,
},
{
  (intptr_t)asn1_type_MBMSSessionUpdate,
  (intptr_t)asn1_type_MBMSSessionUpdateResponse,
  (intptr_t)asn1_type_MBMSSessionUpdateFailure,
  0,
  (intptr_t)&asn1_value__local_3682,
  (intptr_t)&asn1_value__local_3683,
},
{
  (intptr_t)asn1_type_MBMSSessionStop,
  (intptr_t)asn1_type_MBMSSessionStopResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3684,
  (intptr_t)&asn1_value__local_3685,
},
{
  (intptr_t)asn1_type_MBMSUELinkingRequest,
  0,
  0,
  (intptr_t)asn1_type_MBMSUELinkingResponse,
  (intptr_t)&asn1_value__local_3686,
  (intptr_t)&asn1_value__local_3687,
},
{
  (intptr_t)asn1_type_MBMSRegistrationRequest,
  (intptr_t)asn1_type_MBMSRegistrationResponse,
  (intptr_t)asn1_type_MBMSRegistrationFailure,
  0,
  (intptr_t)&asn1_value__local_3688,
  (intptr_t)&asn1_value__local_3689,
},
{
  (intptr_t)asn1_type_MBMSCNDe_RegistrationRequest,
  (intptr_t)asn1_type_MBMSCNDe_RegistrationResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3690,
  (intptr_t)&asn1_value__local_3691,
},
{
  (intptr_t)asn1_type_MBMSRABReleaseRequest,
  (intptr_t)asn1_type_MBMSRABRelease,
  (intptr_t)asn1_type_MBMSRABReleaseFailure,
  0,
  (intptr_t)&asn1_value__local_3692,
  (intptr_t)&asn1_value__local_3693,
},
{
  (intptr_t)asn1_type_EnhancedRelocationCompleteRequest,
  (intptr_t)asn1_type_EnhancedRelocationCompleteResponse,
  (intptr_t)asn1_type_EnhancedRelocationCompleteFailure,
  0,
  (intptr_t)&asn1_value__local_3694,
  (intptr_t)&asn1_value__local_3695,
},
{
  (intptr_t)asn1_type_RANAP_EnhancedRelocationInformationRequest,
  (intptr_t)asn1_type_RANAP_EnhancedRelocationInformationResponse,
  0,
  0,
  (intptr_t)&asn1_value__local_3696,
  (intptr_t)&asn1_value__local_3697,
},
{
  (intptr_t)asn1_type_SRVCC_CSKeysRequest,
  0,
  0,
  (intptr_t)asn1_type_SRVCC_CSKeysResponse,
  (intptr_t)&asn1_value__local_3698,
  (intptr_t)&asn1_value__local_3699,
},
{
  (intptr_t)asn1_type_UeRadioCapabilityMatchRequest,
  0,
  0,
  (intptr_t)asn1_type_UeRadioCapabilityMatchResponse,
  (intptr_t)&asn1_value__local_3700,
  (intptr_t)&asn1_value__local_3701,
},
{
  (intptr_t)asn1_type_RAB_ReleaseRequest,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3702,
  (intptr_t)&asn1_value__local_3703,
},
{
  (intptr_t)asn1_type_Iu_ReleaseRequest,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3704,
  (intptr_t)&asn1_value__local_3705,
},
{
  (intptr_t)asn1_type_RelocationDetect,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3706,
  (intptr_t)&asn1_value__local_3707,
},
{
  (intptr_t)asn1_type_RelocationComplete,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3708,
  (intptr_t)&asn1_value__local_3709,
},
{
  (intptr_t)asn1_type_Paging,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3710,
  (intptr_t)&asn1_value__local_3711,
},
{
  (intptr_t)asn1_type_CommonID,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3712,
  (intptr_t)&asn1_value__local_3713,
},
{
  (intptr_t)asn1_type_CN_InvokeTrace,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3714,
  (intptr_t)&asn1_value__local_3715,
},
{
  (intptr_t)asn1_type_CN_DeactivateTrace,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3716,
  (intptr_t)&asn1_value__local_3717,
},
{
  (intptr_t)asn1_type_LocationReportingControl,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3718,
  (intptr_t)&asn1_value__local_3719,
},
{
  (intptr_t)asn1_type_LocationReport,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3720,
  (intptr_t)&asn1_value__local_3721,
},
{
  (intptr_t)asn1_type_InitialUE_Message,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3722,
  (intptr_t)&asn1_value__local_3723,
},
{
  (intptr_t)asn1_type_DirectTransfer,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3724,
  (intptr_t)&asn1_value__local_3725,
},
{
  (intptr_t)asn1_type_Overload,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3726,
  (intptr_t)&asn1_value__local_3727,
},
{
  (intptr_t)asn1_type_ErrorIndication,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3728,
  (intptr_t)&asn1_value__local_3729,
},
{
  (intptr_t)asn1_type_SRNS_DataForwardCommand,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3730,
  (intptr_t)&asn1_value__local_3731,
},
{
  (intptr_t)asn1_type_ForwardSRNS_Context,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3732,
  (intptr_t)&asn1_value__local_3733,
},
{
  (intptr_t)asn1_type_PrivateMessage,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3734,
  (intptr_t)&asn1_value__local_3735,
},
{
  (intptr_t)asn1_type_RANAP_RelocationInformation,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3736,
  (intptr_t)&asn1_value__local_3737,
},
{
  (intptr_t)asn1_type_RAB_ModifyRequest,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3738,
  (intptr_t)&asn1_value__local_3739,
},
{
  (intptr_t)asn1_type_UESpecificInformationIndication,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3740,
  (intptr_t)&asn1_value__local_3741,
},
{
  (intptr_t)asn1_type_DirectInformationTransfer,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3742,
  (intptr_t)&asn1_value__local_3743,
},
{
  (intptr_t)asn1_type_MBMSRABEstablishmentIndication,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3744,
  (intptr_t)&asn1_value__local_3745,
},
{
  (intptr_t)asn1_type_EnhancedRelocationCompleteConfirm,
  0,
  0,
  0,
  (intptr_t)&asn1_value__local_3746,
  (intptr_t)&asn1_value__local_3747,
},
{
  (intptr_t)asn1_type_RAB_AssignmentRequest,
  0,
  0,
  (intptr_t)asn1_type_RAB_AssignmentResponse,
  (intptr_t)&asn1_value__local_3748,
  (intptr_t)&asn1_value__local_3749,
},
};

static const ASN1CType asn1_constraint__local_3654[] = {
  ASN1_CCONSTRAINT_TABLE,
  (intptr_t)asn1_type_RANAP_ELEMENTARY_PROCEDURE,
  3,
  (intptr_t)asn1_value__local_3655,
  47,
  1,
  0,
  0x80000000,
  4,
};

static const ASN1CType asn1_type__local_3653[] = {
  (ASN1_CTYPE_ANY << ASN1_CTYPE_SHIFT) | 0x200000 | 0x100002,
  (intptr_t)asn1_constraint__local_3654,
};

const ASN1CType asn1_type_Outcome[] = {
  (ASN1_CTYPE_SEQUENCE << ASN1_CTYPE_SHIFT) | 0x4000000 | 0x100003,
  3,
  sizeof(Outcome),

  offsetof(Outcome, procedureCode) | 0x0,
  (intptr_t)asn1_type__local_3651,
  0,
  (intptr_t)"procedureCode",

  offsetof(Outcome, criticality) | 0x0,
  (intptr_t)asn1_type__local_3652,
  0,
  (intptr_t)"criticality",

  offsetof(Outcome, value) | 0x0,
  (intptr_t)asn1_type__local_3653,
  0,
  (intptr_t)"value",

  (intptr_t)"Outcome",
};

