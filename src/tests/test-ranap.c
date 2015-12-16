

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

static const enum RANAP_EncryptionAlgorithm enc_alg[2] = {
	RANAP_EncryptionAlgorithm_standard_UMTS_encryption_algorithm_UEA1,
	RANAP_EncryptionAlgorithm_standard_UMTS_encryption_algorithm_UEA2,
};

int ranap_tx_sec_mod_cmd(void)
{
	RANAP_SecurityModeCommandIEs_t ies;
	RANAP_SecurityModeCommand_t out;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));

	ies.presenceMask = SECURITYMODECOMMANDIES_RANAP_ENCRYPTIONINFORMATION_PRESENT;

	ASN_SEQUENCE_ADD(&ies.integrityProtectionInformation.permittedAlgorithms, &ip_alg[0]);
	ASN_SEQUENCE_ADD(&ies.integrityProtectionInformation.permittedAlgorithms, &ip_alg[1]);

	ies.integrityProtectionInformation.key; /* FIXME */
	if (0) {
		ASN_SEQUENCE_ADD(&ies.encryptionInformation.permittedAlgorithms, &enc_alg[0]);
		ASN_SEQUENCE_ADD(&ies.encryptionInformation.permittedAlgorithms, &enc_alg[1]);
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
						&asn_DEF_RANAP_ReleaseCommand,
						&out);
}

int ranap_tx_paging_cmd(const char *imsi, uint32_t *tmsi, uint32_t cause)
{
	RANAP_PagingIEs_s ies;
	RANAP_Paging_t out;

	memset(&ies, 0, sizeof(ies));

	if (is_ps)
		ies.cN_DomainIndicator = RANAP_CN_DomainIndicator_ps_domain;
	else
		ies.cN_DomainIndicator = RANAP_CN_DomainIndicator_cs_domain;

	ies.permanentNAS_UE_ID; /* FIXME */

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

	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_Iu_Paging,
						RANAP_Criticality_reject,
						&asn_DEF_RANAP_Paging,
						&out);
}



static RANAP_RAB_Parameters_t rab_par_voice = {
	.trafficClass = RANAP_TrafficClass_conversational,
	.rAB_AsymmetryIndicator = ANAP_RAB_AsymmetryIndicator_symmetric_bidirectional
	.maxBitrate = ,
	.deliveryOrder = RANAP_DeliveryOrder_delivery_order_not_requested
	.maxSDU_Size = 1234,
	.sDU_Parameters = ,
};

static RANAP_UserPlaneInformation_t rab_upl_voice = {
	.userPlaneMode = RANAP_UserPlaneMode_transparent_mode,
	.uP_ModeVersions = FIXME,
};

int ranap_tx_rab_assign()
{
	RANAP_ProtocolIE_FieldPair_t *pair;
	RANAP_RAB_AssignmentRequestIEs_t ies;
	RANAP_RAB_AssignmentRequest_t out;


	memset(&ies, 0, sizeof(ies));

	ies.presenceMask = RAB_ASSIGNMENTREQUESTIES_RANAP_RAB_SETUPORMODIFYLIST_PRESENT;
	/* RANAP_RAB_IE_ContainerPairList_t */

	RANAP_RAB_SetupOrModifyItemFirst_t first;

	first.rAB_ID = FIXME;
	first.nAS_SynchronisationIndicator = FIXME;
	first.rAB_Parameters = &rab_par_voice;
	first.userPlaneInformation = &rab_upl_voice;
	first.transportLayerInformation = NULL;

	RANAP_RAB_SetupOrModifyItemSecond_t second;


	pair = ranap_new_ie_pair(RANAP_ProtocolIE_ID_id_RAB_SetupOrModifyItem,
				 RANAP_Criticality_reject,
				 SetupOrModifyItemFirst, &first,
				 RANAP_Criticality_ignore,
				 SetupOrModifyItemSecond, &second);

	ASN_SEQUENCE_ADD(&ies.raB_SetupOrModifyList.list, pair);

	rc = ranap_encode_rab_assignmentrequesties(&out, &ies);
}
