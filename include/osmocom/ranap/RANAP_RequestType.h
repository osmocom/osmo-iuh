/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 */

#ifndef	_RANAP_RequestType_H_
#define	_RANAP_RequestType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/osmo-iuh/ranap/RANAP_Event.h>
#include <osmocom/osmo-iuh/ranap/RANAP_ReportArea.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_RequestType */
typedef struct RANAP_RequestType {
	RANAP_Event_t	 event;
	RANAP_ReportArea_t	 reportArea;
	long	*accuracyCode	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_RequestType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_RequestType;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_RequestType_H_ */
#include <asn_internal.h>