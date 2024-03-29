/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_Service_Handover_H_
#define	_RANAP_Service_Handover_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RANAP_Service_Handover {
	RANAP_Service_Handover_handover_to_GSM_should_be_performed	= 0,
	RANAP_Service_Handover_handover_to_GSM_should_not_be_performed	= 1,
	RANAP_Service_Handover_handover_to_GSM_shall_not_be_performed	= 2
	/*
	 * Enumeration is extensible
	 */
} e_RANAP_Service_Handover;

/* RANAP_Service-Handover */
typedef long	 RANAP_Service_Handover_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_Service_Handover;
asn_struct_free_f RANAP_Service_Handover_free;
asn_struct_print_f RANAP_Service_Handover_print;
asn_constr_check_f RANAP_Service_Handover_constraint;
ber_type_decoder_f RANAP_Service_Handover_decode_ber;
der_type_encoder_f RANAP_Service_Handover_encode_der;
xer_type_decoder_f RANAP_Service_Handover_decode_xer;
xer_type_encoder_f RANAP_Service_Handover_encode_xer;
per_type_decoder_f RANAP_Service_Handover_decode_uper;
per_type_encoder_f RANAP_Service_Handover_encode_uper;
per_type_decoder_f RANAP_Service_Handover_decode_aper;
per_type_encoder_f RANAP_Service_Handover_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_Service_Handover_H_ */
#include <asn_internal.h>
