/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -R -fcompound-names`
 */

#ifndef	_HNBAP_IMSIESN_H_
#define	_HNBAP_IMSIESN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/hnbap/HNBAP_IMSIDS41.h>
#include <osmocom/hnbap/HNBAP_ESN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HNBAP_IMSIESN */
typedef struct HNBAP_IMSIESN {
	HNBAP_IMSIDS41_t	 iMSIDS41;
	HNBAP_ESN_t	 eSN;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HNBAP_IMSIESN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HNBAP_IMSIESN;

#ifdef __cplusplus
}
#endif

#endif	/* _HNBAP_IMSIESN_H_ */
#include <asn_internal.h>
