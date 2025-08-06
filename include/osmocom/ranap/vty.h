#pragma once

#include <osmocom/ranap/ranap_common.h>

struct vty;

void ranap_iu_vty_init(int iu_parent_node, enum ranap_nsap_addr_enc *rab_assign_addr_enc);
int ranap_iu_vty_config_write(struct vty *vty, const char *indent);
