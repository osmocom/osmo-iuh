#pragma once

#include <osmocom/core/select.h>
#include <osmocom/core/linuxlist.h>

struct hnb_context {
	/*! Entry in HNB-global list of HNB */
	struct llist_head list;
	/*! SCTP socket for Iuh to this specific HNB */
	struct osmo_fd socket;

	/*! copied from HNB-Identity-Info */
	char identity[256];
};

struct ue_context {
	struct llist_head list;
	uint32_t context_id;
};

struct hnb_gw {
	struct {
		/*! SCTP port for Iuh listening */
		uint16_t iuh_listen_port;
	} config;
	/*! SCTP listen socket for incoming connections */
	struct osmo_fd listen_fd;
	struct llist_head hnb_list;
};
