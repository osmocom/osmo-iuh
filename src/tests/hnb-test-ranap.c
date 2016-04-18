#include <osmocom/core/msgb.h>
#include <osmocom/ranap/ranap_ies_defs.h>

#include "hnb-test-layers.h"

static const char *printstr(OCTET_STRING_t *s)
{
	return osmo_hexdump((char*)s->buf, s->size);
}

#define PP(octet_string_t) \
	printf(#octet_string_t " = %s\n",\
	       printstr(&octet_string_t))

void hnb_test_rua_dt_handle_ranap(struct hnb_test *hnb,
				  struct ranap_message_s *ranap_msg)
{
	int len;
	char *data;
	RANAP_PermittedIntegrityProtectionAlgorithms_t *algs;
	RANAP_IntegrityProtectionAlgorithm_t *first_alg;

	printf("rx ranap_msg->procedureCode %d\n",
	       ranap_msg->procedureCode);

	switch (ranap_msg->procedureCode) {
	case RANAP_ProcedureCode_id_DirectTransfer:
		printf("rx DirectTransfer: presence = %hx\n",
		       ranap_msg->msg.directTransferIEs.presenceMask);
		PP(ranap_msg->msg.directTransferIEs.nas_pdu);

		len = ranap_msg->msg.directTransferIEs.nas_pdu.size;
		data = ranap_msg->msg.directTransferIEs.nas_pdu.buf;

		hnb_test_nas_rx_dtap(hnb, data, len);
		return;

	case RANAP_ProcedureCode_id_SecurityModeControl:
		printf("rx SecurityModeControl: presence = %hx\n",
		       ranap_msg->msg.securityModeCommandIEs.presenceMask);

		/* Just pick the first available IP alg, don't care about
		 * encryption (yet?) */
		algs = &ranap_msg->msg.securityModeCommandIEs.integrityProtectionInformation.permittedAlgorithms;
		if (algs->list.count < 1) {
			printf("Security Mode Command: No permitted algorithms.\n");
			return;
		}
		first_alg = *algs->list.array;

		hnb_test_rx_secmode_cmd(hnb, *first_alg);
		return;
	}
}
