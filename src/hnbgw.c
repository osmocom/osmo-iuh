/* main application for hnb-gw part of osmo-iuh */

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

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include <errno.h>
#include <signal.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/sctp.h>
#include <arpa/inet.h>

#include <osmocom/core/application.h>
#include <osmocom/core/talloc.h>
#include <osmocom/core/select.h>
#include <osmocom/core/logging.h>
#include <osmocom/core/socket.h>
#include <osmocom/core/msgb.h>
#include <osmocom/core/write_queue.h>

#include <osmocom/vty/telnet_interface.h>
#include <osmocom/vty/logging.h>
#include <osmocom/vty/command.h>

#include <osmocom/netif/stream.h>

#include <osmocom/sigtran/sua.h>
#include <osmocom/sigtran/protocol/sua.h>
#include <osmocom/sigtran/sccp_sap.h>

#include "hnbgw.h"
#include "hnbgw_hnbap.h"
#include "hnbgw_rua.h"
#include "hnbgw_cn.h"
#include "context_map.h"

static void *tall_hnb_ctx;
void *talloc_asn1_ctx;

static struct hnb_gw *g_hnb_gw;

static int listen_fd_cb(struct osmo_fd *fd, unsigned int what);

static struct hnb_gw *hnb_gw_create(void *ctx)
{
	struct hnb_gw *gw = talloc_zero(ctx, struct hnb_gw);

	gw->config.iuh_listen_port = IUH_DEFAULT_SCTP_PORT;

	gw->next_ue_ctx_id = 23;
	INIT_LLIST_HEAD(&gw->hnb_list);
	INIT_LLIST_HEAD(&gw->ue_list);
	INIT_LLIST_HEAD(&gw->cn_list);

	context_map_init(gw);

	return gw;
}

struct ue_context *ue_context_by_id(struct hnb_gw *gw, uint32_t id)
{
	struct ue_context *ue;

	llist_for_each_entry(ue, &gw->ue_list, list) {
		if (ue->context_id == id)
			return ue;
	}
	return NULL;

}

struct ue_context *ue_context_by_imsi(struct hnb_gw *gw, const char *imsi)
{
	struct ue_context *ue;

	llist_for_each_entry(ue, &gw->ue_list, list) {
		if (!strcmp(ue->imsi, imsi))
			return ue;
	}
	return NULL;
}

static uint32_t get_next_ue_ctx_id(struct hnb_gw *gw)
{
	uint32_t id;

	do {
		id = gw->next_ue_ctx_id++;
	} while (ue_context_by_id(gw, id));

	return id;
}

struct ue_context *ue_context_alloc(struct hnb_context *hnb, const char *imsi)
{
	struct ue_context *ue;

	ue = talloc_zero(tall_hnb_ctx, struct ue_context);
	if (!ue)
		return NULL;

	ue->hnb = hnb;
	strncpy(ue->imsi, imsi, sizeof(ue->imsi));
	ue->context_id = get_next_ue_ctx_id(hnb->gw);
	llist_add_tail(&ue->list, &hnb->gw->ue_list);

	return ue;
}

void ue_context_free(struct ue_context *ue)
{
	llist_del(&ue->list);
	talloc_free(ue);
}
static int hnb_close_cb(struct osmo_stream_srv *conn)
{
}

