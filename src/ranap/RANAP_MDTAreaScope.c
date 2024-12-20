/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#include <osmocom/ranap/RANAP_MDTAreaScope.h>

static asn_per_constraints_t asn_PER_type_RANAP_MDTAreaScope_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0l,  3l }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RANAP_MDTAreaScope_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_MDTAreaScope, choice.cellbased),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_CellBased,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellbased"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_MDTAreaScope, choice.labased),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_LABased,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"labased"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_MDTAreaScope, choice.rabased),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_RABased,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rabased"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_MDTAreaScope, choice.plmn_area_based),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plmn-area-based"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RANAP_MDTAreaScope_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellbased */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* labased */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rabased */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* plmn-area-based */
};
static asn_CHOICE_specifics_t asn_SPC_RANAP_MDTAreaScope_specs_1 = {
	sizeof(struct RANAP_MDTAreaScope),
	offsetof(struct RANAP_MDTAreaScope, _asn_ctx),
	offsetof(struct RANAP_MDTAreaScope, present),
	sizeof(((struct RANAP_MDTAreaScope *)0)->present),
	asn_MAP_RANAP_MDTAreaScope_tag2el_1,
	4,	/* Count of tags in the map */
	0,
	4	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RANAP_MDTAreaScope = {
	"RANAP_MDTAreaScope",
	"RANAP_MDTAreaScope",
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
	&asn_PER_type_RANAP_MDTAreaScope_constr_1,
	asn_MBR_RANAP_MDTAreaScope_1,
	4,	/* Elements count */
	&asn_SPC_RANAP_MDTAreaScope_specs_1	/* Additional specs */
};

