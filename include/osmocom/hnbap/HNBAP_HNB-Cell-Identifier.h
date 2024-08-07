/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -R -fcompound-names`
 */

#ifndef	_HNBAP_HNB_Cell_Identifier_H_
#define	_HNBAP_HNB_Cell_Identifier_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/hnbap/HNBAP_PLMNidentity.h>
#include <osmocom/hnbap/HNBAP_CellIdentity.h>
#include <osmocom/hnbap/HNBAP_IE-Extensions.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HNBAP_HNB-Cell-Identifier */
typedef struct HNBAP_HNB_Cell_Identifier {
	HNBAP_PLMNidentity_t	 pLMNidentity;
	HNBAP_CellIdentity_t	 cellIdentity;
	HNBAP_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HNBAP_HNB_Cell_Identifier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HNBAP_HNB_Cell_Identifier;

#ifdef __cplusplus
}
#endif

#endif	/* _HNBAP_HNB_Cell_Identifier_H_ */
#include <asn_internal.h>
