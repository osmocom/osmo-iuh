#pragma once

#include <osmocom/core/select.h>
#include <osmocom/core/linuxlist.h>
#include <osmocom/core/write_queue.h>

#define DEBUG
#include <osmocom/core/logging.h>

#define msgb_ppid(msg)		(msg)->cb[0]

enum {
	DMAIN,
	DHNBAP,
};


/* 25.467 Section 7.1 */
#define IUH_DEFAULT_SCTP_PORT	29169
#define RNA_DEFAULT_SCTP_PORT	25471

#define IUH_PPI_RUA		19
#define IUH_PPI_HNBAP		20
#define IUH_PPI_SABP		31
#define IUH_PPI_RNA		42
#define IUH_PPI_PUA		55

#define IUH_MSGB_SIZE	2048

struct umts_cell_id {
	uint16_t mcc;	/*!< Mobile Country Code */
	uint16_t mnc;	/*!< Mobile Network Code */
	uint16_t lac;	/*!< Locaton Area Code */
	uint16_t rac;	/*!< Routing Area Code */
	uint16_t sac;	/*!< Service Area Code */
	uint32_t cid;	/*!< Cell ID */
};

struct hnb_gw;

struct hnb_context {
	/*! Entry in HNB-global list of HNB */
	struct llist_head list;
	/*! HNB-GW we are part of */
	struct hnb_gw *gw;
	/*! SCTP socket + write queue for Iuh to this specific HNB */
	struct osmo_wqueue wqueue;
	/*! copied from HNB-Identity-Info IE */
	char identity_info[256];
	/*! copied from Cell Identity IE */
	struct umts_cell_id id;

	/*! SCTP stream ID for HNBAP */
	uint16_t hnbap_stream;
	/*! SCTP stream ID for RUA */
	uint16_t rua_stream;
};

struct ue_context {
	/*! Entry in the HNB-global list of UE */
	struct llist_head list;
	/*! Unique Context ID for this UE */
	uint32_t context_id;
	char imsi[16+1];
	/*! UE is serviced via this HNB */
	struct hnb_context *hnb;
};

struct hnb_gw {
	struct {
		/*! SCTP port for Iuh listening */
		uint16_t iuh_listen_port;
		/*! The UDP port where we receive multiplexed CS user
		 * plane traffic from HNBs */
		uint16_t iuh_cs_mux_port;
		uint16_t rnc_id;
	} config;
	/*! SCTP listen socket for incoming connections */
	struct osmo_fd listen_fd;
	struct llist_head hnb_list;
	struct llist_head ue_list;
	uint32_t next_ue_ctx_id;
};

extern struct hnb_gw g_hnb_gw;

struct ue_context *ue_context_by_id(uint32_t id);
struct ue_context *ue_context_by_imsi(const char *imsi);
struct ue_context *ue_context_alloc(struct hnb_context *hnb, const char *imsi);
void ue_context_free(struct ue_context *ue);
