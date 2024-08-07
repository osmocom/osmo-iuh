/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_RejectCauseValue_H_
#define	_RANAP_RejectCauseValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RANAP_RejectCauseValue {
	RANAP_RejectCauseValue_pLMN_Not_Allowed	= 0,
	RANAP_RejectCauseValue_location_Area_Not_Allowed	= 1,
	RANAP_RejectCauseValue_roaming_Not_Allowed_In_This_Location_Area	= 2,
	RANAP_RejectCauseValue_no_Suitable_Cell_In_Location_Area	= 3,
	RANAP_RejectCauseValue_gPRS_Services_Not_Allowed_In_This_PLMN	= 4,
	RANAP_RejectCauseValue_cS_PS_coordination_required	= 5,
	/*
	 * Enumeration is extensible
	 */
	RANAP_RejectCauseValue_network_failure	= 6,
	RANAP_RejectCauseValue_not_authorized_for_this_CSG	= 7
} e_RANAP_RejectCauseValue;

/* RANAP_RejectCauseValue */
typedef long	 RANAP_RejectCauseValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_RejectCauseValue;
asn_struct_free_f RANAP_RejectCauseValue_free;
asn_struct_print_f RANAP_RejectCauseValue_print;
asn_constr_check_f RANAP_RejectCauseValue_constraint;
ber_type_decoder_f RANAP_RejectCauseValue_decode_ber;
der_type_encoder_f RANAP_RejectCauseValue_encode_der;
xer_type_decoder_f RANAP_RejectCauseValue_decode_xer;
xer_type_encoder_f RANAP_RejectCauseValue_encode_xer;
per_type_decoder_f RANAP_RejectCauseValue_decode_uper;
per_type_encoder_f RANAP_RejectCauseValue_encode_uper;
per_type_decoder_f RANAP_RejectCauseValue_decode_aper;
per_type_encoder_f RANAP_RejectCauseValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_RejectCauseValue_H_ */
#include <asn_internal.h>
