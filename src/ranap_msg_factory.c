/* high-level RANAP messsage generation code */

/* (C) 2015 by Harald Welte <laforge@gnumonks.org>
 * All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <osmocom/core/utils.h>
#include <osmocom/core/msgb.h>
#include <osmocom/core/socket.h>

#include "asn1helpers.h"
#include <osmocom/ranap/iu_helpers.h>

#include <osmocom/ranap/ranap_common.h>
#include <osmocom/ranap/ranap_ies_defs.h>
#include <osmocom/ranap/ranap_msg_factory.h>

#define DRANAP _ranap_DRANAP

/*! \brief allocate a new long and assing a value to it */
static long *new_long(long in)
{
	long *out = CALLOC(1, sizeof(long));
	*out = in;
	return out;
}

/*! \brief generate RANAP RESET message */
struct msgb *ranap_new_msg_reset(RANAP_CN_DomainIndicator_t domain,
				 const RANAP_Cause_t *cause)
{
	return ranap_new_msg_reset2(domain, cause, NULL);
}

/*! generate RANAP RESET message. Like ranap_new_msg_reset(), but allows passing a Global-RNC-ID. */
struct msgb *ranap_new_msg_reset2(RANAP_CN_DomainIndicator_t domain,
				  const RANAP_Cause_t *cause,
				  RANAP_GlobalRNC_ID_t *rnc_id)
{
	RANAP_ResetIEs_t ies;
	RANAP_Reset_t out;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));
	ies.cN_DomainIndicator = domain;
	if (cause)
		memcpy(&ies.cause, cause, sizeof(ies.cause));

	if (rnc_id) {
		ies.presenceMask = RESETIES_RANAP_GLOBALRNC_ID_PRESENT;
		OCTET_STRING_noalloc(&ies.globalRNC_ID.pLMNidentity,
				     rnc_id->pLMNidentity.buf,
				     rnc_id->pLMNidentity.size);
		ies.globalRNC_ID.rNC_ID = rnc_id->rNC_ID;
	}

	memset(&out, 0, sizeof(out));
	rc = ranap_encode_reseties(&out, &ies);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "error encoding reset IEs: %d\n", rc);
		return NULL;
	}

	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_Reset,
						RANAP_Criticality_reject,
						&asn_DEF_RANAP_Reset,
						&out);

	/* release dynamic allocations attached to dt */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_Reset, &out);

	return msg;
}

/*! \brief generate RANAP RESET ACK message */
struct msgb *ranap_new_msg_reset_ack(RANAP_CN_DomainIndicator_t domain,
				     RANAP_GlobalRNC_ID_t *rnc_id)
{
	RANAP_ResetAcknowledgeIEs_t ies;
	RANAP_ResetAcknowledge_t out;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));
	ies.cN_DomainIndicator = domain;

	/* The RNC shall include the globalRNC_ID in the RESET
	 * ACKNOWLEDGE message to the CN */
	if (rnc_id) {
		ies.presenceMask = RESETACKNOWLEDGEIES_RANAP_GLOBALRNC_ID_PRESENT;
		OCTET_STRING_noalloc(&ies.globalRNC_ID.pLMNidentity,
				     rnc_id->pLMNidentity.buf,
				     rnc_id->pLMNidentity.size);
		ies.globalRNC_ID.rNC_ID = rnc_id->rNC_ID;
	}

	/* FIXME: Do we need criticalityDiagnostics */

	memset(&out, 0, sizeof(out));
	rc = ranap_encode_resetacknowledgeies(&out, &ies);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "error encoding reset ack IEs: %d\n", rc);
		return NULL;
	}

	msg = ranap_generate_successful_outcome(RANAP_ProcedureCode_id_Reset,
						RANAP_Criticality_reject,
						&asn_DEF_RANAP_ResetAcknowledge,
						&out);

	/* release dynamic allocations attached to dt */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_ResetAcknowledge, &out);

	return msg;
}

/*! \brief generate RANAP INITIAL UE message */
struct msgb *ranap_new_msg_initial_ue(uint32_t conn_id, int is_ps,
				     RANAP_GlobalRNC_ID_t *rnc_id,
				     uint8_t *nas_pdu, unsigned int nas_len)
{
	RANAP_InitialUE_MessageIEs_t ies;
	RANAP_InitialUE_Message_t out;
	struct msgb *msg;
	uint32_t ctxidbuf;
	int rc;
	uint16_t buf0 = 0x2342;

	memset(&ies, 0, sizeof(ies));
	if (is_ps)
		ies.cN_DomainIndicator = RANAP_CN_DomainIndicator_ps_domain;
	else
		ies.cN_DomainIndicator = RANAP_CN_DomainIndicator_cs_domain;

	OCTET_STRING_noalloc(&ies.lai.pLMNidentity, rnc_id->pLMNidentity.buf, rnc_id->pLMNidentity.size);
	OCTET_STRING_noalloc(&ies.lai.lAC, (uint8_t *)&buf0, sizeof(buf0));

	OCTET_STRING_noalloc(&ies.sai.pLMNidentity, rnc_id->pLMNidentity.buf, rnc_id->pLMNidentity.size);
	OCTET_STRING_noalloc(&ies.sai.lAC, (uint8_t *)&buf0, sizeof(buf0));
	OCTET_STRING_noalloc(&ies.sai.sAC, (uint8_t *)&buf0, sizeof(buf0));

	OCTET_STRING_noalloc(&ies.nas_pdu, nas_pdu, nas_len);
	asn1_u24_to_bitstring(&ies.iuSigConId, &ctxidbuf, conn_id);
	OCTET_STRING_noalloc(&ies.globalRNC_ID.pLMNidentity, rnc_id->pLMNidentity.buf, rnc_id->pLMNidentity.size);
	ies.globalRNC_ID.rNC_ID = rnc_id->rNC_ID;

	memset(&out, 0, sizeof(out));
	rc = ranap_encode_initialue_messageies(&out, &ies);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "error encoding initial UE IEs: %d\n", rc);
		return NULL;
	}

	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_InitialUE_Message,
						RANAP_Criticality_ignore,
						&asn_DEF_RANAP_InitialUE_Message,
						&out);

	/* release dynamic allocations attached to dt */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_InitialUE_Message, &out);

	return msg;
}


