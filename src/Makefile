ASN1_ROOT=../asn1/
ASN1_FILES=HNBAP-CommonDataTypes.asn

ASN1TOSTRUCT:=$(ASN1_ROOT)/utils/asn1tostruct.py

PKG_INCLUDES:=$(shell pkg-config --cflags libosmocore libosmovty libosmogsm libasn1c)
PKG_LDFLAGS:=$(shell pkg-config --libs libosmocore libosmovty libosmogsm libasn1c)

CFLAGS:=-g -Wall $(PKG_INCLUDES) -Ihnbap/
LDFLAGS:=$(PKG_LDFLAGS) -lsctp

HNBAP_OBJS=hnbap_encoder.o hnbap_decoder.o hnbap_common.o
RUA_OBJS=rua_encoder.o rua_decoder.o rua_common.o
RANAP_OBJS=ranap_common.o #ranap_encoder.o ranap_decoder.o

LIBS=hnbap/libosmo-asn1-hnbap.a rua/libosmo-asn1-rua.a ranap/libosmo-asn1-ranap.a

all: hnbgw

.PHONY: hnbap_encoder.c
hnbap_encoder.c: $(ASN1_ROOT)/hnbap/HNBAP-PDU-Contents.asn
	$(ASN1TOSTRUCT) -f $<

.PHONY: rua_encoder.c
rua_encoder.c: $(ASN1_ROOT)/rua/RUA-PDU-Contents.asn
	$(ASN1TOSTRUCT) -p RUA_ -f $<

.PHONY: ranap_encoder.c
ranap_encoder.c: $(ASN1_ROOT)/ranap/RANAP-PDU-Contents.asn
	$(ASN1TOSTRUCT) -p RANAP_ -f $<

hnbap/libosmo-asn1-hnbap.a:
	$(MAKE) -C hnbap

rua/libosmo-asn1-rua.a:
	$(MAKE) -C rua

ranap/libosmo-asn1-ranap.a:
	$(MAKE) -C ranap

hnbgw: asn1helpers.o hnbgw.o hnbgw_hnbap.o hnbgw_rua.o hnbgw_ranap.o $(HNBAP_OBJS) $(RUA_OBJS) $(RANAP_OBJS) $(LIBS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	@rm -f hnbgw *.o

mrproper: clean
	$(MAKE) -C hnbap clean
	$(MAKE) -C rua clean
	$(MAKE) -C ranap clean
