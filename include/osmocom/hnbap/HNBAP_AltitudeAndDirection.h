/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -R -fcompound-names`
 */

#ifndef	_HNBAP_AltitudeAndDirection_H_
#define	_HNBAP_AltitudeAndDirection_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HNBAP_AltitudeAndDirection__directionOfAltitude {
	HNBAP_AltitudeAndDirection__directionOfAltitude_height	= 0,
	HNBAP_AltitudeAndDirection__directionOfAltitude_depth	= 1
} e_HNBAP_AltitudeAndDirection__directionOfAltitude;

/* HNBAP_AltitudeAndDirection */
typedef struct HNBAP_AltitudeAndDirection {
	long	 directionOfAltitude;
	long	 altitude;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HNBAP_AltitudeAndDirection_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_directionOfAltitude_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_HNBAP_AltitudeAndDirection;

#ifdef __cplusplus
}
#endif

#endif	/* _HNBAP_AltitudeAndDirection_H_ */
#include <asn_internal.h>