static int hnb_read_cb(struct osmo_stream_srv *conn)
{
	struct hnb_context *hnb = osmo_stream_srv_get_data(conn);
	struct msgb *msg = msgb_alloc(IUH_MSGB_SIZE, "Iuh rx");
	int flags = 0;
	int rc;

	if (!msg)
		return -ENOMEM;

	/* we store a reference to the HomeNodeB in the msg->dest for the
	 * benefit of varoius downstream processing functions */
	msg->dst = hnb;

	rc = osmo_stream_srv_recv(conn, msg);
	if (rc == -EAGAIN) {
		/* Notification received */
		msgb_free(msg);
		return 0;
	} else if (rc < 0) {
		LOGP(DMAIN, LOGL_ERROR, "Error during sctp_recvmsg()\n");
		/* FIXME: clean up after disappeared HNB */
		hnb_context_release(hnb);
		goto out;
	} else if (rc == 0) {
		hnb_context_release(hnb);
		rc = -1;

		goto out;
	} else {
		msgb_put(msg, rc);
	}

	switch (msgb_sctp_ppid(msg)) {
	case IUH_PPI_HNBAP:
		hnb->hnbap_stream = msgb_sctp_stream(msg);
		rc = hnbgw_hnbap_rx(hnb, msg);
		break;
	case IUH_PPI_RUA:
		hnb->rua_stream = msgb_sctp_stream(msg);
		rc = hnbgw_rua_rx(hnb, msg);
		break;
	case IUH_PPI_SABP:
	case IUH_PPI_RNA:
	case IUH_PPI_PUA:
		LOGP(DMAIN, LOGL_ERROR, "Unimplemented SCTP PPID=%u received\n",
		     msgb_sctp_ppid(msg));
		rc = 0;
		break;
	default:
		LOGP(DMAIN, LOGL_ERROR, "Unknown SCTP PPID=%u received\n",
		     msgb_sctp_ppid(msg));
		rc = 0;
		break;
	}

out:
	msgb_free(msg);
	return rc;
}

static int hnb_write_cb(struct osmo_fd *fd, struct msgb *msg)
{
	struct hnb_context *ctx = fd->data;
	struct sctp_sndrcvinfo sinfo = {
		.sinfo_ppid = htonl(msgb_sctp_ppid(msg)),
		.sinfo_stream = ctx->hnbap_stream,
	};
	int rc;

	rc = sctp_send(fd->fd, msgb_data(msg), msgb_length(msg),
			&sinfo, 0);
	/* we don't need to msgb_free(), write_queue does this for us */
	return rc;
}

struct hnb_context *hnb_context_alloc(struct hnb_gw *gw, struct osmo_stream_srv_link *link, int new_fd)
{
	struct hnb_context *ctx;

	ctx = talloc_zero(tall_hnb_ctx, struct hnb_context);
	if (!ctx)
		return NULL;

	ctx->gw = gw;
	ctx->conn = osmo_stream_srv_create(tall_hnb_ctx, link, new_fd, hnb_read_cb, hnb_close_cb, ctx);
	if (!ctx->conn) {
		LOGP(DMAIN, LOGL_INFO, "error while creating connection\n");
		return -1;
	}

	INIT_LLIST_HEAD(&ctx->map_list);

	llist_add_tail(&ctx->list, &gw->hnb_list);
}

void hnb_context_release(struct hnb_context *ctx)
{
	struct hnbgw_context_map *map, *map2;

	/* remove from the list of HNB contexts */
	llist_del(&ctx->list);

	/* deactivate all context maps */
	llist_for_each_entry_safe(map, map2, &ctx->map_list, hnb_list) {
		/* remove it from list, as HNB context will soon be
		 * gone.  Let's hope the seccond osmo_llist_del in the
		 * map garbage collector wors fine? */
		llist_del(&map->hnb_list);
		context_map_deactivate(map);
	}
	osmo_stream_srv_destroy(ctx->conn);

	talloc_free(ctx);
}

/*! call-back when the listen FD has something to read */
static int accept_cb(struct osmo_stream_srv_link *srv, int fd)
{
	struct hnb_gw *gw = osmo_stream_srv_link_get_data(srv);
	struct hnb_context *ctx;

	ctx = hnb_context_alloc(gw, srv, fd);
	if (!ctx)
		return -ENOMEM;

	return 0;
}

/* Entry point for primitives coming up from SCCP User SAP */
static int sccp_sap_up(struct osmo_prim_hdr *oph, void *link)
{
	struct osmo_scu_prim *prim = (struct osmo_scu_prim *) oph;

	LOGP(DMAIN, LOGL_DEBUG, "sccp_sap_up(%s)\n", osmo_scu_prim_name(oph));

	/* FIXME: Do something */

	msgb_free(oph->msg);

	return 0;
}

static const struct log_info_cat log_cat[] = {
	[DMAIN] = {
		.name = "DMAIN", .loglevel = LOGL_INFO, .enabled = 1,
		.color = "",
		.description = "Main program",
	},
	[DHNBAP] = {
		.name = "DHNBAP", .loglevel = LOGL_DEBUG, .enabled = 1,
		.color = "",
		.description = "Home Node B Application Part",
	},
	[DSUA] = {
		.name = "DSUA", .loglevel = LOGL_DEBUG, .enabled = 1,
		.color = "",
		.description = "SCCP User Adaptation",
	},
	[DRUA] = {
		.name = "DRUA", .loglevel = LOGL_DEBUG, .enabled = 1,
		.color = "",
		.description = "RANAP User Adaptation",
	},
	[DRANAP] = {
		.name = "DRANAP", .loglevel = LOGL_DEBUG, .enabled = 1,
		.color = "",
		.description = "RAN Application Part",
	},
};

