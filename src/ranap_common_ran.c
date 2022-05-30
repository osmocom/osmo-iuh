/* RANAP interface for a ran-network node */

/* (C) 2021 by sysmocom s.f.m.c. GmbH <info@sysmocom.de>
 * All Rights Reserved
 *
 * Author: Philipp Maier
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <unistd.h>
#include <errno.h>
#include <string.h>

#include <osmocom/core/utils.h>
#include <osmocom/core/logging.h>

#include <osmocom/ranap/ranap_common.h>
#include <osmocom/ranap/ranap_common_ran.h>
#include <osmocom/ranap/ranap_ies_defs.h>

#define DRANAP _ranap_DRANAP

static int ran_ranap_rx_initiating_msg_co(void *ctx, RANAP_InitiatingMessage_t *imsg, ranap_message *message)
{
	int rc = 0;

	message->procedureCode = imsg->procedureCode;
	message->criticality = imsg->criticality;

	DEBUGP(DRANAP, "Rx CO IM (%s)\n", get_value_string(ranap_procedure_code_vals, imsg->procedureCode));

	switch (imsg->procedureCode) {
	case RANAP_ProcedureCode_id_RAB_Assignment:
		rc = ranap_decode_rab_assignmentrequesties(&message->msg.raB_AssignmentRequestIEs, &imsg->value);
		break;
	case RANAP_ProcedureCode_id_Iu_Release:
		rc = ranap_decode_iu_releasecommandies(&message->msg.iu_ReleaseCommandIEs, &imsg->value);
		break;
	default:
		LOGP(DRANAP, LOGL_INFO,
		     "Received RANAP Procedure %s (CO, IM) from CN. Decode not implemented\n",
		     get_value_string(ranap_procedure_code_vals, imsg->procedureCode));
		rc = -1;
		break;
	}

	return rc;
}

static void ran_ranap_free_initiating_msg_co(ranap_message *message)
{
	switch (message->procedureCode) {
	case RANAP_ProcedureCode_id_RAB_Assignment:
		ranap_free_rab_assignmentrequesties(&message->msg.raB_AssignmentRequestIEs);
		break;
	case RANAP_ProcedureCode_id_Iu_Release:
		ranap_free_iu_releasecommandies(&message->msg.iu_ReleaseCommandIEs);
		break;
	default:
		LOGP(DRANAP, LOGL_INFO,
		     "Freeing RANAP Procedure %s (CO, IM) from CN not implemented\n",
		     get_value_string(ranap_procedure_code_vals, message->procedureCode));
		break;
	}
}

static int _ran_ranap_rx_co(void *ctx, RANAP_RANAP_PDU_t *pdu, ranap_message *message)
{
	int rc = 0;

	switch (pdu->present) {
	case RANAP_RANAP_PDU_PR_initiatingMessage:
		rc = ran_ranap_rx_initiating_msg_co(ctx, &pdu->choice.initiatingMessage, message);
		break;
	case RANAP_RANAP_PDU_PR_successfulOutcome:
		LOGP(DRANAP, LOGL_NOTICE, "Received unsupported RANAP "
		     "successful outcome procedure %s (CO) from CN, ignoring\n",
		     get_value_string(ranap_procedure_code_vals, pdu->choice.successfulOutcome.procedureCode));
		rc = -1;
		break;
	case RANAP_RANAP_PDU_PR_unsuccessfulOutcome:
		LOGP(DRANAP, LOGL_NOTICE, "Received unsupported RANAP "
		     "unsuccessful outcome procedure %s (CO) from CN, ignoring\n",
		     get_value_string(ranap_procedure_code_vals, pdu->choice.unsuccessfulOutcome.procedureCode));
		rc = -1;
		break;
	case RANAP_RANAP_PDU_PR_outcome:
		LOGP(DRANAP, LOGL_NOTICE, "Received unsupported RANAP "
		     "outcome procedure %s (CO) from CN, ignoring\n",
		     get_value_string(ranap_procedure_code_vals, pdu->choice.outcome.procedureCode));
		rc = -1;
		break;
	default:
		LOGP(DRANAP, LOGL_INFO,
		     "Received RANAP Procedure %s (CO) from CN. Decode not implemented\n",
		      get_value_string(ranap_presence_vals, pdu->present));
		rc = -1;
		break;
	}

	return rc;
}

/* free a decoded connection-oriented RANAP message */
void ranap_ran_rx_co_free(ranap_message *message)
{
	switch (message->direction) {
	case RANAP_RANAP_PDU_PR_initiatingMessage:
		ran_ranap_free_initiating_msg_co(message);
		break;
	case RANAP_RANAP_PDU_PR_successfulOutcome:
		LOGP(DRANAP, LOGL_NOTICE, "Not freeing unsupported RANAP "
		     "successful outcome procedure (CO) from CN\n");
		break;
	case RANAP_RANAP_PDU_PR_unsuccessfulOutcome:
		LOGP(DRANAP, LOGL_NOTICE, "Not freeing unsupported RANAP "
		     "unsuccessful outcome procedure (CO) from CN\n");
		break;
	case RANAP_RANAP_PDU_PR_outcome:
		LOGP(DRANAP, LOGL_NOTICE, "Not freeing unsupported RANAP "
		     "outcome procedure (CO) from CN\n");
		break;
	default:
		LOGP(DRANAP, LOGL_INFO,
		     "Freeing RANAP Procedure %s (CO) from CN not implemented\n",
		     get_value_string(ranap_presence_vals, message->direction));
		break;
	}
}

/* decode a connection-oriented RANAP message */
int ranap_ran_rx_co_decode(void *ctx, ranap_message *message, uint8_t *data, size_t len)
{
	RANAP_RANAP_PDU_t *pdu = NULL;
	asn_dec_rval_t dec_ret;
	int rc;

	memset(message, 0, sizeof(*message));

	dec_ret = aper_decode(NULL, &asn_DEF_RANAP_RANAP_PDU, (void **)&pdu, data, len, 0, 0);
	if (dec_ret.code != RC_OK) {
		LOGP(DRANAP, LOGL_ERROR, "Error in RANAP ASN.1 decode\n");
		return -1;
	}

	message->direction = pdu->present;

	rc = _ran_ranap_rx_co(ctx, pdu, message);

	ASN_STRUCT_FREE(asn_DEF_RANAP_RANAP_PDU, pdu);

	return rc;
}

/* receive a connection-oriented RANAP message and call
 * cn_ranap_handle_co() with the resulting ranap_message struct */
int ranap_ran_rx_co(ranap_handle_cb cb, void *ctx, uint8_t *data, size_t len)
{
	ranap_message message;
	int rc;

	rc = ranap_ran_rx_co_decode(ctx, &message, data, len);

	if (rc == 0)
		(*cb) (ctx, &message);
	else
		LOGP(DRANAP, LOGL_ERROR, "Not calling ran_ranap_handle_co() due to rc=%d\n", rc);

	/* Free the asn1 structs in message */
	ranap_ran_rx_co_free(&message);

	return rc;
}
