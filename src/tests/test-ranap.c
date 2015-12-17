
#include "asn1helpers.h"
#include "iu_helpers.h"

#include "ranap_common.h"
#include "ranap_ies_defs.h"

/* This is just some non-compiling work in progress code to generate the
 * minimum set of RANAP messages that the core network side needs to send
 * towards the RNC */

int ranap_tx_dt(uint8_t sapi, const uint8_t *nas, unsigned int nas_len)
{
	RANAP_DirectTransferIEs_t ies;
	RANAP_DirectTransfer_t dt;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));

	/* only SAPI optional field shall be present for CN->RNC */
	ies.presenceMask = DIRECTTRANSFERIES_RANAP_SAPI_PRESENT;

	if (sapi == 3)
		ies.sapi = RANAP_SAPI_sapi_3;
	else
		ies.sapi = RANAP_SAPI_sapi_0;

	ies.nas_pdu.buf = nas;
	ies.nas_pdu.size = nas_len;

	rc = ranap_encode_directtransferies(&dt, &ies);

	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_DirectTransfer,
						RANAP_Criticality_reject,
						&asn_DEF_RANAP_DirectTransfer,
						&dt);
	/* FIXME: Hand that to RUA or SCCP */
}

static const enum RANAP_IntegrityProtectionAlgorithm ip_alg[2] = {
	RANAP_IntegrityProtectionAlgorithm_standard_UMTS_integrity_algorithm_UIA1,
	RANAP_IntegrityProtectionAlgorithm_standard_UMTS_integrity_algorithm_UIA2,
};

static const RANAP_EncryptionAlgorithm_t enc_alg[2] = {
	RANAP_EncryptionAlgorithm_standard_UMTS_encryption_algorith_UEA1,
	RANAP_EncryptionAlgorithm_standard_UMTS_encryption_algorithm_UEA2,
};

int ranap_tx_sec_mod_cmd(void)
{
	RANAP_SecurityModeCommandIEs_t ies;
	RANAP_SecurityModeCommand_t out;
	struct msgb *msg;
	int i, rc;

	memset(&ies, 0, sizeof(ies));

	ies.presenceMask = SECURITYMODECOMMANDIES_RANAP_ENCRYPTIONINFORMATION_PRESENT;

	for (i = 0; i < ARRAY_SIZE(ip_alg); i++) {
		/* needs to be dynamically allocated, as
		 * SET_OF_free() will call FREEMEM() on it */
		RANAP_IntegrityProtectionAlgorithm_t *alg = MALLOC(*alg);
		*alg = ip_alg[i];
		ASN_SEQUENCE_ADD(&ies.integrityProtectionInformation.permittedAlgorithms, alg);
	}

	ies.integrityProtectionInformation.key; /* FIXME */
	if (0) {
		for (i = 0; i < ARRAY_SIZE(ip_alg); i++) {
			/* needs to be dynamically allocated, as
			 * SET_OF_free() will call FREEMEM() on it */
			RANAP_EncryptionAlgorithm_t *alg = MALLOC(*alg);
			*alg = enc_alg[i];
			ASN_SEQUENCE_ADD(&ies.encryptionInformation.permittedAlgorithms, alg);
		}
		ies.encryptionInformation.key; /* FIXME */
	}

	ies.keyStatus = RANAP_KeyStatus_new;	/* FIXME */

	rc = ranap_encode_securitymodecommandies(&out, &ies);

	asn_sequence_empty(&ies.integrityProtectionInformation.permittedAlgorithms);
	asn_sequence_empty(&ies.encryptionInformation.permittedAlgorithms);

	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_SecurityModeControl,
						RANAP_Criticality_reject,
						&asn_DEF_RANAP_SecurityModeCommand,
						&out);
}

int ranap_tx_common_id(const char *imsi)
{
	RANAP_CommonID_IEs_t ies;
	RANAP_CommonID_t out;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));

	if (imsi) {
		ies.permanentNAS_UE_ID.present = RANAP_PermanentNAS_UE_ID_PR_iMSI;
		ies.permanentNAS_UE_ID.choice.iMSI; /* FIXME */
	} else
		ies.permanentNAS_UE_ID.present = RANAP_PermanentNAS_UE_ID_PR_NOTHING;

	rc = ranap_encode_commonidies(&out, &ies);

	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_CommonID,
						RANAP_Criticality_ignore,
						&asn_DEF_RANAP_CommonID,
						&out);
}

