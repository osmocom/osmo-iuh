
#include <string.h>

#include <asn1defs.h>

#include "asn1helpers.h"

int asn1_strncpy(char *out, const ASN1String *in, size_t n)
{
	size_t cpylen = n;

	if (in->len < cpylen)
		cpylen = in->len;

	strncpy(out, (char *)in->buf, cpylen);
	out[n-1] = '\0';

	return cpylen;
}
