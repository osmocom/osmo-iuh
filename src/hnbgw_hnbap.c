#include <osmocom/core/msgb.h>
#include <osmocom/core/utils.h>

#include <unistd.h>
#include <string.h>

#include "hnbap.h"
#include "hnbgw.h"
#include "hnbap_const.h"


static int hnbgw_hnbap_tx(struct HNBAP_PDU *pdu)
{
	/* FIXME */
}

static int hnbgw_tx_hnb_register_acc()
{
	/* FIXME */
	/* Single required response IE: RNC-ID */
}

static int hnbgw_tx_ue_register_acc()
{
	/* FIXME */
	/* Single required response IE: RNC-ID */
}

#define FIND_IE(cont, id) find_ie((const struct ProtocolIE_Container_1 *)cont, id)

static void *find_ie(const struct ProtocolIE_Container_1 *cont, ProtocolIE_ID id)
{
	int i;

	for (i = 0; i < cont->count; i++) {
		ProtocolIE_Field_1 *field = &cont->tab[i];
		if (field->id == id) {
			OSMO_ASSERT(field->value.type);
			/* FIXME: we shoudl check if it is the correct type, not just any type */
			return field->value.u.data;
		}
	}
	return NULL;
}

static inline uint16_t asn1str_to_u16(ASN1String *as)
{
	if (as->len < 2)
		return 0;
	else
		return *(uint16_t *)as->buf;
}

static inline uint8_t asn1str_to_u8(ASN1String *as)
{
	if (as->len < 1)
		return 0;
	else
		return *(uint8_t *)as->buf;
}

static inline uint8_t asn1bitstr_to_u32(ASN1BitString *as)
{
	if (as->len < 25)
		return 0;
	else
		return *(uint32_t *)as->buf;
}

static int hnbgw_rx_hnb_register_req(struct hnb_context *ctx, struct HNBRegisterRequest *req)
{
	HNB_Identity *identity =
		FIND_IE(&req->protocolIEs, HNBAP_IEI_HNB_Identity);
	HNB_Location_Information *loc =
		FIND_IE(&req->protocolIEs, HNBAP_IEI_HNB_Location_Information);
	PLMNidentity *plmn_id =
		FIND_IE(&req->protocolIEs, HNBAP_IEI_PLMNidentity);
	CellIdentity *cell_id =
		FIND_IE(&req->protocolIEs, HNBAP_IEI_CellIdentity);
	LAC *lac = FIND_IE(&req->protocolIEs, HNBAP_IEI_LAC);
	RAC *rac = FIND_IE(&req->protocolIEs, HNBAP_IEI_RAC);
	SAC *sac = FIND_IE(&req->protocolIEs, HNBAP_IEI_SAC);
	/* Optional: CSG-ID */

	if(!identity || !loc || !plmn_id || !cell_id || !lac || !rac || !sac)
		return -1;

	/* copy all identity parameters from the message to ctx */
	strncpy(ctx->identity_info, (const char *) identity->hNB_Identity_Info.buf,
		sizeof(ctx->identity_info));
	ctx->id.lac = asn1str_to_u16(lac);
	ctx->id.sac = asn1str_to_u16(sac);
	ctx->id.rac = asn1str_to_u8(rac);
	ctx->id.cid = asn1bitstr_to_u32(cell_id);
	//ctx->id.mcc FIXME
	//ctx->id.mnc FIXME

	/* FIXME: Send HNBRegisterAccept */
}

static int hnbgw_rx_ue_register_req(struct hnb_context *ctx, struct UERegisterRequest *req)
{
	UE_Identity *id =
		FIND_IE(&req->protocolIEs, HNBAP_IEI_UE_Identity);
	Registration_Cause *reg_cause =
		FIND_IE(&req->protocolIEs, HNBAP_IEI_RegistrationCause);
	UE_Capabilities *ue_cap =
		FIND_IE(&req->protocolIEs, HNBAP_IEI_UE_Capabilities);

	if (!id || !reg_cause || !ue_cap)
		return -1;

	/* FIXME: Send UERegisterAccept */
}

static int hnbgw_rx_initiating_msg(struct hnb_context *hnb, struct InitiatingMessage *imsg)
{
	int rc;

	switch (imsg->procedureCode) {
	case HNBAP_PC_HNBRegister:	/* 8.2 */
		if (imsg->value.type != asn1_type_HNBRegisterRequest)
			return -1;
		rc = hnbgw_rx_hnb_register_req(hnb, imsg->value.u.data);
		break;
	case HNBAP_PC_HNBDe_Register:	/* 8.3 */
		break;
	case HNBAP_PC_UERegister: 	/* 8.4 */
		if (imsg->value.type != asn1_type_UERegisterRequest)
			return -1;
		rc = hnbgw_rx_ue_register_req(hnb, imsg->value.u.data);
		break;
	case HNBAP_PC_UEDe_Register:	/* 8.5 */
		break;
	case HNBAP_PC_ErrorIndication:	/* 8.6 */
	case HNBAP_PC_TNLUpdate:	/* 8.9 */
	case HNBAP_PC_HNBConfigTransfer:	/* 8.10 */
	case HNBAP_PC_RelocationComplete:	/* 8.11 */
	case HNBAP_PC_U_RNTIQuery:	/* 8.12 */
	case HNBAP_PC_privateMessage:
		break;
	default:
		break;
	}
}

static int hnbgw_rx_successful_outcome_msg(struct hnb_context *hnb, struct SuccessfulOutcome *msg)
{

}

static int hnbgw_rx_unsuccessful_outcome_msg(struct hnb_context *hnb, struct UnsuccessfulOutcome *msg)
{

}


static int _hnbgw_hnbap_rx(struct hnb_context *hnb, struct HNBAP_PDU *pdu)
{
	int rc;

	/* it's a bit odd that we can't dispatch on procedure code, but
	 * that's not possible */
	switch (pdu->choice) {
	case HNBAP_PDU_initiatingMessage:
		rc = hnbgw_rx_initiating_msg(hnb, &pdu->u.initiatingMessage);
		break;
	case HNBAP_PDU_successfulOutcome:
		rc = hnbgw_rx_successful_outcome_msg(hnb, &pdu->u.successfulOutcome);
		break;
	case HNBAP_PDU_unsuccessfulOutcome:
		rc = hnbgw_rx_unsuccessful_outcome_msg(hnb, &pdu->u.unsuccessfulOutcome);
		break;
	default:
		return -1;
	}
}

int hnbgw_hnbap_rx(struct hnb_context *hnb, struct msgb *msg)
{
	/* FIXME: decode and handle to _hnbgw_hnbap_rx() */
}


int hnbgw_hnbap_init(void)
{

}
