/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -R -fcompound-names`
 */

#ifndef	_HNBAP_IP_Address_H_
#define	_HNBAP_IP_Address_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/hnbap/HNBAP_IE-Extensions.h>
#include <osmocom/hnbap/HNBAP_Ipv4Address.h>
#include <osmocom/hnbap/HNBAP_Ipv6Address.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HNBAP_IP_Address__ipaddress_PR {
	HNBAP_IP_Address__ipaddress_PR_NOTHING,	/* No components present */
	HNBAP_IP_Address__ipaddress_PR_ipv4info,
	HNBAP_IP_Address__ipaddress_PR_ipv6info,
	/* Extensions may appear below */
	
} HNBAP_IP_Address__ipaddress_PR;

/* HNBAP_IP-Address */
typedef struct HNBAP_IP_Address {
	struct HNBAP_IP_Address__ipaddress {
		HNBAP_IP_Address__ipaddress_PR present;
		union HNBAP_IP_Address__ipaddress_u {
			HNBAP_Ipv4Address_t	 ipv4info;
			HNBAP_Ipv6Address_t	 ipv6info;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ipaddress;
	HNBAP_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HNBAP_IP_Address_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HNBAP_IP_Address;

#ifdef __cplusplus
}
#endif

#endif	/* _HNBAP_IP_Address_H_ */
#include <asn_internal.h>
