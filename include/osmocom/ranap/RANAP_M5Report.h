/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_M5Report_H_
#define	_RANAP_M5Report_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <osmocom/ranap/RANAP_M5-Period.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RANAP_M5Report_PR {
	RANAP_M5Report_PR_NOTHING,	/* No components present */
	RANAP_M5Report_PR_when_available,
	RANAP_M5Report_PR_m5_period,
	/* Extensions may appear below */
	
} RANAP_M5Report_PR;

/* RANAP_M5Report */
typedef struct RANAP_M5Report {
	RANAP_M5Report_PR present;
	union RANAP_M5Report_u {
		NULL_t	 when_available;
		RANAP_M5_Period_t	 m5_period;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_M5Report_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_M5Report;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_M5Report_H_ */
#include <asn_internal.h>
