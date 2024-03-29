/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU"
 * 	found in "../../asn1/ranap/RANAP-PDU.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_RAB_SetupItem_EnhRelocInfoReq_H_
#define	_RANAP_RAB_SetupItem_EnhRelocInfoReq_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/ranap/RANAP_RAB-ID.h>
#include <osmocom/ranap/RANAP_CN-DomainIndicator.h>
#include <osmocom/ranap/RANAP_RAB-Parameters.h>
#include <osmocom/ranap/RANAP_DataVolumeReportingIndication.h>
#include <osmocom/ranap/RANAP_PDP-TypeInformation.h>
#include <osmocom/ranap/RANAP_UserPlaneInformation.h>
#include <osmocom/ranap/RANAP_TNLInformationEnhRelInfoReq.h>
#include <osmocom/ranap/RANAP_Service-Handover.h>
#include <osmocom/ranap/RANAP_Alt-RAB-Parameters.h>
#include <osmocom/ranap/RANAP_ProtocolExtensionContainer.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_RAB-SetupItem-EnhRelocInfoReq */
typedef struct RANAP_RAB_SetupItem_EnhRelocInfoReq {
	RANAP_RAB_ID_t	 rAB_ID;
	RANAP_CN_DomainIndicator_t	 cN_DomainIndicator;
	RANAP_RAB_Parameters_t	 rAB_Parameters;
	RANAP_DataVolumeReportingIndication_t	*dataVolumeReportingIndication	/* OPTIONAL */;
	RANAP_PDP_TypeInformation_t	*pDP_TypeInformation	/* OPTIONAL */;
	RANAP_UserPlaneInformation_t	 userPlaneInformation;
	RANAP_TNLInformationEnhRelInfoReq_t	*dataForwardingInformation	/* OPTIONAL */;
	RANAP_TNLInformationEnhRelInfoReq_t	*sourceSideIuULTNLInfo	/* OPTIONAL */;
	RANAP_Service_Handover_t	*service_Handover	/* OPTIONAL */;
	RANAP_Alt_RAB_Parameters_t	*alt_RAB_Parameters	/* OPTIONAL */;
	RANAP_ProtocolExtensionContainer_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_RAB_SetupItem_EnhRelocInfoReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_RAB_SetupItem_EnhRelocInfoReq;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_RAB_SetupItem_EnhRelocInfoReq_H_ */
#include <asn_internal.h>
