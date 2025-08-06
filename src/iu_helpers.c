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
#include <osmocom/core/socket.h>
#include <osmocom/core/bit16gen.h>

#include <osmocom/ranap/RANAP_IuTransportAssociation.h>
#include <osmocom/ranap/RANAP_TransportLayerAddress.h>
#include <osmocom/ranap/RANAP_TransportLayerInformation.h>

void *talloc_asn1_ctx;

/* Implement the extern asn_debug from libasn1c to indicate whether to print
 * asn.1 debug messages (see libasn1c). */
int asn_debug = 0;

/* Implement the extern asn1_xer_print to indicate whether the ASN.1 binary
 * code decoded and encoded during Iu communication should be logged to stderr
 * (see asn.1 generated code in osmo-iuh). */
int asn1_xer_print = 0;

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

	if (len >= 7 && buf[0] == 0x35)
		rc = inet_ntop(AF_INET, buf + 3, addr, addr_len);
	else if (len > 3)
		rc = inet_ntop(AF_INET, buf, addr, addr_len);
	else
		return -EINVAL;

	if (!rc)
		return -EINVAL;

	return 0;
}

/* (same as ranap_transp_layer_addr_decode, but AF agnostic) */
int ranap_transp_layer_addr_decode2(struct osmo_sockaddr *addr, bool *uses_x213_nsap,
				    const RANAP_TransportLayerAddress_t *trasp_layer_addr)
{
	unsigned char *buf;
	int len;
	bool x213_nsap = false;
	uint16_t icp;

	buf = trasp_layer_addr->buf;
	len = trasp_layer_addr->size;

	memset(addr, 0, sizeof(*addr));

	if ((len == 7 || len == 20) && buf[0] == 0x35) {
		/* ITU-T Rec. X.213 A.5.2.1.2.7, RFC 1888 section 6
		 * For an X.213 NSAP encoded address we expect:
		 * 3 bytes IDP (first byte AFI = 0x35, which means that two byte IDI and an IP address follows)
		 * Either 4 or 17 bytes of DSP containing the IP address.
		 * (see also comments in function ranap_new_transp_layer_addr below) */
		x213_nsap = true;
		icp = osmo_load16be(&buf[1]);
		switch (icp) {
		case 0x0000:
			/* "RFC 1888 provides guidance on how to embed an IPv6 address within the DSP of an NSAP
			 * address. The IPv6  address is carried in the first 16 octets of the DSP.
			 * Octet 17 of the DSP is set to zero, but has no significance for IPv6." */
			if (len != 20)
				return -EINVAL;
			addr->u.sa.sa_family = AF_INET6;
			memcpy(addr->u.sin6.sin6_addr.s6_addr, buf + 3, sizeof(addr->u.sin6.sin6_addr.s6_addr));
			break;
		case 0x0001:
			addr->u.sa.sa_family = AF_INET;
			memcpy((uint8_t *) &addr->u.sin.sin_addr.s_addr, buf + 3, sizeof(addr->u.sin.sin_addr.s_addr));
			break;
		default:
			return -EINVAL;
		}
	} else if (len == 4) {
		/* A non X.213 NSAP encoded IPv4 address is 4 bytes long */
		addr->u.sa.sa_family = AF_INET;
		memcpy((uint8_t *) &addr->u.sin.sin_addr.s_addr, buf, sizeof(addr->u.sin.sin_addr.s_addr));
	} else if (len == 16) {
		/* A non X.213 NSAP encoded IPv6 address is 16 bytes long */
		addr->u.sa.sa_family = AF_INET6;
		memcpy(addr->u.sin6.sin6_addr.s6_addr, buf, sizeof(addr->u.sin6.sin6_addr.s6_addr));
	} else
		return -EINVAL;

	/* In case the caller is interested in the encoding method that was used */
	if (uses_x213_nsap)
		*uses_x213_nsap = x213_nsap;

	return 0;
}

