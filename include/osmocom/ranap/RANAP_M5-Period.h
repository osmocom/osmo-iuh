/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_M5_Period_H_
#define	_RANAP_M5_Period_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RANAP_M5_Period {
	RANAP_M5_Period_ms100	= 0,
	RANAP_M5_Period_ms250	= 1,
	RANAP_M5_Period_ms500	= 2,
	RANAP_M5_Period_ms1000	= 3,
	RANAP_M5_Period_ms2000	= 4,
	RANAP_M5_Period_ms3000	= 5,
	RANAP_M5_Period_ms4000	= 6,
	RANAP_M5_Period_ms6000	= 7
	/*
	 * Enumeration is extensible
	 */
} e_RANAP_M5_Period;

/* RANAP_M5-Period */
typedef long	 RANAP_M5_Period_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_M5_Period;
asn_struct_free_f RANAP_M5_Period_free;
asn_struct_print_f RANAP_M5_Period_print;
asn_constr_check_f RANAP_M5_Period_constraint;
ber_type_decoder_f RANAP_M5_Period_decode_ber;
der_type_encoder_f RANAP_M5_Period_encode_der;
xer_type_decoder_f RANAP_M5_Period_decode_xer;
xer_type_encoder_f RANAP_M5_Period_encode_xer;
per_type_decoder_f RANAP_M5_Period_decode_uper;
per_type_encoder_f RANAP_M5_Period_encode_uper;
per_type_decoder_f RANAP_M5_Period_decode_aper;
per_type_encoder_f RANAP_M5_Period_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_M5_Period_H_ */
#include <asn_internal.h>
