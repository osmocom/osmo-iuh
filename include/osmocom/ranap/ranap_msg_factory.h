#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <osmocom/ranap/RANAP_Cause.h>
#include <osmocom/ranap/RANAP_CN-DomainIndicator.h>
#include <osmocom/ranap/RANAP_GlobalRNC-ID.h>
#include <osmocom/ranap/RANAP_ChosenIntegrityProtectionAlgorithm.h>
#include <osmocom/ranap/RANAP_ChosenEncryptionAlgorithm.h>
#include <osmocom/ranap/RANAP_KeyStatus.h>

/*! \brief generate RANAP DIRECT TRANSFER message */
struct msgb *ranap_new_msg_dt(uint8_t sapi, const uint8_t *nas, unsigned int nas_len);

/*! \brief generate RANAP SECURITY MODE COMMAND message */
struct msgb *ranap_new_msg_sec_mod_cmd2(const uint8_t *ik, const uint8_t *ck, enum RANAP_KeyStatus status,
                                       uint8_t uia_bitmask, uint8_t uea_bitmask);

struct msgb *ranap_new_msg_sec_mod_cmd(const uint8_t *ik, const uint8_t *ck, enum RANAP_KeyStatus status);

/*! \brief generate RANAP SECURITY MODE COMPLETE message */
struct msgb *ranap_new_msg_sec_mod_compl(
	RANAP_ChosenIntegrityProtectionAlgorithm_t chosen_ip_alg,
	RANAP_ChosenEncryptionAlgorithm_t chosen_enc_alg);

/*! \brief generate RANAP COMMON ID message */
struct msgb *ranap_new_msg_common_id(const char *imsi);

/*! \brief generate RANAP IU RELEASE COMMAND message */
struct msgb *ranap_new_msg_iu_rel_cmd(const RANAP_Cause_t *cause_in);

/*! \brief generate RAPAP IU RELEASE COMPLETE message */
struct msgb *ranap_new_msg_iu_rel_compl(void);

/*! \brief generate RANAP PAGING COMMAND message */
struct msgb *ranap_new_msg_paging_cmd(const char *imsi, const uint32_t *tmsi, int is_ps, uint32_t cause);

/* Bit index of AMR or AMR-WB bitrates as passed to ranap_new_msg_rab_assign_voice_2() in order to select SDUs that
 * should be added to a RAB Assignment Request. */
enum osmo_ranap_rab_mode {
	/* This part intentionally corresponds to gsm0808_amr_mode */
	OSMO_RANAP_RAB_MODE_AMR_4_75 = 0,
	OSMO_RANAP_RAB_MODE_AMR_5_15,
	OSMO_RANAP_RAB_MODE_AMR_5_90,
	OSMO_RANAP_RAB_MODE_AMR_6_70,
	OSMO_RANAP_RAB_MODE_AMR_7_40,
	OSMO_RANAP_RAB_MODE_AMR_7_95,
	OSMO_RANAP_RAB_MODE_AMR_10_2,
	OSMO_RANAP_RAB_MODE_AMR_12_2,
	OSMO_RANAP_RAB_MODE_AMR_SID,

	/* GSM-EFR
	 * used with OSMO_RANAP_RAB_MODE_AMR_12_2, see 3GPP TS 26.102 Table 6-2 RFCI Example 2. */
	OSMO_RANAP_RAB_MODE_GSM_EFR_SID,

	/* AMR-WB modes */
	OSMO_RANAP_RAB_MODE_AMR_WB_6_60,
	OSMO_RANAP_RAB_MODE_AMR_WB_8_85,
	OSMO_RANAP_RAB_MODE_AMR_WB_12_65,
	OSMO_RANAP_RAB_MODE_AMR_WB_14_25,
	OSMO_RANAP_RAB_MODE_AMR_WB_15_85,
	OSMO_RANAP_RAB_MODE_AMR_WB_18_25,
	OSMO_RANAP_RAB_MODE_AMR_WB_19_85,
	OSMO_RANAP_RAB_MODE_AMR_WB_23_05,
	OSMO_RANAP_RAB_MODE_AMR_WB_23_85,

	OSMO_RANAP_RAB_MODE_AMR_WB_SID,

	OSMO_RANAP_RAB_MODE_COUNT
};

/*! generate RANAP RAB ASSIGNMENT REQUEST message for CS (voice) */
struct msgb *ranap_new_msg_rab_assign_voice_2(uint8_t rab_id, uint32_t rtp_ip,
					      uint16_t rtp_port,
					      bool use_x213_nsap,
					      uint32_t rab_modes);

/*! same as ranap_new_msg_rab_assign_voice_2() with modes passed as
 * (1 << OSMO_RANAP_RAB_MODE_AMR_12_2) | (1 << * OSMO_RANAP_RAB_MODE_AMR_SID) */
struct msgb *ranap_new_msg_rab_assign_voice(uint8_t rab_id, uint32_t rtp_ip,
					    uint16_t rtp_port,
					    bool use_x213_nsap);

/*! \brief generate RANAP RAB ASSIGNMENT REQUEST message for PS (data) */
struct msgb *ranap_new_msg_rab_assign_data(uint8_t rab_id, uint32_t gtp_ip,
					   uint32_t gtp_tei, bool use_x213_nsap);

/*! \brief generate RANAP RESET message */
struct msgb *ranap_new_msg_reset(RANAP_CN_DomainIndicator_t domain,
				 const RANAP_Cause_t *cause);
struct msgb *ranap_new_msg_reset2(RANAP_CN_DomainIndicator_t domain,
				 const RANAP_Cause_t *cause,
				 RANAP_GlobalRNC_ID_t *rnc_id);

/*! \brief generate RANAP RESET ACK message */
struct msgb *ranap_new_msg_reset_ack(RANAP_CN_DomainIndicator_t domain,
				     RANAP_GlobalRNC_ID_t *rnc_id);


/*! \brief generate RANAP INITIAL UE message */
struct msgb *ranap_new_msg_initial_ue(uint32_t conn_id, int is_ps,
				     RANAP_GlobalRNC_ID_t *rnc_id,
				     uint8_t *nas_pdu, unsigned int nas_len);

/*! \brief generate RANAP IU RELEASE REQUEST message */
struct msgb *ranap_new_msg_iu_rel_req(const RANAP_Cause_t *cause);

/*! \brief generate RANAP RAB RELEASE REQUEST message */
struct msgb *ranap_new_msg_rab_rel_req(uint8_t rab_id, const RANAP_Cause_t *cause);
