ASN1_ROOT=../asn1/
ASN1_FILES=HNBAP-CommonDataTypes.asn

ASN1TOSTRUCT:=$(ASN1_ROOT)/utils/asn1tostruct.py
#ASN1_SRCS:=$(patsubst 

CFLAGS=-g -Wall `pkg-config --cflags libosmocore libosmovty libosmogsm libasn1c` -Iasn1c/
LDFLAGS=`pkg-config --libs libosmocore libosmovty libosmogsm libasn1c` -lsctp

RANAP_OBJS=ranap/libosmo-asn1-ranap.a #ranap_encoder.o ranap_decoder.o
RUA_OBJS=rua/libosmo-asn1-rua.a #rua_encoder.o rua_decoder.o

all: hnbgw

.PHONY: hnbap_encoder.c
hnbap_encoder.c: $(ASN1_ROOT)/hnbap/HNBAP-PDU-Contents.asn
	$(ASN1TOSTRUCT) -f $<

.PHONY: rua_encoder.c
rua_encoder.c: $(ASN1_ROOT)/rua/RUA-PDU-Contents.asn
	$(ASN1TOSTRUCT) -f $<

.PHONY: ranap_encoder.c
ranap_encoder.c: $(ASN1_ROOT)/ranap/RANAP-PDU-Contents.asn
	$(ASN1TOSTRUCT) -f $<

.PHONY: ranap_common.h
ranap_common.h:
	for f in ranap/*.h; do echo "#include \"$f\""; done > ranap_common.h

.PHONY: rua_common.h
rua_common.h:
	for f in ranap/*.h; do echo "#include \"$f\""; done > rua_common.h

asn1c/libosmo-asn1-hnbap.a:
	$(MAKE) -C asn1c

rua/libosmo-asn1-rua.a:
	$(MAKE) -C rua

ranap/libosmo-asn1-ranap.a:
	$(MAKE) -C ranap

hnbgw: asn1helpers.o hnbap_common.o hnbap_encoder.o hnbap_decoder.o hnbgw.o hnbgw_hnbap.o asn1c/libosmo-asn1-hnbap.a $(RUA_OBJS) $(RANAP_OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	@rm -f hmbgw *.o
