#include <stdint.h>

#include <osmocom/core/msgb.h>

#include "HNBAP-PDU.h"
#include "hnbap_common.h"
#include "hnbgw.h"

int asn_debug = 0;
int asn1_xer_print = 0;

static struct msgb *hnbap_msgb_alloc(void)
{
	return msgb_alloc(1024, "HNBAP Tx");
}

#if 0
ssize_t s1ap_generate_initiating_message(uint8_t ** buffer,
					 uint32_t * length,
					 e_ProcedureCode procedureCode,
					 Criticality_t criticality,
					 asn_TYPE_descriptor_t * td, void *sptr)
{

	HNBAP_PDU_t pdu;
	ssize_t encoded;

	memset(&pdu, 0, sizeof(HNBAP_PDU_t));

	pdu.present = HNBAP_PDU_PR_initiatingMessage;
	pdu.choice.initiatingMessage.procedureCode = procedureCode;
	pdu.choice.initiatingMessage.criticality = criticality;
	ANY_fromType_aper(&pdu.choice.initiatingMessage.value, td, sptr);

	if (asn1_xer_print)
		xer_fprint(stdout, &asn_DEF_HNBAP_PDU, (void *)&pdu);

	if ((encoded =
	     aper_encode_to_new_buffer(&asn_DEF_HNBAP_PDU, 0, &pdu,
				       (void **)buffer)) < 0) {
		return -1;
	}

	*length = encoded;
	return encoded;
}
#endif

struct msgb *hnbap_generate_successful_outcome(
					   e_ProcedureCode procedureCode,
					   Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr)
{

	HNBAP_PDU_t pdu;
	struct msgb *msg = hnbap_msgb_alloc();
	asn_enc_rval_t rval;
	int rc;

	memset(&pdu, 0, sizeof(HNBAP_PDU_t));
	pdu.present = HNBAP_PDU_PR_successfulOutcome;
	pdu.choice.successfulOutcome.procedureCode = procedureCode;
	pdu.choice.successfulOutcome.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.successfulOutcome.value, td, sptr);
	if (rc < 0) {
		LOGP(DMAIN, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		msgb_free(msg);
		return NULL;
	}

	rval = aper_encode_to_buffer(&asn_DEF_HNBAP_PDU, &pdu,
				     msg->data, msgb_tailroom(msg));
	if (rval.encoded < 0) {
		LOGP(DMAIN, LOGL_ERROR, "Error encoding type %s\n", rval.failed_type->name);
		msgb_free(msg);
		return NULL;
	}

	msgb_put(msg, rval.encoded);

	return msg;
}

#if 0
ssize_t s1ap_generate_unsuccessful_outcome(uint8_t ** buffer,
					    uint32_t * length,
					    e_ProcedureCode procedureCode,
					    Criticality_t criticality,
					    asn_TYPE_descriptor_t * td,
					    void *sptr)
{

	HNBAP_PDU_t pdu;
	ssize_t encoded;

	memset(&pdu, 0, sizeof(HNBAP_PDU_t));

	pdu.present = HNBAP_PDU_PR_unsuccessfulOutcome;
	pdu.choice.successfulOutcome.procedureCode = procedureCode;
	pdu.choice.successfulOutcome.criticality = criticality;
	ANY_fromType_aper(&pdu.choice.successfulOutcome.value, td, sptr);

	if ((encoded =
	     aper_encode_to_new_buffer(&asn_DEF_HNBAP_PDU, 0, &pdu,
				       (void **)buffer)) < 0) {
		return -1;
	}

	*length = encoded;

	return encoded;
}
#endif

IE_t *hnbap_new_ie(ProtocolIE_ID_t id,
		   Criticality_t criticality,
		   asn_TYPE_descriptor_t * type, void *sptr)
{

	IE_t *buff;

	if ((buff = malloc(sizeof(IE_t))) == NULL) {
		// Possible error on malloc
		return NULL;
	}
	memset((void *)buff, 0, sizeof(IE_t));

	buff->id = id;
	buff->criticality = criticality;

	ANY_fromType_aper(&buff->value, type, sptr);

	if (asn1_xer_print)
		if (xer_fprint(stdout, &asn_DEF_IE, buff) < 0) {
			free(buff);
			return NULL;
		}

	return buff;
}