int ranap_tx_iu_rel_cmd(RANAP_Cause_t cause)
{
	RANAP_Iu_ReleaseCommandIEs_t ies;
	RANAP_Iu_ReleaseCommand_t out;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));

	ies.cause = cause;

	rc = ranap_encode_iu_releasecommandies(&out, &ies);

	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_Iu_Release,
						RANAP_Criticality_reject,
						&asn_DEF_RANAP_Iu_ReleaseCommand,
						&out);
}

int ranap_tx_paging_cmd(const char *imsi, uint32_t *tmsi, int is_ps, uint32_t cause)
{
	RANAP_PagingIEs_t ies;
	RANAP_Paging_t out;
	struct msgb *msg;
	uint8_t *imsi_buf = CALLOC(1, 16);
	int rc;

	memset(&ies, 0, sizeof(ies));

	if (is_ps)
		ies.cN_DomainIndicator = RANAP_CN_DomainIndicator_ps_domain;
	else
		ies.cN_DomainIndicator = RANAP_CN_DomainIndicator_cs_domain;

	rc = encode_iu_imsi(imsi_buf, 16, imsi);
	ies.permanentNAS_UE_ID.present = RANAP_PermanentNAS_UE_ID_PR_iMSI;
	ies.permanentNAS_UE_ID.choice.iMSI.buf = imsi_buf;
	ies.permanentNAS_UE_ID.choice.iMSI.size = rc;

	if (tmsi) {
		ies.presenceMask |= PAGINGIES_RANAP_TEMPORARYUE_ID_PRESENT;
		if (is_ps) {
			ies.temporaryUE_ID.present = RANAP_TemporaryUE_ID_PR_p_TMSI;
			ies.temporaryUE_ID.choice.tMSI;
		} else {
			ies.temporaryUE_ID.present = RANAP_TemporaryUE_ID_PR_tMSI;
			ies.temporaryUE_ID.choice.p_TMSI;
		}
	}

	if (cause) {
		ies.presenceMask |= PAGINGIES_RANAP_PAGINGCAUSE_PRESENT;
		ies.pagingCause = cause;
	}

	rc = ranap_encode_iu_pagingies(&out, &ies);

	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_Paging,
						RANAP_Criticality_reject,
						&asn_DEF_RANAP_Paging,
						&out);
}

static RANAP_SDU_ErrorRatio_t *new_sdu_error_ratio(long mantissa, long exponent)
{
	RANAP_SDU_ErrorRatio_t *err = CALLOC(1, sizeof(*err));

	err->mantissa = mantissa;
	err->exponent = exponent;

	return err;
}


static RANAP_SDU_FormatInformationParameters_t *
new_format_info_pars(long sdu_size)
{
	RANAP_SDU_FormatInformationParameters_t *fmti = CALLOC(1, sizeof(*fmti));
	fmti->subflowSDU_Size = new_long(sdu_size);
	return fmti;
}

enum sdu_par_profile {
	SDUPAR_P_VOICE0,
	SDUPAR_P_VOICE1,
	SDUPAR_P_VOICE2,
	SDUPAR_P_DATA,
};

