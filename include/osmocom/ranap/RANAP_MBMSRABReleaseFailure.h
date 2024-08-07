/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU"
 * 	found in "../../asn1/ranap/RANAP-PDU.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_MBMSRABReleaseFailure_H_
#define	_RANAP_MBMSRABReleaseFailure_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/ranap/RANAP_IE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_MBMSRABReleaseFailure */
typedef struct RANAP_MBMSRABReleaseFailure {
	struct RANAP_MBMSRABReleaseFailure__mbmsrabReleaseFailure_ies {
		A_SEQUENCE_OF(RANAP_IE_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mbmsrabReleaseFailure_ies;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_MBMSRABReleaseFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_MBMSRABReleaseFailure;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_MBMSRABReleaseFailure_H_ */
#include <asn_internal.h>