/*! \brief generate RANAP DIRECT TRANSFER message */
struct msgb *ranap_new_msg_dt(uint8_t sapi, const uint8_t *nas, unsigned int nas_len)
{
	RANAP_DirectTransferIEs_t ies;
	RANAP_DirectTransfer_t dt;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));
	memset(&dt, 0, sizeof(dt));

	/* only SAPI optional field shall be present for CN->RNC */
	ies.presenceMask = DIRECTTRANSFERIES_RANAP_SAPI_PRESENT;

	if (sapi == 3)
		ies.sapi = RANAP_SAPI_sapi_3;
	else
		ies.sapi = RANAP_SAPI_sapi_0;

	/* Avoid copying + later freeing of OCTET STRING */
	OCTET_STRING_noalloc(&ies.nas_pdu, nas, nas_len);

	/* ies -> dt */
	rc = ranap_encode_directtransferies(&dt, &ies);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "error encoding direct transfer IEs: %d\n", rc);
		return NULL;
	}

	/* dt -> msg */
	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_DirectTransfer,
						RANAP_Criticality_ignore,
						&asn_DEF_RANAP_DirectTransfer,
						&dt);

	/* release dynamic allocations attached to dt */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_DirectTransfer, &dt);

	return msg;
}

/*! \brief generate RANAP SECURITY MODE COMMAND message.
 *  \param[in] ik 128bit integrity protection key (mandatory)
 *  \param[in] ck 128bit ciphering key (optional)
 *  \param[in] status key status
 *  \param[in] uia_bitmask bit-mask of UIA algorithms; Bit0 = UIA0 .. Bit2 = UIA2
 *  \param[in] uea_bitmask bit-mask of UEA algorithms; Bit0 = UEA0 .. Bit2 = UEA2; ck required
 *  \returns message buffer with encoded command message */
struct msgb *ranap_new_msg_sec_mod_cmd2(const uint8_t *ik, const uint8_t *ck, enum RANAP_KeyStatus status,
					uint8_t uia_bitmask, uint8_t uea_bitmask)
{
	RANAP_SecurityModeCommandIEs_t ies;
	RANAP_SecurityModeCommand_t out;
	struct msgb *msg;
	int i, rc;

	memset(&ies, 0, sizeof(ies));
	memset(&out, 0, sizeof(out));

	for (i = 0; i < 8; i++) {
		RANAP_IntegrityProtectionAlgorithm_t ialg;
		if (!(uia_bitmask & (1 << i)))
			continue;
		switch (i) {
		case 1:
			ialg = RANAP_IntegrityProtectionAlgorithm_standard_UMTS_integrity_algorithm_UIA1;
			break;
		case 2:
			ialg = RANAP_IntegrityProtectionAlgorithm_standard_UMTS_integrity_algorithm_UIA2;
			break;
		default:
			LOGP(DRANAP, LOGL_ERROR, "Unsupported UIA algorithm UIA%d specified\n", i);
			return NULL;
		}

		/* needs to be dynamically allocated, as
		 * SET_OF_free() will call FREEMEM() on it */
		RANAP_IntegrityProtectionAlgorithm_t *alg = CALLOC(1, sizeof(*alg));
		*alg = ialg;
		ASN_SEQUENCE_ADD(&ies.integrityProtectionInformation.permittedAlgorithms, alg);
	}

	BIT_STRING_fromBuf(&ies.integrityProtectionInformation.key, ik, 16*8);

	if (ck) {
		ies.presenceMask = SECURITYMODECOMMANDIES_RANAP_ENCRYPTIONINFORMATION_PRESENT;
		for (i = 0; i < 8; i++) {
			RANAP_EncryptionAlgorithm_t ealg;
			if (!(uea_bitmask & (1 << i)))
				continue;
			switch (i) {
			case 1:
				ealg = RANAP_EncryptionAlgorithm_standard_UMTS_encryption_algorith_UEA1;
				break;
			case 2:
				ealg = RANAP_EncryptionAlgorithm_standard_UMTS_encryption_algorithm_UEA2;
				break;
			default:
				LOGP(DRANAP, LOGL_ERROR, "Unsupported UEA algorithm UEA%d specified\n", i);
				asn_set_empty(&ies.integrityProtectionInformation.permittedAlgorithms);
				return NULL;
			}

			/* needs to be dynamically allocated, as
			 * SET_OF_free() will call FREEMEM() on it */
			RANAP_EncryptionAlgorithm_t *alg = CALLOC(1, sizeof(*alg));
			*alg = ealg;
			ASN_SEQUENCE_ADD(&ies.encryptionInformation.permittedAlgorithms, alg);
		}
		BIT_STRING_fromBuf(&ies.encryptionInformation.key, ck, 16*8);
	}

	ies.keyStatus = status;

	/* ies -> out */
	rc = ranap_encode_securitymodecommandies(&out, &ies);

	/* release dynamic allocations attached to ies */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_IntegrityProtectionInformation, &ies.integrityProtectionInformation);
	if (ck)
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_EncryptionInformation, &ies.encryptionInformation);

	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "error encoding security mode command IEs: %d\n", rc);
		return NULL;
	}

	/* out -> msg */
	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_SecurityModeControl,
						RANAP_Criticality_reject,
						&asn_DEF_RANAP_SecurityModeCommand,
						&out);

	/* release dynamic allocations attached to out */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_SecurityModeCommand, &out);

	return msg;
}
struct msgb *ranap_new_msg_sec_mod_cmd(const uint8_t *ik, const uint8_t *ck, enum RANAP_KeyStatus status)
{
	return ranap_new_msg_sec_mod_cmd2(ik, ck, status, 0x06, 0x06);
}

