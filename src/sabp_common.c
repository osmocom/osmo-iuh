/* common SABP code */

/* (C) 2019 by Harald Welte <laforge@gnumonks.org>
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
#include <stdbool.h>
#include <stdlib.h>
#include <errno.h>

#include <sys/socket.h>

#include <osmocom/core/msgb.h>

#include <osmocom/sabp/sabp_common.h>
#include <asn1c/asn1helpers.h>

extern int asn1_xer_print;
int _sabp_DSABP = 0;
#define DSABP _sabp_DSABP

const struct value_string sabp_presence_vals[] = {
	{ SABP_SABP_PDU_PR_initiatingMessage,	"Initiating" },
	{ SABP_SABP_PDU_PR_successfulOutcome,	"Successful Outcome" },
	{ SABP_SABP_PDU_PR_unsuccessfulOutcome,	"Unsuccessful Outcome" },
	{ 0, NULL }
};

const struct value_string sabp_procedure_code_vals[] = {
	{ SABP_ProcedureCode_id_Write_Replace, "Write-Replace" },
	{ SABP_ProcedureCode_id_Kill, "Kill" },
	{ SABP_ProcedureCode_id_Load_Status_Enquiry, "Load-Status-Enquiry" },
	{ SABP_ProcedureCode_id_Message_Status_Query, "Message-Status-Query" },
	{ SABP_ProcedureCode_id_Restart_Indication, "Restart-Indication" },
	{ SABP_ProcedureCode_id_Reset, "Reset" },
	{ SABP_ProcedureCode_id_Failure_Indication, "Failure-Indication" },
	{ SABP_ProcedureCode_id_Error_Indication, "Error-Indication" },
	{ 0, NULL }
};

const struct value_string sabp_cause_vals[] = {
	{ SABP_Cause_parameter_not_recognised, "Parameter not recognized" },
	{ SABP_Cause_parameter_value_invalid, "Parameter value invalid" },
	{ SABP_Cause_valid_CN_message_not_identified, "Valid CN message not identified" },
	{ SABP_Cause_service_area_identity_not_valid, "Service Area Identity not valid" },
	{ SABP_Cause_unrecognised_message, "Unrecognised message" },
	{ SABP_Cause_missing_mandatory_element, "Missing mandatory element" },
	{ SABP_Cause_rNC_capacity_exceeded, "RNC capacity exceeded" },
	{ SABP_Cause_rNC_memory_exceeded, "RNC memory exceeded" },
	{ SABP_Cause_service_area_broadcast_not_supported, "Service Area Broadcast not supported" },
	{ SABP_Cause_service_area_broadcast_not_operational, "Service Area Broadcast not operational" },
	{ SABP_Cause_message_reference_already_used, "Message Reference already used" },
	{ SABP_Cause_unspecifed_error, "Unspecified Error" },
	{ SABP_Cause_transfer_syntax_error, "Transfer Syntax Error" },
	{ SABP_Cause_semantic_error, "Semantic Error" },
	{ SABP_Cause_message_not_compatible_with_receiver_state,
						"Message not compatible with receiver state" },
	{ SABP_Cause_abstract_syntax_error_reject, "Abstract Syntax Error - Reject" },
	{ SABP_Cause_abstract_syntax_error_ignore_and_notify,
						"Abstract Syntax Error - Ignore and Notify" },
	{ SABP_Cause_abstract_syntax_error_falsely_constructed_message,
						"Abstract Syntax Error - Falsely constructed message" },
	{ 0, NULL }
};

struct msgb *osmo_sabp_msgb_alloc(void *ctx, const char *name)
{
	/* make the messages rather large as the cell lists can be long! */
	return msgb_alloc_headroom_c(ctx, 65535, 16, name);
}

extern void *tall_msgb_ctx;

static struct msgb *_sabp_gen_msg(SABP_SABP_PDU_t *pdu)
{
	struct msgb *msg = osmo_sabp_msgb_alloc(tall_msgb_ctx, __func__);
	asn_enc_rval_t rval;

	if (!msg)
		return NULL;

	rval = aper_encode_to_buffer(&asn_DEF_SABP_SABP_PDU, pdu,
				       msg->data, msgb_tailroom(msg));
	if (rval.encoded < 0) {
		LOGP(DSABP, LOGL_ERROR, "Error encoding type: %s\n",
				rval.failed_type->name);

	}

	msgb_put(msg, rval.encoded/8);

	return msg;
}

