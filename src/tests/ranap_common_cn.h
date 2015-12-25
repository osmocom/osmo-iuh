#pragma once

#include <stdint.h>

#include "ranap_common.h"
#include "ranap_ies_defs.h"

/* call-back functions to be provided by actual core network node */
int cn_ranap_handle_co(void *ctx, ranap_message *message);
int cn_ranap_handle_cl(void *ctx, ranap_message *message);


/* receive a connections-liess RANAP message */
int cn_ranap_rx_cl(void *ctx, uint8_t *data, size_t len);

/* receive a connection-oriented RANAP message */
int cn_ranap_rx_co(void *ctx, uint8_t *data, size_t len);
