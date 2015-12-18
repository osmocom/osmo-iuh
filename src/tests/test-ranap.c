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
#include <osmocom/core/logging.h>
#include <osmocom/vty/logging.h>

#include "asn1helpers.h"
#include "iu_helpers.h"

#include "ranap_common.h"
#include "ranap_ies_defs.h"
#include "ranap_msg_factory.h"

#include "hnbgw.h"

void *talloc_asn1_ctx;
int asn1_xer_print = 1;

extern void *tall_msgb_ctx;

static const struct log_info_cat log_cat[] = {
	[DMAIN] = {
		.name = "DMAIN", .loglevel = LOGL_INFO, .enabled = 1,
		.color = "",
		.description = "Main program",
	},
	[DHNBAP] = {
		.name = "DHNBAP", .loglevel = LOGL_DEBUG, .enabled = 1,
		.color = "",
		.description = "Home Node B Application Part",
	},
};

static const struct log_info hnbgw_log_info = {
	.cat = log_cat,
	.num_cat = ARRAY_SIZE(log_cat),
};


int main(int argc, char **argv)
{
	uint8_t nas_buf[] = { 0xaa, 0xbb, 0xcc };
	struct msgb *msg;
	const char *imsi = "901700123456789";
	uint32_t tmsi = 0x01234567;
	uint32_t rtp_ip = 0x0a0b0c0d;
	uint16_t rtp_port = 2342;
	uint32_t gtp_ip = 0x1a1b1c1d;
	uint32_t gtp_tei = 0x11223344;
	uint8_t ik[16] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	uint8_t ck[16] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
	int i, rc;

	//asn_debug = 1;

	talloc_asn1_ctx = talloc_named_const(NULL, 1, "ASN");
	msgb_set_talloc_ctx(talloc_named_const(NULL, 1, "msgb"));

	rc = osmo_init_logging(&hnbgw_log_info);
	if (rc < 0)
		exit(1);

	for (i = 0; i < 1; i++) {
		printf("\n==> DIRECT TRANSFER\n");
		msg = ranap_new_msg_dt(0, nas_buf, sizeof(nas_buf));
		if (msg)
			printf("%s\n", msgb_hexdump(msg));
		msgb_free(msg);

		printf("\n==> SECURITY MODE COMMAND\n");
		msg = ranap_new_msg_sec_mod_cmd(ik, ck);
		if (msg)
			printf("%s\n", msgb_hexdump(msg));
		msgb_free(msg);

		printf("\n==> COMMON ID\n");
		msg = ranap_new_msg_common_id(imsi);
		if (msg)
			printf("%s\n", msgb_hexdump(msg));
		msgb_free(msg);

		printf("\n==> IU RELEASE CMD\n");
		RANAP_Cause_t cause = { .present = RANAP_Cause_PR_radioNetwork,
					.choice.radioNetwork = RANAP_CauseRadioNetwork_radio_connection_with_UE_Lost };
		msg = ranap_new_msg_iu_rel_cmd(&cause);
		if (msg)
			printf("%s\n", msgb_hexdump(msg));
		msgb_free(msg);

		printf("\n==> PAGING CMD\n");
		msg = ranap_new_msg_paging_cmd(imsi, &tmsi, 0, RANAP_PagingCause_terminating_conversational_call);
		if (msg)
			printf("%s\n", msgb_hexdump(msg));
		msgb_free(msg);

		printf("\n==> RAB ASSIGNMENT COMMAND (VOICE)\n");
		msg = ranap_new_msg_rab_assign_voice(1, rtp_ip, rtp_port);
		if (msg)
			printf("%s\n", msgb_hexdump(msg));
		msgb_free(msg);

		printf("\n==> RAB ASSIGNMENT COMMAND (DATA)\n");
		msg = ranap_new_msg_rab_assign_data(2, gtp_ip, gtp_tei);
		if (msg)
			printf("%s\n", msgb_hexdump(msg));
		msgb_free(msg);
	}

	printf("report\n");
	talloc_report(talloc_asn1_ctx, stdout);
	talloc_report(tall_msgb_ctx, stdout);
	//talloc_report(NULL, stdout);
	printf("exit\n");
	exit(0);
}
