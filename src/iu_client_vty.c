/* OpenBSC Iu related interface to quagga VTY */
/* (C) 2016 by sysmocom s.m.f.c. GmbH <info@sysmocom.de>
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

#include <stdlib.h>
#include <string.h>

#include <osmocom/core/logging.h>
#include <osmocom/vty/command.h>
#include <osmocom/vty/logging.h>
#include <osmocom/sigtran/osmo_ss7.h>
#include <osmocom/sigtran/sccp_sap.h>

#include <osmocom/ranap/iu_client.h>

static enum ranap_nsap_addr_enc *g_rab_assign_addr_enc = NULL;

DEFUN(cfg_iu_asn1_debug,
      cfg_iu_asn1_debug_cmd,
      "asn1 debug (1|0)",
      "ASN.1 settings\n"
      "Enable ASN.1 debug messages\n"
      "Log ASN.1 debug messages to stderr\n"
      "Do not log ASN.1 debug messages to stderr\n")
{
	asn_debug = atoi(argv[0]);
	return CMD_SUCCESS;
}

DEFUN(cfg_iu_asn1_xer_print,
      cfg_iu_asn1_xer_print_cmd,
      "asn1 xer-print (1|0)",
      "ASN.1 settings\n"
      "Log human readable representations of all ASN.1 messages to stderr\n"
      "Log XML representation of all ASN.1 messages to stderr\n"
      "Do not log decoded ASN.1 messages to stderr\n")
{
	asn1_xer_print = atoi(argv[0]);
	return CMD_SUCCESS;
}

#define IU_STR "Iu interface protocol options\n"
DEFUN(cfg_iu_rab_assign_addr_enc, cfg_iu_rab_assign_addr_enc_cmd,
      "iu rab-assign-addr-enc (x213|v4raw)",
      IU_STR
      "Choose RAB Assignment's Transport Layer Address encoding\n"
      "ITU-T X.213 compliant address encoding (default)\n"
      "32bit length raw IPv4 address (for ip.access nano3G)\n")
{
	if (!g_rab_assign_addr_enc) {
		vty_out(vty, "%%RAB Assignment Transport Layer Address"
			" encoding not available%s", VTY_NEWLINE);
		return CMD_WARNING;
	}

	if (strcmp(argv[0], "v4raw") == 0)
		*g_rab_assign_addr_enc = RANAP_NSAP_ADDR_ENC_V4RAW;
	else
		*g_rab_assign_addr_enc = RANAP_NSAP_ADDR_ENC_X213;
	return CMD_SUCCESS;
}

int ranap_iu_vty_config_write(struct vty *vty, const char *indent)
{
	if (!g_rab_assign_addr_enc) {
		vty_out(vty, "%%RAB Assignment Transport Layer Address"
			" encoding not available%s", VTY_NEWLINE);
		return CMD_WARNING;
	}

	switch (*g_rab_assign_addr_enc) {
	case RANAP_NSAP_ADDR_ENC_V4RAW:
		vty_out(vty, "%siu rab-assign-addr-enc v4raw%s", indent,
			VTY_NEWLINE);
		break;
	case RANAP_NSAP_ADDR_ENC_X213:
		/* default value, no need to write anything */
		break;
	default:
		LOGP(0, LOGL_ERROR, "Invalid value for"
		     " iu.rab_assign_addr_enc: %d\n",
		     *g_rab_assign_addr_enc);
		return CMD_WARNING;
	}

	if (asn_debug)
		vty_out(vty, "%sasn1 debug 1%s", indent, VTY_NEWLINE);

	if (asn1_xer_print)
		vty_out(vty, "%sasn1 xer-print 1%s", indent, VTY_NEWLINE);

	return CMD_SUCCESS;
}

void ranap_iu_vty_init(int iu_parent_node, enum ranap_nsap_addr_enc *rab_assign_addr_enc)
{
	g_rab_assign_addr_enc = rab_assign_addr_enc;

	install_lib_element(iu_parent_node, &cfg_iu_rab_assign_addr_enc_cmd);

	/* Technically, these are global ASN.1 settings and not necessarily limited to the Iu interface.
	 * Practically, only Iu users will use ASN.1 in Osmocom programs -- at least so far. So it is
	 * easiest to have these commands under 'iu'. */
	install_lib_element(iu_parent_node, &cfg_iu_asn1_debug_cmd);
	install_lib_element(iu_parent_node, &cfg_iu_asn1_xer_print_cmd);
}
