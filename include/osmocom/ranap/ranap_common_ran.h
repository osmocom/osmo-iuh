#pragma once

#include <stdint.h>

#include <osmocom/ranap/ranap_common.h>
#include <osmocom/ranap/ranap_ies_defs.h>

/* free a decoded connection-oriented RANAP message */
void ranap_ran_rx_co_free(ranap_message *message);

/* decode a connection-oriented RANAP message */
int ranap_ran_rx_co_decode(void *ctx, ranap_message *message, uint8_t *data, size_t len);

/* receive a connection-oriented RANAP message */
int ranap_ran_rx_co(ranap_handle_cb cb, void *ctx, uint8_t *data, size_t len);
