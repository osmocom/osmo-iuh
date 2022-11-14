#pragma once

#include <stdint.h>

#include <osmocom/ranap/ranap_common.h>
#include <osmocom/ranap/ranap_ies_defs.h>

/* free a decoded connection-less RANAP message */
void ranap_cn_rx_cl_free(ranap_message *message);

/* decode a connection-less RANAP message */
int ranap_cn_rx_cl_decode2(ranap_message *message, uint8_t *data, size_t len);
int ranap_cn_rx_cl_decode(void *unused, ranap_message *message, uint8_t *data, size_t len)
	OSMO_DEPRECATED("Use ranap_cn_rx_cl_decode2() instead, the first arg is not used");

/* receive a connection-less RANAP message */
int ranap_cn_rx_cl(ranap_handle_cb cb, void *priv, uint8_t *data, size_t len);

/* free a decoded connection-oriented RANAP message */
void ranap_cn_rx_co_free(ranap_message *message);

/* decode a connection-oriented RANAP message */
int ranap_cn_rx_co_decode2(ranap_message *message, uint8_t *data, size_t len);
int ranap_cn_rx_co_decode(void *unused, ranap_message *message, uint8_t *data, size_t len)
	OSMO_DEPRECATED("Use ranap_cn_rx_co_decode2() instead, the first arg is not used");

/* receive a connection-oriented RANAP message */
int ranap_cn_rx_co(ranap_handle_cb cb, void *priv, uint8_t *data, size_t len);
