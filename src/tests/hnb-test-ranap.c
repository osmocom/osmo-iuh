#include <osmocom/core/msgb.h>
#include <osmocom/ranap/ranap_ies_defs.h>

static const char *printstr(OCTET_STRING_t *s)
{
	return osmo_hexdump((char*)s->buf, s->size);
}

#define PP(octet_string_t) \
	printf(#octet_string_t " = %s\n",\
	       printstr(&octet_string_t))

void ranap_msg_dt_print(void *ctx, ranap_message *ranap_msg)
{
	OSMO_ASSERT(ranap_msg->procedureCode ==
		    RANAP_ProcedureCode_id_DirectTransfer);

	printf("rx DirectTransfer: presence = %hx\n", ranap_msg->msg.directTransferIEs.presenceMask);
	PP(ranap_msg->msg.directTransferIEs.nas_pdu);
	
/*
typedef struct RANAP_DirectTransferIEs_s {
    uint16_t  presenceMask;
    RANAP_NAS_PDU_t nas_pdu;
    RANAP_LAI_t lai; ///< Optional field
    RANAP_RAC_t rac; ///< Optional field
    RANAP_SAI_t sai; ///< Optional field
    RANAP_SAPI_t sapi; ///< Optional field
} RANAP_DirectTransferIEs_t;
*/
}

void ranap_msg_dt_get(void *ctx, ranap_message *ranap_msg)
{
	struct msgb *m = ctx;
	OSMO_ASSERT(ranap_msg->procedureCode ==
		    RANAP_ProcedureCode_id_DirectTransfer);

	printf("rx DirectTransfer: presence = %hx\n", ranap_msg->msg.directTransferIEs.presenceMask);
	PP(ranap_msg->msg.directTransferIEs.nas_pdu);

	int len = ranap_msg->msg.directTransferIEs.nas_pdu.size;
	char *data = ranap_msg->msg.directTransferIEs.nas_pdu.buf;

	m->l3h = m->data;
	memcpy(msgb_put(m, len), data, len);
}
