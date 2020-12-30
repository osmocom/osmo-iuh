/* main application for hnb-gw part of osmo-iuh */

/* (C) 2015 by Harald Welte <laforge@gnumonks.org>
 * (C) 2016 by sysmocom s.f.m.c. GmbH <info@sysmocom.de>
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
#include <stdbool.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/sctp.h>
#include <arpa/inet.h>

#include <osmocom/core/application.h>
#include <osmocom/core/talloc.h>
#include <osmocom/core/select.h>
#include <osmocom/core/logging.h>
#include <osmocom/core/socket.h>
#include <osmocom/core/msgb.h>
#include <osmocom/core/write_queue.h>
#include <osmocom/ctrl/control_if.h>
#include <osmocom/ctrl/control_cmd.h>
#include <osmocom/ctrl/control_vty.h>
#include <osmocom/ctrl/ports.h>
#include <osmocom/vty/telnet_interface.h>
#include <osmocom/vty/logging.h>
#include <osmocom/vty/command.h>
#include <osmocom/vty/ports.h>

#include <osmocom/netif/stream.h>

#include <osmocom/ranap/ranap_common.h>

#include <osmocom/sigtran/protocol/m3ua.h>
#include <osmocom/sigtran/sccp_sap.h>

#include <osmocom/iuh/hnbgw.h>
#include <osmocom/iuh/hnbgw_hnbap.h>
#include <osmocom/iuh/hnbgw_rua.h>
#include <osmocom/iuh/hnbgw_cn.h>
#include <osmocom/iuh/context_map.h>

static const char * const osmo_hnbgw_copyright =
	"OsmoHNBGW - Osmocom Home Node B Gateway implementation\r\n"
	"Copyright (C) 2016 by sysmocom s.f.m.c. GmbH <info@sysmocom.de>\r\n"
	"Contributions by Daniel Willmann, Harald Welte, Neels Hofmeyr\r\n"
	"License AGPLv3+: GNU AGPL version 3 or later <http://gnu.org/licenses/agpl-3.0.html>\r\n"
	"This is free software: you are free to change and redistribute it.\r\n"
	"There is NO WARRANTY, to the extent permitted by law.\r\n";

static void *tall_hnb_ctx;
void *talloc_asn1_ctx;

static struct hnb_gw *g_hnb_gw;

static struct hnb_gw *hnb_gw_create(void *ctx)
{
	struct hnb_gw *gw = talloc_zero(ctx, struct hnb_gw);

	/* strdup so we can easily talloc_free in the VTY code */
	gw->config.iuh_local_ip = talloc_strdup(gw, HNBGW_LOCAL_IP_DEFAULT);
	gw->config.iuh_local_port = IUH_DEFAULT_SCTP_PORT;
	gw->config.log_prefix_hnb_id = true;

	gw->next_ue_ctx_id = 23;
	INIT_LLIST_HEAD(&gw->hnb_list);
	INIT_LLIST_HEAD(&gw->ue_list);

	context_map_init(gw);

	return gw;
}

struct hnb_context *hnb_context_by_id(struct hnb_gw *gw, uint32_t cid)
{
	struct hnb_context *hnb;

	llist_for_each_entry(hnb, &gw->hnb_list, list) {
		if (hnb->id.cid == cid)
			return hnb;
	}

	return NULL;
}

struct hnb_context *hnb_context_by_identity_info(struct hnb_gw *gw, const char *identity_info)
{
	struct hnb_context *hnb;

	llist_for_each_entry(hnb, &gw->hnb_list, list) {
		if (strcmp(identity_info, hnb->identity_info) == 0)
			return hnb;
	}

	return NULL;
}


unsigned hnb_contexts(const struct hnb_gw *gw)
{
	unsigned num_ctx = 0;
	struct hnb_context *hnb;

	llist_for_each_entry(hnb, &gw->hnb_list, list) {
		num_ctx++;
	}

	return num_ctx;
}

struct ue_context *ue_context_by_id(struct hnb_gw *gw, uint32_t id)
{
	struct ue_context *ue;

	llist_for_each_entry(ue, &gw->ue_list, list) {
		if (ue->context_id == id)
			return ue;
	}
	return NULL;

}

struct ue_context *ue_context_by_imsi(struct hnb_gw *gw, const char *imsi)
{
	struct ue_context *ue;

