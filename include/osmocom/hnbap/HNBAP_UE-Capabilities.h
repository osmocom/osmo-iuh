/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -R -fcompound-names`
 */

#ifndef	_HNBAP_UE_Capabilities_H_
#define	_HNBAP_UE_Capabilities_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/hnbap/HNBAP_Access-stratum-release-indicator.h>
#include <osmocom/hnbap/HNBAP_CSG-Capability.h>
#include <osmocom/hnbap/HNBAP_IE-Extensions.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HNBAP_UE-Capabilities */
typedef struct HNBAP_UE_Capabilities {
	HNBAP_Access_stratum_release_indicator_t	 access_stratum_release_indicator;
	HNBAP_CSG_Capability_t	 csg_capability;
	HNBAP_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HNBAP_UE_Capabilities_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HNBAP_UE_Capabilities;

#ifdef __cplusplus
}
#endif

#endif	/* _HNBAP_UE_Capabilities_H_ */
#include <asn_internal.h>
