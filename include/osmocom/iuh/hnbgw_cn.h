#pragma once

#include <osmocom/iuh/hnbgw.h>

int hnbgw_cnlink_init(struct hnb_gw *gw, const char *stp_host, uint16_t stp_port, const char *local_ip);
