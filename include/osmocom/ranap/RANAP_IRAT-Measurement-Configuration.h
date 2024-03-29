/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_IRAT_Measurement_Configuration_H_
#define	_RANAP_IRAT_Measurement_Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <osmocom/ranap/RANAP_IRATmeasurementParameters.h>
#include <osmocom/ranap/RANAP_IE-Extensions.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_IRAT-Measurement-Configuration */
typedef struct RANAP_IRAT_Measurement_Configuration {
	long	*rSRP	/* OPTIONAL */;
	long	*rSRQ	/* OPTIONAL */;
	RANAP_IRATmeasurementParameters_t	 iRATmeasurementParameters;
	RANAP_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_IRAT_Measurement_Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_IRAT_Measurement_Configuration;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_IRAT_Measurement_Configuration_H_ */
#include <asn_internal.h>
