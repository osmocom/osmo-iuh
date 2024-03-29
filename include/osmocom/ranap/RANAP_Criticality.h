/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-CommonDataTypes"
 * 	found in "../../asn1/ranap/RANAP-CommonDataTypes.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_Criticality_H_
#define	_RANAP_Criticality_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RANAP_Criticality {
	RANAP_Criticality_reject	= 0,
	RANAP_Criticality_ignore	= 1,
	RANAP_Criticality_notify	= 2
} e_RANAP_Criticality;

/* RANAP_Criticality */
typedef long	 RANAP_Criticality_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_Criticality;
asn_struct_free_f RANAP_Criticality_free;
asn_struct_print_f RANAP_Criticality_print;
asn_constr_check_f RANAP_Criticality_constraint;
ber_type_decoder_f RANAP_Criticality_decode_ber;
der_type_encoder_f RANAP_Criticality_encode_der;
xer_type_decoder_f RANAP_Criticality_decode_xer;
xer_type_encoder_f RANAP_Criticality_encode_xer;
per_type_decoder_f RANAP_Criticality_decode_uper;
per_type_encoder_f RANAP_Criticality_encode_uper;
per_type_decoder_f RANAP_Criticality_decode_aper;
per_type_encoder_f RANAP_Criticality_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_Criticality_H_ */
#include <asn_internal.h>
