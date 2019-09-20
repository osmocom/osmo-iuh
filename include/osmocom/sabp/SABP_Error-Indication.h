/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SABP-PDU"
 * 	found in "../../asn1/sabp/SABP-PDU.asn"
 */

#ifndef	_SABP_Error_Indication_H_
#define	_SABP_Error_Indication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/sabp/SABP_IE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SABP_Error-Indication */
typedef struct SABP_Error_Indication {
	struct error_Indication_ies {
		A_SEQUENCE_OF(SABP_IE_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} error_Indication_ies;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SABP_Error_Indication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SABP_Error_Indication;

#ifdef __cplusplus
}
#endif

#endif	/* _SABP_Error_Indication_H_ */
#include <asn_internal.h>