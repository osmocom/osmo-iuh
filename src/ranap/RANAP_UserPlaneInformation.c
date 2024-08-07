/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU"
 * 	found in "../../asn1/ranap/RANAP-PDU.asn"
 * 	`asn1c -fcompound-names -R`
 */

#include <osmocom/ranap/RANAP_UserPlaneInformation.h>

static asn_TYPE_member_t asn_MBR_RANAP_UserPlaneInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_UserPlaneInformation, userPlaneMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_UserPlaneMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"userPlaneMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_UserPlaneInformation, uP_ModeVersions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_UP_ModeVersions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uP-ModeVersions"
		},
	{ ATF_POINTER, 1, offsetof(struct RANAP_UserPlaneInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_ProtocolExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static const int asn_MAP_RANAP_UserPlaneInformation_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_RANAP_UserPlaneInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RANAP_UserPlaneInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* userPlaneMode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uP-ModeVersions */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_RANAP_UserPlaneInformation_specs_1 = {
	sizeof(struct RANAP_UserPlaneInformation),
	offsetof(struct RANAP_UserPlaneInformation, _asn_ctx),
	asn_MAP_RANAP_UserPlaneInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RANAP_UserPlaneInformation_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RANAP_UserPlaneInformation = {
	"RANAP_UserPlaneInformation",
	"RANAP_UserPlaneInformation",
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
	asn_DEF_RANAP_UserPlaneInformation_tags_1,
	sizeof(asn_DEF_RANAP_UserPlaneInformation_tags_1)
		/sizeof(asn_DEF_RANAP_UserPlaneInformation_tags_1[0]), /* 1 */
	asn_DEF_RANAP_UserPlaneInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANAP_UserPlaneInformation_tags_1)
		/sizeof(asn_DEF_RANAP_UserPlaneInformation_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RANAP_UserPlaneInformation_1,
	3,	/* Elements count */
	&asn_SPC_RANAP_UserPlaneInformation_specs_1	/* Additional specs */
};

