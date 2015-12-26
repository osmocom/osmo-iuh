#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <osmocom/core/select.h>
#include <osmocom/core/prim.h>
#include <osmocom/core/talloc.h>
#include <osmocom/core/logging.h>
#include <osmocom/core/application.h>
#include <osmocom/vty/logging.h>

#include <osmocom/sigtran/sua.h>
#include <osmocom/sigtran/sccp_sap.h>

#include "test_common.h"
#include "ranap_common_cn.h"
#include "hnbgw.h"

int asn1_xer_print = 1;

/***********************************************************************
 * RANAP handling
 ***********************************************************************/

static int ranap_handle_co_initial_ue(void *ctx, RANAP_InitialUE_MEssageIEs_t *ies)
{
	struct gprs_ra_id ra_id;
	uint16_t sai;
	struct msgb *msg = msgb_alloc(256, "RANAP->NAS");
	uint8_t *cur;

	ranap_parse_lai(&ra_id, &ies.lai);
	sai = asn1str_to_u16(&ies.sai.sAC);
	cur = msgb_put(msg, ies.nas_pdu.size);
	memcpy(msg, ies.nas_pdu.buf, ies.nas_pdu.size);
	/* FIXME: set msgb_gmmh() */

	/* FIXME: Feed into the MM layer */
	rc = gsm0408_gprs_rcvmsg_iu(msg, ra_id, sai, conn_id);

	return 0;
}

static int ranap_handle_co_dt(void *ctx, RANAP_DirectTransferIEs_t *ies)
{
	struct gprs_ra_id _ra_id, *ra_id = NULL;
	uint16_t _sai, *sai = NULL;
	struct msgb *msg = msgb_alloc(256, "RANAP->NAS");
	uint8_t *cur;

	if (ies.presenceMask & DIRECTTRANSFERIES_RANAP_LAI_PRESENT) {
		ranap_parse_lai(&_ra_id, &ies.lai);
		ra_id = &_ra_id;
		if (ies.presenceMask & DIRECTTRANSFERIES_RANAP_RAC_PRESENT) {
			_ra_id.rac = asn1str_to_u16(&ies.rac);
		}
		if (ies.presenceMask & DIRECTTRANSFERIES_RANAP_SAI_PRESENT) {
			_sai = asn1str_to_u16(&ies.sai.sAC);
			sai = &_sai;
		}
	}

	cur = msgb_put(msg, ies.nas_pdu.size);
	memcpy(msg, ies.nas_pdu.buf, ies.nas_pdu.size);
	/* FIXME: set msgb_gmmh() */

	/* FIXME: Feed into the MM/CC/SMS-CP layer */
	rc = gsm0408_gprs_rcvmsg_iu(msg, ra_id, sai, conn_id);

	return 0;
}

static int ranap_handle_co_err_ind(void *ctx, RANAP_ErrorIndicationIEs_t *ies)
{
	if (ies->presenceMask & ERRORINDICATIONIES_RANAP_CAUSE_PRESENT)
		LOGP(DRANAP, LOGL_ERROR, "Rx Error Indication (%s)\n",
			ranap_cause_str(&ies->cause));
	else
		LOGP(DRANAP, LOGL_ERROR, "Rx Error Indication\n");

	return 0;
}

/* Entry point for connection-oriented ANAP message */
int cn_ranap_handle_co(void *ctx, ranap_message *message)
{
	int rc = 0;

	switch (message->direction) {
	case RANAP_RANAP_PDU_PR_initiatingMessage:
		switch (message->procedureCode) {
		case RANAP_ProcedureCode_id_InitialUE_Message:
			rc = ranap_handle_co_initial_ue(ctx, &message->msg.initialUE_MessageIEs);
			break;
		case RANAP_ProcedureCode_id_DirectTransfer:
			rc = ranap_handle_co_dt(ctx, &message->msg.directTransferIEs);
			break;
		case RANAP_ProcedureCode_id_ErrorIndication:
			rc = ranap_handle_co_err_ind(ctx, &message->msg.errorIndicationIEs);
			break;
		}
		break;
	case RANAP_RANAP_PDU_PR_successfulOutcome:
		switch (message->procedureCode) {
		case RANAP_ProcedureCode_id_RAB_Assignment:
			/* RAB Assignment Response */
			break;
		case RANAP_ProcedureCode_id_SecurityModeControl:
			/* Security Mode Complete */
			break;
		case RANAP_ProcedureCode_id_Iu_Release:
			/* Iu Release Complete */
			break;
		}
	case RANAP_RANAP_PDU_PR_unsuccessfulOutcome:
	case RANAP_RANAP_PDU_PR_outcome:
	default:
		rc = -1;
		break;
	}

	return rc;
}

static int ranap_handle_cl_reset_req(void *ctx, RANAP_ResetIEs_t *ies)
{
	/* FIXME: send reset response */
}

static int ranap_handle_cl_err_ind(void *ctx, RANAP_ErrorIndicationIEs_t *ies)
{
	if (ies->presenceMask & ERRORINDICATIONIES_RANAP_CAUSE_PRESENT)
		LOGP(DRANAP, LOGL_ERROR, "Rx Error Indication (%s)\n",
			ranap_cause_str(&ies->cause));
	else
		LOGP(DRANAP, LOGL_ERROR, "Rx Error Indication\n");

	return 0;
}

