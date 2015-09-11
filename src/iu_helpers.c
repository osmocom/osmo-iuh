#include <stdint.h>

#include <osmocom/core/utils.h>

int decode_iu_bcd(char *out, size_t out_len, const uint8_t *in, size_t in_len)
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

int encode_iu_imsi(uint8_t *out, size_t out_len, const char *in)
{
	unsigned int len = strlen(in);
	uint8_t odd = (len & 0x01) == 1;
	unsigned int off = 0;
	unsigned int i;

	len /= 2;
	if (odd)
		len++;

	for (i = 0; i < len; i++) {
		uint8_t lower, upper;

		lower = osmo_char2bcd(in[++off]) & 0x0f;
		if (!odd && off + 1 == len)
			upper = 0x0f;
		else
			upper = osmo_char2bcd(in[++off]) & 0x0f;

		out[i] = (upper << 4) | lower;
	}
	return i;
}
