#pragma once
#include <osmocom/core/linuxlist.h>
#include <osmocom/netif/stream.h>

#define LOGPSC(client, level, fmt, args...) \
	LOGP(DSABP, level, "%s: " fmt, sabp_server_client_name(client), ## args)

struct osmo_sabp_server_client;
struct osmo_fsm_inst;

/* a SABP server */
struct osmo_sabp_sever {
	/* libosmo-netif stream server */
	struct osmo_stream_srv_link *link;

	/* clients connected to this server */
	struct llist_head clients;

	/* receive call-back; called for every received message */
	int (*rx_cb)(struct osmo_sabp_server_client *client, struct SABP_SABP_PDU *dec);
};

struct osmo_sabp_server_client {
	/* entry in osmo_cbsp_cbc.clients */
	struct llist_head list;
	/* stream server connection for this client */
	struct osmo_stream_srv *conn;
	/* partially received CBSP message (rx completion pending) */
	struct msgb *rx_msg;

	struct osmo_fsm_inst *fi;

	void *peer;
};

const char *sabp_server_client_name(const struct osmo_sabp_server_client *client);

void sabp_server_client_close(struct osmo_sabp_server_client *client);
struct osmo_sabp_server *sabp_server_create(void *ctx, const char *bind_ip, int bind_port,
					    int (*rx_cb)(struct osmo_sabp_server_client *client,
						    	 struct SABP_SABP_PDU *dec));
