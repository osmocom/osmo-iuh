#pragma once

#include <stdint.h>

#include <osmocom/ranap/ranap_common.h>
#include <osmocom/ranap/ranap_ies_defs.h>

typedef void (*ranap_handle_cb)(void *ctx, ranap_message *ranap_msg);

/* free a decoded connection-less RANAP message */
void ranap_cn_rx_cl_free(ranap_message *message);

/* decode a connection-less RANAP message */
int ranap_cn_rx_cl_decode(void *ctx, ranap_message *message, uint8_t *data, size_t len);

/* receive a connection-less RANAP message */
int ranap_cn_rx_cl(ranap_handle_cb cb, void *ctx, uint8_t *data, size_t len);

/* free a decoded connection-oriented RANAP message */
void ranap_cn_rx_co_free(ranap_message *message);

/* decode a connection-oriented RANAP message */
int ranap_cn_rx_co_decode(void *ctx, ranap_message *message, uint8_t *data, size_t len);

/* receive a connection-oriented RANAP message */
int ranap_cn_rx_co(ranap_handle_cb cb, void *ctx, uint8_t *data, size_t len);
