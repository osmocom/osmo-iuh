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

int main(int argc, char **argv)
{
	char outstr[32];
	uint8_t outbuf[16];
	int rc;

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

	return 0;
}
