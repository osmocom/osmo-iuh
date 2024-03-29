/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RUA-IEs"
 * 	found in "../../asn1/rua/RUA-IEs.asn"
 * 	`asn1c -R -fcompound-names`
 */

#ifndef	_RUA_Cause_H_
#define	_RUA_Cause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/rua/RUA_CauseRadioNetwork.h>
#include <osmocom/rua/RUA_CauseTransport.h>
#include <osmocom/rua/RUA_CauseProtocol.h>
#include <osmocom/rua/RUA_CauseMisc.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RUA_Cause_PR {
	RUA_Cause_PR_NOTHING,	/* No components present */
	RUA_Cause_PR_radioNetwork,
	RUA_Cause_PR_transport,
	RUA_Cause_PR_protocol,
	RUA_Cause_PR_misc,
	/* Extensions may appear below */
	
} RUA_Cause_PR;

/* RUA_Cause */
typedef struct RUA_Cause {
	RUA_Cause_PR present;
	union RUA_Cause_u {
		RUA_CauseRadioNetwork_t	 radioNetwork;
		RUA_CauseTransport_t	 transport;
		RUA_CauseProtocol_t	 protocol;
		RUA_CauseMisc_t	 misc;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RUA_Cause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RUA_Cause;

#ifdef __cplusplus
}
#endif

#endif	/* _RUA_Cause_H_ */
#include <asn_internal.h>
