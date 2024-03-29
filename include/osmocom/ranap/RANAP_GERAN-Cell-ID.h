/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_GERAN_Cell_ID_H_
#define	_RANAP_GERAN_Cell_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/ranap/RANAP_LAI.h>
#include <osmocom/ranap/RANAP_RAC.h>
#include <osmocom/ranap/RANAP_CI.h>
#include <osmocom/ranap/RANAP_IE-Extensions.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_GERAN-Cell-ID */
typedef struct RANAP_GERAN_Cell_ID {
	RANAP_LAI_t	 lAI;
	RANAP_RAC_t	 rAC;
	RANAP_CI_t	 cI;
	RANAP_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_GERAN_Cell_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_GERAN_Cell_ID;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_GERAN_Cell_ID_H_ */
#include <asn_internal.h>
