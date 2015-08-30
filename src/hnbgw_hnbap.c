#include <osmocom/core/msgb.h>
#include <osmocom/core/utils.h>

#include <unistd.h>
#include <errno.h>
#include <string.h>

#include "asn1helpers.h"

#include "hnbap.h"
#include "hnbgw.h"
#include "hnbap_const.h"

#define IU_MSG_NUM_IES		32
#define IU_MSG_NUM_EXT_IES	32

/* common structure of a HNBAP / RUA / RANAP message, must have identical
 * memory footprint as the other messages, such as HNBRegisterRequest */
struct iu_common_msg {
	ProtocolIE_Container_1 protocolIEs;
	BOOL protocolExtensions_option;
	ProtocolIE_Container_1 protocolExtensions;
};

/* Add an IE to a Iu message
 * \param _msg Message to which we want to add
 * \param[in] ie Information Element to be added (ffasn1c generated struct)
 * \param[in] iei Information Element Identifier
 * \param[in] type asn1_type of the IE
 * \param[in] ext should this be an extension field?
 */
int iu_msg_add_ie(void *_msg, void *ie, int iei, ASN1CType *type, int ext)
{
	struct iu_common_msg *msg = _msg;
	ProtocolIE_Field_1 *field;

	if (ext) {
		msg->protocolExtensions_option = TRUE;
		if (msg->protocolExtensions.count >= IU_MSG_NUM_EXT_IES)
			return -ERANGE;
		field = &msg->protocolExtensions.tab[msg->protocolExtensions.count++];
	} else {
		if (msg->protocolIEs.count >= IU_MSG_NUM_IES)
			return -ERANGE;
		field = &msg->protocolIEs.tab[msg->protocolIEs.count++];
	}

	field->id = iei;
	//field->criticality = FIXME;
	field->value.type = type;
	field->value.u.data = ie;

	return 0;
}



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
#if 0
	HNBAP_PDU pdu;
	HNBRegisterAccept hnb_reg_acc;

	hnb_reg_acc.protocol_IEs

	pdu.choice = HNBAP_PDU_successfulOutcome;
	pdu.u.successfulOutcome.procedureCode = HNBAP_PC_HNBRegister;
	pdu.u.successfulOutcome.criticality = ;
	pdu.u.successfulOutcome.value.type = asn1_type_HNBRegisterAccept;
	pdu.u.successfulOutcome.value.u.data = &hnb_reg_acc;
#endif
	/* FIXME */
	/* Single required response IE: RNC-ID */
}

/* we type-cast to ProtocolIE_Container_1, as all the containers structs have
 * the same definiition.  This is of course ugly, but I see no cleaner way.
 * Similarly, from the IEI it is clear what the type should be, but in a
 * statically typed language we can only return 'void *' and hope the caller
 * doesn the right typecast. */
#define FIND_IE(cont, id) find_ie((const struct ProtocolIE_Container_1 *)cont, id)
static void *find_ie(const struct ProtocolIE_Container_1 *cont, ProtocolIE_ID id)
{
	int i;

	/* iterate over the array of IEs in the IE container and look for the first
	 * occurrence of the right IEI */
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
	asn1_strncpy(ctx->identity_info, &identity->hNB_Identity_Info,
		sizeof(ctx->identity_info));
	ctx->id.lac = asn1str_to_u16(lac);
	ctx->id.sac = asn1str_to_u16(sac);
	ctx->id.rac = asn1str_to_u8(rac);
	ctx->id.cid = asn1bitstr_to_u32(cell_id);
	//ctx->id.mcc FIXME
	//ctx->id.mnc FIXME

	DEBUGP(DMAIN, "HNB-REGISTER-REQ from %s\n", ctx->identity_info);

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
	HNBAP_PDU *pdu;
	ASN1Error err;
	int rc;

	/* decode and handle to _hnbgw_hnbap_rx() */

	rc = asn1_aper_decode(&pdu, asn1_type_HNBAP_PDU, msg->data, msgb_length(msg), &err);
	if (rc < 0) {
		LOGP(DMAIN, LOGL_ERROR, "Error in ASN.1 decode (bit=%d): %s\n", err.bit_pos, err.msg);
		return rc;
	}

	rc = _hnbgw_hnbap_rx(hnb, pdu);
	asn1_free_value(asn1_type_HNBAP_PDU, pdu);

	return rc;
}


int hnbgw_hnbap_init(void)
{

}