static const struct log_info hnbgw_log_info = {
	.cat = log_cat,
	.num_cat = ARRAY_SIZE(log_cat),
};

static struct vty_app_info vty_info = {
	.name		= "OsmoHNBGW",
	.version	= "0",
};

static int daemonize = 0;

static void vty_dump_hnb_info(struct vty *vty, struct hnb_context *hnb)
{
	vty_out(vty, "HNB \"%s\" MCC %u MNC %u LAC %u RAC %u SAC %u CID %u%s", hnb->identity_info,
			hnb->id.mcc, hnb->id.mnc, hnb->id.lac, hnb->id.rac, hnb->id.sac, hnb->id.cid,
			VTY_NEWLINE);
	vty_out(vty, "   HNBAP ID %u RUA ID %u%s", hnb->hnbap_stream, hnb->rua_stream, VTY_NEWLINE);
}

static void vty_dump_ue_info(struct vty *vty, struct ue_context *ue)
{
	vty_out(vty, "UE IMSI \"%s\" context ID %u%s", ue->imsi, ue->context_id, VTY_NEWLINE);
}

DEFUN(show_hnb, show_hnb_cmd, "show hnb all", SHOW_STR "Display information about a HNB")
{
	struct hnb_context *hnb;

	llist_for_each_entry(hnb, &g_hnb_gw->hnb_list, list) {
		vty_dump_hnb_info(vty, hnb);
	}

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

static void hnbgw_vty_init(void)
{
	install_element_ve(&show_hnb_cmd);
	install_element_ve(&show_ue_cmd);
	install_element_ve(&show_talloc_cmd);
}

int main(int argc, char **argv)
{
	struct osmo_sua_user *sua_user;
	struct osmo_sua_link *sua_link;
	struct osmo_stream_srv_link *srv;
	int rc;

	tall_hnb_ctx = talloc_named_const(NULL, 0, "hnb_context");
	talloc_asn1_ctx = talloc_named_const(NULL, 0, "asn1_context");

	g_hnb_gw = hnb_gw_create(tall_hnb_ctx);

	rc = osmo_init_logging(&hnbgw_log_info);
	if (rc < 0)
		exit(1);

	vty_init(&vty_info);
	hnbgw_vty_init();

	rc = telnet_init(NULL, g_hnb_gw, 2323);
	if (rc < 0) {
		perror("Error binding VTY port");
		exit(1);
	}

	osmo_sua_set_log_area(DSUA);
	ranap_set_log_area(DRANAP);

	g_hnb_gw->cnlink_cs = hnbgw_cnlink_init(g_hnb_gw, "127.0.0.1", SUA_PORT);
	g_hnb_gw->cnlink_ps = hnbgw_cnlink_init(g_hnb_gw, "127.0.0.2", SUA_PORT);

	srv = osmo_stream_srv_link_create(tall_hnb_ctx);
	if (!srv) {
		perror("cannot create server");
		exit(1);
	}
	osmo_stream_srv_link_set_data(srv, g_hnb_gw);
	osmo_stream_srv_link_set_proto(srv, IPPROTO_SCTP);
	osmo_stream_srv_link_set_addr(srv, "0.0.0.0");
	osmo_stream_srv_link_set_port(srv, g_hnb_gw->config.iuh_listen_port);
	osmo_stream_srv_link_set_accept_cb(srv, accept_cb);

	if (osmo_stream_srv_link_open(srv) < 0) {
		perror("Cannot oper server");
		exit(1);
	}
	g_hnb_gw->iuh = srv;

	if (daemonize) {
		rc = osmo_daemonize();
		if (rc < 0) {
			perror("Error during daemonize");
			exit(1);
		}
	}

	while (1) {
		rc = osmo_select_main(0);
		if (rc < 0)
			exit(3);
	}

	/* not reached */
	exit(0);
}
