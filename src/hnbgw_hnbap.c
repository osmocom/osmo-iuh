#include <osmocom/core/msgb.h>

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

struct ProtocolIE_Field_1 *find_ie(const struct ProtocolIE_Container_1 *cont, ProtocolIE_ID id)
{
	for (i = 0; i < cont->count; i++) {
		if (cont->tab[i].id == id)
			return &cont->tab[i];
	}
	return NULL;
}

static int hnbgw_rx_hnb_register_req(struct HNBRegisterRequest *req)
{
	HNB_Identity *identity =
		FIND_IE(req->protocolIEs, HNBAP_IEI_HNB_Identity);
	HNB_Location_Information *loc =
		FIND_IE(req->protocolIEs, HNBAP_IEI_HNB_Location_Information);
	PLMNidentity *plmn_id =
		FIND_IE(req->protocolIEs, HNBAP_IEI_PLMNidentity);
	CellIdentity *cell_id =
		FIND_IE(req->protocolIEs, HNBAP_IEI_CellIdentity);
	LAC *lac = FIND_IE(req->protocolIEs, HNBAP_IEI_LAC);
	RAC *rac = FIND_IE(req->protocolIEs, HNBAP_IEI_RAC);
	SAC *sac = FIND_IE(req->protocolIEs, HNBAP_IEI_SAC);
	/* Optional: CSG-ID */

	if(!identity || !loc || !plmn_id || !cell_id || !lac || !rac || !sac)
		return -1;

	/* FIXME: Send HNBRegisterAccept */
}

static int hnbgw_rx_ue_register_req(struct UERegisterRequest *req)
{
	UE_Identity *id =
		FIND_IE(req->protocolIEs, HNBAP_IEI_UE_Identity);
	Registration_Cause *reg_cause =
		FIND_IE(req->protocolIEs, HNBAP_IEI_RegistrationCause);
	UE_Capabilities *ue_cap =
		FIND_IE(req->protocolIEs, HNBAP_IEI_UE_Capabilities);

	if (!id || !reg_cause || !ue_cap)
		return -1;

	/* FIXME: Send UERegisterAccept */
}

static int hnbgw_rx_initiating_msg(struct InitiatingMessage *msg)
{
	int rc;

	switch (msg->procedureCode) {
	case HNBAP_PC_HNBRegister:	/* 8.2 */
		if (msg->value.type != asn1_type_HNBRegisterRequest)
			return -1;
		rc = hnbgw_rx_hnb_register_req();
		break;
	case HNBAP_PC_HNBDe_Register:	/* 8.3 */
		break;
	case HNBAP_PC_UERegister: 	/* 8.4 */
		if (msg->value.type != asn1_type_UERegisterRequest)
			return -1;
		rc = hnbgw_rx_ue_register_req();
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

static int hnbgw_rx_successful_outcome_msg(struct SuccessfulOutcome *msg)
{

}

static int hnbgw_rx_unsuccessful_outcome_msg(struct UnsuccessfulOutcome *msg)
{

}


static int _hnbgw_hnbap_rx(struct HNBAP_PDU *pdu)
{
	/* it's a bit odd that we can't dispatch on procedure code, but
	 * that's not possible */
	switch (pdu->choice) {
	case HNBAP_PDU_initiatingMessage:
		rc = hnbgw_rx_initiating_msg(&pdu->u.initiatingMessage);
		break;
	case HNBAP_PDU_successfulOutcome:
		rc = hnbgw_rx_successful_outcome_msg(&pdu->u.successfulOutcome);
		break;
	case HNBAP_PDU_unsuccessfulOutcome:
		rc = hnbgw_rx_unsuccessful_outcome_msg(&pdu->u.unsuccessfulOutcome);
		break;
	default:
		return -1;
	}
}

int hnbgw_hnbap_rx(struct msgb *msg)
{
	/* FIXME: decode and handle to _hnbgw_hnbap_rx() */
}


int hnbgw_hnbap_init(void)
{

}
