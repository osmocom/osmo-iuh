/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_Cell_Access_Mode_H_
#define	_RANAP_Cell_Access_Mode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RANAP_Cell_Access_Mode {
	RANAP_Cell_Access_Mode_hybrid	= 0
	/*
	 * Enumeration is extensible
	 */
} e_RANAP_Cell_Access_Mode;

/* RANAP_Cell-Access-Mode */
typedef long	 RANAP_Cell_Access_Mode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_Cell_Access_Mode;
asn_struct_free_f RANAP_Cell_Access_Mode_free;
asn_struct_print_f RANAP_Cell_Access_Mode_print;
asn_constr_check_f RANAP_Cell_Access_Mode_constraint;
ber_type_decoder_f RANAP_Cell_Access_Mode_decode_ber;
der_type_encoder_f RANAP_Cell_Access_Mode_encode_der;
xer_type_decoder_f RANAP_Cell_Access_Mode_decode_xer;
xer_type_encoder_f RANAP_Cell_Access_Mode_encode_xer;
per_type_decoder_f RANAP_Cell_Access_Mode_decode_uper;
per_type_encoder_f RANAP_Cell_Access_Mode_encode_uper;
per_type_decoder_f RANAP_Cell_Access_Mode_decode_aper;
per_type_encoder_f RANAP_Cell_Access_Mode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_Cell_Access_Mode_H_ */
#include <asn_internal.h>
