/* IuCS/IuPS Core Network interface of HNB-GW */

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

#include <arpa/inet.h>

#include <osmocom/core/msgb.h>
#include <osmocom/core/utils.h>
#include <osmocom/core/timer.h>

#include <osmocom/sigtran/protocol/m3ua.h>
#include <osmocom/sigtran/sccp_sap.h>
#include <osmocom/sigtran/sccp_helpers.h>

#include <osmocom/iuh/hnbgw.h>
#include <osmocom/iuh/hnbgw_rua.h>
#include <osmocom/ranap/ranap_ies_defs.h>
#include <osmocom/ranap/ranap_msg_factory.h>
#include <osmocom/iuh/context_map.h>

/***********************************************************************
 * Outbound RANAP RESET to CN
 ***********************************************************************/

int hnbgw_cnlink_change_state(struct hnbgw_cnlink *cnlink, enum hnbgw_cnlink_state state);

static int transmit_rst(struct hnb_gw *gw, RANAP_CN_DomainIndicator_t domain,
			struct osmo_sccp_addr *remote_addr)
{
	struct msgb *msg;
	struct msgb *msgprim;
	RANAP_Cause_t cause = {
		.present = RANAP_Cause_PR_transmissionNetwork,
		.choice. transmissionNetwork = RANAP_CauseTransmissionNetwork_signalling_transport_resource_failure,
	};

	msg = ranap_new_msg_reset(domain, &cause);

	return osmo_sccp_tx_unitdata_msg(gw->sccp.cnlink->sccp_user,
					 &gw->sccp.local_addr,
					 remote_addr,
					 msg);
}

/* Timer callback once T_RafC expires */
static void cnlink_trafc_cb(void *data)
{
	struct hnb_gw *gw = data;

	transmit_rst(gw, RANAP_CN_DomainIndicator_cs_domain, &gw->sccp.iucs_remote_addr);
	transmit_rst(gw, RANAP_CN_DomainIndicator_ps_domain, &gw->sccp.iups_remote_addr);
	hnbgw_cnlink_change_state(gw->sccp.cnlink, CNLINK_S_EST_RST_TX_WAIT_ACK);
	/* The spec states that we should abandon after a configurable
	 * number of times.  We decide to simply continue trying */
}

/* change the state of a CN Link */
int hnbgw_cnlink_change_state(struct hnbgw_cnlink *cnlink, enum hnbgw_cnlink_state state)
{
	switch (state) {
	case CNLINK_S_NULL:
	case CNLINK_S_EST_PEND:
		break;
	case CNLINK_S_EST_CONF:
		cnlink_trafc_cb(cnlink->gw);
		break;
	case CNLINK_S_EST_RST_TX_WAIT_ACK:
		osmo_timer_schedule(&cnlink->T_RafC, 5, 0);
		break;
	case CNLINK_S_EST_ACTIVE:
		osmo_timer_del(&cnlink->T_RafC);
		break;
	}
}

/***********************************************************************
 * Incoming primitives from SCCP User SAP
 ***********************************************************************/

static int cn_ranap_rx_reset_cmd(struct hnbgw_cnlink *cnlink,
				 RANAP_InitiatingMessage_t *imsg)
{
	RANAP_ResetIEs_t ies;
	int rc;

	rc = ranap_decode_reseties(&ies, &imsg->value);
	/* FIXME: reset resources and return reset ack */

	ranap_free_reseties(&ies);
	return rc;
}

static int cn_ranap_rx_reset_ack(struct hnbgw_cnlink *cnlink,
				 RANAP_SuccessfulOutcome_t *omsg)
{
	RANAP_ResetAcknowledgeIEs_t ies;
	int rc;

	rc = ranap_decode_resetacknowledgeies(&ies, &omsg->value);

	hnbgw_cnlink_change_state(cnlink, CNLINK_S_EST_ACTIVE);

	ranap_free_resetacknowledgeies(&ies);
	return rc;
}

