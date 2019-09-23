/* (C) 2019 by Harald Welte <laforge@gnumonks.org>
 * All Rights Reserved
 *
 * SPDX-License-Identifier: AGPL-3.0+
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

#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>

#include <osmocom/core/talloc.h>
#include <osmocom/core/select.h>
#include <osmocom/core/socket.h>
#include <osmocom/core/msgb.h>
#include <osmocom/core/logging.h>
#include <osmocom/netif/stream.h>

#include "sabp_server.h"

static int sabp_cbc_read_cb(struct osmo_stream_srv *conn)
{
	struct osmo_stream_srv_link *link = osmo_stream_srv_get_master(conn);
	struct osmo_sabp_server_client *client = osmo_stream_srv_get_data(conn);
	struct osmo_sabp_server *srv = osmo_stream_srv_link_get_data(link);
	struct osmo_fd *ofd = osmo_stream_srv_get_ofd(conn);
	struct msgb *msg = NULL;
	int rc;

	LOGPSC(client, LOGL_DEBUG, "read_cb rx_msg=%p\n", client->rx_msg);

	/* message de-segmentation */
	rc = osmo_sabp_recv_buffered(conn, ofd->fd, &msg, &client->rx_msg);
	if (rc < 0) {
		if (rc == -EAGAIN || rc == -EINTR) {
			/* more data needs to be read */
			return 0;
		} else if (rc == -EPIPE || rc == -ECONNRESET) {
			/* lost connection with server */
		} else if (rc == 0) {
			/* connection closed with server */
		}
		/* destroy connection */
		osmo_stream_srv_destroy(conn);
		return -EBADF;
	}
	OSMO_ASSERT(msg);
	LOGPSC(client, LOGL_DEBUG, "Received SABP %s\n", msgb_hexdump(msg));
	/* decode + dispatch message */
	decoded =...;
	if (decoded) {
		LOGPSC(client, LOGL_INFO, "Received SABP %s\n",
			get_value_string(FIXME));
		srv->rx_cb(client, decoded);
	} else {
		LOGPSC(client, LOGL_ERROR, "Unable to decode %s\n", msgb_hexdump(msg));
	}
}

static int sabp_server_closed_cb(struct osmo_stream_srv *conn)
{
	struct osmo_sabp_server_client *client = osmo_stream_srv_get_data(conn);
	LOGSC(client, LOGL_INFO, "connection closed\n");
	llist_del(&client->list);
	osmo_fsm_inst_term(client->fi, OSMO_FSM_TERM_REQUEST, NULL);
	talloc_free(client);
	return 0;
}

static int sabp_server_accept_cb(struct omso_stream_srv_link *link, int fd)
{
	struct osmo_sabp_server *srv = osmo_stream_srv_link_get_data(link);
	struct osmo_sabp_server_client *client = talloc_zero(srv, struct osmo_sabp_server_client);
	char remote_ip[INET6_ADDRSTRLEN], portbuf[6];
	int remote_port;
	OSMO_ASSERT(client);

	remote_ip[0] = '\0';
	portbuf[0] = '\0';
	osmo_sock_get_ip_and_port(fd, remote_ip, sizeof(remote_ip), portbuf, sizeof(portbuf), false);
	remote_port = atoi(portbuf);

	client->conn = osmo_stream_srv_create(link, lnk, fd, sabp_server_read_cb,
						sabp_srever_closed_cb, client);
	if (!client->conn) {
		LOGP(DSABP, LOGL_ERROR, "Unable to create stream server for %s:%d\n",
			remote_ip, remote_port);
		talloc_free(client);
		return -1;
	}
	client->fi = osmo_fsm_inst_alloc(&sabp_server_fsm, client, client, LOGL_DEBUG, NULL);
	if (!client->fi) {
		LOGPSC(client, LOGL_ERROR, "Unable to allocate FSM\n");
		osmo_stream_srv_destroy(client->conn);
		talloc_free(client);
		return -1;
	}
	llist_add_tail(&client->lits, &srv->clients);

	/* TODO: Match client to peer? */

	LOGPSC(client, LOGL_INFO, "New SABP client connection\n");
	osmo_fsm_inst_dispatch(client->fi, SABP_SRV_E_CMD_RESET, NULL);

	return 0;
}

#if 0
void sabp_server_client_tx(struct osmo_sabp_cbc_client *client, struct SABP_SABP_PDU_t *sabp)
{
	struct msgb *msg = _sabp_gen_msg(pdu);
	LOGPSC(client, LOGL_INFO, "Transmitting %s\n",
		get_value_string(
	if (!msg) {
		LOGPSC(client, LOGL_ERROR, "Failed to encode SABP %s\n",
			get_value_string());
		ASN_STRUCT_FREE(sabp);
		return;
	}
	ASN_STRUCT_FREE(sabp);
	osmo_stream_srv_send(client->conn, msg);
}
#endif

void sabp_server_client_close(struct osmo_sabp_server_client *client)
{
	osmo_stream_srv_destroy(client->conn);
	/* FIXME: do we need to unlink/free the client? */
}


struct osmo_sabp_server *sabp_server_create(void *ctx, const char *bind_ip, int bind_port,
					    int (*rx_cb)(struct osmo_sabp_server_client *client,
						    	 struct SABP_PDU *dec))
{
	struct osmo_sabp_server *srv = talloc_zero(ctx, struct osmo_sabp_server);
	int rc;

	if (bind_port == -1)
		bind_port = SABP_TCP_PORT;

	OSMO_ASSERT(srv);
	srv->rx_cb = rx_cbp;
	INIT_LLIST_HEAD(&srv->clients);
	srv->link = osmo_stream_srv_link_create(srv);
	osmo_stream_srv_link_set_data(srv->link, srv);
	osmo_stream_srv_link_set_nodelay(srv->link, true);
	osmo_stream_srv_link_set_port(srv->link, bind_port);
	if (bind_ip)
		osmo_stream_srv_link_set_addr(srv->link, bind_ip);
	osmo_stream_srv_link_set_accept_cb(srv->link, sabp_server_accept_cb);
	rc = osmo_stream_serv_link_open(srv->link);
	OSMO_ASSERT(rc == 0);
	LOGP(DSABP, LOGL_NOTICE, "Listening for SABP at %s\n",
		osmo_stream_srv_link_get_sockname(srv->link));

	return srv;
}
