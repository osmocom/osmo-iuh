/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-CommonDataTypes"
 * 	found in "../../asn1/hnbap/HNBAP-CommonDataTypes.asn"
 * 	`asn1c -R -fcompound-names`
 */

#ifndef	_HNBAP_TriggeringMessage_H_
#define	_HNBAP_TriggeringMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HNBAP_TriggeringMessage {
	HNBAP_TriggeringMessage_initiating_message	= 0,
	HNBAP_TriggeringMessage_successful_outcome	= 1,
	HNBAP_TriggeringMessage_unsuccessful_outcome	= 2
} e_HNBAP_TriggeringMessage;

/* HNBAP_TriggeringMessage */
typedef long	 HNBAP_TriggeringMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HNBAP_TriggeringMessage;
asn_struct_free_f HNBAP_TriggeringMessage_free;
asn_struct_print_f HNBAP_TriggeringMessage_print;
asn_constr_check_f HNBAP_TriggeringMessage_constraint;
ber_type_decoder_f HNBAP_TriggeringMessage_decode_ber;
der_type_encoder_f HNBAP_TriggeringMessage_encode_der;
xer_type_decoder_f HNBAP_TriggeringMessage_decode_xer;
xer_type_encoder_f HNBAP_TriggeringMessage_encode_xer;
per_type_decoder_f HNBAP_TriggeringMessage_decode_uper;
per_type_encoder_f HNBAP_TriggeringMessage_encode_uper;
per_type_decoder_f HNBAP_TriggeringMessage_decode_aper;
per_type_encoder_f HNBAP_TriggeringMessage_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _HNBAP_TriggeringMessage_H_ */
#include <asn_internal.h>