struct msgb *sabp_generate_initiating_message(e_SABP_ProcedureCode procedureCode,
					  SABP_Criticality_t criticality,
					  asn_TYPE_descriptor_t *td, void *sptr)
{
	SABP_SABP_PDU_t pdu;
	struct msgb *msg;
	int rc;

	memset(&pdu, 0, sizeof(pdu));

	pdu.present = SABP_SABP_PDU_PR_initiatingMessage;
	pdu.choice.initiatingMessage.procedureCode = procedureCode;
	pdu.choice.initiatingMessage.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.initiatingMessage.value, td, sptr);
	if (rc < 0) {
		LOGP(DSABP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		return NULL;
	}

	msg = _sabp_gen_msg(&pdu);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_SABP_SABP_PDU, &pdu);

	return msg;
}

struct msgb *sabp_generate_successful_outcome(
					   e_SABP_ProcedureCode procedureCode,
					   SABP_Criticality_t criticality,
					   asn_TYPE_descriptor_t * td,
					   void *sptr)
{
	SABP_SABP_PDU_t pdu;
	struct msgb *msg;
	int rc;

	memset(&pdu, 0, sizeof(pdu));

	pdu.present = SABP_SABP_PDU_PR_successfulOutcome;
	pdu.choice.successfulOutcome.procedureCode = procedureCode;
	pdu.choice.successfulOutcome.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.successfulOutcome.value, td, sptr);
	if (rc < 0) {
		LOGP(DSABP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		return NULL;
	}

	msg = _sabp_gen_msg(&pdu);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_SABP_SABP_PDU, &pdu);

	return msg;
}

struct msgb *sabp_generate_unsuccessful_outcome(
					e_SABP_ProcedureCode procedureCode,
					SABP_Criticality_t criticality,
					asn_TYPE_descriptor_t * td,
					void *sptr)
{
	SABP_SABP_PDU_t pdu;
	struct msgb *msg;
	int rc;

	memset(&pdu, 0, sizeof(pdu));

	pdu.present = SABP_SABP_PDU_PR_unsuccessfulOutcome;
	pdu.choice.unsuccessfulOutcome.procedureCode = procedureCode;
	pdu.choice.unsuccessfulOutcome.criticality = criticality;
	rc = ANY_fromType_aper(&pdu.choice.unsuccessfulOutcome.value, td, sptr);
	if (rc < 0) {
		LOGP(DSABP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		return NULL;
	}

	msg = _sabp_gen_msg(&pdu);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_SABP_SABP_PDU, &pdu);

	return msg;
}

SABP_IE_t *sabp_new_ie(SABP_ProtocolIE_ID_t id,
			SABP_Criticality_t criticality,
			asn_TYPE_descriptor_t * type, void *sptr)
{
	SABP_IE_t *buff;
	int rc;

	if ((buff = CALLOC(1, sizeof(*buff))) == NULL) {
		// Possible error on malloc
		return NULL;
	}

	buff->id = id;
	buff->criticality = criticality;

	rc = ANY_fromType_aper(&buff->value, type, sptr);
	if (rc < 0) {
		LOGP(DSABP, LOGL_ERROR, "Error in ANY_fromType_aper\n");
		FREEMEM(buff);
		return NULL;
	}

	if (asn1_xer_print)
		if (xer_fprint(stdout, &asn_DEF_SABP_IE, buff) < 0) {
			FREEMEM(buff);
			return NULL;
		}

	return buff;
}

void sabp_set_log_area(int log_area)
{
	_sabp_DSABP = log_area;
}

/***********************************************************************
 * Message Reception
 ***********************************************************************/

/* SABP was specified as ASN.1 APER encoded messages *directly* inside a TCP
 * stream, without any intermediate framing layer.  As TCP doesn't preserve
 * message boundaries, and SABP messages are variable length, we need to
 * actually parse the message up to the point of the APER-internal length
 * determinant (which itself is variable-length encoded). */

/* Three bytes for TriggeringMessage, procedureCode and Criticality */
#define SABP_HDR_LEN	3


/*! parse a single APER length determinant.
 *  \param[in] in input data as received from peer
 *  \param[in] in_len length of 'in'
 *  \param[out] len_len Length of the current length determinant in octets
 *  \returns parsed length or -EAGAIN if more data is needed, or -EIO in case of parse error */