	llist_for_each_entry(ue, &gw->ue_list, list) {
		if (!strcmp(ue->imsi, imsi))
			return ue;
	}
	return NULL;
}

struct ue_context *ue_context_by_tmsi(struct hnb_gw *gw, uint32_t tmsi)
{
	struct ue_context *ue;

	llist_for_each_entry(ue, &gw->ue_list, list) {
		if (ue->tmsi == tmsi)
			return ue;
	}
	return NULL;
}

void ue_context_free_by_hnb(struct hnb_gw *gw, const struct hnb_context *hnb)
{
	struct ue_context *ue, *tmp;

	llist_for_each_entry_safe(ue, tmp, &gw->ue_list, list) {
		if (ue->hnb == hnb)
			ue_context_free(ue);
	}
}

static uint32_t get_next_ue_ctx_id(struct hnb_gw *gw)
{
	uint32_t id;

	do {
		id = gw->next_ue_ctx_id++;
	} while (ue_context_by_id(gw, id));

	return id;
}

struct ue_context *ue_context_alloc(struct hnb_context *hnb, const char *imsi,
				    uint32_t tmsi)
{
	struct ue_context *ue;

	ue = talloc_zero(tall_hnb_ctx, struct ue_context);
	if (!ue)
		return NULL;

	ue->hnb = hnb;
	if (imsi)
		OSMO_STRLCPY_ARRAY(ue->imsi, imsi);
	else
		ue->imsi[0] = '\0';
	ue->tmsi = tmsi;
	ue->context_id = get_next_ue_ctx_id(hnb->gw);
	llist_add_tail(&ue->list, &hnb->gw->ue_list);

	LOGP(DHNBAP, LOGL_INFO, "created UE context: id 0x%x, imsi %s, tmsi 0x%x\n",
	     ue->context_id, imsi? imsi : "-", tmsi);

	return ue;
}

void ue_context_free(struct ue_context *ue)
{
	llist_del(&ue->list);
	talloc_free(ue);
}

static int hnb_read_cb(struct osmo_stream_srv *conn)
{
	struct hnb_context *hnb = osmo_stream_srv_get_data(conn);
	struct msgb *msg = msgb_alloc(IUH_MSGB_SIZE, "Iuh rx");
	int rc;

	if (!msg)
		return -ENOMEM;

	/* we store a reference to the HomeNodeB in the msg->dest for the
	 * benefit of varoius downstream processing functions */
	msg->dst = hnb;

	rc = osmo_stream_srv_recv(conn, msg);
	if (rc == -EAGAIN) {
		/* Notification received */
		msgb_free(msg);
		return 0;
	} else if (rc < 0) {
		LOGP(DMAIN, LOGL_ERROR, "Error during sctp_recvmsg()\n");
		/* FIXME: clean up after disappeared HNB */
		hnb_context_release(hnb);
		goto out;
	} else if (rc == 0) {
		hnb_context_release(hnb);
		rc = -1;

		goto out;
	} else {
		msgb_put(msg, rc);
	}

	switch (msgb_sctp_ppid(msg)) {
	case IUH_PPI_HNBAP:
		hnb->hnbap_stream = msgb_sctp_stream(msg);
		rc = hnbgw_hnbap_rx(hnb, msg);
		break;
	case IUH_PPI_RUA:
		hnb->rua_stream = msgb_sctp_stream(msg);
		rc = hnbgw_rua_rx(hnb, msg);
		break;
	case IUH_PPI_SABP:
	case IUH_PPI_RNA:
	case IUH_PPI_PUA:
		LOGP(DMAIN, LOGL_ERROR, "Unimplemented SCTP PPID=%lu received\n",
		     msgb_sctp_ppid(msg));
		rc = 0;
		break;
	default:
		LOGP(DMAIN, LOGL_ERROR, "Unknown SCTP PPID=%lu received\n",
		     msgb_sctp_ppid(msg));
		rc = 0;
		break;
	}

out:
	msgb_free(msg);
	return rc;
}

struct hnb_context *hnb_context_alloc(struct hnb_gw *gw, struct osmo_stream_srv_link *link, int new_fd)
{
	struct hnb_context *ctx;

