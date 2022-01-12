/* Common osmo-iuh test stub code */

/* (C) 2015 by Sysmocom s.f.m.c. GmbH
 * Author: Daniel Willmann <dwillmann@sysmocom.de>
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

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include <errno.h>
#include <signal.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/sctp.h>
#include <arpa/inet.h>

#include <asn1c/asn_internal.h>

#include <osmocom/core/application.h>
#include <osmocom/core/talloc.h>
#include <osmocom/core/logging.h>
#include <osmocom/core/msgb.h>

#include "test_common.h"

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
	[DRANAP] = {
		.name = "RANAP", .loglevel = LOGL_DEBUG, .enabled = 1,
		.color = "",
		.description = "RAN Application Part",
	},
	[DRUA] = {
		.name = "RUA", .loglevel = LOGL_DEBUG, .enabled = 1,
		.color = "",
		.description = "RANAP User Adaptation",
	},
};

static const struct log_info test_log_info = {
	.cat = log_cat,
	.num_cat = ARRAY_SIZE(log_cat),
};

static void *tall_hnb_ctx;
static void *msgb_ctx;

int test_common_init(void)
{
	int rc;

	tall_hnb_ctx = talloc_named_const(NULL, 0, "hnb_context");
	msgb_ctx = msgb_talloc_ctx_init(NULL, 0);
	talloc_asn1_ctx = talloc_named_const(NULL, 0, "asn1_context");

	rc = osmo_init_logging2(tall_hnb_ctx, &test_log_info);
	if (rc < 0)
		exit(1);

	log_set_print_filename2(osmo_stderr_target, LOG_FILENAME_NONE);
	log_set_use_color(osmo_stderr_target, 0);
	log_set_print_category(osmo_stderr_target, 0);
	log_set_print_category_hex(osmo_stderr_target, 0);
	return rc;
}

void test_common_cleanup(void)
{
	if (talloc_total_blocks(msgb_ctx) != 1
	    || talloc_total_size(msgb_ctx) != 0)
		talloc_report_full(msgb_ctx, stderr);

	OSMO_ASSERT(talloc_total_blocks(msgb_ctx) == 1);
	OSMO_ASSERT(talloc_total_size(msgb_ctx) == 0);
	talloc_free(msgb_ctx);

	if (talloc_total_blocks(talloc_asn1_ctx) != 1
	    || talloc_total_size(talloc_asn1_ctx) != 0)
		talloc_report_full(talloc_asn1_ctx, stderr);

	OSMO_ASSERT(talloc_total_blocks(talloc_asn1_ctx) == 1);
	OSMO_ASSERT(talloc_total_size(talloc_asn1_ctx) == 0);
	talloc_free(talloc_asn1_ctx);
}
