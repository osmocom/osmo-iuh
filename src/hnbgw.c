#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include <errno.h>
#include <signal.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/sctp.h>

#include <osmocom/core/application.h>
#include <osmocom/core/talloc.h>
#include <osmocom/core/select.h>
#include <osmocom/core/logging.h>
#include <osmocom/core/socket.h>
#include <osmocom/core/msgb.h>

#include <osmocom/vty/telnet_interface.h>
#include <osmocom/vty/logging.h>

#include "hnbgw.h"
#include "hnbgw_hnbap.h"

static void *tall_hnb_ctx;

struct hnb_gw g_hnb_gw = {
	.config = {
		.iuh_listen_port = IUH_DEFAULT_SCTP_PORT,
	},
};

static int hnb_socket_cb(struct osmo_fd *fd, unsigned int what)
{
	struct hnb_context *hnb = fd->data;
	struct sctp_sndrcvinfo sinfo;
	struct msgb *msg = msgb_alloc(IUH_MSGB_SIZE, "Iuh rx");
	int flags;
	int rc;

	if (!msg)
		return -ENOMEM;

	rc = sctp_recvmsg(fd->fd, msgb_data(msg), msgb_tailroom(msg),
			  NULL, NULL, &sinfo, &flags);
	if (rc < 0) {
		LOGP(DMAIN, LOGL_ERROR, "Error during sctp_recvmsg()\n");
		/* FIXME: clean up after disappeared HNB */
		return rc;
	} else
		msgb_put(msg, rc);

	switch (sinfo.sinfo_ppid) {
	case IUH_PPI_HNBAP:
		rc = hnbgw_hnbap_rx(hnb, msg);
		break;
	case IUH_PPI_RUA:
		//rc = hnbgw_rua_rx(hnb, msg);
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
	ctx->socket.data = ctx;
	ctx->socket.fd = new_fd;
	ctx->socket.when = BSC_FD_READ;
	ctx->socket.cb = hnb_socket_cb;
	osmo_fd_register(&ctx->socket);

	llist_add_tail(&ctx->list, &gw->hnb_list);

	return 0;
}

static const struct log_info_cat log_cat[] = {
	[DMAIN] = {
		.name = "DMAIN", .loglevel = LOGL_DEBUG, .enabled = 1,
		.color = "",
		.description = "Main program",
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

int main(int argc, char **argv)
{
	int rc;

	tall_hnb_ctx = talloc_named_const(NULL, 0, "hnb_context");

	g_hnb_gw.listen_fd.cb = listen_fd_cb;
	g_hnb_gw.listen_fd.when = BSC_FD_READ;
	g_hnb_gw.listen_fd.data = &g_hnb_gw;

	rc = osmo_init_logging(&hnbgw_log_info);
	if (rc < 0)
		exit(1);

	vty_init(&vty_info);

	rc = telnet_init(NULL, &g_hnb_gw, 2323);
	if (rc < 0) {
		perror("Error binding VTY port");
		exit(1);
	}

	rc = osmo_sock_init_ofd(&g_hnb_gw.listen_fd, AF_INET, SOCK_STREAM,
			   IPPROTO_SCTP, "127.0.0.1",
			   g_hnb_gw.config.iuh_listen_port, OSMO_SOCK_F_BIND);
	if (rc < 0) {
		perror("Error binding Iuh port");
		exit(1);
	}

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