	ctx = talloc_zero(tall_hnb_ctx, struct hnb_context);
	if (!ctx)
		return NULL;
	INIT_LLIST_HEAD(&ctx->map_list);

	ctx->gw = gw;
	ctx->conn = osmo_stream_srv_create(tall_hnb_ctx, link, new_fd, hnb_read_cb, NULL, ctx);
	if (!ctx->conn) {
		LOGP(DMAIN, LOGL_INFO, "error while creating connection\n");
		talloc_free(ctx);
		return NULL;
	}

	llist_add_tail(&ctx->list, &gw->hnb_list);
	return ctx;
}

static const char *umts_cell_id_name(const struct umts_cell_id *ucid)
{
	static __thread char buf[40];

	snprintf(buf, sizeof(buf), "%u-%u-L%u-R%u-S%u", ucid->mcc, ucid->mnc, ucid->lac, ucid->rac, ucid->sac);
	return buf;
}

const char *hnb_context_name(struct hnb_context *ctx)
{
	if (!ctx)
		return "NULL";

	if (ctx->gw->config.log_prefix_hnb_id)
		return ctx->identity_info;
	else
		return umts_cell_id_name(&ctx->id);
}

void hnb_context_release(struct hnb_context *ctx)
{
	struct hnbgw_context_map *map, *map2;

	/* remove from the list of HNB contexts */
	llist_del(&ctx->list);

	/* deactivate all context maps */
	llist_for_each_entry_safe(map, map2, &ctx->map_list, hnb_list) {
		/* remove it from list, as HNB context will soon be
		 * gone.  Let's hope the second osmo_llist_del in the
		 * map garbage collector works fine? */
		llist_del(&map->hnb_list);
		llist_del(&map->cn_list);
		context_map_deactivate(map);
	}
	ue_context_free_by_hnb(ctx->gw, ctx);

	osmo_stream_srv_destroy(ctx->conn);

	talloc_free(ctx);
}

/*! call-back when the listen FD has something to read */
static int accept_cb(struct osmo_stream_srv_link *srv, int fd)
{
	struct hnb_gw *gw = osmo_stream_srv_link_get_data(srv);
	struct hnb_context *ctx;

	ctx = hnb_context_alloc(gw, srv, fd);
	if (!ctx)
		return -ENOMEM;

	return 0;
}

static const struct log_info_cat log_cat[] = {
	[DMAIN] = {
		.name = "DMAIN", .loglevel = LOGL_NOTICE, .enabled = 1,
		.color = "",
		.description = "Main program",
	},
	[DHNBAP] = {
		.name = "DHNBAP", .loglevel = LOGL_NOTICE, .enabled = 1,
		.color = "",
		.description = "Home Node B Application Part",
	},
	[DRUA] = {
		.name = "DRUA", .loglevel = LOGL_NOTICE, .enabled = 1,
		.color = "",
		.description = "RANAP User Adaptation",
	},
	[DRANAP] = {
		.name = "DRANAP", .loglevel = LOGL_NOTICE, .enabled = 1,
		.color = "",
		.description = "RAN Application Part",
	},
};

static const struct log_info hnbgw_log_info = {
	.cat = log_cat,
	.num_cat = ARRAY_SIZE(log_cat),
};

static struct vty_app_info vty_info = {
	.name		= "OsmoHNBGW",
	.version	= PACKAGE_VERSION,
	.go_parent_cb	= hnbgw_vty_go_parent,
};

static struct {
	int daemonize;
	const char *config_file;
	bool log_disable_color;
	bool log_enable_timestamp;
	int log_level;
	const char *log_category_mask;
} hnbgw_cmdline_config = {
	0,
	"osmo-hnbgw.cfg",
	false,
	false,
	0,
	NULL,
};

static void print_usage()
{
	printf("Usage: osmo-hnbgw\n");
}

static void print_help()
{
	printf("  -h --help                  This text.\n");
	printf("  -d option --debug=DHNBAP:DRUA:DRANAP:DMAIN  Enable debugging.\n");
	printf("  -D --daemonize             Fork the process into a background daemon.\n");
	printf("  -c --config-file filename  The config file to use.\n");
	printf("  -s --disable-color\n");
	printf("  -T --timestamp             Prefix every log line with a timestamp.\n");
	printf("  -V --version               Print the version of OsmoHNBGW.\n");
	printf("  -e --log-level number      Set a global loglevel.\n");
}

