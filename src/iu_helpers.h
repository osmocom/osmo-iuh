#pragma once

#include <stdint.h>

int decode_iu_bcd(char *out, size_t out_len, const uint8_t *in, size_t in_len);
int encode_iu_imsi(uint8_t *out, size_t out_len, const char *in);
