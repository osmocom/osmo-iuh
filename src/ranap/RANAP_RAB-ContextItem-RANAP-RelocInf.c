/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU"
 * 	found in "../../asn1/ranap/RANAP-PDU.asn"
 * 	`asn1c -fcompound-names -R`
 */

#include <osmocom/ranap/RANAP_RAB-ContextItem-RANAP-RelocInf.h>

static asn_TYPE_member_t asn_MBR_RANAP_RAB_ContextItem_RANAP_RelocInf_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_RAB_ContextItem_RANAP_RelocInf, rAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_RAB_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rAB-ID"
		},
	{ ATF_POINTER, 5, offsetof(struct RANAP_RAB_ContextItem_RANAP_RelocInf, dl_GTP_PDU_SequenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_DL_GTP_PDU_SequenceNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-GTP-PDU-SequenceNumber"
		},
	{ ATF_POINTER, 4, offsetof(struct RANAP_RAB_ContextItem_RANAP_RelocInf, ul_GTP_PDU_SequenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_UL_GTP_PDU_SequenceNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-GTP-PDU-SequenceNumber"
		},
	{ ATF_POINTER, 3, offsetof(struct RANAP_RAB_ContextItem_RANAP_RelocInf, dl_N_PDU_SequenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_DL_N_PDU_SequenceNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-N-PDU-SequenceNumber"
		},
	{ ATF_POINTER, 2, offsetof(struct RANAP_RAB_ContextItem_RANAP_RelocInf, ul_N_PDU_SequenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_UL_N_PDU_SequenceNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-N-PDU-SequenceNumber"
		},
	{ ATF_POINTER, 1, offsetof(struct RANAP_RAB_ContextItem_RANAP_RelocInf, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_ProtocolExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static const int asn_MAP_RANAP_RAB_ContextItem_RANAP_RelocInf_oms_1[] = { 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_RANAP_RAB_ContextItem_RANAP_RelocInf_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RANAP_RAB_ContextItem_RANAP_RelocInf_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-GTP-PDU-SequenceNumber */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ul-GTP-PDU-SequenceNumber */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dl-N-PDU-SequenceNumber */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ul-N-PDU-SequenceNumber */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_RANAP_RAB_ContextItem_RANAP_RelocInf_specs_1 = {
	sizeof(struct RANAP_RAB_ContextItem_RANAP_RelocInf),
	offsetof(struct RANAP_RAB_ContextItem_RANAP_RelocInf, _asn_ctx),
	asn_MAP_RANAP_RAB_ContextItem_RANAP_RelocInf_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_RANAP_RAB_ContextItem_RANAP_RelocInf_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RANAP_RAB_ContextItem_RANAP_RelocInf = {
	"RANAP_RAB-ContextItem-RANAP-RelocInf",
	"RANAP_RAB-ContextItem-RANAP-RelocInf",
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
	asn_DEF_RANAP_RAB_ContextItem_RANAP_RelocInf_tags_1,
	sizeof(asn_DEF_RANAP_RAB_ContextItem_RANAP_RelocInf_tags_1)
		/sizeof(asn_DEF_RANAP_RAB_ContextItem_RANAP_RelocInf_tags_1[0]), /* 1 */
	asn_DEF_RANAP_RAB_ContextItem_RANAP_RelocInf_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANAP_RAB_ContextItem_RANAP_RelocInf_tags_1)
		/sizeof(asn_DEF_RANAP_RAB_ContextItem_RANAP_RelocInf_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RANAP_RAB_ContextItem_RANAP_RelocInf_1,
	6,	/* Elements count */
	&asn_SPC_RANAP_RAB_ContextItem_RANAP_RelocInf_specs_1	/* Additional specs */
};