static RANAP_SDU_Parameters_t *new_sdu_pars(enum sdu_par_profile profile)
{
	RANAP_SDU_Parameters_t *sdup = MALLOC(sizeof(*sdup));
	RANAP_SDU_FormatInformationParameters_t *fmti;

	memset(&sdup, 0, sizeof(sdup));

	switch (profile) {
	case SDUPAR_P_VOICE0:
		sdup->sDU_ErrorRatio = new_sdu_error_ratio(1, 5);
		sdup->residualBitErrorRatio.mantissa = 1;
		sdup->residualBitErrorRatio.exponent = 6;
		sdup->deliveryOfErroneousSDU = RANAP_DeliveryOfErroneousSDU_yes;
		fmti = new_format_info_pars(81);
		ASN_SEQUENCE_ADD(&sdup->sDU_FormatInformationParameters, fmti);
		fmti = new_format_info_pars(39);
		ASN_SEQUENCE_ADD(&sdup->sDU_FormatInformationParameters, fmti);
		/* FIXME: could be 10 SDU descriptors for AMR! */
		break;
	case SDUPAR_P_VOICE1:
		sdup->residualBitErrorRatio.mantissa = 1;
		sdup->residualBitErrorRatio.exponent = 3;
		sudp->deliveryOfErroneousSDU = RANAP_DeliveryOfErroneousSDU_no_error_detection_consideration;
		fmti = new_format_info_pars(103);
		ASN_SEQUENCE_ADD(&sdup->sDU_FormatInformationParameters, fmti);
		fmti = new_format_info_pars(0);
		ASN_SEQUENCE_ADD(&sdup->sDU_FormatInformationParameters, fmti);
		/* FIXME: could be 10 SDU descriptors for AMR! */
		break;
	case SDUPAR_P_VOICE2:
		sdup->residualBitErrorRatio.mantissa = 5;
		sdup->residualBitErrorRatio.exponent = 3;
		sudp->deliveryOfErroneousSDU = RANAP_DeliveryOfErroneousSDU_no_error_detection_consideration;
		fmti = new_format_info_pars(60);
		ASN_SEQUENCE_ADD(&sdup->sDU_FormatInformationParameters, fmti);
		fmti = new_format_info_pars(0);
		ASN_SEQUENCE_ADD(&sdup->sDU_FormatInformationParameters, fmti);
		/* FIXME: could be 10 SDU descriptors for AMR! */
		break;
	case SDUPAR_P_DATA:
		sdup->sDU_ErrorRatio = new_sdu_error_ratio(1, 4);
		sdup->residualBitErrorRatio.mantissa = 1;
		sdup->residualBitErrorRatio.exponent = 5;
		sdup->deliveryOfErroneousSDU = RANAP_DeliveryOfErroneousSDU_no;
		break;
	}

	return sdup;
}

static long *new_long(long in)
{
	long *out = MALLOC(sizeof(long));
	*out = in;
	return out;
}

static RANAP_AllocationOrRetentionPriority_t *
new_alloc_ret_prio(RANAP_PriorityLevel_t level, bool capability, bool vulnerability,
		   bool qeueing_allowed)
{
	RANAP_AllocationOrRetentionPriority_t *arp = MALLOC(sizeof(*arp));

	arp->priorityLevel = level;

	if (capability)
		arp->pre_emptionCapability = RANAP_Pre_emptionCapability_may_trigger_pre_emption;
	else
		arp->pre_emptionCapability = RANAP_Pre_emptionCapability_shall_not_trigger_pre_emption;

	if (vulnerability)
		arp->pre_emptionVulnerability = RANAP_Pre_emptionVulnerability_pre_emptable;
	else
		arp->pre_emptionVulnerability = RANAP_Pre_emptionVulnerability_not_pre_emptable;

	if (queueing_allowed)
		arp->queuingAllowed = RANAP_QueuingAllowed_queueing_allowed;
	else
		arp->queuingAllowed = RANAP_QueuingAllowed_queueing_not_allowed;

	return arp;
}

