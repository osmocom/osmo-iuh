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

static void *tall_hnb_ctx;
static void *tall_ue_ctx;
static void *tall_sua_ctx;
void *talloc_asn1_ctx;

struct hnb_gw g_hnb_gw = {
	.config = {
		.iuh_listen_port = IUH_DEFAULT_SCTP_PORT,
	},
};

struct ue_context *ue_context_by_id(uint32_t id)
{
	struct ue_context *ue;

	llist_for_each_entry(ue, &g_hnb_gw.ue_list, list) {
		if (ue->context_id == id)
			return ue;
	}
	return NULL;

}

struct ue_context *ue_context_by_imsi(const char *imsi)
{
	struct ue_context *ue;

	llist_for_each_entry(ue, &g_hnb_gw.ue_list, list) {
		if (!strcmp(ue->imsi, imsi))
			return ue;
	}
	return NULL;
}

static uint32_t get_next_ue_ctx_id(void)
{
	uint32_t id;

	do {
		id = g_hnb_gw.next_ue_ctx_id++;
	} while (ue_context_by_id(id));

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
	ue->context_id = get_next_ue_ctx_id();
	llist_add_tail(&ue->list, &g_hnb_gw.ue_list);

	return ue;
}

void ue_context_free(struct ue_context *ue)
{
	llist_del(&ue->list);
	talloc_free(ue);
}



