#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <sys/types.h>

#include <osmocom/ranap/RANAP_IuTransportAssociation.h>
#include <osmocom/ranap/RANAP_TransportLayerAddress.h>
#include <osmocom/ranap/RANAP_TransportLayerInformation.h>

struct osmo_sockaddr;

int ranap_bcd_decode(char *out, size_t out_len, const uint8_t *in, size_t in_len);
int ranap_imsi_encode(uint8_t *out, size_t out_len, const char *in);
int ranap_transp_assoc_decode(uint16_t *port, const RANAP_IuTransportAssociation_t *transp_assoc);
int ranap_transp_layer_addr_decode(char *addr, unsigned int addr_len,
				   const RANAP_TransportLayerAddress_t *trasp_layer_addr);
int ranap_transp_layer_addr_decode2(struct osmo_sockaddr *addr, bool *uses_x213_nsap,
				    const RANAP_TransportLayerAddress_t *trasp_layer_addr);
RANAP_TransportLayerInformation_t *ranap_new_transp_info_rtp(struct osmo_sockaddr *addr, bool use_x213_nsap);
RANAP_TransportLayerInformation_t *ranap_new_transp_info_gtp(struct osmo_sockaddr *addr, uint32_t tei,
							     bool use_x213_nsap);