static int parse_aper_len_det(const uint8_t *in, unsigned int in_len, unsigned int *len_len)
{
	/* Variable-length Length encoding according to X.961 Section 9.1 NOTE 2 */
	switch (in[0] & 0xC0) {
	case 0x00:
		/* total length is encoded in this octet */
		*len_len = 1;
		return in[0];
	case 0x80:
		/* total length (up to 16k) encoded in two octets */
		*len_len = 2;
		if (in_len < 2)
			return -EAGAIN; /* we need one more byte */
		return ((in[0] & 0x3F) << 8) | in[1];
	case 0xC0:
		/* total length not known, encoded in chunks; first chunk length now known */
		*len_len = 1;
		return (in[0] & 0x3f) * 16384;
		/* we must read the chunk and then look at the variable-length encoded length
		 * of the next chunk */
	default:
		return -EIO;
	}
}

/* msg->l1h points to first byte of current length determinant */
#define MSGB_LEN_NEEDED(msg) (msg)->cb[0]	/* total length of msgb needed (as known so far) */
#define MSGB_APER_STATE(msg) (msg)->cb[1]	/* '1' if we're expecting another length determinant */

/*! Read one SABP message from socket fd or store part if still not fully received.
 *  \param[in] ctx talloc context from which to allocate new msgb.
 *  \param[in] fd The fd for the socket to read from.
 *  \param[out] rmsg internally allocated msgb containing a fully received SABP message.
 *  \param[inout] tmp_msg internally allocated msgb caching data for not yet fully received message.
 *
 *  Function is designed just like ipa_msg_recv_buffered()
 */
int osmo_sabp_recv_buffered(void *ctx, int fd, struct msgb **rmsg, struct msgb **tmp_msg)
{
	struct msgb *msg = tmp_msg ? *tmp_msg : NULL;
	unsigned int len_len;
	bool first_call = false;
	int rc;

	if (!msg) {
		msg = osmo_sabp_msgb_alloc(ctx, __func__);
		if (!msg)
			return -ENOMEM;
	}

	if (!msgb_l1(msg)) {
		/* new msgb; we expect first length determinant after 3 bytes */
		msg->l1h = msgb_data(msg) + SABP_HDR_LEN;
		MSGB_LEN_NEEDED(msg) = SABP_HDR_LEN + 1; /* 1 == minimum length of length-field */
		first_call = true;
	}

	/* attempt to receive missing/needed amount of bytes */
	rc = recv(fd, msg->tail, MSGB_LEN_NEEDED(msg)-msgb_length(msg), 0);
	if (rc == 0)
		goto discard_msg; /* dead socket */
	else if (rc < 0) {
		if (errno == EAGAIN || errno == EINTR)
			rc = 0;
		else {
			rc = -errno;
			goto discard_msg;
		}
	}
	msgb_put(msg, rc);

	/* check if we have received sufficient amount of data */
	if (msgb_length(msg) < MSGB_LEN_NEEDED(msg)) {
		if (msg->len == 0) {
			rc = -EAGAIN;
			goto discard_msg;
		}

		if (!tmp_msg) {
			rc = -EIO;
			goto discard_msg;
		}
		*tmp_msg = msg;
		return -EAGAIN;
	}

	if (!first_call && MSGB_APER_STATE(msg) == 0) {
		/* we have read all needed bytes by now, and hence can return successfully */
		return msgb_length(msg);
	}

	/* below code is only executed on first call/iteration, or if last length-det was chunked */
	OSMO_ASSERT(first_call || MSGB_APER_STATE(msg) == 1);

	OSMO_ASSERT(msg->l1h < msg->tail);
	rc = parse_aper_len_det(msgb_l1(msg), msgb_l1len(msg), &len_len);
	if (rc == -EIO) {
		return -EIO;
	} else if (rc == -EAGAIN) {
		/* need (typically 1 byte) more data */
		OSMO_ASSERT(len_len > 1);
		MSGB_LEN_NEEDED(msg) += len_len-1;
		return -EAGAIN;
	} else if (rc >= 16384) {
		/* read up to next length determinant */
		MSGB_LEN_NEEDED(msg) += len_len-1 + rc + 1 /* new length determinant */;
		msg->l1h += (len_len-1) + rc; /* start of next length determinant */
		MSGB_APER_STATE(msg) = 1;
		return -EAGAIN;
	} else {
		/* full length is known now */
		MSGB_LEN_NEEDED(msg) += len_len-1 + rc;
		return -EAGAIN;
	}

discard_msg:
	if (tmp_msg)
		*tmp_msg = NULL;
	msgb_free(msg);
	return rc;
}
