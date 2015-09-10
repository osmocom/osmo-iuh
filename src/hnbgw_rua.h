#pragma once

#include "hnbgw.h"

int hnbgw_rua_rx(struct hnb_context *hnb, struct msgb *msg);
int hnbgw_rua_init(void);

int rua_tx_udt(struct msgb *inmsg);
