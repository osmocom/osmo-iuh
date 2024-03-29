/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 * 	`asn1c -fcompound-names -R`
 */

#ifndef	_RANAP_LastVisitedUTRANCell_Item_H_
#define	_RANAP_LastVisitedUTRANCell_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/ranap/RANAP_UTRAN-CellID.h>
#include <osmocom/ranap/RANAP_CellType.h>
#include <osmocom/ranap/RANAP_Time-UE-StayedInCell.h>
#include <osmocom/ranap/RANAP_IE-Extensions.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_LastVisitedUTRANCell-Item */
typedef struct RANAP_LastVisitedUTRANCell_Item {
	RANAP_UTRAN_CellID_t	 uTRAN_CellID;
	RANAP_CellType_t	 cellType;
	RANAP_Time_UE_StayedInCell_t	 time_UE_StayedInCell;
	RANAP_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_LastVisitedUTRANCell_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_LastVisitedUTRANCell_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_LastVisitedUTRANCell_Item_H_ */
#include <asn_internal.h>
