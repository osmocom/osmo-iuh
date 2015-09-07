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
#include <osmocom/core/write_queue.h>

#include <osmocom/vty/telnet_interface.h>
#include <osmocom/vty/logging.h>

#include "hnbgw.h"
#include "hnbgw_hnbap.h"

static void *tall_hnb_ctx;
void *talloc_asn1_ctx;

struct hnb_gw g_hnb_gw = {
	.config = {
		.iuh_listen_port = IUH_DEFAULT_SCTP_PORT,
	},
};

static int hnb_read_cb(struct osmo_fd *fd)
{
	struct hnb_context *hnb = fd->data;
	struct sctp_sndrcvinfo sinfo;
	struct msgb *msg = msgb_alloc(IUH_MSGB_SIZE, "Iuh rx");
	int flags = 0;
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

	if (flags & MSG_NOTIFICATION) {
		LOGP(DMAIN, LOGL_INFO, "Ignoring SCTP notification\n");
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

	msgb_free(msg);
	return rc;
}

static int hnb_write_cb(struct osmo_fd *fd, struct msgb *msg)
{
	struct hnb_context *ctx = fd->data;
	struct sctp_sndrcvinfo sinfo = {
		.sinfo_ppid = htonl(msgb_ppid(msg)),
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

int main(int argc, char **argv)
{
	int rc;

	tall_hnb_ctx = talloc_named_const(NULL, 0, "hnb_context");
	talloc_asn1_ctx = talloc_named_const(NULL, 0, "asn1_context");

	g_hnb_gw.listen_fd.cb = listen_fd_cb;
	g_hnb_gw.listen_fd.when = BSC_FD_READ;
	g_hnb_gw.listen_fd.data = &g_hnb_gw;
	INIT_LLIST_HEAD(&g_hnb_gw.hnb_list);

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
