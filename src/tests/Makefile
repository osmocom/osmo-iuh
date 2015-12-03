
PKG_INCLUDES:=$(shell pkg-config --cflags libosmocore libosmovty libosmogsm libasn1c)
PKG_LDFLAGS:=$(shell pkg-config --libs libosmocore libosmovty libosmogsm libasn1c)

CFLAGS:=-g -Wall $(PKG_INCLUDES) -I.. -I../hnbap
LDFLAGS:=$(PKG_LDFLAGS) -lsctp

test-helpers: ../iu_helpers.o ../asn1helpers.o test-helpers.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

test-hnbap: ../iu_helpers.o ../asn1helpers.o ../hnbap_common.o ../hnbap_decoder.o test-hnbap.c ../hnbap/libosmo-asn1-hnbap.a
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

HNBAP_OBJS=../hnbap_encoder.o ../hnbap_decoder.o ../hnbap_common.o
RUA_OBJS=../rua_encoder.o ../rua_decoder.o ../rua_common.o
RANAP_OBJS=../ranap_common.o #ranap_encoder.o ranap_decoder.o

LIBS=../hnbap/libosmo-asn1-hnbap.a ../rua/libosmo-asn1-rua.a ../ranap/libosmo-asn1-ranap.a

hnb-test: 	$(HNBAP_OBJS) $(RUA_OBJS) $(RANAP_OBJS) ../iu_helpers.o ../asn1helpers.o hnb-test.o $(LIBS)
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	@rm -f hnb-test test-helpers test-hnbap *.o