/*! \brief generate RANAP SECURITY MODE COMPLETE message */
struct msgb *ranap_new_msg_sec_mod_compl(
	RANAP_ChosenIntegrityProtectionAlgorithm_t chosen_ip_alg,
	RANAP_ChosenEncryptionAlgorithm_t chosen_enc_alg)
{
	RANAP_SecurityModeCompleteIEs_t ies;
	RANAP_SecurityModeComplete_t out;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));
	memset(&out, 0, sizeof(out));

	ies.presenceMask = SECURITYMODECOMPLETEIES_RANAP_CHOSENENCRYPTIONALGORITHM_PRESENT;
	ies.chosenIntegrityProtectionAlgorithm = chosen_ip_alg;
	ies.chosenEncryptionAlgorithm = chosen_enc_alg;

	/* ies -> out */
	rc = ranap_encode_securitymodecompleteies(&out, &ies);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "error encoding security mode complete IEs: %d\n", rc);
		return NULL;
	}

	/* out -> msg */
	msg = ranap_generate_successful_outcome(RANAP_ProcedureCode_id_SecurityModeControl,
						RANAP_Criticality_reject,
						&asn_DEF_RANAP_SecurityModeComplete,
						&out);

	/* release dynamic allocations attached to out */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_SecurityModeComplete, &out);

	return msg;
}

/*! \brief generate RANAP COMMON ID message */
struct msgb *ranap_new_msg_common_id(const char *imsi)
{
	RANAP_CommonID_IEs_t ies;
	RANAP_CommonID_t out;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));
	memset(&out, 0, sizeof(out));

	if (imsi) {
		uint8_t *imsi_buf = CALLOC(1, 16);
		rc = ranap_imsi_encode(imsi_buf, 16, imsi);
		ies.permanentNAS_UE_ID.present = RANAP_PermanentNAS_UE_ID_PR_iMSI;
		ies.permanentNAS_UE_ID.choice.iMSI.buf = imsi_buf;
		ies.permanentNAS_UE_ID.choice.iMSI.size = rc;
	} else
		ies.permanentNAS_UE_ID.present = RANAP_PermanentNAS_UE_ID_PR_NOTHING;

	/* ies -> out */
	rc = ranap_encode_commonid_ies(&out, &ies);

	/* release dynamic allocations attached to ies */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_PermanentNAS_UE_ID, &ies.permanentNAS_UE_ID);

	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "error encoding common id IEs: %d\n", rc);
		return NULL;
	}

	/* out -> msg */
	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_CommonID,
						RANAP_Criticality_ignore,
						&asn_DEF_RANAP_CommonID,
						&out);

	/* release dynamic allocations attached to out */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_CommonID, &out);

	return msg;
}

/*! \brief generate RANAP IU RELEASE COMMAND message */
struct msgb *ranap_new_msg_iu_rel_cmd(const RANAP_Cause_t *cause_in)
{
	RANAP_Iu_ReleaseCommandIEs_t ies;
	RANAP_Iu_ReleaseCommand_t out;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));
	memset(&out, 0, sizeof(out));

	memcpy(&ies.cause, cause_in, sizeof(ies.cause));

	/* ies -> out */
	rc = ranap_encode_iu_releasecommandies(&out, &ies);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "error encoding release command IEs: %d\n", rc);
		return NULL;
	}

	/* out -> msg */
	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_Iu_Release,
						RANAP_Criticality_reject,
						&asn_DEF_RANAP_Iu_ReleaseCommand,
						&out);

	/* release dynamic allocations attached to out */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_Iu_ReleaseCommand, &out);

	return msg;
}

/*! \brief generate RAPAP IU RELEASE COMPLETE message */
struct msgb *ranap_new_msg_iu_rel_compl(void)
{
	RANAP_Iu_ReleaseCompleteIEs_t ies;
	RANAP_Iu_ReleaseComplete_t out;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));
	memset(&out, 0, sizeof(out));

	/* ies -> out */
	rc = ranap_encode_iu_releasecompleteies(&out, &ies);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "error encoding release complete IEs: %d\n", rc);
		return NULL;
	}

	/* out -> msg */
	msg = ranap_generate_successful_outcome(RANAP_ProcedureCode_id_Iu_Release,
						RANAP_Criticality_reject,
						&asn_DEF_RANAP_Iu_ReleaseComplete,
						&out);

	/* release dynamic allocations attached to out */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_Iu_ReleaseComplete, &out);

	return msg;
}

