#pragma once

#include "hnbgw.h"

struct hnbgw_cnlink *hnbgw_cnlink_init(struct hnb_gw *gw, const char *host, uint16_t port);
