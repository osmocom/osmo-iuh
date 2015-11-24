
PKG_INCLUDES:=$(shell pkg-config --cflags libosmocore libosmovty libosmogsm libasn1c)
PKG_LDFLAGS:=$(shell pkg-config --libs libosmocore libosmovty libosmogsm libasn1c)

CFLAGS:=-g -Wall $(PKG_INCLUDES) -I.. -I../hnbap
LDFLAGS:=$(PKG_LDFLAGS)

test-helpers: ../iu_helpers.o ../asn1helpers.o test-helpers.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

test-hnbap: ../iu_helpers.o ../asn1helpers.o ../hnbap_common.o ../hnbap_decoder.o test-hnbap.c ../hnbap/libosmo-asn1-hnbap.a
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^