/*! \brief generate RANAP PAGING COMMAND message */
struct msgb *ranap_new_msg_paging_cmd(const char *imsi, const uint32_t *tmsi, int is_ps, uint32_t cause)
{
	RANAP_PagingIEs_t ies;
	RANAP_Paging_t out;
	struct msgb *msg;
	uint8_t *imsi_buf = CALLOC(1, 16);
	int rc;

	memset(&ies, 0, sizeof(ies));
	memset(&out, 0, sizeof(out));

	/* put together the 'ies' */
	if (is_ps)
		ies.cN_DomainIndicator = RANAP_CN_DomainIndicator_ps_domain;
	else
		ies.cN_DomainIndicator = RANAP_CN_DomainIndicator_cs_domain;

	rc = ranap_imsi_encode(imsi_buf, 16, imsi);
	ies.permanentNAS_UE_ID.present = RANAP_PermanentNAS_UE_ID_PR_iMSI;
	ies.permanentNAS_UE_ID.choice.iMSI.buf = imsi_buf;
	ies.permanentNAS_UE_ID.choice.iMSI.size = rc;

	if (tmsi) {
		uint32_t *tmsi_buf = CALLOC(1, sizeof(*tmsi_buf));
		ies.presenceMask |= PAGINGIES_RANAP_TEMPORARYUE_ID_PRESENT;
		if (is_ps) {
			ies.temporaryUE_ID.present = RANAP_TemporaryUE_ID_PR_p_TMSI;
			asn1_u32_to_str(&ies.temporaryUE_ID.choice.tMSI, tmsi_buf, *tmsi);
		} else {
			ies.temporaryUE_ID.present = RANAP_TemporaryUE_ID_PR_tMSI;
			asn1_u32_to_str(&ies.temporaryUE_ID.choice.p_TMSI, tmsi_buf, *tmsi);
		}
	}

	if (cause) {
		ies.presenceMask |= PAGINGIES_RANAP_PAGINGCAUSE_PRESENT;
		ies.pagingCause = cause;
	}

	/* ies -> out */
	rc = ranap_encode_pagingies(&out, &ies);

	/* release dynamic allocation attached to ies */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_PermanentNAS_UE_ID, &ies.permanentNAS_UE_ID);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_TemporaryUE_ID, &ies.temporaryUE_ID);

	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "error encoding paging IEs: %d\n", rc);
		return NULL;
	}

	/* out -> msg */
	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_Paging,
						RANAP_Criticality_ignore,
						&asn_DEF_RANAP_Paging,
						&out);

	/* release dynamic allocations attached to out */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_Paging, &out);

	return msg;
}

static RANAP_SDU_ErrorRatio_t *new_sdu_error_ratio(long mantissa, long exponent)
{
	RANAP_SDU_ErrorRatio_t *err = CALLOC(1, sizeof(*err));

	err->mantissa = mantissa;
	err->exponent = exponent;

	return err;
}


static RANAP_SDU_FormatInformationParameterItem_t *
new_format_info_pars(long sdu_size)
{
	RANAP_SDU_FormatInformationParameterItem_t *fmti = CALLOC(1, sizeof(*fmti));
	fmti->subflowSDU_Size = new_long(sdu_size);
	return fmti;
}

enum sdu_par_profile {
	SDUPAR_P_VOICE0 = 0,
	SDUPAR_P_VOICE1 = 1,
	SDUPAR_P_VOICE2 = 2,
	SDUPAR_P_DATA,
};

/* See 3GPP TS 26.102 Table 6-2:
 *
 *  RAB subflows    Total
 *  1   2    3      bits    Source rate
 *
 *  42  53   0      95      AMR 4,75 kbps
 *  49  54   0      103     AMR 5,15 kbps
 *  55  63   0      118     AMR 5,9 kbps
 *  58  76   0      134     AMR 6,7 kbps
 *  61  87   0      148     AMR 7,4 kbps
 *  75  84   0      159     AMR 7,95 kbps
 *  65  99   40     204     AMR 10,2 kbps
 *  81  103  60     244     AMR 12,2 kbps
 *  39  0    0      39      AMR SID
 *  43  0    0      43      GSM-EFR SID
 *
 * See 3GPP TS 26.201 Table 2 and Table 3:
 *
 *  RAB subflows    Total
 *  1   2    3      bits    Source rate
 * 54  78    0      132     AMR-WB 6,60 kbps
 * 64  113   0      177     AMR-WB 8,85 kbps
 * 72  181   0      253     AMR-WB 12,65 kbps
 * 72  213   0      285     AMR-WB 14,25 kbps
 * 72  245   0      317     AMR-WB 15,85 kbps
 * 72  293   0      365     AMR-WB 18,25 kbps
 * 72  325   0      397     AMR-WB 19,85 kbps
 * 72  389   0      461     AMR-WB 23,05 kbps
 * 72  405   0      477     AMR-WB 23,85 kbps
 * 40  0     0      40      AMR-WB SID
 *
 * for example, to get AMR 12.2k with 244 bits in total,
 * put 81 in subflow 1, 103 in subflow 2, 60 in subflow 3.
 * Here that means 81 in VOICE0, 103 in VOICE1, 60 in VOICE2 (see enum sdu_par_profile).
 */
