/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU"
 * 	found in "../../asn1/ranap/RANAP-PDU.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_JoinedMBMSBearerService_IEs_H_
#define	_RANAP_JoinedMBMSBearerService_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/ranap/RANAP_JoinedMBMSBearerService-IEs-Value.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_JoinedMBMSBearerService-IEs */
typedef struct RANAP_JoinedMBMSBearerService_IEs {
	A_SEQUENCE_OF(RANAP_JoinedMBMSBearerService_IEs_Value_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_JoinedMBMSBearerService_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_JoinedMBMSBearerService_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_JoinedMBMSBearerService_IEs_H_ */
#include <asn_internal.h>
