/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SABP-IEs"
 * 	found in "../../asn1/sabp/SABP-IEs.asn"
 * 	`asn1c -R -fcompound-names`
 */

#ifndef	_SABP_TypeOfError_H_
#define	_SABP_TypeOfError_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SABP_TypeOfError {
	SABP_TypeOfError_not_understood	= 0,
	SABP_TypeOfError_missing	= 1
	/*
	 * Enumeration is extensible
	 */
} e_SABP_TypeOfError;

/* SABP_TypeOfError */
typedef long	 SABP_TypeOfError_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SABP_TypeOfError;
asn_struct_free_f SABP_TypeOfError_free;
asn_struct_print_f SABP_TypeOfError_print;
asn_constr_check_f SABP_TypeOfError_constraint;
ber_type_decoder_f SABP_TypeOfError_decode_ber;
der_type_encoder_f SABP_TypeOfError_encode_der;
xer_type_decoder_f SABP_TypeOfError_decode_xer;
xer_type_encoder_f SABP_TypeOfError_encode_xer;
per_type_decoder_f SABP_TypeOfError_decode_uper;
per_type_encoder_f SABP_TypeOfError_encode_uper;
per_type_decoder_f SABP_TypeOfError_decode_aper;
per_type_encoder_f SABP_TypeOfError_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SABP_TypeOfError_H_ */
#include <asn_internal.h>
