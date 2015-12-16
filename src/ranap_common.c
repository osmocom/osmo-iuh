/* common RANAP code */

/* (C) 2015 by Harald Welte <laforge@gnumonks.org>
 * All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <stdint.h>

#include <osmocom/core/msgb.h>

//#include "ranap_common.h"
#include "ranap/RANAP_RANAP-PDU.h"
#include "ranap/RANAP_ProtocolIE-ID.h"
#include "ranap/RANAP_IE.h"
#include "hnbgw.h"

extern int asn1_xer_print;

static struct msgb *ranap_msgb_alloc(void)
{
	return msgb_alloc(1024, "RANAP Tx");
}

static struct msgb *_ranap_gen_msg(RANAP_RANAP_PDU_t *pdu)
{
	struct msgb *msg = ranap_msgb_alloc();
	asn_enc_rval_t rval;

	if (!msg)
		return NULL;

	rval = aper_encode_to_buffer(&asn_DEF_RANAP_RANAP_PDU, pdu,
				       msg->data, msgb_tailroom(msg));
	if (rval.encoded < 0) {
		LOGP(DMAIN, LOGL_ERROR, "Error encoding type: %s\n",
				rval.failed_type->name);

	}

	msgb_put(msg, rval.encoded/8);

	return msg;
}

struct msgb *ranap_generate_initiating_message(e_RANAP_ProcedureCode procedureCode,
					  RANAP_Criticality_t criticality,
					  asn_TYPE_descriptor_t *td, void *sptr)
{
	RANAP_RANAP_PDU_t pdu;
	int rc;

	memset(&pdu, 0, sizeof(pdu));

	pdu.present = RANAP_RANAP_PDU_PR_initiatingMessage;
	pdu.choice.initiatingMessage.procedureCode = procedureCode;
	pdu.choice.initiatingMessage.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.initiatingMessage.value, td, sptr);
	if (rc < 0) {
		LOGP(DMAIN, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		return NULL;
	}

	return _ranap_gen_msg(&pdu);
}

struct msgb *ranap_generate_successful_outcome(
					   e_RANAP_ProcedureCode procedureCode,
					   RANAP_Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr)
{
	RANAP_RANAP_PDU_t pdu;
	int rc;

	memset(&pdu, 0, sizeof(pdu));

	pdu.present = RANAP_RANAP_PDU_PR_successfulOutcome;
	pdu.choice.successfulOutcome.procedureCode = procedureCode;
	pdu.choice.successfulOutcome.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.successfulOutcome.value, td, sptr);
	if (rc < 0) {
		LOGP(DMAIN, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		return NULL;
	}

	return _ranap_gen_msg(&pdu);
}

struct msgb *ranap_generate_unsuccessful_outcome(
					e_RANAP_ProcedureCode procedureCode,
					RANAP_Criticality_t criticality,
					asn_TYPE_descriptor_t * td,
					void *sptr)
{
	RANAP_RANAP_PDU_t pdu;
	int rc;

	memset(&pdu, 0, sizeof(pdu));

	pdu.present = RANAP_RANAP_PDU_PR_unsuccessfulOutcome;
	pdu.choice.unsuccessfulOutcome.procedureCode = procedureCode;
	pdu.choice.unsuccessfulOutcome.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.unsuccessfulOutcome.value, td, sptr);
	if (rc < 0) {
		LOGP(DMAIN, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		return NULL;
	}

	return _ranap_gen_msg(&pdu);
}

struct msgb *ranap_generate_outcome(
				e_RANAP_ProcedureCode procedureCode,
				RANAP_Criticality_t criticality,
				asn_TYPE_descriptor_t * td,
				void *sptr)
{
	RANAP_RANAP_PDU_t pdu;
	int rc;

	memset(&pdu, 0, sizeof(pdu));

	pdu.present = RANAP_RANAP_PDU_PR_outcome;
	pdu.choice.outcome.procedureCode = procedureCode;
	pdu.choice.outcome.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.outcome.value, td, sptr);
	if (rc < 0) {
		LOGP(DMAIN, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		return NULL;
	}

	return _ranap_gen_msg(&pdu);
}


RANAP_IE_t *ranap_new_ie(RANAP_ProtocolIE_ID_t id,
			 RANAP_Criticality_t criticality,
			 asn_TYPE_descriptor_t * type, void *sptr)
{

	RANAP_IE_t *buff;

	if ((buff = malloc(sizeof(*buff))) == NULL) {
		// Possible error on malloc
		return NULL;
	}
	memset((void *)buff, 0, sizeof(*buff));

	buff->id = id;
	buff->criticality = criticality;

	ANY_fromType_aper(&buff->value, type, sptr);

	if (asn1_xer_print)
		if (xer_fprint(stdout, &asn_DEF_RANAP_IE, buff) < 0) {
			free(buff);
			return NULL;
		}

	return buff;
}
