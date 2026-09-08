
#include <asn1c/ANY.h>
#include <osmocom/core/talloc.h>
#include <osmocom/ranap/ranap_common_cn.h>
#include <osmocom/rua/rua_ies_defs.h>

#include "hnb-test.h"
#include "hnb-test-layers.h"

void hnb_test_rua_dt_handle(struct hnb_test *hnb, ANY_t *in)
{
	RUA_DirectTransferIEs_t ies;
	int rc;

	rc = rua_decode_directtransferies(&ies, in);
	if (rc < 0) {
		printf("failed to decode RUA DT IEs\n");
		return;
	}

	/* Tell the RANAP/NAS layer which signalling connection this belongs
	 * to, so that replies go back on the CS or the PS connection. */
	if (ies.cN_DomainIndicator == RUA_CN_DomainIndicator_ps_domain)
		hnb->cur_chan = hnb->ps.chan;
	else
		hnb->cur_chan = hnb->cs.chan;

	rc = ranap_cn_rx_co(hnb_test_rua_dt_handle_ranap, hnb, ies.ranaP_Message.buf, ies.ranaP_Message.size);

	hnb->cur_chan = NULL;

	/* FIXME: what to do with the asn1c-allocated memory */
	rua_free_directtransferies(&ies);
}

/* The CN released the signalling connection: forget the channel so that a
 * new "channel" VTY command can open another one for that domain. */
void hnb_test_rua_disc_handle(struct hnb_test *hnb, ANY_t *in)
{
	RUA_DisconnectIEs_t ies;
	int rc;

	rc = rua_decode_disconnecties(&ies, in);
	if (rc < 0) {
		printf("failed to decode RUA Disconnect IEs\n");
		return;
	}

	if (ies.cN_DomainIndicator == RUA_CN_DomainIndicator_ps_domain) {
		printf("RUA Disconnect on the PS domain\n");
		if (hnb->ps.chan)
			talloc_free(hnb->ps.chan);
		hnb->ps.chan = NULL;
	} else {
		printf("RUA Disconnect on the CS domain\n");
		if (hnb->cs.chan)
			talloc_free(hnb->cs.chan);
		hnb->cs.chan = NULL;
	}

	rua_free_disconnecties(&ies);
}

void hnb_test_rua_cl_handle(struct hnb_test *hnb, ANY_t *in)
{
	RUA_ConnectionlessTransferIEs_t ies;
	int rc;

	rc = rua_decode_connectionlesstransferies(&ies, in);
	if (rc < 0) {
		printf("failed to decode RUA CL IEs\n");
		return;
	}

	rc = ranap_cn_rx_cl(hnb_test_rua_cl_handle_ranap, hnb, ies.ranaP_Message.buf, ies.ranaP_Message.size);

	/* FIXME: what to do with the asn1c-allocated memory */
	rua_free_connectionlesstransferies(&ies);
}

