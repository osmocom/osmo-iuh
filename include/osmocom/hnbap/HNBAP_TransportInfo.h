/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -R -fcompound-names`
 */

#ifndef	_HNBAP_TransportInfo_H_
#define	_HNBAP_TransportInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/hnbap/HNBAP_TransportLayerAddress.h>
#include <osmocom/hnbap/HNBAP_IE-Extensions.h>
#include <osmocom/hnbap/HNBAP_GTP-TEI.h>
#include <osmocom/hnbap/HNBAP_BindingID.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HNBAP_TransportInfo__transportAssociation_PR {
	HNBAP_TransportInfo__transportAssociation_PR_NOTHING,	/* No components present */
	HNBAP_TransportInfo__transportAssociation_PR_gtp_TEI,
	HNBAP_TransportInfo__transportAssociation_PR_bindingID,
	/* Extensions may appear below */
	
} HNBAP_TransportInfo__transportAssociation_PR;

/* HNBAP_TransportInfo */
typedef struct HNBAP_TransportInfo {
	HNBAP_TransportLayerAddress_t	 transportLayerAddress;
	struct HNBAP_TransportInfo__transportAssociation {
		HNBAP_TransportInfo__transportAssociation_PR present;
		union HNBAP_TransportInfo__transportAssociation_u {
			HNBAP_GTP_TEI_t	 gtp_TEI;
			HNBAP_BindingID_t	 bindingID;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} transportAssociation;
	HNBAP_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HNBAP_TransportInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HNBAP_TransportInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _HNBAP_TransportInfo_H_ */
#include <asn_internal.h>