/* Entry point for connection-less RANAP message */
int cn_ranap_handle_cl(void *ctx, ranap_message *message)
{
	int rc = 0;

	switch (message->direction) {
	case RANAP_RANAP_PDU_PR_initiatingMessage:
		switch (message->procedureCode) {
		case RANAP_ProcedureCode_id_Reset:
			/* received reset.req, send reset.resp */
			rc = ranap_handle_cl_reset_req(ctx, &message->msg.resetIEs);
			break;
		case RANAP_ProcedureCode_id_ErrorIndication:
			rc = ranap_handle_cl_err_ind(ctx, &message->msg.errorIndicationIEs);
			break;
		}
		break;
	case RANAP_RANAP_PDU_PR_successfulOutcome:
	case RANAP_RANAP_PDU_PR_unsuccessfulOutcome:
	case RANAP_RANAP_PDU_PR_outcome:
	default:
		rc = -1;
		break;
	}
}

/***********************************************************************
 *
 ***********************************************************************/

int tx_unitdata(struct osmo_sua_link *link);
int tx_conn_req(struct osmo_sua_link *link, uint32_t conn_id);

struct osmo_prim_hdr *make_conn_req(uint32_t conn_id);
struct osmo_prim_hdr *make_dt1_req(uint32_t conn_id, const uint8_t *data, unsigned int len);

struct osmo_prim_hdr *make_conn_resp(struct osmo_scu_connect_param *param)
{
	struct msgb *msg = msgb_alloc(1024, "conn_resp");
	struct osmo_scu_prim *prim;

	prim = (struct osmo_scu_prim *) msgb_put(msg, sizeof(*prim));
	osmo_prim_init(&prim->oph, SCCP_SAP_USER,
			OSMO_SCU_PRIM_N_CONNECT,
			PRIM_OP_RESPONSE, msg);
	memcpy(&prim->u.connect, param, sizeof(prim->u.connect));
	return &prim->oph;
}

static int sccp_sap_up(struct osmo_prim_hdr *oph, void *link)
{
	struct osmo_scu_prim *prim = (struct osmo_scu_prim *) oph;
	struct osmo_prim_hdr *resp = NULL;
	const uint8_t payload[] = { 0xb1, 0xb2, 0xb3 };
	int rc;
	void *ue;

	printf("sccp_sap_up(%s)\n", osmo_scu_prim_name(oph));

	switch (OSMO_PRIM_HDR(oph)) {
	case OSMO_PRIM(OSMO_SCU_PRIM_N_CONNECT, PRIM_OP_CONFIRM):
		/* confirmation of outbound connection */
		break;
	case OSMO_PRIM(OSMO_SCU_PRIM_N_CONNECT, PRIM_OP_INDICATION):
		/* indication of new inbound connection request*/
		printf("N-CONNECT.ind(X->%u)\n", prim->u.connect.conn_id);
		if (/*  prim->u.connect.called_addr.ssn != OSMO_SCCP_SSN_RANAP || */
		    !msgb_l2(oph->msg) || msgb_l2len(oph->msg) == 0) {
			LOGP(DMAIN, LOGL_NOTICE, "Received invalid N-CONNECT.ind\n");
			return 0;
		}
		/* FIXME: allocate UE context */
		/* first ensure the local SUA/SCCP socket is ACTIVE */
		resp = make_conn_resp(&prim->u.connect);
		osmo_sua_user_link_down(link, resp);
		/* then handle the RANAP payload */
		rc = cn_ranap_rx_co(ue, msgb_l2(oph->msg), msgb_l2len(oph->msg));
		break;
	case OSMO_PRIM(OSMO_SCU_PRIM_N_DISCONNECT, PRIM_OP_INDICATION):
		/* indication of disconnect */
		printf("N-DISCONNECT.ind(%u)\n", prim->u.disconnect.conn_id);
		break;
	case OSMO_PRIM(OSMO_SCU_PRIM_N_DATA, PRIM_OP_INDICATION):
		/* connection-oriented data received */
		printf("N-DATA.ind(%u, %s)\n", prim->u.data.conn_id,
			osmo_hexdump(msgb_l2(oph->msg), msgb_l2len(oph->msg)));
		/* FIXME: resolve UE context */
		rc = cn_ranap_rx_co(ue, msgb_l2(oph->msg), msgb_l2len(oph->msg));
		break;
	case OSMO_PRIM(OSMO_SCU_PRIM_N_UNITDATA, PRIM_OP_INDICATION):
		/* connection-oriented data received */
		printf("N-UNITDATA.ind(%s)\n", 
			osmo_hexdump(msgb_l2(oph->msg), msgb_l2len(oph->msg)));
		rc = cn_ranap_rx_cl(link, msgb_l2(oph->msg), msgb_l2len(oph->msg));
		break;
	}

	msgb_free(oph->msg);
	return 0;
}

int main(int argc, char **argv)
{
	struct osmo_sua_user *user;
	void *ctx = talloc_named_const(NULL, 1, "root");
	int rc;

	osmo_sua_set_log_area(DSUA);

	test_common_init();

	user = osmo_sua_user_create(ctx, sccp_sap_up);

	rc = osmo_sua_server_listen(user, "127.0.0.1", 14001);
	if (rc < 0) {
		exit(1);
	}

	while (1) {
		osmo_select_main(0);
	}
}
