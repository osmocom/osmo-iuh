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
