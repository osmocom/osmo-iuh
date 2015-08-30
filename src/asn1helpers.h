#pragma once

#include <asn1defs.h>

static inline uint16_t asn1str_to_u16(ASN1String *as)
{
	if (as->len < 2)
		return 0;
	else
		return *(uint16_t *)as->buf;
}

static inline uint8_t asn1str_to_u8(ASN1String *as)
{
	if (as->len < 1)
		return 0;
	else
		return *(uint8_t *)as->buf;
}

static inline uint8_t asn1bitstr_to_u32(ASN1BitString *as)
{
	if (as->len < 25)
		return 0;
	else
		return *(uint32_t *)as->buf;
}

int asn1_strncpy(char *out, const ASN1String *in, size_t n);
