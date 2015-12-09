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
#include <arpa/inet.h>

#include <osmocom/core/utils.h>

#include "asn1helpers.h"

void asn1_u32_to_bitstring(BIT_STRING_t *bitstr, uint32_t *buf, uint32_t in)
{
	*buf = htonl(in);
	bitstr->buf = (uint8_t *) buf;
	bitstr->size = sizeof(uint32_t);
	bitstr->bits_unused = 0;
}

void asn1_u28_to_bitstring(BIT_STRING_t *bitstr, uint32_t *buf, uint32_t in)
{
	*buf = htonl(in<<4);
	bitstr->buf = (uint8_t *) buf;
	bitstr->size = sizeof(uint32_t);
	bitstr->bits_unused = 4;
}

void asn1_u24_to_bitstring(BIT_STRING_t *bitstr, uint32_t *buf, uint32_t in)
{
	*buf = htonl(in<<8);
	bitstr->buf = (uint8_t *) buf;
	bitstr->size = 24/8;
	bitstr->bits_unused = 0;
}

void asn1_u16_to_str(OCTET_STRING_t *str, uint16_t *buf, uint16_t in)
{
	*buf = htons(in);
	str->buf = (uint8_t *) buf;
	str->size = sizeof(uint16_t);
}

void asn1_u8_to_str(OCTET_STRING_t *str, uint8_t *buf, uint8_t in)
{
	*buf = in;
	str->buf = buf;
	str->size = sizeof(uint8_t);
}

int asn1_strncpy(char *out, const OCTET_STRING_t *in, size_t n)
{
	size_t cpylen = n-1;

	if (in->size < cpylen)
		cpylen = in->size;

	strncpy(out, (char *)in->buf, cpylen);
	out[cpylen] = '\0';

	return cpylen;
}

uint16_t asn1str_to_u16(const OCTET_STRING_t *in)
{
	OSMO_ASSERT(in && in->size == sizeof(uint16_t));
	return ntohs(*(uint16_t *)in->buf);
}

uint8_t asn1str_to_u8(const OCTET_STRING_t *in)
{
	OSMO_ASSERT(in && in->size == sizeof(uint8_t));
	return *(uint8_t *)in->buf;
}

uint32_t asn1bitstr_to_u32(const BIT_STRING_t *in)
{
	OSMO_ASSERT(in && in->size == sizeof(uint32_t));

	return ntohl(*(uint32_t *)in->buf);
}

uint32_t asn1bitstr_to_u28(const BIT_STRING_t *in)
{
	OSMO_ASSERT(in && in->size == sizeof(uint32_t) && in->bits_unused == 4);

	return ntohl(*(uint32_t *)in->buf) >> 4;
}

uint32_t asn1bitstr_to_u24(const BIT_STRING_t *in)
{
	OSMO_ASSERT(in && in->size == 3);

	return ntohl(*(uint32_t *)in->buf) >> 8;
}