static int cn_ranap_rx_paging_cmd(struct hnbgw_cnlink *cnlink,
				  RANAP_InitiatingMessage_t *imsg,
				  const uint8_t *data, unsigned int len)
{
	struct hnb_gw *gw = cnlink->gw;
	struct hnb_context *hnb;
	RANAP_PagingIEs_t ies;
	int rc = 0;

	rc = ranap_decode_pagingies(&ies, &imsg->value);

	/* FIXME: determine which HNBs to send this Paging command,
	 * rather than broadcasting to all HNBs */
	llist_for_each_entry(hnb, &gw->hnb_list, list) {
		rc = rua_tx_udt(hnb, data, len);
	}

	ranap_free_pagingies(&ies);
	return 0;
}

static int cn_ranap_rx_initiating_msg(struct hnbgw_cnlink *cnlink,
				      RANAP_InitiatingMessage_t *imsg,
				      const uint8_t *data, unsigned int len)
{
	int rc;

	switch (imsg->procedureCode) {
	case RANAP_ProcedureCode_id_Reset:
		return cn_ranap_rx_reset_cmd(cnlink, imsg);
	case RANAP_ProcedureCode_id_Paging:
		return cn_ranap_rx_paging_cmd(cnlink, imsg, data, len);
	case RANAP_ProcedureCode_id_OverloadControl: /* Overload ind */
		break;
	case RANAP_ProcedureCode_id_ErrorIndication: /* Error ind */
		break;
	case RANAP_ProcedureCode_id_ResetResource: /* request */
	case RANAP_ProcedureCode_id_InformationTransfer:
	case RANAP_ProcedureCode_id_DirectInformationTransfer:
	case RANAP_ProcedureCode_id_UplinkInformationExchange:
		LOGP(DRANAP, LOGL_NOTICE, "Received unsupported RANAP "
		     "Procedure %u from CN, ignoring\n", imsg->procedureCode);
		break;
	default:
		LOGP(DRANAP, LOGL_NOTICE, "Received suspicious RANAP "
		     "Procedure %u from CN, ignoring\n", imsg->procedureCode);
		break;
	}
	return 0;
}

static int cn_ranap_rx_successful_msg(struct hnbgw_cnlink *cnlink,
					RANAP_SuccessfulOutcome_t *omsg)
{
	int rc;

	switch (omsg->procedureCode) {
	case RANAP_ProcedureCode_id_Reset: /* Reset acknowledge */
		return cn_ranap_rx_reset_ack(cnlink, omsg);
	case RANAP_ProcedureCode_id_ResetResource: /* response */
	case RANAP_ProcedureCode_id_InformationTransfer:
	case RANAP_ProcedureCode_id_DirectInformationTransfer:
	case RANAP_ProcedureCode_id_UplinkInformationExchange:
		LOGP(DRANAP, LOGL_NOTICE, "Received unsupported RANAP "
		     "Procedure %u from CN, ignoring\n", omsg->procedureCode);
		break;
	default:
		LOGP(DRANAP, LOGL_NOTICE, "Received suspicious RANAP "
		     "Procedure %u from CN, ignoring\n", omsg->procedureCode);
		break;
	}
	return 0;
}


static int _cn_ranap_rx(struct hnbgw_cnlink *cnlink, RANAP_RANAP_PDU_t *pdu,
			const uint8_t *data, unsigned int len)
{
	int rc;

	switch (pdu->present) {
	case RANAP_RANAP_PDU_PR_initiatingMessage:
		rc = cn_ranap_rx_initiating_msg(cnlink, &pdu->choice.initiatingMessage,
						data, len);
		break;
	case RANAP_RANAP_PDU_PR_successfulOutcome:
		rc = cn_ranap_rx_successful_msg(cnlink, &pdu->choice.successfulOutcome);
		break;
	case RANAP_RANAP_PDU_PR_unsuccessfulOutcome:
		LOGP(DRANAP, LOGL_NOTICE, "Received unsupported RANAP "
		     "unsuccessful outcome procedure %u from CN, ignoring\n",
		     pdu->choice.unsuccessfulOutcome.procedureCode);
		break;
	default:
		LOGP(DRANAP, LOGL_NOTICE, "Received suspicious RANAP "
		     "presence %u from CN, ignoring\n", pdu->present);
		break;
	}
}