static int amr_mode_to_sdu_subflows[OSMO_RANAP_RAB_MODE_COUNT][3] = {
	[OSMO_RANAP_RAB_MODE_AMR_4_75] = { 42, 53, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_5_15] = { 49, 54, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_5_90] = { 55, 63, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_6_70] = { 58, 76, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_7_40] = { 61, 87, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_7_95] = { 75, 84, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_10_2] = { 65, 99, 40 },
	[OSMO_RANAP_RAB_MODE_AMR_12_2] = { 81, 103, 60 },
	[OSMO_RANAP_RAB_MODE_AMR_SID] = { 39, 0, 0 },
	[OSMO_RANAP_RAB_MODE_GSM_EFR_SID] = { 43, 0, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_WB_6_60] = { 54, 78, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_WB_8_85] = { 64, 113, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_WB_12_65] = { 72, 181, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_WB_14_25] = { 72, 213, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_WB_15_85] = { 72, 245, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_WB_18_25] = { 72, 293, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_WB_19_85] = { 72, 325, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_WB_23_05] = { 72, 389, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_WB_23_85] = { 72, 405, 0 },
	[OSMO_RANAP_RAB_MODE_AMR_WB_SID] = { 40, 0, 0 },
	/* Unset values remain 0 */
};

static inline int amr_mode_to_sdu_size(enum osmo_ranap_rab_mode mode)
{
	return amr_mode_to_sdu_subflows[mode][SDUPAR_P_VOICE0]
		+ amr_mode_to_sdu_subflows[mode][SDUPAR_P_VOICE1]
		+ amr_mode_to_sdu_subflows[mode][SDUPAR_P_VOICE2];
}

/* See Chapter 5 of TS 26.102 */
static RANAP_SDU_ParameterItem_t *new_sdu_par_item(enum sdu_par_profile profile, uint32_t rab_modes)
{
	RANAP_SDU_ParameterItem_t *sdui = CALLOC(1, sizeof(*sdui));
	int i;

	switch (profile) {
	case SDUPAR_P_VOICE0:
		sdui->sDU_ErrorRatio = new_sdu_error_ratio(1, 5);
		sdui->residualBitErrorRatio.mantissa = 1;
		sdui->residualBitErrorRatio.exponent = 6;
		sdui->deliveryOfErroneousSDU = RANAP_DeliveryOfErroneousSDU_yes;
		/* continue below to add SDU subflows */
		break;
	case SDUPAR_P_VOICE1:
		sdui->residualBitErrorRatio.mantissa = 1;
		sdui->residualBitErrorRatio.exponent = 3;
		sdui->deliveryOfErroneousSDU = RANAP_DeliveryOfErroneousSDU_no_error_detection_consideration;
		break;
	case SDUPAR_P_VOICE2:
		sdui->residualBitErrorRatio.mantissa = 5;
		sdui->residualBitErrorRatio.exponent = 3;
		sdui->deliveryOfErroneousSDU = RANAP_DeliveryOfErroneousSDU_no_error_detection_consideration;
		/* continue below to add SDU subflows */
		break;
	case SDUPAR_P_DATA:
		sdui->sDU_ErrorRatio = new_sdu_error_ratio(1, 4);
		sdui->residualBitErrorRatio.mantissa = 1;
		sdui->residualBitErrorRatio.exponent = 5;
		sdui->deliveryOfErroneousSDU = RANAP_DeliveryOfErroneousSDU_no;
		/* do not add voice subflows */
		goto return_ok;
	}

	/* 'profile' is now one of SDUPAR_P_VOICE[012] and indicates whether this is subflow 0, 1 or 2.
	 * Add each AMR mode's subflow size for this subflow. */
	sdui->sDU_FormatInformationParameters = CALLOC(1, sizeof(*sdui->sDU_FormatInformationParameters));
	for (i = 0; (i < OSMO_RANAP_RAB_MODE_COUNT) && ((1 << i) <= rab_modes); i++) {
		/* only add modes that are present in the bitmask */
		if ((rab_modes & (1 << i)) == 0)
			continue;

		ASN_SEQUENCE_ADD(sdui->sDU_FormatInformationParameters,
				 new_format_info_pars(amr_mode_to_sdu_subflows[i][profile]));
	}

return_ok:
	return sdui;
}

