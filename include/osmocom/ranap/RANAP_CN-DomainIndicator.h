/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_CN_DomainIndicator_H_
#define	_RANAP_CN_DomainIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RANAP_CN_DomainIndicator {
	RANAP_CN_DomainIndicator_cs_domain	= 0,
	RANAP_CN_DomainIndicator_ps_domain	= 1
} e_RANAP_CN_DomainIndicator;

/* RANAP_CN-DomainIndicator */
typedef long	 RANAP_CN_DomainIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_CN_DomainIndicator;
asn_struct_free_f RANAP_CN_DomainIndicator_free;
asn_struct_print_f RANAP_CN_DomainIndicator_print;
asn_constr_check_f RANAP_CN_DomainIndicator_constraint;
ber_type_decoder_f RANAP_CN_DomainIndicator_decode_ber;
der_type_encoder_f RANAP_CN_DomainIndicator_encode_der;
xer_type_decoder_f RANAP_CN_DomainIndicator_decode_xer;
xer_type_encoder_f RANAP_CN_DomainIndicator_encode_xer;
per_type_decoder_f RANAP_CN_DomainIndicator_decode_uper;
per_type_encoder_f RANAP_CN_DomainIndicator_encode_uper;
per_type_decoder_f RANAP_CN_DomainIndicator_decode_aper;
per_type_encoder_f RANAP_CN_DomainIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_CN_DomainIndicator_H_ */
#include <asn_internal.h>
