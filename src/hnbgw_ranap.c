#include <osmocom/core/msgb.h>
#include <osmocom/core/utils.h>
#include <osmocom/gsm/gsm48.h>

#include <unistd.h>
#include <errno.h>
#include <string.h>

#include "asn1helpers.h"

#include "hnbgw.h"
#include "hnbgw_rua.h"
//#include "ranap_common.h"

#include "ranap/RANAP_RANAP-PDU.h"
#include "ranap/RANAP_ResetAcknowledge.h"
#include "ranap/RANAP_Reset.h"
#include "ranap/RANAP_ProtocolIE-ID.h"
#include "ranap/RANAP_Cause.h"
#include "ranap/RANAP_CN-DomainIndicator.h"
#include "ranap/RANAP_GlobalRNC-ID.h"
#include "ranap/RANAP_CriticalityDiagnostics.h"

/***********************************************************************
 * BEGIN auto-generated copy+pasted
 ***********************************************************************/

/* this is copy+pasted from the asn1tostruct generated code that doesn't
 * compile as a whole */

#define RANAP_DEBUG(x, args ...) DEBUGP(0, x, ## args)

extern int asn1_xer_print;

struct msgb *ranap_generate_successful_outcome(
					   e_RANAP_ProcedureCode procedureCode,
					   RANAP_Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr);

RANAP_IE_t *ranap_new_ie(RANAP_ProtocolIE_ID_t id, RANAP_Criticality_t criticality,
			 asn_TYPE_descriptor_t *type, void *sptr);

#define RESETIES_RANAP_GLOBALRNC_ID_PRESENT (1 << 0)

typedef struct RANAP_ResetIEs_s {
    uint16_t             presenceMask;
    RANAP_Cause_t        cause;
    RANAP_CN_DomainIndicator_t cN_DomainIndicator;
    RANAP_GlobalRNC_ID_t globalRNC_ID; ///< Optional field
} RANAP_ResetIEs_t;

#define RESETACKNOWLEDGEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT (1 << 0)
#define RESETACKNOWLEDGEIES_RANAP_GLOBALRNC_ID_PRESENT     (1 << 1)

typedef struct RANAP_ResetAcknowledgeIEs_s {
    uint16_t                 presenceMask;
    RANAP_CN_DomainIndicator_t cN_DomainIndicator;
    RANAP_CriticalityDiagnostics_t criticalityDiagnostics; ///< Optional field
    RANAP_GlobalRNC_ID_t     globalRNC_ID; ///< Optional field
} RANAP_ResetAcknowledgeIEs_t;