static int handle_cn_ranap(struct hnbgw_cnlink *cnlink, const uint8_t *data,
			   unsigned int len)
{
	RANAP_RANAP_PDU_t _pdu, *pdu = &_pdu;
	asn_dec_rval_t dec_ret;
	int rc;

	memset(pdu, 0, sizeof(*pdu));
	dec_ret = aper_decode(NULL,&asn_DEF_RANAP_RANAP_PDU, (void **) &pdu,
			      data, len, 0, 0);
	if (dec_ret.code != RC_OK) {
		LOGP(DRANAP, LOGL_ERROR, "Error in RANAP ASN.1 decode\n");
		return -1;
	}

	rc = _cn_ranap_rx(cnlink, pdu, data, len);

	return rc;
}

static bool pc_and_ssn_match(const struct osmo_sccp_addr *a, const struct osmo_sccp_addr *b)
{
	return (a == b)
	       || ((a->pc == b->pc)
		   && (a->ssn == b->ssn));
}

static int classify_cn_remote_addr(const struct hnb_gw *gw,
				   const struct osmo_sccp_addr *cn_remote_addr,
				   bool *is_ps)
{
	if (pc_and_ssn_match(cn_remote_addr, &gw->sccp.iucs_remote_addr)) {
		if (is_ps)
			*is_ps = false;
		return 0;
	}
	if (pc_and_ssn_match(cn_remote_addr, &gw->sccp.iups_remote_addr)) {
		if (is_ps)
			*is_ps = true;
		return 0;
	}
	LOGP(DMAIN, LOGL_ERROR, "Unexpected remote address, matches neither CS nor PS address: %s\n",
	     osmo_sccp_addr_dump(cn_remote_addr));
	return -1;
}

static int handle_cn_unitdata(struct hnbgw_cnlink *cnlink,
			      const struct osmo_scu_unitdata_param *param,
			      struct osmo_prim_hdr *oph)
{
	if (param->called_addr.ssn != OSMO_SCCP_SSN_RANAP) {
		LOGP(DMAIN, LOGL_NOTICE, "N-UNITDATA.ind for unknown SSN %u\n",
			param->called_addr.ssn);
		return -1;
	}

	if (classify_cn_remote_addr(cnlink->gw, &param->calling_addr, NULL) < 0)
		return -1;

	return handle_cn_ranap(cnlink, msgb_l2(oph->msg), msgb_l2len(oph->msg));
}

static int handle_cn_conn_conf(struct hnbgw_cnlink *cnlink,
			       const struct osmo_scu_connect_param *param,
			       struct osmo_prim_hdr *oph)
{
	/* we don't actually need to do anything, as RUA towards the HNB
	 * doesn't seem to know any confirmations to its CONNECT
	 * operation */

	LOGP(DMAIN, LOGL_DEBUG, "handle_cn_conn_conf() conn_id=%d\n",
	     param->conn_id);
	LOGP(DMAIN, LOGL_DEBUG, "handle_cn_conn_conf() called_addr=%s\n",
	     inet_ntoa(param->called_addr.ip.v4));
	LOGP(DMAIN, LOGL_DEBUG, "handle_cn_conn_conf() calling_addr=%s\n",
	     inet_ntoa(param->calling_addr.ip.v4));
	LOGP(DMAIN, LOGL_DEBUG, "handle_cn_conn_conf() responding_addr=%s\n",
	     inet_ntoa(param->responding_addr.ip.v4));

	return 0;
}

static int handle_cn_data_ind(struct hnbgw_cnlink *cnlink,
			      const struct osmo_scu_data_param *param,
			      struct osmo_prim_hdr *oph)
{
	struct hnbgw_context_map *map;

	/* connection-oriented data is always passed transparently
	 * towards the specific HNB, via a RUA connection identified by
	 * conn_id */

	map = context_map_by_cn(cnlink, param->conn_id);
	if (!map) {
		/* FIXME: Return an error / released primitive */
		return 0;
	}

	return rua_tx_dt(map->hnb_ctx, map->is_ps, map->rua_ctx_id,
			 msgb_l2(oph->msg), msgb_l2len(oph->msg));
}