static RANAP_AllocationOrRetentionPriority_t *
new_alloc_ret_prio(RANAP_PriorityLevel_t level, int capability, int vulnerability,
		   int queueing_allowed)
{
	RANAP_AllocationOrRetentionPriority_t *arp = CALLOC(1, sizeof(*arp));

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

/* See Chapter 5 of TS 26.102.
 * \param[in] rab_modes  Bitmask composed from (1<<OSMO_RANAP_RAB_MODE_XX) bits. Each bit that is set results in a
 * predefined set of SDUs to be added to the RAB Assignment Request message. */
static RANAP_RAB_Parameters_t *new_rab_par_voice(uint32_t rab_modes)
{
	RANAP_RAB_Parameters_t *rab = CALLOC(1, sizeof(*rab));
	RANAP_SDU_ParameterItem_t *sdui;

	int bitrate_guaranteed = 6700;
	int bitrate_max = 12200;
	int sdu_size_max = 0;
	int i;
	for (i = 0; i < OSMO_RANAP_RAB_MODE_COUNT && (1 << i) <= rab_modes; i++) {
		int sdu_size;

		/* only add modes that are present in the bitmask */
		if ((rab_modes & (1 << i)) == 0)
			continue;

		sdu_size = amr_mode_to_sdu_size(i);
		if (sdu_size > sdu_size_max)
			sdu_size_max = sdu_size;
	}

	rab->trafficClass = RANAP_TrafficClass_conversational;
	rab->rAB_AsymmetryIndicator = RANAP_RAB_AsymmetryIndicator_symmetric_bidirectional;

	ASN_SEQUENCE_ADD(&rab->maxBitrate.list, new_long(bitrate_max));
	rab->guaranteedBitRate = CALLOC(1, sizeof(*rab->guaranteedBitRate));
	ASN_SEQUENCE_ADD(rab->guaranteedBitRate, new_long(bitrate_guaranteed));
	rab->deliveryOrder = RANAP_DeliveryOrder_delivery_order_requested;
	rab->maxSDU_Size = sdu_size_max;

	sdui = new_sdu_par_item(SDUPAR_P_VOICE0, rab_modes);
	ASN_SEQUENCE_ADD(&rab->sDU_Parameters, sdui);
	sdui = new_sdu_par_item(SDUPAR_P_VOICE1, rab_modes);
	ASN_SEQUENCE_ADD(&rab->sDU_Parameters, sdui);
	sdui = new_sdu_par_item(SDUPAR_P_VOICE2, rab_modes);
	ASN_SEQUENCE_ADD(&rab->sDU_Parameters, sdui);

	rab->transferDelay = new_long(80);
	rab->allocationOrRetentionPriority = new_alloc_ret_prio(RANAP_PriorityLevel_no_priority, 0, 1, 0);

	rab->sourceStatisticsDescriptor = new_long(RANAP_SourceStatisticsDescriptor_speech);

	return rab;
}

static RANAP_NAS_SynchronisationIndicator_t *new_rab_nas_sync_ind(int val)
{
	uint8_t val_buf = (val / 10) << 4;
	RANAP_NAS_SynchronisationIndicator_t *nsi = CALLOC(1, sizeof(*nsi));
	BIT_STRING_fromBuf(nsi, &val_buf, 4);
	return nsi;
}

static RANAP_RAB_Parameters_t *new_rab_par_data(uint32_t dl_max_bitrate, uint32_t ul_max_bitrate)
{
	RANAP_RAB_Parameters_t *rab = CALLOC(1, sizeof(*rab));
	RANAP_SDU_ParameterItem_t *sdui;

	rab->trafficClass = RANAP_TrafficClass_background;
	rab->rAB_AsymmetryIndicator = RANAP_RAB_AsymmetryIndicator_asymmetric_bidirectional;

	ASN_SEQUENCE_ADD(&rab->maxBitrate.list, new_long(dl_max_bitrate));
	ASN_SEQUENCE_ADD(&rab->maxBitrate.list, new_long(ul_max_bitrate));
	rab->deliveryOrder = RANAP_DeliveryOrder_delivery_order_requested;
	rab->maxSDU_Size = 8000;

	sdui = new_sdu_par_item(SDUPAR_P_DATA, 0);
	ASN_SEQUENCE_ADD(&rab->sDU_Parameters, sdui);

	rab->allocationOrRetentionPriority = new_alloc_ret_prio(RANAP_PriorityLevel_no_priority, 0, 0, 0);

	RANAP_ProtocolExtensionField_t *pxf = CALLOC(1, sizeof(*pxf));
	pxf->id = RANAP_ProtocolIE_ID_id_RAB_Parameter_ExtendedMaxBitrateList;
	pxf->criticality = RANAP_Criticality_ignore;

	RANAP_RAB_Parameter_ExtendedMaxBitrateList_t *rab_mbrlist = CALLOC(1, sizeof(*rab_mbrlist));
	RANAP_ExtendedMaxBitrate_t *xmbr = CALLOC(1, sizeof(*xmbr));
	*xmbr = 42000000;
	ASN_SEQUENCE_ADD(&rab_mbrlist->list, xmbr);

	ANY_fromType_aper(&pxf->value, &asn_DEF_RANAP_RAB_Parameter_ExtendedMaxBitrateList, rab_mbrlist);

	ASN_STRUCT_FREE(asn_DEF_RANAP_RAB_Parameter_ExtendedMaxBitrateList, rab_mbrlist);

	rab->iE_Extensions = CALLOC(1, sizeof(*rab->iE_Extensions));
	ASN_SEQUENCE_ADD(&rab->iE_Extensions->list, pxf);

	return rab;
}

static RANAP_UserPlaneInformation_t *new_upi(long mode, uint8_t mode_versions)
{
	RANAP_UserPlaneInformation_t *upi = CALLOC(1, sizeof(*upi));
	uint16_t *buf = CALLOC(1, sizeof(*buf));

	*buf = ntohs(mode_versions);

	upi->userPlaneMode = mode;
	upi->uP_ModeVersions.buf = (uint8_t *) buf;
	upi->uP_ModeVersions.size = sizeof(*buf);
	upi->uP_ModeVersions.bits_unused = 0;

	return upi;
}


static void assign_new_ra_id(RANAP_RAB_ID_t *id, uint8_t rab_id)
{
	uint8_t *buf = CALLOC(1, sizeof(*buf));
	*buf = rab_id;

	id->buf = buf;
	id->size = 1;
	id->bits_unused = 0;
}

/*! \brief generate RANAP RAB ASSIGNMENT REQUEST message for CS (voice).
 * See 3GPP TS 25.413 8.2.
 * RAB ID: 3GPP TS 25.413 9.2.1.2.
 * Add SDUs according to the 'rab_modes' argument, a bitmask indicating which AMR modes should be present.
 * The subflow sizes to add for specific AMR rates are chosen according to 3GPP TS 26.102 Table 6-2.
 * \param rtp_ip  MGW's RTP IPv4 address in *network* byte order.
 * \param rab_modes  Bitmask of AMR modes, indicating which SDUs to include in the generated message.
 */
struct msgb *ranap_new_msg_rab_assign_voice_2(uint8_t rab_id, uint32_t rtp_ip,
					      uint16_t rtp_port,
					      bool use_x213_nsap,
					      uint32_t rab_modes)
{
	RANAP_ProtocolIE_FieldPair_t *pair;
	RANAP_RAB_AssignmentRequestIEs_t ies;
	RANAP_RAB_AssignmentRequest_t out;
	struct msgb *msg;
	int rc;
	struct osmo_sockaddr rtp_addr;

	memset(&ies, 0, sizeof(ies));
	memset(&out, 0, sizeof(out));

	/* only assingnment is present, no release */
	ies.presenceMask = RAB_ASSIGNMENTREQUESTIES_RANAP_RAB_SETUPORMODIFYLIST_PRESENT;

	/* put together the 'First' part */
	RANAP_RAB_SetupOrModifyItemFirst_t first;
	memset(&first, 0, sizeof(first));
	assign_new_ra_id(&first.rAB_ID, rab_id);
	first.nAS_SynchronisationIndicator = new_rab_nas_sync_ind(60);
	first.rAB_Parameters = new_rab_par_voice(rab_modes);
	first.userPlaneInformation = new_upi(RANAP_UserPlaneMode_support_mode_for_predefined_SDU_sizes, 1); /* 2? */

	rtp_addr.u.sin.sin_family = AF_INET;
	rtp_addr.u.sin.sin_port = htons(rtp_port);
	rtp_addr.u.sin.sin_addr.s_addr = htonl(rtp_ip);
	first.transportLayerInformation = ranap_new_transp_info_rtp(&rtp_addr, use_x213_nsap);

	/* put together the 'Second' part */
	RANAP_RAB_SetupOrModifyItemSecond_t second;
	memset(&second, 0, sizeof(second));

	/* Build an IE Pair out of first and second part:
	 * (first, second) -> pair */
	pair = ranap_new_ie_pair(RANAP_ProtocolIE_ID_id_RAB_SetupOrModifyItem,
				 RANAP_Criticality_reject,
				 &asn_DEF_RANAP_RAB_SetupOrModifyItemFirst, &first,
				 RANAP_Criticality_ignore,
				 &asn_DEF_RANAP_RAB_SetupOrModifyItemSecond, &second);

	/* the pair has been made, we can release any of its elements */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RAB_SetupOrModifyItemFirst, &first);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RAB_SetupOrModifyItemSecond, &second);

	RANAP_ProtocolIE_ContainerPair_t *container_pair = CALLOC(1, sizeof(*container_pair));
	/* Add the pair to the list of IEs of the RAB ass.req */
	ASN_SEQUENCE_ADD(container_pair, pair);
	ASN_SEQUENCE_ADD(&ies.raB_SetupOrModifyList.list, container_pair);

	/* encode the IEs into the actual assignment request:
	 * ies -> out */
	rc = ranap_encode_rab_assignmentrequesties(&out, &ies);
	/* 'out' has been generated, we can now release the input */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RAB_SetupOrModifyList,
				      &ies.raB_SetupOrModifyList);
	if (rc < 0)
		return NULL;

	/* generate an Initiating Mesasage: out -> msg */
	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_RAB_Assignment,
						RANAP_Criticality_reject,
						&asn_DEF_RANAP_RAB_AssignmentRequest, &out);

	/* 'msg' has been generated, we cann now release the input 'out' */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RAB_AssignmentRequest, &out);

	return msg;
}

