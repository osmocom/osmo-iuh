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


#include "iu_helpers.h"
#include "asn1helpers.h"

#include <assert.h>
#define ASSERT(x)	assert(x)

#include <osmocom/core/utils.h>

void *talloc_asn1_ctx;

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
	rc = decode_iu_bcd(outstr, sizeof(outstr), imsi_encoded,
			   sizeof(imsi_encoded));
	ASSERT(rc >= 0);
	printf("decoded: %s\n", outstr);
	ASSERT(!strcmp(outstr, imsi_decoded));

	rc = encode_iu_imsi(outbuf, sizeof(outbuf), imsi_decoded);
	ASSERT(rc >= 0);
	printf("re-encoded: %s\n", osmo_hexdump_nospc(outbuf, rc));
	ASSERT(!memcmp(outbuf, imsi_encoded, sizeof(imsi_encoded)));
}

const uint32_t val1 = 0xdeadbeef;

const OCTET_STRING_t text1 = {
	.buf = "0123456789012345",
	.size = 16,
};

const OCTET_STRING_t text2 = {
	.buf = "01234567890123456789012345678901234567890",
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

	printf("Encoding %s to 24-bit asn.1 bitstring\n", osmo_hexdump_nospc(&val1, 3));
	asn1_u24_to_bitstring(&enc, &tmpval, val1);

	ASSERT(enc.size == 24/8);
	ASSERT(enc.bits_unused == 0);

	rc = aper_encode_to_new_buffer(&asn_DEF_BIT_STRING, 0, &enc, (void **) &buffer);
	printf("Encoded: %s\n", osmo_hexdump_nospc(buffer, rc));

	rc = asn1_strncpy(text, &text1, sizeof(text));
	printf("Decoding string from asn.1: %s\n", text);

	ASSERT(rc == 16);
	ASSERT(!strcmp(text, (char *)text1.buf));

	rc = asn1_strncpy(text, &text2, sizeof(text));
	printf("Decoding large string from asn1: %s\n", text);
	ASSERT(rc == 31);

}

int main(int argc, char **argv)
{
	test_iu_helpers();
	test_asn1_helpers();

	return 0;
}