int ranap_decode_reseties(
    RANAP_ResetIEs_t *resetIEs,
    ANY_t *any_p) {

    RANAP_Reset_t  reset;
    RANAP_Reset_t *reset_p = &reset;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(resetIEs != NULL);

    RANAP_DEBUG("Decoding message RANAP_ResetIEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_RANAP_Reset, (void**)&reset_p);

    for (i = 0; i < reset_p->reset_ies.list.count; i++) {
        RANAP_IE_t *ie_p;
        ie_p = reset_p->reset_ies.list.array[i];
        switch(ie_p->id) {
            case RANAP_ProtocolIE_ID_id_Cause:
            {
                RANAP_Cause_t  ranaP_Cause;
                RANAP_Cause_t *ranaP_Cause_p = &ranaP_Cause;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_RANAP_Cause, (void**)&ranaP_Cause_p);
                if (tempDecoded < 0) {
                    RANAP_DEBUG("Decoding of IE cause failed\n");
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_RANAP_Cause, ranaP_Cause_p);
                memcpy(&resetIEs->cause, ranaP_Cause_p, sizeof(RANAP_Cause_t));
            } break;
            case RANAP_ProtocolIE_ID_id_CN_DomainIndicator:
            {
                RANAP_CN_DomainIndicator_t  ranaP_CNDomainIndicator;
                RANAP_CN_DomainIndicator_t *ranaP_CNDomainIndicator_p = &ranaP_CNDomainIndicator;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_RANAP_CN_DomainIndicator, (void**)&ranaP_CNDomainIndicator_p);
                if (tempDecoded < 0) {
                    RANAP_DEBUG("Decoding of IE cN_DomainIndicator failed\n");
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_RANAP_CN_DomainIndicator, ranaP_CNDomainIndicator_p);
                memcpy(&resetIEs->cN_DomainIndicator, ranaP_CNDomainIndicator_p, sizeof(RANAP_CN_DomainIndicator_t));
            } break;
            /* Optional field */
            case RANAP_ProtocolIE_ID_id_GlobalRNC_ID:
            {
#if 0
                RANAP_GlobalRNC_ID_t  ranaP_GlobalRNCID;
                RANAP_GlobalRNC_ID_t *ranaP_GlobalRNCID_p = &ranaP_GlobalRNCID;
                resetIEs->presenceMask |= RESETIES_RANAP_GLOBALRNC_ID_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_RANAP_GlobalRNC_ID, (void**)&ranaP_GlobalRNCID_p);
                if (tempDecoded < 0) {
                    RANAP_DEBUG("Decoding of IE globalRNC_ID failed\n");
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_RANAP_GlobalRNC_ID, ranaP_GlobalRNCID_p);
                memcpy(&resetIEs->globalRNC_ID, ranaP_GlobalRNCID_p, sizeof(RANAP_GlobalRNC_ID_t));
#endif
            } break;
            default:
                RANAP_DEBUG("Unknown protocol IE id (%d) for message reseties\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int ranap_encode_resetacknowledgeies(
    RANAP_ResetAcknowledge_t *resetAcknowledge,
    RANAP_ResetAcknowledgeIEs_t *resetAcknowledgeIEs) {

    RANAP_IE_t *ie;

    if ((ie = ranap_new_ie(RANAP_ProtocolIE_ID_id_CN_DomainIndicator,
                          RANAP_Criticality_reject,
                          &asn_DEF_RANAP_CN_DomainIndicator,
                          &resetAcknowledgeIEs->cN_DomainIndicator)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&resetAcknowledge->resetAcknowledge_ies.list, ie);

    /* Optional field */
    if ((resetAcknowledgeIEs->presenceMask & RESETACKNOWLEDGEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT)
        == RESETACKNOWLEDGEIES_RANAP_CRITICALITYDIAGNOSTICS_PRESENT) {
        if ((ie = ranap_new_ie(RANAP_ProtocolIE_ID_id_CriticalityDiagnostics,
                              RANAP_Criticality_ignore,
                              &asn_DEF_RANAP_CriticalityDiagnostics,
                              &resetAcknowledgeIEs->criticalityDiagnostics)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&resetAcknowledge->resetAcknowledge_ies.list, ie);
    }

    /* Optional field */
    if ((resetAcknowledgeIEs->presenceMask & RESETACKNOWLEDGEIES_RANAP_GLOBALRNC_ID_PRESENT)
        == RESETACKNOWLEDGEIES_RANAP_GLOBALRNC_ID_PRESENT) {
        if ((ie = ranap_new_ie(RANAP_ProtocolIE_ID_id_GlobalRNC_ID,
                              RANAP_Criticality_ignore,
                              &asn_DEF_RANAP_GlobalRNC_ID,
                              &resetAcknowledgeIEs->globalRNC_ID)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&resetAcknowledge->resetAcknowledge_ies.list, ie);
    }

    return 0;
}

#include "ranap/RANAP_InitialUE-Message.h"
#include "ranap/RANAP_CN-DomainIndicator.h"
#include "ranap/RANAP_LAI.h"
#include "ranap/RANAP_SAI.h"
#include "ranap/RANAP_NAS-PDU.h"
#include "ranap/RANAP_IuSignallingConnectionIdentifier.h"
#include "ranap/RANAP_GlobalCN-ID.h"

typedef struct RANAP_InitialUE_MessageIEs_s {
    RANAP_CN_DomainIndicator_t         cN_DomainIndicator;
    RANAP_LAI_t                        lai;
    RANAP_SAI_t                        sai;
    RANAP_NAS_PDU_t                    nas_pdu;
    RANAP_IuSignallingConnectionIdentifier_t iuSigConId;
    RANAP_GlobalRNC_ID_t               globalRNC_ID;
} RANAP_InitialUE_MessageIEs_t;

int ranap_decode_initialue_messageies(
    RANAP_InitialUE_MessageIEs_t *initialUE_MessageIEs,
    ANY_t *any_p) {

    RANAP_InitialUE_Message_t  initialUE_Message;
    RANAP_InitialUE_Message_t *initialUE_Message_p = &initialUE_Message;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(initialUE_MessageIEs != NULL);

    RANAP_DEBUG("Decoding message RANAP_InitialUE_MessageIEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_RANAP_InitialUE_Message, (void**)&initialUE_Message_p);

    for (i = 0; i < initialUE_Message_p->initialUE_Message_ies.list.count; i++) {
        RANAP_IE_t *ie_p;
        ie_p = initialUE_Message_p->initialUE_Message_ies.list.array[i];
        switch(ie_p->id) {
            case RANAP_ProtocolIE_ID_id_CN_DomainIndicator:
            {
                RANAP_CN_DomainIndicator_t  ranaP_CNDomainIndicator;
                RANAP_CN_DomainIndicator_t *ranaP_CNDomainIndicator_p = &ranaP_CNDomainIndicator;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_RANAP_CN_DomainIndicator, (void**)&ranaP_CNDomainIndicator_p);
                if (tempDecoded < 0) {
                    RANAP_DEBUG("Decoding of IE cN_DomainIndicator failed\n");
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_RANAP_CN_DomainIndicator, ranaP_CNDomainIndicator_p);
                memcpy(&initialUE_MessageIEs->cN_DomainIndicator, ranaP_CNDomainIndicator_p, sizeof(RANAP_CN_DomainIndicator_t));
            } break;
            case RANAP_ProtocolIE_ID_id_LAI:
            {
                RANAP_LAI_t  ranap_lai;
                RANAP_LAI_t *ranap_lai_p = &ranap_lai;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_RANAP_LAI, (void**)&ranap_lai_p);
                if (tempDecoded < 0) {
                    RANAP_DEBUG("Decoding of IE lai failed\n");
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_RANAP_LAI, ranap_lai_p);
                memcpy(&initialUE_MessageIEs->lai, ranap_lai_p, sizeof(RANAP_LAI_t));
            } break;
            case RANAP_ProtocolIE_ID_id_SAI:
            {
                RANAP_SAI_t  ranap_sai;
                RANAP_SAI_t *ranap_sai_p = &ranap_sai;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_RANAP_SAI, (void**)&ranap_sai_p);
                if (tempDecoded < 0) {
                    RANAP_DEBUG("Decoding of IE sai failed\n");
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_RANAP_SAI, ranap_sai_p);
                memcpy(&initialUE_MessageIEs->sai, ranap_sai_p, sizeof(RANAP_SAI_t));
            } break;
            case RANAP_ProtocolIE_ID_id_NAS_PDU:
            {
                RANAP_NAS_PDU_t  ranap_naspdu;
                RANAP_NAS_PDU_t *ranap_naspdu_p = &ranap_naspdu;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_RANAP_NAS_PDU, (void**)&ranap_naspdu_p);
                if (tempDecoded < 0) {
                    RANAP_DEBUG("Decoding of IE nas_pdu failed\n");
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_RANAP_NAS_PDU, ranap_naspdu_p);
                memcpy(&initialUE_MessageIEs->nas_pdu, ranap_naspdu_p, sizeof(RANAP_NAS_PDU_t));
            } break;
            case RANAP_ProtocolIE_ID_id_IuSigConId:
            {
                RANAP_IuSignallingConnectionIdentifier_t  ranaP_IuSignallingConnectionIdentifier;
                RANAP_IuSignallingConnectionIdentifier_t *ranaP_IuSignallingConnectionIdentifier_p = &ranaP_IuSignallingConnectionIdentifier;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_RANAP_IuSignallingConnectionIdentifier, (void**)&ranaP_IuSignallingConnectionIdentifier_p);
                if (tempDecoded < 0) {
                    RANAP_DEBUG("Decoding of IE iuSigConId failed\n");
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_RANAP_IuSignallingConnectionIdentifier, ranaP_IuSignallingConnectionIdentifier_p);
                memcpy(&initialUE_MessageIEs->iuSigConId, ranaP_IuSignallingConnectionIdentifier_p, sizeof(RANAP_IuSignallingConnectionIdentifier_t));
            } break;
            case RANAP_ProtocolIE_ID_id_GlobalRNC_ID:
            {
                RANAP_GlobalRNC_ID_t  ranaP_GlobalRNCID;
                RANAP_GlobalRNC_ID_t *ranaP_GlobalRNCID_p = &ranaP_GlobalRNCID;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_RANAP_GlobalRNC_ID, (void**)&ranaP_GlobalRNCID_p);
                if (tempDecoded < 0) {
                    RANAP_DEBUG("Decoding of IE globalRNC_ID failed\n");
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_RANAP_GlobalRNC_ID, ranaP_GlobalRNCID_p);
                memcpy(&initialUE_MessageIEs->globalRNC_ID, ranaP_GlobalRNCID_p, sizeof(RANAP_GlobalRNC_ID_t));
            } break;
            default:
                RANAP_DEBUG("Unknown protocol IE id (%d) for message initialue_messageies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

#include "ranap/RANAP_DirectTransfer.h"
#include "ranap/RANAP_SAPI.h"
#include "ranap/RANAP_RAC.h"

#define DIRECTTRANSFERIES_RANAP_LAI_PRESENT (1 << 0)
#define DIRECTTRANSFERIES_RANAP_RAC_PRESENT (1 << 1)
#define DIRECTTRANSFERIES_RANAP_SAI_PRESENT (1 << 2)
#define DIRECTTRANSFERIES_RANAP_SAPI_PRESENT (1 << 3)

typedef struct RANAP_DirectTransferIEs_s {
    uint16_t  presenceMask;
    RANAP_NAS_PDU_t nas_pdu;
    RANAP_LAI_t lai; ///< Optional field
    RANAP_RAC_t rac; ///< Optional field
    RANAP_SAI_t sai; ///< Optional field
    RANAP_SAPI_t sapi; ///< Optional field
} RANAP_DirectTransferIEs_t;

int ranap_decode_directtransferies(
    RANAP_DirectTransferIEs_t *directTransferIEs,
    ANY_t *any_p) {

    RANAP_DirectTransfer_t  directTransfer;
    RANAP_DirectTransfer_t *directTransfer_p = &directTransfer;
    int i, decoded = 0;
    int tempDecoded = 0;
    assert(any_p != NULL);
    assert(directTransferIEs != NULL);

    RANAP_DEBUG("Decoding message RANAP_DirectTransferIEs (%s:%d)\n", __FILE__, __LINE__);

    ANY_to_type_aper(any_p, &asn_DEF_RANAP_DirectTransfer, (void**)&directTransfer_p);

    for (i = 0; i < directTransfer_p->directTransfer_ies.list.count; i++) {
        RANAP_IE_t *ie_p;
        ie_p = directTransfer_p->directTransfer_ies.list.array[i];
        switch(ie_p->id) {
            case RANAP_ProtocolIE_ID_id_NAS_PDU:
            {
                RANAP_NAS_PDU_t  ranap_naspdu;
                RANAP_NAS_PDU_t *ranap_naspdu_p = &ranap_naspdu;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_RANAP_NAS_PDU, (void**)&ranap_naspdu_p);
                if (tempDecoded < 0) {
                    RANAP_DEBUG("Decoding of IE nas_pdu failed\n");
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_RANAP_NAS_PDU, ranap_naspdu_p);
                memcpy(&directTransferIEs->nas_pdu, ranap_naspdu_p, sizeof(RANAP_NAS_PDU_t));
            } break;
            /* Optional field */
            case RANAP_ProtocolIE_ID_id_LAI:
            {
                RANAP_LAI_t  ranap_lai;
                RANAP_LAI_t *ranap_lai_p = &ranap_lai;
                directTransferIEs->presenceMask |= DIRECTTRANSFERIES_RANAP_LAI_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_RANAP_LAI, (void**)&ranap_lai_p);
                if (tempDecoded < 0) {
                    RANAP_DEBUG("Decoding of IE lai failed\n");
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_RANAP_LAI, ranap_lai_p);
                memcpy(&directTransferIEs->lai, ranap_lai_p, sizeof(RANAP_LAI_t));
            } break;
            /* Optional field */
            case RANAP_ProtocolIE_ID_id_RAC:
            {
                RANAP_RAC_t  ranap_rac;
                RANAP_RAC_t *ranap_rac_p = &ranap_rac;
                directTransferIEs->presenceMask |= DIRECTTRANSFERIES_RANAP_RAC_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_RANAP_RAC, (void**)&ranap_rac_p);
                if (tempDecoded < 0) {
                    RANAP_DEBUG("Decoding of IE rac failed\n");
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_RANAP_RAC, ranap_rac_p);
                memcpy(&directTransferIEs->rac, ranap_rac_p, sizeof(RANAP_RAC_t));
            } break;
            /* Optional field */
            case RANAP_ProtocolIE_ID_id_SAI:
            {
                RANAP_SAI_t  ranap_sai;
                RANAP_SAI_t *ranap_sai_p = &ranap_sai;
                directTransferIEs->presenceMask |= DIRECTTRANSFERIES_RANAP_SAI_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_RANAP_SAI, (void**)&ranap_sai_p);
                if (tempDecoded < 0) {
                    RANAP_DEBUG("Decoding of IE sai failed\n");
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_RANAP_SAI, ranap_sai_p);
                memcpy(&directTransferIEs->sai, ranap_sai_p, sizeof(RANAP_SAI_t));
            } break;
            /* Optional field */
            case RANAP_ProtocolIE_ID_id_SAPI:
            {
                RANAP_SAPI_t  ranap_sapi;
                RANAP_SAPI_t *ranap_sapi_p = &ranap_sapi;
                directTransferIEs->presenceMask |= DIRECTTRANSFERIES_RANAP_SAPI_PRESENT;
                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_RANAP_SAPI, (void**)&ranap_sapi_p);
                if (tempDecoded < 0) {
                    RANAP_DEBUG("Decoding of IE sapi failed\n");
                    return -1;
                }
                decoded += tempDecoded;
                if (asn1_xer_print)
                    xer_fprint(stdout, &asn_DEF_RANAP_SAPI, ranap_sapi_p);
                memcpy(&directTransferIEs->sapi, ranap_sapi_p, sizeof(RANAP_SAPI_t));
            } break;
            default:
                RANAP_DEBUG("Unknown protocol IE id (%d) for message directtransferies\n", (int)ie_p->id);
                return -1;
        }
    }
    return decoded;
}

