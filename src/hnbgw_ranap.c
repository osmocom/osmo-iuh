#include <osmocom/core/msgb.h>
#include <osmocom/core/utils.h>

#include <unistd.h>
#include <errno.h>
#include <string.h>

#include "asn1helpers.h"

#include "hnbgw.h"
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

/***********************************************************************
 * END auto-generated copy+pasted
 ***********************************************************************/

#if 0
{
	RANAP_ResetAcknowledgeIEs_s ies;

	memset(&ies, 0, sizeof(ies));
	ies.cN_DomainIndicator = RANAP_CN_DomainIndicator_cs_domain;

	rc = ranap_encoderesetacknowledgeise(&ies, FIXME);
}
#endif

static int ranap_rx_init_reset(struct hnb_context *hnb, ANY_t *in)
{
	RANAP_ResetIEs_t ies;
	int rc;

	rc = ranap_decode_reseties(&ies, in);
	if (rc < 0)
		return rc;

	DEBUGP(DMAIN, "RESET.req\n");

	return 0;
}

static int ranap_rx_initiating_msg(struct hnb_context *hnb, RANAP_InitiatingMessage_t *imsg)
{
	int rc;

	switch (imsg->procedureCode) {
	case RANAP_ProcedureCode_id_Reset:
		rc = ranap_rx_init_reset(hnb, &imsg->value);
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
