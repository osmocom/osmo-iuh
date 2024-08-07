/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#include <osmocom/ranap/RANAP_AreaIdentity.h>

static asn_per_constraints_t asn_PER_type_RANAP_AreaIdentity_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0l,  1l }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RANAP_AreaIdentity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_AreaIdentity, choice.sAI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_SAI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sAI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_AreaIdentity, choice.geographicalArea),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RANAP_GeographicalArea,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"geographicalArea"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RANAP_AreaIdentity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sAI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* geographicalArea */
};
static asn_CHOICE_specifics_t asn_SPC_RANAP_AreaIdentity_specs_1 = {
	sizeof(struct RANAP_AreaIdentity),
	offsetof(struct RANAP_AreaIdentity, _asn_ctx),
	offsetof(struct RANAP_AreaIdentity, present),
	sizeof(((struct RANAP_AreaIdentity *)0)->present),
	asn_MAP_RANAP_AreaIdentity_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RANAP_AreaIdentity = {
	"RANAP_AreaIdentity",
	"RANAP_AreaIdentity",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_RANAP_AreaIdentity_constr_1,
	asn_MBR_RANAP_AreaIdentity_1,
	2,	/* Elements count */
	&asn_SPC_RANAP_AreaIdentity_specs_1	/* Additional specs */
};

