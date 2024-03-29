/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#include <osmocom/ranap/RANAP_ReportInterval.h>

int
RANAP_ReportInterval_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
RANAP_ReportInterval_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
RANAP_ReportInterval_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	RANAP_ReportInterval_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
RANAP_ReportInterval_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	RANAP_ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
RANAP_ReportInterval_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	RANAP_ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
RANAP_ReportInterval_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	RANAP_ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
RANAP_ReportInterval_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	RANAP_ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
RANAP_ReportInterval_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	RANAP_ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
RANAP_ReportInterval_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	RANAP_ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
RANAP_ReportInterval_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	RANAP_ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

asn_enc_rval_t
RANAP_ReportInterval_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	RANAP_ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

asn_dec_rval_t
RANAP_ReportInterval_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	RANAP_ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_RANAP_ReportInterval_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0l,  12l }	/* (0..12,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RANAP_ReportInterval_value2enum_1[] = {
	{ 0,	5,	"ms250" },
	{ 1,	5,	"ms500" },
	{ 2,	6,	"ms1000" },
	{ 3,	6,	"ms2000" },
	{ 4,	6,	"ms3000" },
	{ 5,	6,	"ms4000" },
	{ 6,	6,	"ms6000" },
	{ 7,	7,	"ms12000" },
	{ 8,	7,	"ms16000" },
	{ 9,	7,	"ms20000" },
	{ 10,	7,	"ms24000" },
	{ 11,	7,	"ms32000" },
	{ 12,	7,	"ms64000" },
	{ 13,	6,	"ms8000" },
	{ 14,	7,	"ms28000" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_RANAP_ReportInterval_enum2value_1[] = {
	2,	/* ms1000(2) */
	7,	/* ms12000(7) */
	8,	/* ms16000(8) */
	3,	/* ms2000(3) */
	9,	/* ms20000(9) */
	10,	/* ms24000(10) */
	0,	/* ms250(0) */
	14,	/* ms28000(14) */
	4,	/* ms3000(4) */
	11,	/* ms32000(11) */
	5,	/* ms4000(5) */
	1,	/* ms500(1) */
	6,	/* ms6000(6) */
	12,	/* ms64000(12) */
	13	/* ms8000(13) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_RANAP_ReportInterval_specs_1 = {
	asn_MAP_RANAP_ReportInterval_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RANAP_ReportInterval_enum2value_1,	/* N => "tag"; sorted by N */
	15,	/* Number of elements in the maps */
	14,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RANAP_ReportInterval_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RANAP_ReportInterval = {
	"RANAP_ReportInterval",
	"RANAP_ReportInterval",
	RANAP_ReportInterval_free,
	RANAP_ReportInterval_print,
	RANAP_ReportInterval_constraint,
	RANAP_ReportInterval_decode_ber,
	RANAP_ReportInterval_encode_der,
	RANAP_ReportInterval_decode_xer,
	RANAP_ReportInterval_encode_xer,
	RANAP_ReportInterval_decode_uper,
	RANAP_ReportInterval_encode_uper,
	RANAP_ReportInterval_decode_aper,
	RANAP_ReportInterval_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RANAP_ReportInterval_tags_1,
	sizeof(asn_DEF_RANAP_ReportInterval_tags_1)
		/sizeof(asn_DEF_RANAP_ReportInterval_tags_1[0]), /* 1 */
	asn_DEF_RANAP_ReportInterval_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANAP_ReportInterval_tags_1)
		/sizeof(asn_DEF_RANAP_ReportInterval_tags_1[0]), /* 1 */
	&asn_PER_type_RANAP_ReportInterval_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RANAP_ReportInterval_specs_1	/* Additional specs */
};