static RANAP_RAB_Parameters_t *new_rab_par_voice(void)
{
	RANAP_RAB_Parameters_t *rab = CALLOC(1, sizeof(*rab));

	rab->trafficClass = RANAP_TrafficClass_conversational;
	rab->rAB_AsymmetryIndicator = RANAP_RAB_AsymmetryIndicator_symmetric_bidirectional;

	ASN_SEQUENCE_ADD(&rab->maxBitrate, new_long(12200));
	rab->guaranteedBitrate = MALLOC(sizeof(*rab->guaranteedBitrate));
	ASN_SEQUENCE_ADD(&rab->guaranteedBitrate, new_long(12200));
	rab->deliveryOrder = RANAP_DeliveryOrder_delivery_order_requested;
	rab->maxSDU_Size = 244;

	sdup = new_sdu_pars(SDUPAR_P_VOICE0);
	ASN_SEQUENCE_ADD(&rab->sDU_Parameters, sdup);
	sdup = new_sdu_pars(SDUPAR_P_VOICE1);
	ASN_SEQUENCE_ADD(&rab->sDU_Parameters, sdup);
	sdup = new_sdu_pars(SDUPAR_P_VOICE2);
	ASN_SEQUENCE_ADD(&rab->sDU_Parameters, sdup);

	rab->transferDelay = new_long(80);
	rab->allocationOrRetentionPriority = new_alloc_ret_prio(RANAP_PriorityLevel_no_priority, 0, 1, 0);

	rab->sourceStatisticsDescriptor = new_long(RANAP_SourceStatisticsDescriptor_speech);

	return rab;
}

static RANAP_RAB_Parameters_t *new_rab_par_data(void)
{
	RANAP_RAB_Parameters_t *rab = CALLOC(1, sizeof(*rab));

	rab->trafficClass = RANAP_TrafficClass_background;
	rab->rAB_AsymmetryIndicator = RANAP_RAB_AsymmetryIndicator_asymmetric_bidirectional;

	ASN_SEQUENCE_ADD(&rab->maxBitrate, new_long(16000000));
	ASN_SEQUENCE_ADD(&rab->maxBitrate, new_long(8000000));
	rab->deliveryOrder = RANAP_DeliveryOrder_delivery_order_requested;
	rab->maxSDU_Size = 8000;

	sdup = new_sdu_pars(SDUPAR_P_DATA);
	ASN_SEQUENCE_ADD(&rab->sDU_Parameters, sdup);

	rab->allocationOrRetentionPriority = new_alloc_ret_prio(RANAP_PriorityLevel_no_priority, 0, 0, 0);

	/* FIXME: RAB-Parameter-ExtendedMaxBitrateList for 42Mbps? */

	return rab;
}

static RANAP_TransportLayerInformation_t *new_transp_info_rtp(uint32_t ip, uint16_t port)
{
	RANAP_TransportLayerInformation_t *tli = CALLOC(1, sizeof(*tli));
	uint32_t *ipbuf = CALLOC(1, sizeof(*ipbuf));
	uint8_t binding_id[4];

	binding_id[0] = port >> 8;
	binding_id[1] = port & 0xff;
	binding_id[2] = binding_id[3] = 0;

	asn1_u32_to_bitstring(&tli->transportLayerAddress, ipbuf, htonl(ip));
	tli->iuTransportAssociation.present = RANAP_IuTransportAssociation_PR_bindingID;
	OCTET_STRING_fromBuf(tli->iuTransportAssociation.choice.bindingID.buf,
				(const char *) binding_id, sizeof(binding_id));

	return tli;
}

static RANAP_TransportLayerInformation_t *new_transp_info_gtp(uint32_t ip, uint32_t tei)
{
	RANAP_TransportLayerInformation_t *tli = CALLOC(1, sizeof(*tli));
	uint32_t *ipbuf = CALLOC(1, sizeof(*ipbuf));
	uint32_t binding_buf = htonl(tei);

	asn1_u32_to_bitstring(&tli->transportLayerAddress, ipbuf, htonl(ip));
	tli->iuTransportAssociation.present = RANAP_IuTransportAssociation_PR_gTP_TEI;
	OCTET_STRING_fromBuf(&tli->iuTransportAssociation.choice.bindingID,
			     (const char *) binding_buf, sizeof(binding_buf));

	return tli;
}

static RANAP_UserPlaneInformation_t *new_upi(long mode, uint8_t mode_versions)
{
	RANAP_UserPlaneInformation_t *upi = CALLOC(1, sizeof(*upi));
	uint8_t *buf = CALLOC(1, sizeof(*buf));

	*buf = mode_versions;

	upi->userPlaneMode = mode;
	upi->uP_ModeVersions.buf = buf;
	upi->uP_ModeVersions.size = 1;
	upi->uP_ModeVersions.bits_unused = 0;

	return upi;
}

