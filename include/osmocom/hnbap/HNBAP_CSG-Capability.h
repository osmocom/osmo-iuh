/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -R -fcompound-names`
 */

#ifndef	_HNBAP_CSG_Capability_H_
#define	_HNBAP_CSG_Capability_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HNBAP_CSG_Capability {
	HNBAP_CSG_Capability_csg_capable	= 0,
	HNBAP_CSG_Capability_not_csg_capable	= 1
	/*
	 * Enumeration is extensible
	 */
} e_HNBAP_CSG_Capability;

/* HNBAP_CSG-Capability */
typedef long	 HNBAP_CSG_Capability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HNBAP_CSG_Capability;
asn_struct_free_f HNBAP_CSG_Capability_free;
asn_struct_print_f HNBAP_CSG_Capability_print;
asn_constr_check_f HNBAP_CSG_Capability_constraint;
ber_type_decoder_f HNBAP_CSG_Capability_decode_ber;
der_type_encoder_f HNBAP_CSG_Capability_encode_der;
xer_type_decoder_f HNBAP_CSG_Capability_decode_xer;
xer_type_encoder_f HNBAP_CSG_Capability_encode_xer;
per_type_decoder_f HNBAP_CSG_Capability_decode_uper;
per_type_encoder_f HNBAP_CSG_Capability_encode_uper;
per_type_decoder_f HNBAP_CSG_Capability_decode_aper;
per_type_encoder_f HNBAP_CSG_Capability_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _HNBAP_CSG_Capability_H_ */
#include <asn_internal.h>