static void handle_options(int argc, char **argv)
{
	while (1) {
		int option_index = 0, c;
		static struct option long_options[] = {
			{"help", 0, 0, 'h'},
			{"debug", 1, 0, 'd'},
			{"daemonize", 0, 0, 'D'},
			{"config-file", 1, 0, 'c'},
			{"disable-color", 0, 0, 's'},
			{"timestamp", 0, 0, 'T'},
			{"version", 0, 0, 'V' },
			{"log-level", 1, 0, 'e'},
			{0, 0, 0, 0}
		};

		c = getopt_long(argc, argv, "hd:Dc:sTVe:",
				long_options, &option_index);
		if (c == -1)
			break;

		switch (c) {
		case 'h':
			print_usage();
			print_help();
			exit(0);
		case 's':
			hnbgw_cmdline_config.log_disable_color = true;
			break;
		case 'd':
			hnbgw_cmdline_config.log_category_mask = optarg;
			break;
		case 'D':
			hnbgw_cmdline_config.daemonize = 1;
			break;
		case 'c':
			hnbgw_cmdline_config.config_file = optarg;
			break;
		case 'T':
			hnbgw_cmdline_config.log_enable_timestamp = true;
			break;
		case 'e':
			hnbgw_cmdline_config.log_level = atoi(optarg);
			break;
		case 'V':
			print_version(1);
			exit(0);
			break;
		default:
			/* catch unknown options *as well as* missing arguments. */
			fprintf(stderr, "Error in command line options. Exiting.\n");
			exit(-1);
			break;
		}
	}

	if (argc > optind) {
		fprintf(stderr, "Unsupported positional arguments on command line\n");
		exit(2);
	}
}

CTRL_CMD_DEFINE_RO(hnb_info, "info");
static int get_hnb_info(struct ctrl_cmd *cmd, void *data)
{
	struct hnb_context *hnb = data;

	cmd->reply = talloc_strdup(cmd, hnb->identity_info);

	return CTRL_CMD_REPLY;
}

CTRL_CMD_DEFINE_RO(hnbs, "num-hnb");
static int get_hnbs(struct ctrl_cmd *cmd, void *data)
{
	cmd->reply = talloc_asprintf(cmd, "%u", hnb_contexts(data));

	return CTRL_CMD_REPLY;
}

int hnb_ctrl_cmds_install()
{
	int rc = 0;

	rc |= ctrl_cmd_install(CTRL_NODE_ROOT, &cmd_hnbs);
	rc |= ctrl_cmd_install(CTRL_NODE_HNB, &cmd_hnb_info);

	return rc;
}

static int hnb_ctrl_node_lookup(void *data, vector vline, int *node_type, void **node_data, int *i)
{
	const char *token = vector_slot(vline, *i);
	struct hnb_context *hnb;
	long num;

	switch (*node_type) {
	case CTRL_NODE_ROOT:
		if (strcmp(token, "hnb") != 0)
			return 0;

		(*i)++;

		if (!ctrl_parse_get_num(vline, *i, &num))
			return -ERANGE;

		hnb = hnb_context_by_id(data, num);
		if (!hnb)
			return -ENODEV;

		*node_data = hnb;
		*node_type = CTRL_NODE_HNB;
		break;
	default:
		return 0;
	}

	return 1;
}

