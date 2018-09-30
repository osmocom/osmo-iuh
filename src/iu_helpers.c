/* Iu interface specific helper functions */

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

#include <stdint.h>
#include <string.h>
#include <errno.h>
#include <arpa/inet.h>
#include "asn1helpers.h"
#include <osmocom/core/utils.h>
#include <osmocom/ranap/RANAP_IuTransportAssociation.h>
#include <osmocom/ranap/RANAP_TransportLayerAddress.h>

/* decode a BCD-string as used inside ASN.1 encoded Iu interface protocols */
int ranap_bcd_decode(char *out, size_t out_len, const uint8_t *in, size_t in_len)
{
	const uint8_t *ch;
	char *outch = out;

	for (ch = in; ch < in + in_len; ch++) {
		char c = osmo_bcd2char(*ch & 0xF);
		*outch++ = c;
		if (outch + 1 >= out + out_len)
			break;
		c = osmo_bcd2char(*ch >> 4);
		/* skip padding nibble at end */
		if (c == 'F')
			break;
		*outch++ = c;
	}
	*outch++ = '\0';
	return outch - out;
}

/* decode an IMSI as used inside ASN.1 encoded Iu interface protocols */
int ranap_imsi_encode(uint8_t *out, size_t out_len, const char *in)
{
	unsigned int len = strlen(in);
	unsigned int octlen;
	uint8_t odd = (len & 0x01) == 1;
	unsigned int off = 0;
	unsigned int i;

	octlen = len/2;
	if (odd)
		octlen++;

	for (i = 0; i < octlen; i++) {
		uint8_t lower, upper;

		lower = osmo_char2bcd(in[off++]) & 0x0f;
		if (odd && off == len)
			upper = 0x0f;
		else
			upper = osmo_char2bcd(in[off++]) & 0x0f;

		out[i] = (upper << 4) | lower;
	}
	return i;
}

/* decode a network port as used inside ASN.1 encoded Iu interface protocols */
int ranap_transp_assoc_decode(uint16_t *port, const RANAP_IuTransportAssociation_t *transp_assoc)
{
	uint32_t result;

	if (!transp_assoc)
		return -EINVAL;

	result = asn1bitstr_to_u32((BIT_STRING_t *) & transp_assoc->choice.bindingID);

	/* The lower 16 bits should be zero, otherwise the decoding may
	 * have yielded some odd result */
	if (result & 0xFFFF)
		return -EINVAL;

	*port = (uint16_t) ((result >> 16) & 0xFFFF);

	if (*port == 0)
		return -EINVAL;

	return 0;
}

/* decode a network address as used inside ASN.1 encoded Iu interface protocols */
int ranap_transp_layer_addr_decode(char *addr, unsigned int addr_len,
				   const RANAP_TransportLayerAddress_t *trasp_layer_addr)
{
	unsigned char *buf;
	int len;
	const char *rc;

	buf = trasp_layer_addr->buf;
	len = trasp_layer_addr->size;

	if (buf[0] == 0x35 && len >= 7)
		rc = inet_ntop(AF_INET, buf + 3, addr, addr_len);
	else if (len > 3)
		rc = inet_ntop(AF_INET, buf, addr, addr_len);
	else
		return -EINVAL;

	if (!rc)
		return -EINVAL;

	return 0;
}
