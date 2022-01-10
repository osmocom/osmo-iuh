/* some humble start of unit testing */

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

#include "test_common.h"

#include <osmocom/ranap/iu_helpers.h>
#include <osmocom/ranap/ranap_common.h>
#include "asn1helpers.h"

#include <assert.h>
#define ASSERT(x)	assert(x)

#include <osmocom/core/utils.h>
#include <osmocom/core/socket.h>
#include <osmocom/gsm/gsm48.h>

#include <osmocom/ranap/RANAP_LAI.h>

extern void *talloc_asn1_ctx;

/* use odd number of digits */
const uint8_t imsi_encoded[] = { 0x10, 0x32, 0x54, 0x76, 0xF8 };
const char imsi_decoded[] = "012345678";

void test_iu_helpers(void)
{
	char outstr[32];
	uint8_t outbuf[16];
	int rc;

	printf("Testing Iu helper functions\n");

	printf("pre-encoded: %s\n", osmo_hexdump_nospc(imsi_encoded,
						sizeof(imsi_encoded)));
	rc = ranap_bcd_decode(outstr, sizeof(outstr), imsi_encoded,
			   sizeof(imsi_encoded));
	ASSERT(rc >= 0);
	printf("decoded: %s\n", outstr);
	ASSERT(!strcmp(outstr, imsi_decoded));

	rc = ranap_imsi_encode(outbuf, sizeof(outbuf), imsi_decoded);
	ASSERT(rc >= 0);
	printf("re-encoded: %s\n", osmo_hexdump_nospc(outbuf, rc));
	ASSERT(!memcmp(outbuf, imsi_encoded, sizeof(imsi_encoded)));
}

const uint32_t val1 = 0xdeadbeef;

const OCTET_STRING_t text1 = {
	.buf = (uint8_t *) "0123456789012345",
	.size = 16,
};

const OCTET_STRING_t text2 = {
	.buf = (uint8_t *) "01234567890123456789012345678901234567890",
	.size = 40,
};

void test_asn1_helpers(void)
{
	int rc;

	void *buffer;
	BIT_STRING_t enc;
	uint32_t res, tmpval;
	char text[32];

	printf("Testing asn.1 helper functions\n");

	printf("Encoding 0x%x to asn.1 bitstring\n", val1);
	asn1_u32_to_bitstring(&enc, &tmpval, val1);

	ASSERT(enc.size == sizeof(uint32_t));
	ASSERT(enc.bits_unused == 0);

	rc = aper_encode_to_new_buffer(&asn_DEF_BIT_STRING, 0, &enc, (void **) &buffer);
	printf("Encoded: %s\n", osmo_hexdump_nospc(buffer, rc));

	res = asn1bitstr_to_u32(&enc);

	printf("Decoding back to uint32_t: 0x%x\n", res);
	ASSERT(res == val1);

	printf("Encoding 0x%x to 24-bit asn.1 bitstring\n", val1);
	asn1_u24_to_bitstring(&enc, &tmpval, val1);

	ASSERT(enc.size == 24/8);
	ASSERT(enc.bits_unused == 0);

	talloc_free(buffer);

	rc = aper_encode_to_new_buffer(&asn_DEF_BIT_STRING, 0, &enc, (void **) &buffer);
	printf("Encoded: %s\n", osmo_hexdump_nospc(buffer, rc));

	rc = asn1_strncpy(text, &text1, sizeof(text));
	printf("Decoding string from asn.1: %s\n", text);

	ASSERT(rc == 16);
	ASSERT(!strcmp(text, (char *)text1.buf));

	rc = asn1_strncpy(text, &text2, sizeof(text));
	printf("Decoding large string from asn1: %s\n", text);
	ASSERT(rc == 31);

	talloc_free(buffer);
}