int ranap_encode_directtransferies(
    RANAP_DirectTransfer_t *directTransfer,
    RANAP_DirectTransferIEs_t *directTransferIEs) {

    RANAP_IE_t *ie;

    if ((ie = ranap_new_ie(RANAP_ProtocolIE_ID_id_NAS_PDU,
                          RANAP_Criticality_ignore,
                          &asn_DEF_RANAP_NAS_PDU,
                          &directTransferIEs->nas_pdu)) == NULL) {
        return -1;
    }
    ASN_SEQUENCE_ADD(&directTransfer->directTransfer_ies.list, ie);

    /* Optional field */
    if ((directTransferIEs->presenceMask & DIRECTTRANSFERIES_RANAP_LAI_PRESENT)
        == DIRECTTRANSFERIES_RANAP_LAI_PRESENT) {
        if ((ie = ranap_new_ie(RANAP_ProtocolIE_ID_id_LAI,
                              RANAP_Criticality_ignore,
                              &asn_DEF_RANAP_LAI,
                              &directTransferIEs->lai)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&directTransfer->directTransfer_ies.list, ie);
    }

    /* Optional field */
    if ((directTransferIEs->presenceMask & DIRECTTRANSFERIES_RANAP_RAC_PRESENT)
        == DIRECTTRANSFERIES_RANAP_RAC_PRESENT) {
        if ((ie = ranap_new_ie(RANAP_ProtocolIE_ID_id_RAC,
                              RANAP_Criticality_ignore,
                              &asn_DEF_RANAP_RAC,
                              &directTransferIEs->rac)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&directTransfer->directTransfer_ies.list, ie);
    }

    /* Optional field */
    if ((directTransferIEs->presenceMask & DIRECTTRANSFERIES_RANAP_SAI_PRESENT)
        == DIRECTTRANSFERIES_RANAP_SAI_PRESENT) {
        if ((ie = ranap_new_ie(RANAP_ProtocolIE_ID_id_SAI,
                              RANAP_Criticality_ignore,
                              &asn_DEF_RANAP_SAI,
                              &directTransferIEs->sai)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&directTransfer->directTransfer_ies.list, ie);
    }

    /* Optional field */
    if ((directTransferIEs->presenceMask & DIRECTTRANSFERIES_RANAP_SAPI_PRESENT)
        == DIRECTTRANSFERIES_RANAP_SAPI_PRESENT) {
        if ((ie = ranap_new_ie(RANAP_ProtocolIE_ID_id_SAPI,
                              RANAP_Criticality_ignore,
                              &asn_DEF_RANAP_SAPI,
                              &directTransferIEs->sapi)) == NULL) {
            return -1;
        }
        ASN_SEQUENCE_ADD(&directTransfer->directTransfer_ies.list, ie);
    }

    return 0;
}




/***********************************************************************
 * END auto-generated copy+pasted
 ***********************************************************************/

static int ranap_tx_reset_ack(struct hnb_context *hnb,
				RANAP_CN_DomainIndicator_t domain)
{
	RANAP_ResetAcknowledge_t out;
	RANAP_ResetAcknowledgeIEs_t ies;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));
	ies.cN_DomainIndicator = domain;

	memset(&out, 0, sizeof(out));
	rc = ranap_encode_resetacknowledgeies(&out, &ies);
	if (rc < 0) {
		LOGP(DMAIN, LOGL_ERROR, "error encoding reset ack IEs: %d\n", rc);
		return rc;
	}

	msg = ranap_generate_successful_outcome(RANAP_ProcedureCode_id_Reset,
						RANAP_Criticality_reject,
						&asn_DEF_RANAP_ResetAcknowledge,
						&out);
	if (!msg)
		return -1;

	msg->dst = hnb;

	rc = rua_tx_udt(msg);

	return rc;
}

static int ranap_rx_init_reset(struct hnb_context *hnb, ANY_t *in)
{
	RANAP_ResetIEs_t ies;
	int rc;

	rc = ranap_decode_reseties(&ies, in);
	if (rc < 0)
		return rc;

	DEBUGP(DMAIN, "RESET.req\n");

	/* FIXME: Actually we have to wait for some guard time? */
	/* FIXME: Reset all resources related to this HNB/RNC */
	ranap_tx_reset_ack(hnb, ies.cN_DomainIndicator);

	return 0;
}

int ranap_parse_lai(struct gprs_ra_id *ra_id, const RANAP_LAI_t *lai)
{
	uint8_t *ptr = lai->pLMNidentity.buf;

	/* TS 25.413 9.2.3.55 */
	if (lai->pLMNidentity.size != 3)
		return -1;

	ra_id->mcc = (ptr[0] & 0xF) * 100 +
		     (ptr[0] >> 4) * 10 +
		     (ptr[1] & 0xF);
	ra_id->mnc = (ptr[2] & 0xF) +
		     (ptr[2] >> 4) * 10;
	if ((ptr[1] >> 4) != 0xF)
		ra_id->mnc += (ptr[1] >> 4) * 100;

	ra_id->lac = asn1str_to_u16(&lai->lAC);

	/* TS 25.413 9.2.3.6 */
	if (ra_id->lac == 0 || ra_id->lac == 0xfffe)
		return -1;

	return 0;
}

static int ranap_rx_init_ue_msg(struct hnb_context *hnb, ANY_t *in)
{
	RANAP_InitialUE_MessageIEs_t ies;
	struct gprs_ra_id ra_id;
	int rc;

	rc = ranap_decode_initialue_messageies(&ies, in);
	if (rc < 0)
		return rc;

	/* location area ID of the serving cell */
	ranap_parse_lai(&ra_id, &ies.lai);

	DEBUGP(DMAIN, "%u-%u-%u: InitialUE: %s\n", ra_id.mcc, ra_id.mnc,
		ra_id.lac, osmo_hexdump(ies.nas_pdu.buf, ies.nas_pdu.size));
	/* FIXME: hand NAS PDU into MSC */

	return 0;
}

static int ranap_rx_dt(struct hnb_context *hnb, ANY_t *in)
{
	RANAP_DirectTransferIEs_t ies;
	int sapi = 0;
	int rc;

	rc = ranap_decode_directtransferies(&ies, in);
	if (rc < 0)
		return rc;

	if (ies.presenceMask & DIRECTTRANSFERIES_RANAP_SAPI_PRESENT)
		sapi = ies.sapi;

	if (ies.presenceMask & DIRECTTRANSFERIES_RANAP_LAI_PRESENT) {
		/* FIXME: Update LAI associated with UE */
	}

	if (ies.presenceMask & DIRECTTRANSFERIES_RANAP_RAC_PRESENT) {
		/* FIXME: Update RAC associated with UE */
	}

	DEBUGP(DMAIN, "DirectTransfer: %s\n",
		osmo_hexdump(ies.nas_pdu.buf, ies.nas_pdu.size));
	/* FIXME: hand NAS PDU into MSC */
}

static int ranap_rx_initiating_msg(struct hnb_context *hnb, RANAP_InitiatingMessage_t *imsg)
{
	int rc;

	switch (imsg->procedureCode) {
	case RANAP_ProcedureCode_id_Reset:
		rc = ranap_rx_init_reset(hnb, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_InitialUE_Message:
		rc = ranap_rx_init_ue_msg(hnb, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_DirectTransfer:
		rc = ranap_rx_dt(hnb, &imsg->value);
		break;
	}
}

static int _hnbgw_ranap_rx(struct hnb_context *hnb, RANAP_RANAP_PDU_t *pdu)
{
	int rc;

	switch (pdu->present) {
	case RANAP_RANAP_PDU_PR_initiatingMessage:
		rc = ranap_rx_initiating_msg(hnb, &pdu->choice.initiatingMessage);
		break;
	case RANAP_RANAP_PDU_PR_successfulOutcome:
		break;
	case RANAP_RANAP_PDU_PR_unsuccessfulOutcome:
		break;
	default:
		break;
	}
}


int hnbgw_ranap_rx(struct msgb *msg, uint8_t *data, size_t len)
{
	RANAP_RANAP_PDU_t _pdu, *pdu = &_pdu;
	asn_dec_rval_t dec_ret;
	int rc;

	memset(pdu, 0, sizeof(*pdu));
	dec_ret = aper_decode(NULL,&asn_DEF_RANAP_RANAP_PDU, (void **) &pdu,
			      data, len, 0, 0);
	if (dec_ret.code != RC_OK) {
		LOGP(DMAIN, LOGL_ERROR, "Error in RANAP ASN.1 decode\n");
		return rc;
	}

	rc = _hnbgw_ranap_rx(msg->dst, pdu);

	return rc;
}

int hnbgw_ranap_init(void)
{

}