struct msgb *ranap_new_msg_rab_assign_voice(uint8_t rab_id, uint32_t rtp_ip,
					    uint16_t rtp_port,
					    bool use_x213_nsap)
{
	return ranap_new_msg_rab_assign_voice_2(rab_id, rtp_ip, rtp_port, use_x213_nsap,
						(1 << OSMO_RANAP_RAB_MODE_AMR_12_2)
						| (1 << OSMO_RANAP_RAB_MODE_AMR_SID));
}

/*! \brief generate RANAP RAB ASSIGNMENT REQUEST message for PS (data)
 * \param gtp_ip  SGSN's GTP IPv4 address in *network* byte order. */
struct msgb *ranap_new_msg_rab_assign_data(uint8_t rab_id, uint32_t gtp_ip,
					   uint32_t gtp_tei, bool use_x213_nsap)
{
	RANAP_ProtocolIE_FieldPair_t *pair;
	RANAP_RAB_AssignmentRequestIEs_t ies;
	RANAP_RAB_AssignmentRequest_t out;
	RANAP_DataVolumeReportingIndication_t *dat_vol_ind;
	struct msgb *msg;
	int rc;
	struct osmo_sockaddr gtp_addr;

	memset(&ies, 0, sizeof(ies));
	memset(&out, 0, sizeof(out));

	/* only assingnment is present, no release */
	ies.presenceMask = RAB_ASSIGNMENTREQUESTIES_RANAP_RAB_SETUPORMODIFYLIST_PRESENT;

	/* put together the 'First' part */
	RANAP_RAB_SetupOrModifyItemFirst_t first;
	memset(&first, 0, sizeof(first));
	assign_new_ra_id(&first.rAB_ID, rab_id);
	//first.nAS_SynchronisationIndicator = FIXME;

	first.rAB_Parameters = new_rab_par_data(1600000, 800000);
	first.userPlaneInformation = new_upi(RANAP_UserPlaneMode_transparent_mode, 1);

	gtp_addr.u.sin.sin_family = AF_INET;
	gtp_addr.u.sin.sin_addr.s_addr = htonl(gtp_ip);
	first.transportLayerInformation = ranap_new_transp_info_gtp(&gtp_addr, gtp_tei, use_x213_nsap);

	/* put together the 'Second' part */
	RANAP_RAB_SetupOrModifyItemSecond_t second;
	memset(&second, 0, sizeof(second));
	second.pDP_TypeInformation = CALLOC(1, sizeof(*second.pDP_TypeInformation));
	ASN_SEQUENCE_ADD(second.pDP_TypeInformation, new_long(RANAP_PDP_Type_ipv4));
	dat_vol_ind = CALLOC(1, sizeof(*dat_vol_ind));
	*dat_vol_ind = RANAP_DataVolumeReportingIndication_do_not_report;
	second.dataVolumeReportingIndication = dat_vol_ind;
	second.dl_GTP_PDU_SequenceNumber = new_long(0);
	second.ul_GTP_PDU_SequenceNumber = new_long(0);

	/* Build an IE Pair out of first and second part:
	 * (first, second) -> pair */
	pair = ranap_new_ie_pair(RANAP_ProtocolIE_ID_id_RAB_SetupOrModifyItem,
				 RANAP_Criticality_reject,
				 &asn_DEF_RANAP_RAB_SetupOrModifyItemFirst,
				 &first, RANAP_Criticality_ignore,
				 &asn_DEF_RANAP_RAB_SetupOrModifyItemSecond,
				 &second);

	/* the pair has been made, we can release any of its elements */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RAB_SetupOrModifyItemFirst, &first);
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RAB_SetupOrModifyItemSecond, &second);

	RANAP_ProtocolIE_ContainerPair_t *container_pair = CALLOC(1, sizeof(*container_pair));
	/* Add the pair to the list of IEs of the RAB ass.req */
	ASN_SEQUENCE_ADD(&container_pair->list, pair);
	/* Add the pair to the list of IEs of the RAB ass.req */
	ASN_SEQUENCE_ADD(&ies.raB_SetupOrModifyList.list, container_pair);

	/* encode the IEs into the actual assignment request:
	 * ies -> out */
	rc = ranap_encode_rab_assignmentrequesties(&out, &ies);
	/* 'out' has been generated, we can now release the input */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RAB_SetupOrModifyList,
				      &ies.raB_SetupOrModifyList);
	if (rc < 0)
		return NULL;

	/* generate an Initiating Mesasage: out -> msg */
	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_RAB_Assignment,
						RANAP_Criticality_reject,
						&asn_DEF_RANAP_RAB_AssignmentRequest, &out);

	/* 'msg' has been generated, we cann now release the input 'out' */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RAB_AssignmentRequest, &out);

	return msg;
}