void test_ranap_common(void)
{
	uint8_t plmnid_buf[] = { 0x21, 0xf3, 0x54 };
	uint8_t lac_buf[] = { 0xab, 0xcd };

	struct gprs_ra_id ra_id = {0};

	int rc;

	RANAP_LAI_t lai = {
		.pLMNidentity = {
			.buf = plmnid_buf,
			.size = 3
		},
		.lAC = {
			.buf = lac_buf,
			.size = 2
		}
	};

	printf("Testing ranap common functions\n");

	printf("PLMN-Id [ %s]", osmo_hexdump(lai.pLMNidentity.buf,
					     lai.pLMNidentity.size));
	printf(", LAC [ %s]\n", osmo_hexdump(lai.lAC.buf,
					     lai.lAC.size));

	rc = ranap_parse_lai(&ra_id, &lai);
	printf(" rc == %d\n", rc);
	OSMO_ASSERT(rc == 0);
	printf(" mcc == %d mnc == %d\n", ra_id.mcc, ra_id.mnc);
	OSMO_ASSERT(ra_id.mcc == 123);
	OSMO_ASSERT(ra_id.mnc == 45);
	printf(" lac == 0x%x\n", ra_id.lac);
	OSMO_ASSERT(ra_id.lac == 0xabcd);


	/* three digit MNC */
	uint8_t plmnid_buf_mnc3[] = { 0x21, 0x43, 0x65 };
	lai.pLMNidentity.buf = plmnid_buf_mnc3;

	printf("PLMN-Id [ %s]", osmo_hexdump(lai.pLMNidentity.buf,
					     lai.pLMNidentity.size));
	printf(", LAC [ %s]\n", osmo_hexdump(lai.lAC.buf,
					     lai.lAC.size));

	rc = ranap_parse_lai(&ra_id, &lai);
	printf(" rc == %d\n", rc);
	OSMO_ASSERT(rc == 0);
	printf(" mcc == %d mnc == %d\n", ra_id.mcc, ra_id.mnc);
	OSMO_ASSERT(ra_id.mcc == 123);
	OSMO_ASSERT(ra_id.mnc == 456);
	printf(" lac == 0x%x\n", ra_id.lac);
	OSMO_ASSERT(ra_id.lac == 0xabcd);


	/* wrong PLMN-Id size */
	lai.pLMNidentity.size = 2;

	printf("PLMN-Id [ %s]", osmo_hexdump(lai.pLMNidentity.buf,
					     lai.pLMNidentity.size));
	printf(", LAC [ %s]\n", osmo_hexdump(lai.lAC.buf,
					     lai.lAC.size));

	rc = ranap_parse_lai(&ra_id, &lai);
	printf(" rc == %d\n", rc);
	OSMO_ASSERT(rc == -1);


	/* wrong LAC size */
	lai.pLMNidentity.size = 3;
	lai.lAC.size = 1;

	printf("PLMN-Id [ %s]", osmo_hexdump(lai.pLMNidentity.buf,
					  lai.pLMNidentity.size));
	printf(", LAC [ %s]\n", osmo_hexdump(lai.lAC.buf,
					     lai.lAC.size));

	rc = ranap_parse_lai(&ra_id, &lai);
	printf(" rc == %d\n", rc);
	OSMO_ASSERT(rc == -1);
}

void test_ranap_new_transp_info_rtp(void)
{
	RANAP_TransportLayerInformation_t *tli;

	printf("Testing function ranap_new_transp_info_rtp()\n");

	struct osmo_sockaddr addr;

	addr.u.sin.sin_family = AF_INET;
	addr.u.sin.sin_port = htons(0x1122);
	inet_pton(AF_INET, "1.2.3.4", &addr.u.sin.sin_addr);

	printf(" ipv4, x213_nsap\n");
	tli = ranap_new_transp_info_rtp(&addr, true);
	printf("  transportLayerAddress = %s\n",
	       osmo_hexdump_nospc(tli->transportLayerAddress.buf, tli->transportLayerAddress.size));
	printf("  bindingID = %s\n",
	       osmo_hexdump_nospc(tli->iuTransportAssociation.choice.bindingID.buf,
				  tli->iuTransportAssociation.choice.bindingID.size));
	ASN_STRUCT_FREE(asn_DEF_RANAP_TransportLayerInformation, tli);

	printf(" ipv4\n");
	tli = ranap_new_transp_info_rtp(&addr, false);
	printf("  transportLayerAddress = %s\n",
	       osmo_hexdump_nospc(tli->transportLayerAddress.buf, tli->transportLayerAddress.size));
	printf("  bindingID = %s\n",
	       osmo_hexdump_nospc(tli->iuTransportAssociation.choice.bindingID.buf,
				  tli->iuTransportAssociation.choice.bindingID.size));
	ASN_STRUCT_FREE(asn_DEF_RANAP_TransportLayerInformation, tli);

	addr.u.sin.sin_family = AF_INET6;
	addr.u.sin.sin_port = htons(0x1122);
	inet_pton(AF_INET6, "f11f:f22f:f33f:f44f:f55f:f66f:f77f:f88f", &addr.u.sin6.sin6_addr);

	printf(" ipv6, x213_nsap\n");
	tli = ranap_new_transp_info_rtp(&addr, true);
	printf("  transportLayerAddress = %s\n",
	       osmo_hexdump_nospc(tli->transportLayerAddress.buf, tli->transportLayerAddress.size));
	printf("  bindingID = %s\n",
	       osmo_hexdump_nospc(tli->iuTransportAssociation.choice.bindingID.buf,
				  tli->iuTransportAssociation.choice.bindingID.size));
	ASN_STRUCT_FREE(asn_DEF_RANAP_TransportLayerInformation, tli);

	printf(" ipv6\n");
	tli = ranap_new_transp_info_rtp(&addr, false);
	printf("  transportLayerAddress = %s\n",
	       osmo_hexdump_nospc(tli->transportLayerAddress.buf, tli->transportLayerAddress.size));
	printf("  bindingID = %s\n",
	       osmo_hexdump_nospc(tli->iuTransportAssociation.choice.bindingID.buf,
				  tli->iuTransportAssociation.choice.bindingID.size));
	ASN_STRUCT_FREE(asn_DEF_RANAP_TransportLayerInformation, tli);

	addr.u.sin.sin_family = AF_X25;
	printf(" unsupported address family\n");
	tli = ranap_new_transp_info_rtp(&addr, false);
	OSMO_ASSERT(tli == NULL);
}

