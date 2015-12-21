#pragma once

#include <stdint.h>
#include <osmocom/core/prim.h>

struct osmo_sua_user;

void osmo_sua_set_log_area(int area);

struct osmo_sua_user *osmo_sua_user_create(void *ctx, osmo_prim_cb prim_cb);
void osmo_sua_user_destroy(struct osmo_sua_user *user);

int sua_server_listen(struct osmo_sua_user *user, const char *hostname, uint16_t port);

int sua_client_connect(struct osmo_sua_user *user, const char *hostname, uint16_t port);
struct sua_link *sua_client_get_link(struct osmo_sua_user *user);

/* user hands us a SCCP-USER SAP primitive down into the stack */
int osmo_osmo_sua_user_link_down(struct sua_link *link, struct osmo_prim_hdr *oph);

