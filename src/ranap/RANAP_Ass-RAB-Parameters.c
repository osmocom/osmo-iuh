/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#include <osmocom/ranap/RANAP_Ass-RAB-Parameters.h>

static asn_TYPE_member_t asn_MBR_RANAP_Ass_RAB_Parameters_1[] = {
	{ ATF_POINTER, 3, offsetof(struct RANAP_Ass_RAB_Parameters, assMaxBitrateInf),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_Ass_RAB_Parameter_MaxBitrateList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"assMaxBitrateInf"
		},
	{ ATF_POINTER, 2, offsetof(struct RANAP_Ass_RAB_Parameters, assGuaranteedBitRateInf),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_Ass_RAB_Parameter_GuaranteedBitrateList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"assGuaranteedBitRateInf"
		},
	{ ATF_POINTER, 1, offsetof(struct RANAP_Ass_RAB_Parameters, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static const int asn_MAP_RANAP_Ass_RAB_Parameters_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_RANAP_Ass_RAB_Parameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RANAP_Ass_RAB_Parameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* assMaxBitrateInf */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* assGuaranteedBitRateInf */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_RANAP_Ass_RAB_Parameters_specs_1 = {
	sizeof(struct RANAP_Ass_RAB_Parameters),
	offsetof(struct RANAP_Ass_RAB_Parameters, _asn_ctx),
	asn_MAP_RANAP_Ass_RAB_Parameters_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RANAP_Ass_RAB_Parameters_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RANAP_Ass_RAB_Parameters = {
	"RANAP_Ass-RAB-Parameters",
	"RANAP_Ass-RAB-Parameters",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RANAP_Ass_RAB_Parameters_tags_1,
	sizeof(asn_DEF_RANAP_Ass_RAB_Parameters_tags_1)
		/sizeof(asn_DEF_RANAP_Ass_RAB_Parameters_tags_1[0]), /* 1 */
	asn_DEF_RANAP_Ass_RAB_Parameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANAP_Ass_RAB_Parameters_tags_1)
		/sizeof(asn_DEF_RANAP_Ass_RAB_Parameters_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RANAP_Ass_RAB_Parameters_1,
	3,	/* Elements count */
	&asn_SPC_RANAP_Ass_RAB_Parameters_specs_1	/* Additional specs */
};

