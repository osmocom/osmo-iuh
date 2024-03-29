/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_GA_PointWithAltitudeAndUncertaintyEllipsoid_H_
#define	_RANAP_GA_PointWithAltitudeAndUncertaintyEllipsoid_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/ranap/RANAP_GeographicalCoordinates.h>
#include <osmocom/ranap/RANAP_GA-AltitudeAndDirection.h>
#include <osmocom/ranap/RANAP_GA-UncertaintyEllipse.h>
#include <NativeInteger.h>
#include <osmocom/ranap/RANAP_IE-Extensions.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_GA-PointWithAltitudeAndUncertaintyEllipsoid */
typedef struct RANAP_GA_PointWithAltitudeAndUncertaintyEllipsoid {
	RANAP_GeographicalCoordinates_t	 geographicalCoordinates;
	RANAP_GA_AltitudeAndDirection_t	 altitudeAndDirection;
	RANAP_GA_UncertaintyEllipse_t	 uncertaintyEllipse;
	long	 uncertaintyAltitude;
	long	 confidence;
	RANAP_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_GA_PointWithAltitudeAndUncertaintyEllipsoid_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_GA_PointWithAltitudeAndUncertaintyEllipsoid;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_GA_PointWithAltitudeAndUncertaintyEllipsoid_H_ */
#include <asn_internal.h>
