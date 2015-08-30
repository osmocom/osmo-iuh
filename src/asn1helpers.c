
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
	OSMO_ASSERT(in && in->size >= sizeof(uint32_t));
	return *(uint32_t *)in->buf;
}
