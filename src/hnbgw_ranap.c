/* hnb-gw specific code for RANAP */

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



#include <osmocom/core/msgb.h>
#include <osmocom/core/utils.h>
#include <osmocom/gsm/gsm48.h>

#include <unistd.h>
#include <errno.h>
#include <string.h>

#include "asn1helpers.h"

#include "hnbgw.h"
#include "hnbgw_rua.h"
#include "ranap_common.h"
#include "ranap_ies_defs.h"

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
		LOGP(DRANAP, LOGL_ERROR, "error encoding reset ack IEs: %d\n", rc);
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

	DEBUGP(DRANAP, "RESET.req\n");

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

	DEBUGP(DRANAP, "DirectTransfer: %s\n",
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
		LOGP(DRANAP, LOGL_ERROR, "Error in RANAP ASN.1 decode\n");
		return rc;
	}

	rc = _hnbgw_ranap_rx(msg->dst, pdu);

	return rc;
}

int hnbgw_ranap_init(void)
{

}