static int hnb_read_cb(struct osmo_fd *fd)
{
	struct hnb_context *hnb = fd->data;
	struct sctp_sndrcvinfo sinfo;
	struct msgb *msg = msgb_alloc(IUH_MSGB_SIZE, "Iuh rx");
	int flags = 0;
	int rc;

	if (!msg)
		return -ENOMEM;

	/* we store a reference to the HomeNodeB in the msg->dest for the
	 * benefit of varoius downstream processing functions */
	msg->dst = hnb;

	rc = sctp_recvmsg(fd->fd, msgb_data(msg), msgb_tailroom(msg),
			  NULL, NULL, &sinfo, &flags);
	if (rc < 0) {
		LOGP(DMAIN, LOGL_ERROR, "Error during sctp_recvmsg()\n");
		/* FIXME: clean up after disappeared HNB */
		close(fd->fd);
		osmo_fd_unregister(fd);
		goto out;
	} else if (rc == 0) {
		LOGP(DMAIN, LOGL_ERROR, "Connection to HNB closed\n");
		/* TODO: Remove all UEs from that connection */
		close(fd->fd);
		osmo_fd_unregister(fd);
		fd->fd = -1;
		rc = -1;

		goto out;
	} else {
		msgb_put(msg, rc);
	}

	if (flags & MSG_NOTIFICATION) {
		LOGP(DMAIN, LOGL_DEBUG, "Ignoring SCTP notification\n");
		msgb_free(msg);
		return 0;
	}

	sinfo.sinfo_ppid = ntohl(sinfo.sinfo_ppid);

	switch (sinfo.sinfo_ppid) {
	case IUH_PPI_HNBAP:
		hnb->hnbap_stream = sinfo.sinfo_stream;
		rc = hnbgw_hnbap_rx(hnb, msg);
		break;
	case IUH_PPI_RUA:
		hnb->rua_stream = sinfo.sinfo_stream;
		rc = hnbgw_rua_rx(hnb, msg);
		break;
	case IUH_PPI_SABP:
	case IUH_PPI_RNA:
	case IUH_PPI_PUA:
		LOGP(DMAIN, LOGL_ERROR, "Unimplemented SCTP PPID=%u received\n",
		     sinfo.sinfo_ppid);
		rc = 0;
		break;
	default:
		LOGP(DMAIN, LOGL_ERROR, "Unknown SCTP PPID=%u received\n",
		     sinfo.sinfo_ppid);
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

/*! call-back when the listen FD has something to read */
static int listen_fd_cb(struct osmo_fd *fd, unsigned int what)
{
	struct hnb_gw *gw = fd->data;
	struct hnb_context *ctx;
	struct sockaddr_storage sockaddr;
	socklen_t len = sizeof(sockaddr);

	int new_fd = accept(fd->fd, (struct sockaddr *)&sockaddr, &len);
	if (new_fd < 0) {
		LOGP(DMAIN, LOGL_ERROR, "Iuh accept() failed\n");
		return new_fd;
	}

	LOGP(DMAIN, LOGL_INFO, "SCTP Connection accept()ed\n");

	ctx = talloc_zero(tall_hnb_ctx, struct hnb_context);
	if (!ctx)
		return -ENOMEM;

	ctx->gw = gw;
	osmo_wqueue_init(&ctx->wqueue, 16);
	ctx->wqueue.bfd.data = ctx;
	ctx->wqueue.bfd.fd = new_fd;
	ctx->wqueue.bfd.when = BSC_FD_READ;
	ctx->wqueue.read_cb = hnb_read_cb;
	ctx->wqueue.write_cb = hnb_write_cb;
	osmo_fd_register(&ctx->wqueue.bfd);

	llist_add_tail(&ctx->list, &gw->hnb_list);

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

static int sctp_sock_init(int fd)
{
	struct sctp_event_subscribe event;
	int rc;

	/* subscribe for all events */
	memset((uint8_t *)&event, 1, sizeof(event));
	rc = setsockopt(fd, IPPROTO_SCTP, SCTP_EVENTS,
			&event, sizeof(event));

	return rc;
}

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

	llist_for_each_entry(hnb, &g_hnb_gw.hnb_list, list) {
		vty_dump_hnb_info(vty, hnb);
	}

	return CMD_SUCCESS;
}

DEFUN(show_ue, show_ue_cmd, "show ue all", SHOW_STR "Display information about a UE")
{
	struct ue_context *ue;

	llist_for_each_entry(ue, &g_hnb_gw.ue_list, list) {
		vty_dump_ue_info(vty, ue);
	}

	return CMD_SUCCESS;
}

DEFUN(show_talloc, show_talloc_cmd, "show talloc", SHOW_STR "Display talloc info")
{
	talloc_report_full(tall_hnb_ctx, stderr);
	talloc_report_full(tall_ue_ctx, stderr);
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
	int rc;

	tall_hnb_ctx = talloc_named_const(NULL, 0, "hnb_context");
	tall_ue_ctx = talloc_named_const(NULL, 0, "ue_context");
	tall_sua_ctx = talloc_named_const(NULL, 0, "sua");
	talloc_asn1_ctx = talloc_named_const(NULL, 0, "asn1_context");

	g_hnb_gw.listen_fd.cb = listen_fd_cb;
	g_hnb_gw.listen_fd.when = BSC_FD_READ;
	g_hnb_gw.listen_fd.data = &g_hnb_gw;
	g_hnb_gw.next_ue_ctx_id = 23;
	INIT_LLIST_HEAD(&g_hnb_gw.hnb_list);
	INIT_LLIST_HEAD(&g_hnb_gw.ue_list);

	rc = osmo_init_logging(&hnbgw_log_info);
	if (rc < 0)
		exit(1);

	vty_init(&vty_info);
	hnbgw_vty_init();

	rc = telnet_init(NULL, &g_hnb_gw, 2323);
	if (rc < 0) {
		perror("Error binding VTY port");
		exit(1);
	}

	osmo_sua_set_log_area(DSUA);
	sua_user = osmo_sua_user_create(tall_sua_ctx, sccp_sap_up);
	if (!sua_user) {
		perror("Failed to init SUA");
		exit(1);
	}
	rc = osmo_sua_client_connect(sua_user, "127.0.0.1", SUA_PORT);
	if (rc < 0) {
		perror("Failed to connect SUA");
		exit(1);
	}
	sua_link = osmo_sua_client_get_link(sua_user);
	if (!sua_link) {
		perror("Failed to get SUA link");
		exit(1);
	}

	rc = osmo_sock_init_ofd(&g_hnb_gw.listen_fd, AF_INET, SOCK_STREAM,
			   IPPROTO_SCTP, NULL,
			   g_hnb_gw.config.iuh_listen_port, OSMO_SOCK_F_BIND);
	if (rc < 0) {
		perror("Error binding Iuh port");
		exit(1);
	}
	sctp_sock_init(g_hnb_gw.listen_fd.fd);

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