static int handle_cn_disc_ind(struct hnbgw_cnlink *cnlink,
			      const struct osmo_scu_disconn_param *param,
			      struct osmo_prim_hdr *oph)
{
	struct hnbgw_context_map *map;

	LOGP(DMAIN, LOGL_DEBUG, "handle_cn_disc_ind() conn_id=%d originator=%d\n",
	     param->conn_id, param->originator);
	LOGP(DMAIN, LOGL_DEBUG, "handle_cn_disc_ind() responding_addr=%s\n",
	     inet_ntoa(param->responding_addr.ip.v4));

	RUA_Cause_t rua_cause = {
		.present = RUA_Cause_PR_NOTHING,
		/* FIXME: Convert incoming SCCP cause to RUA cause */
	};

	/* we need to notify the HNB associated with this connection via
	 * a RUA DISCONNECT */

	map = context_map_by_cn(cnlink, param->conn_id);
	if (!map) {
		/* FIXME: Return an error / released primitive */
		return 0;
	}

	return rua_tx_disc(map->hnb_ctx, map->is_ps, map->rua_ctx_id,
			   &rua_cause, msgb_l2(oph->msg), msgb_l2len(oph->msg));
}

/* Entry point for primitives coming up from SCCP User SAP */
static int sccp_sap_up(struct osmo_prim_hdr *oph, void *ctx)
{
	struct osmo_sccp_user *scu = ctx;
	struct hnbgw_cnlink *cnlink;
	struct osmo_scu_prim *prim = (struct osmo_scu_prim *) oph;
	int rc;

	LOGP(DMAIN, LOGL_DEBUG, "sccp_sap_up(%s)\n", osmo_scu_prim_name(oph));

	if (!scu) {
		LOGP(DMAIN, LOGL_ERROR,
		     "sccp_sap_up(): NULL osmo_sccp_user, cannot send prim (sap %u prim %u op %d)\n",
		     oph->sap, oph->primitive, oph->operation);
		return -1;
	}

	cnlink = osmo_sccp_user_get_priv(scu);
	if (!cnlink) {
		LOGP(DMAIN, LOGL_ERROR,
		     "sccp_sap_up(): NULL hnbgw_cnlink, cannot send prim (sap %u prim %u op %d)\n",
		     oph->sap, oph->primitive, oph->operation);
		return -1;
	}

	switch (OSMO_PRIM_HDR(oph)) {
	case OSMO_PRIM(OSMO_SCU_PRIM_N_UNITDATA, PRIM_OP_INDICATION):
		rc = handle_cn_unitdata(cnlink, &prim->u.unitdata, oph);
		break;
	case OSMO_PRIM(OSMO_SCU_PRIM_N_CONNECT, PRIM_OP_CONFIRM):
		rc = handle_cn_conn_conf(cnlink, &prim->u.connect, oph);
		break;
	case OSMO_PRIM(OSMO_SCU_PRIM_N_DATA, PRIM_OP_INDICATION):
		rc = handle_cn_data_ind(cnlink, &prim->u.data, oph);
		break;
	case OSMO_PRIM(OSMO_SCU_PRIM_N_DISCONNECT, PRIM_OP_INDICATION):
		rc = handle_cn_disc_ind(cnlink, &prim->u.disconnect, oph);
		break;
	defualt:
		LOGP(DMAIN, LOGL_ERROR,
			"Received unknown prim %u from SCCP USER SAP\n",
			OSMO_PRIM_HDR(oph));
		break;
	}

	msgb_free(oph->msg);

	return 0;
}

static bool addr_has_pc_and_ssn(const struct osmo_sccp_addr *addr)
{
	if (!(addr->presence & OSMO_SCCP_ADDR_T_SSN))
		return false;
	if (!(addr->presence & OSMO_SCCP_ADDR_T_PC))
		return false;
	return true;
}

