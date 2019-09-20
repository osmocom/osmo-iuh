/* hnb-gw specific code for SABP (Service Area Broadcast Protocol) */

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

#include <osmocom/core/msgb.h>
#include <osmocom/core/utils.h>
#include <osmocom/netif/stream.h>

#include <osmocom/sigtran/sccp_sap.h>
#include <osmocom/sigtran/sccp_helpers.h>

#include <unistd.h>
#include <errno.h>
#include <string.h>

#include "asn1helpers.h"

#include <osmocom/iuh/hnbgw.h>
#include <osmocom/iuh/hnbgw_ranap.h>
#include <osmocom/sabp/sabp_common.h>
#include <osmocom/sabp/sabp_ies_defs.h>

static int hnbgw_sabp_tx(struct hnb_context *ctx, struct msgb *msg)
{
	if (!msg)
		return -EINVAL;

	msgb_sctp_ppid(msg) = IUH_PPI_SABP;
	osmo_stream_srv_send(ctx->conn, msg);

	return 0;
}

static int sabp_rx_initiating_msg(struct msgb *msg, SABP_InitiatingMessage_t *imsg)
{
	int rc;

	switch (imsg->procedureCode) {
	default:
		LOGP(DSABP, LOGL_NOTICE, "Unknown SABP Procedure %lu\n", imsg->procedureCode);
		rc = -1;
	}

	return rc;
}

static int sabp_rx_successful_outcome_msg(struct msgb *msg, SABP_SuccessfulOutcome_t *in)
{
	/* FIXME */
	LOGP(DSABP, LOGL_NOTICE, "Unexpected SABP Successful Outcome\n");
	return -1;
}

static int sabp_rx_unsuccessful_outcome_msg(struct msgb *msg, SABP_UnsuccessfulOutcome_t *in)
{
	/* FIXME */
	LOGP(DSABP, LOGL_NOTICE, "Unexpected SABP Unsucessful Outcome\n");
	return -1;
}



static int _hnbgw_sabp_rx(struct msgb *msg, SABP_SABP_PDU_t *pdu)
{
	int rc;

	/* it's a bit odd that we can't dispatch on procedure code, but
	 * that's not possible */
	switch (pdu->present) {
	case SABP_SABP_PDU_PR_initiatingMessage:
		rc = sabp_rx_initiating_msg(msg, &pdu->choice.initiatingMessage);
		break;
	case SABP_SABP_PDU_PR_successfulOutcome:
		rc = sabp_rx_successful_outcome_msg(msg, &pdu->choice.successfulOutcome);
		break;
	case SABP_SABP_PDU_PR_unsuccessfulOutcome:
		rc = sabp_rx_unsuccessful_outcome_msg(msg, &pdu->choice.unsuccessfulOutcome);
		break;
	default:
		LOGP(DSABP, LOGL_NOTICE, "Unknown SABP presence %u\n", pdu->present);
		rc = -1;
	}

	return rc;
}

int hnbgw_sabp_rx(struct hnb_context *hnb, struct msgb *msg)
{
	SABP_SABP_PDU_t _pdu, *pdu = &_pdu;
	asn_dec_rval_t dec_ret;
	int rc;

	/* decode and handle to _hnbgw_hnbap_rx() */

	memset(pdu, 0, sizeof(*pdu));
	dec_ret = aper_decode(NULL, &asn_DEF_SABP_SABP_PDU, (void **) &pdu,
			      msg->data, msgb_length(msg), 0, 0);
	if (dec_ret.code != RC_OK) {
		LOGP(DSABP, LOGL_ERROR, "Error in ASN.1 decode\n");
		return -1;
	}

	rc = _hnbgw_sabp_rx(msg, pdu);

	return rc;
}