int ranap_tx_rab_assign_voice(uint8_t rab_id)
{
	RANAP_ProtocolIE_FieldPair_t *pair;
	RANAP_RAB_AssignmentRequestIEs_t ies;
	RANAP_RAB_AssignmentRequest_t out;

	memset(&ies, 0, sizeof(ies));

	ies.presenceMask = RAB_ASSIGNMENTREQUESTIES_RANAP_RAB_SETUPORMODIFYLIST_PRESENT;
	/* RANAP_RAB_IE_ContainerPairList_t */

	RANAP_RAB_SetupOrModifyItemFirst_t first;

	first.rAB_ID = rab_id;
	first.nAS_SynchronisationIndicator = FIXME;
	first.rAB_Parameters = new_rab_par_voice();
	first.userPlaneInformation = new_upi(RANAP_UserPlaneMode_support_mode_for_predefined_SDU_sizes, 1); /* 2? */
	first.transportLayerInformation = new_transp_info_rtp(ip, port);

	RANAP_RAB_SetupOrModifyItemSecond_t second;
	memset(&second, 0, sizeof(second));

	pair = ranap_new_ie_pair(RANAP_ProtocolIE_ID_id_RAB_SetupOrModifyItem,
				 RANAP_Criticality_reject,
				 &asn_DEF_RANAP_RAB_SetupOrModifyItemFirst, &first,
				 RANAP_Criticality_ignore,
				 &asn_DEF_RANAP_RAB_SetupOrModifyItemSecond, &second);

	ASN_SEQUENCE_ADD(&ies.raB_SetupOrModifyList.list, pair);

	rc = ranap_encode_rab_assignmentrequesties(&out, &ies);
}

int ranap_tx_rab_assign_data(uint8_t rab_id, uint32_t gtp_ip, uint16_t gtp_port)
{
	RANAP_ProtocolIE_FieldPair_t *pair;
	RANAP_RAB_AssignmentRequestIEs_t ies;
	RANAP_RAB_AssignmentRequest_t out;
	RANAP_DataVolumeReportingIndication_t *dat_vol_ind = CALLOC(1, sizeof(*dat_vol_ind));
	int rc;

	memset(&ies, 0, sizeof(ies));

	ies.presenceMask = RAB_ASSIGNMENTREQUESTIES_RANAP_RAB_SETUPORMODIFYLIST_PRESENT;
	/* RANAP_RAB_IE_ContainerPairList_t */

	RANAP_RAB_SetupOrModifyItemFirst_t first;

	first.rAB_ID = rab_id;
	first.nAS_SynchronisationIndicator = FIXME;
	first.rAB_Parameters = new_rab_par_data();
	first.userPlaneInformation = new_upi(RANAP_UserPlaneMode_transparent_mode, 1);
	first.transportLayerInformation = new_transp_info_rtp(gtp_ip, gtp_port);

	RANAP_RAB_SetupOrModifyItemSecond_t second;
	memset(&second, 0, sizeof(second));
	second.pDP_TypeInformation = CALLOC(1, sizeof(*second.pDP_TypeInformation));
	ASN_SEQUENCE_ADD(&second.pDP_TypeInformation, new_long(RANAP_PDP_Type_ipv4));
	*dat_vol_ind = RANAP_DataVolumeReportingIndication_do_not_report;
	second.dataVolumeReportingIndication = dat_vol_ind;
	second.dl_GTP_PDU_SequenceNumber = new_long(0);
	second.ul_GTP_PDU_SequenceNumber = new_long(0);

	pair = ranap_new_ie_pair(RANAP_ProtocolIE_ID_id_RAB_SetupOrModifyItem,
				 RANAP_Criticality_reject,
				 &asn_DEF_RANAP_RAB_SetupOrModifyItemFirst, &first,
				 RANAP_Criticality_ignore,
				 &asn_DEF_RANAP_RAB_SetupOrModifyItemSecond, &second);

	ASN_SEQUENCE_ADD(&ies.raB_SetupOrModifyList.list, pair);

	rc = ranap_encode_rab_assignmentrequesties(&out, &ies);
}
