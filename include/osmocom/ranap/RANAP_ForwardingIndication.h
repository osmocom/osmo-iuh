/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_ForwardingIndication_H_
#define	_RANAP_ForwardingIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RANAP_ForwardingIndication {
	RANAP_ForwardingIndication_forwarding_admitted	= 0
	/*
	 * Enumeration is extensible
	 */
} e_RANAP_ForwardingIndication;

/* RANAP_ForwardingIndication */
typedef long	 RANAP_ForwardingIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_ForwardingIndication;
asn_struct_free_f RANAP_ForwardingIndication_free;
asn_struct_print_f RANAP_ForwardingIndication_print;
asn_constr_check_f RANAP_ForwardingIndication_constraint;
ber_type_decoder_f RANAP_ForwardingIndication_decode_ber;
der_type_encoder_f RANAP_ForwardingIndication_encode_der;
xer_type_decoder_f RANAP_ForwardingIndication_decode_xer;
xer_type_encoder_f RANAP_ForwardingIndication_encode_xer;
per_type_decoder_f RANAP_ForwardingIndication_decode_uper;
per_type_encoder_f RANAP_ForwardingIndication_encode_uper;
per_type_decoder_f RANAP_ForwardingIndication_decode_aper;
per_type_encoder_f RANAP_ForwardingIndication_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_ForwardingIndication_H_ */
#include <asn_internal.h>
