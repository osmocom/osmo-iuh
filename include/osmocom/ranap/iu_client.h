#pragma once

#include <stdbool.h>

#include <osmocom/core/linuxlist.h>
#include <osmocom/gsm/gsm48.h>
#include <osmocom/sigtran/sccp_sap.h>

struct msgb;
struct osmo_auth_vector;

struct RANAP_RAB_SetupOrModifiedItemIEs_s;
struct RANAP_Cause;

struct ranap_iu_rnc;

/* Debugging switches from asn1c and osmo-iuh */
extern int asn_debug;
extern int asn1_xer_print;

enum ranap_nsap_addr_enc {
	RANAP_NSAP_ADDR_ENC_X213,
	RANAP_NSAP_ADDR_ENC_V4RAW,
};

enum ranap_conn_state {
	RANAP_CONN_STATE_CONNECTED,
	RANAP_CONN_STATE_DISCONNECTED,
};

struct ranap_ue_conn_ctx {
	struct llist_head list;
	struct ranap_iu_rnc *rnc;
	uint32_t conn_id;
	int integrity_active;
	struct gprs_ra_id ra_id;
	enum ranap_nsap_addr_enc rab_assign_addr_enc;
	enum ranap_conn_state conn_state;
};

enum ranap_iu_event_type {
	RANAP_IU_EVENT_RAB_ASSIGN,
	RANAP_IU_EVENT_SECURITY_MODE_COMPLETE,
	RANAP_IU_EVENT_IU_RELEASE, /* An actual Iu Release message was received */
	RANAP_IU_EVENT_LINK_INVALIDATED, /* A SUA link was lost or closed down */
	RANAP_IU_EVENT_SECURITY_MODE_FAILED, /* FIXME: unimplemented */
};

extern const struct value_string ranap_iu_event_type_names[];
static inline const char *ranap_iu_event_type_str(enum ranap_iu_event_type e)
{
	return get_value_string(ranap_iu_event_type_names, e);
}

/* Implementations of iu_recv_cb_t shall find the ranap_ue_conn_ctx in msg->dst. */
typedef int (* ranap_iu_recv_cb_t )(struct msgb *msg, struct gprs_ra_id *ra_id,
				    uint16_t *sai);

typedef int (* ranap_iu_event_cb_t )(struct ranap_ue_conn_ctx *ue_ctx,
				     enum ranap_iu_event_type type, void *data);

typedef int (* ranap_iu_rab_ass_resp_cb_t )(struct ranap_ue_conn_ctx *ue_ctx, uint8_t rab_id,
					    struct RANAP_RAB_SetupOrModifiedItemIEs_s *setup_ies);

int ranap_iu_init(void *ctx, int log_subsystem, const char *sccp_user_name, struct osmo_sccp_instance *sccp,
		  ranap_iu_recv_cb_t iu_recv_cb, ranap_iu_event_cb_t iu_event_cb);

int ranap_iu_tx(struct msgb *msg, uint8_t sapi);

int ranap_iu_page_cs(const char *imsi, const uint32_t *tmsi, uint16_t lac);
int ranap_iu_page_ps(const char *imsi, const uint32_t *ptmsi, uint16_t lac, uint8_t rac);

int ranap_iu_rab_act(struct ranap_ue_conn_ctx *ue_ctx, struct msgb *msg);
int ranap_iu_rab_deact(struct ranap_ue_conn_ctx *ue_ctx, uint8_t rab_id);
int ranap_iu_tx_sec_mode_cmd(struct ranap_ue_conn_ctx *uectx, struct osmo_auth_vector *vec,
			     int send_ck, int new_key);
int ranap_iu_tx_common_id(struct ranap_ue_conn_ctx *ue_ctx, const char *imsi);
int ranap_iu_tx_release(struct ranap_ue_conn_ctx *ctx, const struct RANAP_Cause *cause);

/* freeing the UE will release all resources
 * This will close the SCTP connection connected to the UE */
void ranap_iu_free_ue(struct ranap_ue_conn_ctx *ue_ctx);

void ranap_iu_vty_init(int iu_parent_node, enum ranap_nsap_addr_enc *rab_assign_addr_enc);
int ranap_iu_vty_config_write(struct vty *vty, const char *indent);