int ranap_new_transp_layer_addr(BIT_STRING_t *out, struct osmo_sockaddr *addr, bool use_x213_nsap)
{
	uint8_t *buf;
	unsigned int len;
	size_t ip_len;
	uint8_t *ip_addr;
	uint16_t icp;

	switch (addr->u.sa.sa_family) {
	case AF_INET:
		ip_len = sizeof(addr->u.sin.sin_addr.s_addr);
		ip_addr = (uint8_t *) &addr->u.sin.sin_addr.s_addr;
		icp = 0x0001; /* See X.213, section A.5.2.1.2.7 */
		break;
	case AF_INET6:
		ip_len = sizeof(addr->u.sin6.sin6_addr.s6_addr);
		ip_addr = addr->u.sin6.sin6_addr.s6_addr;
		icp = 0x0000; /* See X.213, section A.5.2.1.2.7 */
		break;
	default:
		return -EINVAL;
	}

	if (use_x213_nsap) {
		/* 3 bytes IDP (AFI+ICP) + 17 bytes DSP */
		len = 3 + 17;
		buf = CALLOC(len, sizeof(uint8_t));

		/* 1 byte AFI to announce IANA ICP, see also X.213, table A.4 */
		buf[0] = 0x35;

		/* 2 byte IANA ICP IDI, see also X.213, A.5.2.1.2.7 */
		osmo_store16be(icp, &buf[1]);

		/* 17 byte DSP, see also X.213, table A.5 and A.5.2.1.2.7 */
		memcpy(&buf[3], ip_addr, ip_len);
	} else {
		len = ip_len;
		buf = CALLOC(len, sizeof(uint8_t));
		memcpy(buf, ip_addr, ip_len);
	}
	if (out->buf)
		FREEMEM(out->buf);
	out->buf = buf;
	out->size = len;
	out->bits_unused = 0;

	return 0;
}

RANAP_TransportLayerInformation_t *ranap_new_transp_info_rtp(struct osmo_sockaddr *addr, bool use_x213_nsap)
{
	RANAP_TransportLayerInformation_t *tli;
	uint8_t binding_id[4] = { 0 };
	int rc;

	switch (addr->u.sin.sin_family) {
	case AF_INET:
		osmo_store16be(ntohs(addr->u.sin.sin_port), binding_id);
		break;
	case AF_INET6:
		osmo_store16be(ntohs(addr->u.sin6.sin6_port), binding_id);
		break;
	default:
		return NULL;
	}

	tli = CALLOC(1, sizeof(*tli));
	rc = ranap_new_transp_layer_addr(&tli->transportLayerAddress, addr, use_x213_nsap);
	if (rc < 0) {
		ASN_STRUCT_FREE(asn_DEF_RANAP_TransportLayerInformation, tli);
		return NULL;
	}

	tli->iuTransportAssociation.present = RANAP_IuTransportAssociation_PR_bindingID;
	OCTET_STRING_fromBuf(&tli->iuTransportAssociation.choice.bindingID,
			     (const char *)binding_id, sizeof(binding_id));

	return tli;
}

RANAP_TransportLayerInformation_t *ranap_new_transp_info_gtp(struct osmo_sockaddr *addr, uint32_t tei,
							     bool use_x213_nsap)
{
	RANAP_TransportLayerInformation_t *tli = CALLOC(1, sizeof(*tli));
	uint32_t binding_buf = htonl(tei);
	int rc;

	rc = ranap_new_transp_layer_addr(&tli->transportLayerAddress, addr, use_x213_nsap);
	if (rc < 0) {
		ASN_STRUCT_FREE(asn_DEF_RANAP_TransportLayerInformation, tli);
		return NULL;
	}

	tli->iuTransportAssociation.present = RANAP_IuTransportAssociation_PR_gTP_TEI;
	OCTET_STRING_fromBuf(&tli->iuTransportAssociation.choice.gTP_TEI,
			     (const char *)&binding_buf, sizeof(binding_buf));

	return tli;
}