static int resolve_addr_name(struct osmo_sccp_addr *dest, struct osmo_ss7_instance **ss7,
			      const char *addr_name, const char *label)
{
	struct osmo_ss7_instance *ss7_tmp;

	if (!addr_name) {
		LOGP(DMAIN, LOGL_ERROR, "Missing config: %s remote-addr\n", label);
		return -1;
	}

	ss7_tmp = osmo_sccp_addr_by_name(dest, addr_name);
	if (!ss7_tmp) {
		LOGP(DMAIN, LOGL_ERROR, "%s remote addr: no such SCCP address book entry: '%s'\n",
			label, addr_name);
		return -1;
	}

	if (*ss7 && (*ss7 != ss7_tmp)) {
		LOGP(DMAIN, LOGL_ERROR, "IuCS and IuPS cannot be served from separate CS7 instances,"
		     " cs7 instance %d != %d\n", (*ss7)->cfg.id, ss7_tmp->cfg.id);
		return -1;
	}

	*ss7 = ss7_tmp;

	osmo_sccp_addr_set_ssn(dest, OSMO_SCCP_SSN_RANAP);

	if (!addr_has_pc_and_ssn(dest)) {
		LOGP(DMAIN, LOGL_ERROR, "Invalid/incomplete %s remote-addr: %s\n",
		     label, osmo_sccp_addr_name(*ss7, dest));
		return -1;
	}

	LOGP(DRANAP, LOGL_NOTICE, "Remote %s SCCP addr: %s\n",
	     label, osmo_sccp_addr_name(*ss7, dest));
	return 0;
}

int hnbgw_cnlink_init(struct hnb_gw *gw, const char *stp_host, uint16_t stp_port, const char *local_ip)
{
	struct hnbgw_cnlink *cnlink;
	struct osmo_ss7_instance *ss7;
	uint32_t local_pc;
	int rc;

	OSMO_ASSERT(!gw->sccp.client);
	OSMO_ASSERT(!gw->sccp.cnlink);

	ss7 = NULL;
	if (resolve_addr_name(&gw->sccp.iucs_remote_addr, &ss7,
			      gw->config.iucs_remote_addr_name, "IuCS"))
		return -1;
	if (resolve_addr_name(&gw->sccp.iups_remote_addr, &ss7,
			      gw->config.iups_remote_addr_name, "IuPS"))
		return -1;

	if (!osmo_ss7_pc_is_valid(ss7->cfg.primary_pc)) {
		LOGP(DMAIN, LOGL_ERROR, "IuCS/IuPS uplink cannot be setup: CS7 instance %d has no point-code set\n",
		     ss7->cfg.id);
		return -1;
	}
	local_pc = ss7->cfg.primary_pc;

	osmo_sccp_make_addr_pc_ssn(&gw->sccp.local_addr, local_pc, OSMO_SCCP_SSN_RANAP);

	LOGP(DRANAP, LOGL_NOTICE, "M3UA uplink to STP: %s %u\n", stp_host, stp_port);
	LOGP(DRANAP, LOGL_NOTICE, "Local SCCP addr: %s\n", osmo_sccp_addr_name(ss7, &gw->sccp.local_addr));

	gw->sccp.client = osmo_sccp_simple_client_on_ss7_id(gw, ss7->cfg.id, "OsmoHNBGW",
							    local_pc, OSMO_SS7_ASP_PROT_M3UA,
							    0, local_ip, stp_port, stp_host);
	if (!gw->sccp.client) {
		LOGP(DMAIN, LOGL_ERROR, "Failed to init SCCP Client\n");
		return -1;
	}

	cnlink = talloc_zero(gw, struct hnbgw_cnlink);
	cnlink->gw = gw;
	INIT_LLIST_HEAD(&cnlink->map_list);
	cnlink->T_RafC.cb = cnlink_trafc_cb;
	cnlink->T_RafC.data = gw;
	cnlink->next_conn_id = 1000;

	cnlink->sccp_user = osmo_sccp_user_bind_pc(gw->sccp.client, "OsmoHNBGW", sccp_sap_up,
						   OSMO_SCCP_SSN_RANAP, gw->sccp.local_addr.pc);
	if (!cnlink->sccp_user) {
		LOGP(DMAIN, LOGL_ERROR, "Failed to init SCCP User\n");
		return -1;
	}

	/* In sccp_sap_up() we expect the cnlink in the user's priv. */
	osmo_sccp_user_set_priv(cnlink->sccp_user, cnlink);

	gw->sccp.cnlink = cnlink;

	return 0;
}
