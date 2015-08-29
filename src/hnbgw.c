
#include <osmocom/core/select.h>
#include <osmocom/core/socket.h>
#include <osmocom/core/linuxlist.h>

#include "hnbgw.h"

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
		return rc;
	} else
		msgb_put(msg, rc);

	switch (sinfo.sinfo_ppid) {
	case IUH_PPI_HNBAP:
		rc = hnbgw_hnbap_rx(hnb, msg);
		break;
	case IUH_PPI_RUA:
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

	return rc;
}

/*! call-back when the listen FD has something to read */
static int listen_fd_cb(struct osmo_fd *fd, unsigned int what)
{
	struct hnb_gw *gw = fd->data;
	struct hmb_context *ctx;
	struct sokaddr_storage sockaddr;
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
	osmo_fd_register(&cttx->socket);

	return 0;
}



{
	g_hnb_gw.listen_fd.cb = listen_fd_cb;
	g_hnb_gw.listen_fd.when = BSC_FD_READ;
	g_hnb_gw.listen_fd.data = &g_hnb_gw;

	osmo_sock_init_ofd(&g_hnb_gw.listen_fd, AF_INET, SOCK_STREAM,
			   IPPROTO_SCTP, "127.0.0.1",
			   g_hnb_gw.config.iuh_listen_port, OSMO_SOCK_F_BIND);
}
