/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU"
 * 	found in "../../asn1/ranap/RANAP-PDU.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_RAB_SetupItem_EnhancedRelocCompleteRes_H_
#define	_RANAP_RAB_SetupItem_EnhancedRelocCompleteRes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/ranap/RANAP_RAB-ID.h>
#include <osmocom/ranap/RANAP_RAB-Parameters.h>
#include <osmocom/ranap/RANAP_UserPlaneInformation.h>
#include <osmocom/ranap/RANAP_TransportLayerAddress.h>
#include <osmocom/ranap/RANAP_IuTransportAssociation.h>
#include <osmocom/ranap/RANAP_RAB-ToBeReleasedList-EnhancedRelocCompleteRes.h>
#include <osmocom/ranap/RANAP_ProtocolExtensionContainer.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_RAB-SetupItem-EnhancedRelocCompleteRes */
typedef struct RANAP_RAB_SetupItem_EnhancedRelocCompleteRes {
	RANAP_RAB_ID_t	 rAB_ID;
	RANAP_RAB_Parameters_t	*rAB_Parameters	/* OPTIONAL */;
	RANAP_UserPlaneInformation_t	 userPlaneInformation;
	RANAP_TransportLayerAddress_t	*transportLayerAddressRes1	/* OPTIONAL */;
	RANAP_IuTransportAssociation_t	*iuTransportAssociationRes1	/* OPTIONAL */;
	RANAP_RAB_ToBeReleasedList_EnhancedRelocCompleteRes_t	*rab2beReleasedList	/* OPTIONAL */;
	RANAP_ProtocolExtensionContainer_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_RAB_SetupItem_EnhancedRelocCompleteRes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_RAB_SetupItem_EnhancedRelocCompleteRes;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_RAB_SetupItem_EnhancedRelocCompleteRes_H_ */
#include <asn_internal.h>
