/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -R -fcompound-names`
 */

#ifndef	_HNBAP_CriticalityDiagnostics_IE_List_H_
#define	_HNBAP_CriticalityDiagnostics_IE_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <osmocom/hnbap/HNBAP_Criticality.h>
#include <osmocom/hnbap/HNBAP_ProtocolIE-ID.h>
#include <osmocom/hnbap/HNBAP_TypeOfError.h>
#include <osmocom/hnbap/HNBAP_IE-Extensions.h>
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HNBAP_CriticalityDiagnostics-IE-List */
typedef struct HNBAP_CriticalityDiagnostics_IE_List {
	A_SEQUENCE_OF(struct HNBAP_CriticalityDiagnostics_IE_List__Member {
		HNBAP_Criticality_t	 iECriticality;
		HNBAP_ProtocolIE_ID_t	 iE_ID;
		HNBAP_TypeOfError_t	 typeOfError;
		HNBAP_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HNBAP_CriticalityDiagnostics_IE_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HNBAP_CriticalityDiagnostics_IE_List;

#ifdef __cplusplus
}
#endif

#endif	/* _HNBAP_CriticalityDiagnostics_IE_List_H_ */
#include <asn_internal.h>