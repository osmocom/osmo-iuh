/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_UPInitialisationFrame_H_
#define	_RANAP_UPInitialisationFrame_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_UPInitialisationFrame */
typedef OCTET_STRING_t	 RANAP_UPInitialisationFrame_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_UPInitialisationFrame;
asn_struct_free_f RANAP_UPInitialisationFrame_free;
asn_struct_print_f RANAP_UPInitialisationFrame_print;
asn_constr_check_f RANAP_UPInitialisationFrame_constraint;
ber_type_decoder_f RANAP_UPInitialisationFrame_decode_ber;
der_type_encoder_f RANAP_UPInitialisationFrame_encode_der;
xer_type_decoder_f RANAP_UPInitialisationFrame_decode_xer;
xer_type_encoder_f RANAP_UPInitialisationFrame_encode_xer;
per_type_decoder_f RANAP_UPInitialisationFrame_decode_uper;
per_type_encoder_f RANAP_UPInitialisationFrame_encode_uper;
per_type_decoder_f RANAP_UPInitialisationFrame_decode_aper;
per_type_encoder_f RANAP_UPInitialisationFrame_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_UPInitialisationFrame_H_ */
#include <asn_internal.h>
