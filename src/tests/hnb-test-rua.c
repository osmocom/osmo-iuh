
#include <asn1c/ANY.h>
#include "../rua_ies_defs.h"

struct ranap_message_s;

typedef void (*ranap_handle_cb)(void *ctx, struct ranap_message_s *ranap_msg);

extern void ranap_msg_dt_print(void *ctx, struct ranap_message_s *ranap_msg);
extern void ranap_msg_dt_get(void *ctx, struct ranap_message_s *ranap_msg);

static void direct_transfer_nas_pdu_handle(ANY_t *in, ranap_handle_cb handler, void *ctx)
{
	RUA_DirectTransferIEs_t ies;
	int rc;

	rc = rua_decode_directtransferies(&ies, in);
	if (rc < 0) {
		printf("print_rua_init_dt(): failed to decode rua IEs\n");
		return;
	}

	rc = ranap_cn_rx_co(handler, ctx, ies.ranaP_Message.buf, ies.ranaP_Message.size);

	/* FIXME: what to do with the asn1c-allocated memory */
	rua_free_directtransferies(&ies);
}

void direct_transfer_nas_pdu_print(ANY_t *in)
{
	direct_transfer_nas_pdu_handle(in, ranap_msg_dt_print, NULL);
}

void direct_transfer_nas_pdu_get(ANY_t *in, struct msgb *m)
{
	direct_transfer_nas_pdu_handle(in, ranap_msg_dt_get, m);
}
