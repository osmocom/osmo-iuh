/* helper functions to dela with asn1c data types */

/* (C) 2014-2015 by Harald Welte <laforge@gnumonks.org>
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

#include <string.h>

#include <osmocom/core/utils.h>

#include "asn1helpers.h"

void asn1_u32_to_bitstring(BIT_STRING_t *bitstr, uint32_t *in)
{
	bitstr->buf = (uint8_t *) in;
	bitstr->size = sizeof(uint32_t);
	bitstr->bits_unused = 0;
}


int asn1_strncpy(char *out, const OCTET_STRING_t *in, size_t n)
{
	size_t cpylen = n;

	if (in->size < cpylen)
		cpylen = in->size;

	strncpy(out, (char *)in->buf, cpylen);
	out[n-1] = '\0';

	return cpylen;
}

uint16_t asn1str_to_u16(const OCTET_STRING_t *in)
{
	OSMO_ASSERT(in && in->size >= sizeof(uint16_t));
	return *(uint16_t *)in->buf;
}

uint8_t asn1str_to_u8(const OCTET_STRING_t *in)
{
	OSMO_ASSERT(in && in->size >= sizeof(uint8_t));
	return *(uint8_t *)in->buf;
}

uint32_t asn1bitstr_to_u32(const BIT_STRING_t *in)
{
	uint32_t ret = 0;
	int i;

	for (i = 0; i < 4; i++) {
		if (in->size < i)
			break;
		ret <<= 8;
		ret |= in->buf[i];
	}
	return ret;
}