void test_ranap_new_transp_info_gtp(void)
{
	RANAP_TransportLayerInformation_t *tli;

	printf("Testing function ranap_new_transp_info_gtp()\n");

	struct osmo_sockaddr addr;

	addr.u.sin.sin_family = AF_INET;
	inet_pton(AF_INET, "1.2.3.4", &addr.u.sin.sin_addr);

	printf(" ipv4, x213_nsap\n");
	tli = ranap_new_transp_info_gtp(&addr, 0x11223344, true);
	printf("  transportLayerAddress = %s\n",
	       osmo_hexdump_nospc(tli->transportLayerAddress.buf, tli->transportLayerAddress.size));
	printf("  gTP_TEI = %s\n",
	       osmo_hexdump_nospc(tli->iuTransportAssociation.choice.gTP_TEI.buf,
				  tli->iuTransportAssociation.choice.gTP_TEI.size));
	ASN_STRUCT_FREE(asn_DEF_RANAP_TransportLayerInformation, tli);

	printf(" ipv4\n");
	tli = ranap_new_transp_info_gtp(&addr, 0x11223344, false);
	printf("  transportLayerAddress = %s\n",
	       osmo_hexdump_nospc(tli->transportLayerAddress.buf, tli->transportLayerAddress.size));
	printf("  gTP_TEI = %s\n",
	       osmo_hexdump_nospc(tli->iuTransportAssociation.choice.gTP_TEI.buf,
				  tli->iuTransportAssociation.choice.gTP_TEI.size));
	ASN_STRUCT_FREE(asn_DEF_RANAP_TransportLayerInformation, tli);

	addr.u.sin.sin_family = AF_INET6;
	inet_pton(AF_INET6, "f11f:f22f:f33f:f44f:f55f:f66f:f77f:f88f", &addr.u.sin6.sin6_addr);

	printf(" ipv6, x213_nsap\n");
	tli = ranap_new_transp_info_gtp(&addr, 0x11223344, true);
	printf("  transportLayerAddress = %s\n",
	       osmo_hexdump_nospc(tli->transportLayerAddress.buf, tli->transportLayerAddress.size));
	printf("  gTP_TEI = %s\n",
	       osmo_hexdump_nospc(tli->iuTransportAssociation.choice.gTP_TEI.buf,
				  tli->iuTransportAssociation.choice.gTP_TEI.size));
	ASN_STRUCT_FREE(asn_DEF_RANAP_TransportLayerInformation, tli);

	printf(" ipv6\n");
	tli = ranap_new_transp_info_gtp(&addr, 0x11223344, false);
	printf("  transportLayerAddress = %s\n",
	       osmo_hexdump_nospc(tli->transportLayerAddress.buf, tli->transportLayerAddress.size));
	printf("  gTP_TEI = %s\n",
	       osmo_hexdump_nospc(tli->iuTransportAssociation.choice.gTP_TEI.buf,
				  tli->iuTransportAssociation.choice.gTP_TEI.size));
	ASN_STRUCT_FREE(asn_DEF_RANAP_TransportLayerInformation, tli);

	addr.u.sin.sin_family = AF_X25;
	printf(" unsupported address family\n");
	tli = ranap_new_transp_info_gtp(&addr, 0x11223344, false);
	OSMO_ASSERT(tli == NULL);
}

void test_ranap_transp_layer_addr_decode(void)
{
	int rc;
	char addr[100];
	RANAP_TransportLayerAddress_t trasp_layer_addr = { 0 };
	uint8_t encoded_addr_x213_nsap[] = {
		0x35, 0x00, 0x01, 0x01, 0x02, 0x03, 0x04, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00 };
	uint8_t encoded_addr[] = { 0x01, 0x02, 0x03, 0x04 };

	printf("Testing function ranap_transp_layer_addr_decode()\n");

	printf(" ipv4, x213_nsap\n");
	trasp_layer_addr.buf = encoded_addr_x213_nsap;
	trasp_layer_addr.size = sizeof(encoded_addr_x213_nsap);
	rc = ranap_transp_layer_addr_decode(addr, sizeof(addr), &trasp_layer_addr);
	printf("  addr=%s\n", addr);
	OSMO_ASSERT(rc == 0);

	printf(" ipv4\n");
	trasp_layer_addr.buf = encoded_addr;
	trasp_layer_addr.size = sizeof(encoded_addr);
	rc = ranap_transp_layer_addr_decode(addr, sizeof(addr), &trasp_layer_addr);
	printf("  addr=%s\n", addr);
	OSMO_ASSERT(rc == 0);
}

int main(int argc, char **argv)
{
	asn1_xer_print = 0;

	test_common_init();
	ranap_set_log_area(DRANAP);

	test_iu_helpers();
	test_asn1_helpers();
	test_ranap_common();
	test_ranap_new_transp_info_gtp();
	test_ranap_new_transp_info_rtp();
	test_ranap_transp_layer_addr_decode();

	test_common_cleanup();
	return 0;
}
