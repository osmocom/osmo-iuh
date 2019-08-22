/* HNB-GW interface to quagga VTY */

/* (C) 2016 by sysmocom s.f.m.c. GmbH <info@sysmocom.de>
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

#include <string.h>

#include <osmocom/core/socket.h>
#include <osmocom/vty/command.h>

#include <osmocom/iuh/vty.h>

#include <osmocom/iuh/hnbgw.h>
#include <osmocom/iuh/context_map.h>
#include <osmocom/sigtran/protocol/sua.h>
#include <osmocom/sigtran/sccp_helpers.h>
#include <osmocom/netif/stream.h>

static void *tall_hnb_ctx = NULL;
static struct hnb_gw *g_hnb_gw = NULL;

static struct cmd_node hnbgw_node = {
	HNBGW_NODE,
	"%s(config-hnbgw)# ",
	1,
};

DEFUN(cfg_hnbgw, cfg_hnbgw_cmd,
      "hnbgw", "Configure HNBGW options")
{
	vty->node = HNBGW_NODE;
	return CMD_SUCCESS;
}

static struct cmd_node iuh_node = {
	IUH_NODE,
	"%s(config-hnbgw-iuh)# ",
	1,
};

DEFUN(cfg_hnbgw_iuh, cfg_hnbgw_iuh_cmd,
      "iuh", "Configure Iuh options")
{
	vty->node = IUH_NODE;
	return CMD_SUCCESS;
}

static struct cmd_node iucs_node = {
	IUCS_NODE,
	"%s(config-hnbgw-iucs)# ",
	1,
};

DEFUN(cfg_hnbgw_iucs, cfg_hnbgw_iucs_cmd,
      "iucs", "Configure IuCS options")
{
	vty->node = IUCS_NODE;
	return CMD_SUCCESS;
}

static struct cmd_node iups_node = {
	IUPS_NODE,
	"%s(config-hnbgw-iups)# ",
	1,
};

DEFUN(cfg_hnbgw_iups, cfg_hnbgw_iups_cmd,
      "iups", "Configure IuPS options")
{
	vty->node = IUPS_NODE;
	return CMD_SUCCESS;
}

int hnbgw_vty_go_parent(struct vty *vty)
{
	switch (vty->node) {
	case IUH_NODE:
	case IUCS_NODE:
	case IUPS_NODE:
		vty->node = HNBGW_NODE;
		vty->index = NULL;
		break;
	case HNBGW_NODE:
		vty->node = CONFIG_NODE;
		vty->index = NULL;
		break;
	case CONFIG_NODE:
		vty->node = ENABLE_NODE;
		vty->index = NULL;
		break;
	default:
		osmo_ss7_vty_go_parent(vty);
		break;
	}

	return vty->node;
}

DEFUN(show_cnlink, show_cnlink_cmd, "show cnlink",
      SHOW_STR "Display information on core network link\n")
{
	struct osmo_ss7_route *rt;
	struct osmo_ss7_instance *ss7 = osmo_sccp_get_ss7(g_hnb_gw->sccp.client);
	int i;
#define GUARD(STR) \
	STR ? STR : "", \
	STR ? ":" : ""
	
	vty_out(vty, "IuCS: %s <->",
		osmo_sccp_user_name(g_hnb_gw->sccp.cnlink->sccp_user));
	vty_out(vty, " %s%s%s%s",
		GUARD(g_hnb_gw->config.iucs_remote_addr_name),
		osmo_sccp_inst_addr_name(g_hnb_gw->sccp.client, &g_hnb_gw->sccp.iucs_remote_addr),
		VTY_NEWLINE);

	rt = osmo_ss7_route_lookup(ss7, g_hnb_gw->sccp.iucs_remote_addr.pc);
	vty_out(vty, "      SS7 route: %s%s", osmo_ss7_route_name(rt, true), VTY_NEWLINE);

	vty_out(vty, "IuPS: %s <->",
		osmo_sccp_user_name(g_hnb_gw->sccp.cnlink->sccp_user));
	vty_out(vty, " %s%s%s%s",
		GUARD(g_hnb_gw->config.iups_remote_addr_name),
		osmo_sccp_inst_addr_name(g_hnb_gw->sccp.client, &g_hnb_gw->sccp.iups_remote_addr),
		VTY_NEWLINE);

	rt = osmo_ss7_route_lookup(ss7, g_hnb_gw->sccp.iups_remote_addr.pc);
	vty_out(vty, "      SS7 route: %s%s", osmo_ss7_route_name(rt, true), VTY_NEWLINE);

#undef GUARD
	return CMD_SUCCESS;
}

static void vty_out_ofd_addr(struct vty *vty, struct osmo_fd *ofd)
{
	char *name;
	if (!ofd || ofd->fd < 0
	|| !(name = osmo_sock_get_name(vty, ofd->fd))) {
	    vty_out(vty, "(no addr)");
	    return;
	}
	vty_out(vty, "%s", name);
	talloc_free(name);
}

static void vty_dump_hnb_info__map_states(struct vty *vty, const char *name, unsigned int count,
					  unsigned int state_count[])
{
	unsigned int i;
	if (!count)
		return;
	vty_out(vty, "    %s: %u contexts:", name, count);
	for (i = 0; i <= MAP_S_NUM_STATES; i++) {
		if (!state_count[i])
			continue;
		vty_out(vty, " %s:%u", hnbgw_context_map_state_name(i), state_count[i]);
	}
	vty_out(vty, VTY_NEWLINE);
}

static void vty_dump_hnb_info(struct vty *vty, struct hnb_context *hnb)
{
	struct hnbgw_context_map *map;
	unsigned int map_count[2] = {};
	unsigned int state_count[2][MAP_S_NUM_STATES + 1] = {};

	vty_out(vty, "HNB ");
	vty_out_ofd_addr(vty, hnb->conn? osmo_stream_srv_get_ofd(hnb->conn) : NULL);
	vty_out(vty, " \"%s\"%s", hnb->identity_info, VTY_NEWLINE);
	vty_out(vty, "    MCC %u MNC %u LAC %u RAC %u SAC %u CID %u SCTP-stream:HNBAP=%u,RUA=%u%s",
		hnb->id.mcc, hnb->id.mnc, hnb->id.lac, hnb->id.rac, hnb->id.sac, hnb->id.cid,
		hnb->hnbap_stream, hnb->rua_stream, VTY_NEWLINE);

	llist_for_each_entry(map, &hnb->map_list, hnb_list) {
		map_count[map->is_ps? 1 : 0]++;
		state_count[map->is_ps? 1 : 0]
			   [(map->state >= 0 && map->state < MAP_S_NUM_STATES)?
			    map->state : MAP_S_NUM_STATES]++;
	}
	vty_dump_hnb_info__map_states(vty, "IuCS", map_count[0], state_count[0]);
	vty_dump_hnb_info__map_states(vty, "IuPS", map_count[1], state_count[1]);
}

static void vty_dump_ue_info(struct vty *vty, struct ue_context *ue)
{
	vty_out(vty, "UE IMSI \"%s\" context ID %u%s", ue->imsi, ue->context_id, VTY_NEWLINE);
}

DEFUN(show_hnb, show_hnb_cmd, "show hnb all", SHOW_STR "Display information about all HNB")
{
	struct hnb_context *hnb;
	unsigned int count = 0;

	if (llist_empty(&g_hnb_gw->hnb_list)) {
		vty_out(vty, "No HNB connected%s", VTY_NEWLINE);
		return CMD_SUCCESS;
	}

	llist_for_each_entry(hnb, &g_hnb_gw->hnb_list, list) {
		vty_dump_hnb_info(vty, hnb);
		count++;
	}

	vty_out(vty, "%u HNB connected%s", count, VTY_NEWLINE);

	return CMD_SUCCESS;
}

DEFUN(show_one_hnb, show_one_hnb_cmd, "show hnb NAME ", SHOW_STR "Display information about a HNB")
{
	struct hnb_context *hnb;
	int found = 0;
	const char *identity_info = argv[0];

	if (llist_empty(&g_hnb_gw->hnb_list)) {
		vty_out(vty, "No HNB connected%s", VTY_NEWLINE);
		return CMD_SUCCESS;
	}

	hnb = hnb_context_by_identity_info(g_hnb_gw, identity_info);
	if (hnb == NULL) {
		vty_out(vty, "No HNB found with identity '%s'%s", identity_info, VTY_NEWLINE);
		return CMD_SUCCESS;
	}

	vty_dump_hnb_info(vty, hnb);
	return CMD_SUCCESS;
}

DEFUN(show_ue, show_ue_cmd, "show ue all", SHOW_STR "Display information about a UE")
{
	struct ue_context *ue;

	llist_for_each_entry(ue, &g_hnb_gw->ue_list, list) {
		vty_dump_ue_info(vty, ue);
	}

	return CMD_SUCCESS;
}

DEFUN(show_talloc, show_talloc_cmd, "show talloc", SHOW_STR "Display talloc info")
{
	talloc_report_full(tall_hnb_ctx, stderr);
	talloc_report_full(talloc_asn1_ctx, stderr);

	return CMD_SUCCESS;
}

DEFUN(cfg_hnbgw_rnc_id, cfg_hnbgw_rnc_id_cmd,
      "rnc-id <0-65535>",
      "Configure the HNBGW's RNC Id, the common RNC Id used for all connected hNodeB. It is sent to"
      " each hNodeB upon HNBAP HNB-Register-Accept, and the hNodeB will subsequently send this as"
      " RANAP InitialUE Messages' GlobalRNC-ID IE. Takes effect as soon as the hNodeB re-registers.\n"
      "RNC Id value\n")
{
	g_hnb_gw->config.rnc_id = atoi(argv[0]);
	return CMD_SUCCESS;
}

DEFUN(cfg_hnbgw_iuh_local_ip, cfg_hnbgw_iuh_local_ip_cmd, "local-ip A.B.C.D",
      "Accept Iuh connections on local interface\n"
      "Local interface IP address (default: " HNBGW_LOCAL_IP_DEFAULT ")")
{
	talloc_free((void*)g_hnb_gw->config.iuh_local_ip);
	g_hnb_gw->config.iuh_local_ip = talloc_strdup(tall_hnb_ctx, argv[0]);
	return CMD_SUCCESS;
}

DEFUN(cfg_hnbgw_iuh_local_port, cfg_hnbgw_iuh_local_port_cmd, "local-port <1-65535>",
      "Accept Iuh connections on local port\n"
      "Local interface port (default: 29169)")
{
	g_hnb_gw->config.iuh_local_port = atoi(argv[0]);
	return CMD_SUCCESS;
}

DEFUN(cfg_hnbgw_iuh_hnbap_allow_tmsi, cfg_hnbgw_iuh_hnbap_allow_tmsi_cmd,
      "hnbap-allow-tmsi (0|1)",
      "Allow HNBAP UE Register messages with TMSI or PTMSI identity\n"
      "Only accept IMSI identity, reject TMSI or PTMSI\n"
      "Accept IMSI, TMSI or PTMSI as UE identity\n")
{
	g_hnb_gw->config.hnbap_allow_tmsi = (*argv[0] == '1');
	return CMD_SUCCESS;
}

DEFUN(cfg_hnbgw_iucs_remote_addr,
      cfg_hnbgw_iucs_remote_addr_cmd,
      "remote-addr NAME",
      "SCCP address to send IuCS to (MSC)\n"
      "SCCP address book entry name (see 'cs7-instance')\n")
{
	g_hnb_gw->config.iucs_remote_addr_name = talloc_strdup(g_hnb_gw, argv[0]);
	return CMD_SUCCESS;
}

DEFUN(cfg_hnbgw_iups_remote_addr,
      cfg_hnbgw_iups_remote_addr_cmd,
      "remote-addr NAME",
      "SCCP address to send IuPS to (SGSN)\n"
      "SCCP address book entry name (see 'cs7-instance')\n")
{
	g_hnb_gw->config.iups_remote_addr_name = talloc_strdup(g_hnb_gw, argv[0]);
	return CMD_SUCCESS;
}

static int config_write_hnbgw(struct vty *vty)
{
	vty_out(vty, "hnbgw%s", VTY_NEWLINE);
	return CMD_SUCCESS;
}

static int config_write_hnbgw_iuh(struct vty *vty)
{
	const char *addr;
	uint16_t port;

	vty_out(vty, " iuh%s", VTY_NEWLINE);

	addr = g_hnb_gw->config.iuh_local_ip;
	if (addr && (strcmp(addr, HNBGW_LOCAL_IP_DEFAULT) != 0))
		vty_out(vty, "  local-ip %s%s", addr, VTY_NEWLINE);

	port = g_hnb_gw->config.iuh_local_port;
	if (port && port != IUH_DEFAULT_SCTP_PORT)
		vty_out(vty, "  local-port %u%s", port, VTY_NEWLINE);

	if (g_hnb_gw->config.hnbap_allow_tmsi)
		vty_out(vty, "  hnbap-allow-tmsi 1%s", VTY_NEWLINE);

	return CMD_SUCCESS;
}

static int config_write_hnbgw_iucs(struct vty *vty)
{
	if (!g_hnb_gw->config.iucs_remote_addr_name)
		return CMD_SUCCESS;

	vty_out(vty, " iucs%s", VTY_NEWLINE);
	vty_out(vty, "  remote-addr %s%s", g_hnb_gw->config.iucs_remote_addr_name,
		VTY_NEWLINE);

	return CMD_SUCCESS;
}

static int config_write_hnbgw_iups(struct vty *vty)
{
	if (!g_hnb_gw->config.iups_remote_addr_name)
		return CMD_SUCCESS;

	vty_out(vty, " iups%s", VTY_NEWLINE);
	vty_out(vty, "  remote-addr %s%s", g_hnb_gw->config.iups_remote_addr_name,
		VTY_NEWLINE);

	return CMD_SUCCESS;
}

void hnbgw_vty_init(struct hnb_gw *gw, void *tall_ctx)
{
	g_hnb_gw = gw;
	tall_hnb_ctx = tall_ctx;

	install_element(CONFIG_NODE, &cfg_hnbgw_cmd);
	install_node(&hnbgw_node, config_write_hnbgw);

	install_element(HNBGW_NODE, &cfg_hnbgw_rnc_id_cmd);

	install_element(HNBGW_NODE, &cfg_hnbgw_iuh_cmd);
	install_node(&iuh_node, config_write_hnbgw_iuh);

	install_element(IUH_NODE, &cfg_hnbgw_iuh_local_ip_cmd);
	install_element(IUH_NODE, &cfg_hnbgw_iuh_local_port_cmd);
	install_element(IUH_NODE, &cfg_hnbgw_iuh_hnbap_allow_tmsi_cmd);

	install_element(HNBGW_NODE, &cfg_hnbgw_iucs_cmd);
	install_node(&iucs_node, config_write_hnbgw_iucs);

	install_element(IUCS_NODE, &cfg_hnbgw_iucs_remote_addr_cmd);

	install_element(HNBGW_NODE, &cfg_hnbgw_iups_cmd);
	install_node(&iups_node, config_write_hnbgw_iups);

	install_element(IUPS_NODE, &cfg_hnbgw_iups_remote_addr_cmd);

	install_element_ve(&show_cnlink_cmd);
	install_element_ve(&show_hnb_cmd);
	install_element_ve(&show_one_hnb_cmd);
	install_element_ve(&show_ue_cmd);
	install_element_ve(&show_talloc_cmd);
}