int main(int argc, char **argv)
{
	struct osmo_stream_srv_link *srv;
	int rc;

	tall_hnb_ctx = talloc_named_const(NULL, 0, "hnb_context");
	talloc_asn1_ctx = talloc_named_const(NULL, 0, "asn1_context");
	msgb_talloc_ctx_init(tall_hnb_ctx, 0);

	g_hnb_gw = hnb_gw_create(tall_hnb_ctx);
	g_hnb_gw->config.rnc_id = 23;

	rc = osmo_init_logging2(tall_hnb_ctx, &hnbgw_log_info);
	if (rc < 0)
		exit(1);

	rc = osmo_ss7_init();
	if (rc < 0) {
		LOGP(DMAIN, LOGL_FATAL, "osmo_ss7_init() failed with rc=%d\n", rc);
		exit(1);
	}

	vty_info.copyright = osmo_hnbgw_copyright;
	vty_init(&vty_info);

	osmo_ss7_vty_init_asp(tall_hnb_ctx);
	osmo_sccp_vty_init();
	hnbgw_vty_init(g_hnb_gw, tall_hnb_ctx);
	ctrl_vty_init(tall_hnb_ctx);
	logging_vty_add_cmds();

	/* Handle options after vty_init(), for --version */
	handle_options(argc, argv);

	rc = vty_read_config_file(hnbgw_cmdline_config.config_file, NULL);
	if (rc < 0) {
		LOGP(DMAIN, LOGL_FATAL, "Failed to parse the config file: '%s'\n",
		     hnbgw_cmdline_config.config_file);
		return 1;
	}

	/*
	 * cmdline options take precedence over config file, but if no options
	 * were passed we must not override the config file.
	 */
	if (hnbgw_cmdline_config.log_disable_color)
		log_set_use_color(osmo_stderr_target, 0);
	if (hnbgw_cmdline_config.log_category_mask)
		log_parse_category_mask(osmo_stderr_target,
					hnbgw_cmdline_config.log_category_mask);
	if (hnbgw_cmdline_config.log_enable_timestamp)
		log_set_print_timestamp(osmo_stderr_target, 1);
	if (hnbgw_cmdline_config.log_level)
		log_set_log_level(osmo_stderr_target,
				  hnbgw_cmdline_config.log_level);

	rc = telnet_init_dynif(tall_hnb_ctx, g_hnb_gw, vty_get_bind_addr(), OSMO_VTY_PORT_HNBGW);
	if (rc < 0) {
		perror("Error binding VTY port");
		exit(1);
	}

	g_hnb_gw->ctrl = ctrl_interface_setup_dynip2(g_hnb_gw, ctrl_vty_get_bind_addr(), OSMO_CTRL_PORT_HNBGW,
						     hnb_ctrl_node_lookup, _LAST_CTRL_NODE_HNB);
	if (!g_hnb_gw->ctrl) {
		LOGP(DMAIN, LOGL_ERROR, "Failed to create CTRL interface on %s:%u\n",
		     ctrl_vty_get_bind_addr(), OSMO_CTRL_PORT_HNBGW);
		exit(1);
	} else {
		rc = hnb_ctrl_cmds_install();
		if (rc) {
			LOGP(DMAIN, LOGL_ERROR, "Failed to install CTRL interface commands\n");
			return 2;
		}
	}

	ranap_set_log_area(DRANAP);

	rc = hnbgw_cnlink_init(g_hnb_gw, "localhost", M3UA_PORT, "localhost");
	if (rc < 0) {
		LOGP(DMAIN, LOGL_ERROR, "Failed to initialize SCCP link to CN\n");
		exit(1);
	}

	LOGP(DHNBAP, LOGL_NOTICE, "Using RNC-Id %u\n", g_hnb_gw->config.rnc_id);

	OSMO_ASSERT(g_hnb_gw->config.iuh_local_ip);
	LOGP(DMAIN, LOGL_NOTICE, "Listening for Iuh at %s %d\n",
	     g_hnb_gw->config.iuh_local_ip,
	     g_hnb_gw->config.iuh_local_port);
	srv = osmo_stream_srv_link_create(tall_hnb_ctx);
	if (!srv) {
		perror("cannot create server");
		exit(1);
	}
	osmo_stream_srv_link_set_data(srv, g_hnb_gw);
	osmo_stream_srv_link_set_proto(srv, IPPROTO_SCTP);
	osmo_stream_srv_link_set_nodelay(srv, true);
	osmo_stream_srv_link_set_addr(srv, g_hnb_gw->config.iuh_local_ip);
	osmo_stream_srv_link_set_port(srv, g_hnb_gw->config.iuh_local_port);
	osmo_stream_srv_link_set_accept_cb(srv, accept_cb);

	if (osmo_stream_srv_link_open(srv) < 0) {
		perror("Cannot open server");
		exit(1);
	}
	g_hnb_gw->iuh = srv;

	if (hnbgw_cmdline_config.daemonize) {
		rc = osmo_daemonize();
		if (rc < 0) {
			perror("Error during daemonize");
			exit(1);
		}
	}

	while (1) {
		rc = osmo_select_main(0);
		if (rc < 0)
			exit(3);
	}

	/* not reached */
	exit(0);
}
