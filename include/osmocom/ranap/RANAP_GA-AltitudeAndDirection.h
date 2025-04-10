/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_GA_AltitudeAndDirection_H_
#define	_RANAP_GA_AltitudeAndDirection_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RANAP_GA_AltitudeAndDirection__directionOfAltitude {
	RANAP_GA_AltitudeAndDirection__directionOfAltitude_height	= 0,
	RANAP_GA_AltitudeAndDirection__directionOfAltitude_depth	= 1
} e_RANAP_GA_AltitudeAndDirection__directionOfAltitude;

/* RANAP_GA-AltitudeAndDirection */
typedef struct RANAP_GA_AltitudeAndDirection {
	long	 directionOfAltitude;
	long	 altitude;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_GA_AltitudeAndDirection_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_directionOfAltitude_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_GA_AltitudeAndDirection;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_GA_AltitudeAndDirection_H_ */
#include <asn_internal.h>