/*! \brief generate RANAP IU RELEASE REQUEST message */
struct msgb *ranap_new_msg_iu_rel_req(const RANAP_Cause_t *cause)
{
	RANAP_Iu_ReleaseRequestIEs_t ies;
	RANAP_Iu_ReleaseRequest_t out;
	struct msgb *msg;
	int rc;

	memset(&ies, 0, sizeof(ies));
	memset(&out, 0, sizeof(out));

	memcpy(&ies.cause, cause, sizeof(ies.cause));

	rc = ranap_encode_iu_releaserequesties(&out, &ies);
	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "error encoding release request IEs: %d\n", rc);
		ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_Iu_ReleaseRequest, &out);
		return NULL;
	}

	/* encode the output into the msgb */
	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_Iu_ReleaseRequest,
						RANAP_Criticality_ignore,
						&asn_DEF_RANAP_Iu_ReleaseRequest, &out);

	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_Iu_ReleaseRequest, &out);

	return msg;
}

/*! \brief generate RANAP RAB RELEASE REQUEST message */
struct msgb *ranap_new_msg_rab_rel_req(uint8_t rab_id, const RANAP_Cause_t *cause)
{
	RANAP_RAB_ReleaseItemIEs_t item_ies;
	RANAP_RAB_ReleaseRequestIEs_t ies;
	RANAP_RAB_ReleaseRequest_t out;
	struct msgb *msg;
	int rc;

	memset(&item_ies, 0, sizeof(item_ies));
	memset(&ies, 0, sizeof(ies));
	memset(&out, 0, sizeof(out));

	/* put together the ReleaseItem */
	assign_new_ra_id(&item_ies.raB_ReleaseItem.rAB_ID, rab_id);
	memcpy(&item_ies.raB_ReleaseItem.cause, cause, sizeof(item_ies.raB_ReleaseItem.cause));

	/* add to the list */
	rc = ranap_encode_rab_releaseitemies(&ies.raB_ReleaseList, &item_ies);
	if (rc < 0)
		return NULL;
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RAB_ReleaseItem, &item_ies.raB_ReleaseItem);

	/* encoe the list IEs into the output */
	rc = ranap_encode_rab_releaserequesties(&out, &ies);

	/* 'out' has been generated, we can release the input */
	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RAB_ReleaseList, &ies.raB_ReleaseList);

	if (rc < 0) {
		LOGP(DRANAP, LOGL_ERROR, "error encoding release request IEs: %d\n", rc);
		return NULL;
	}

	/* encode the output into the msgb */
	msg = ranap_generate_initiating_message(RANAP_ProcedureCode_id_RAB_ReleaseRequest,
						RANAP_Criticality_ignore,
						&asn_DEF_RANAP_RAB_ReleaseRequest, &out);

	ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_RANAP_RAB_ReleaseRequest, &out);

	return msg;
}
