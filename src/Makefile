ASN1_ROOT=../asn1/
ASN1_FILES=HNBAP-CommonDataTypes.asn

ASN1TOSTRUCT:=$(ASN1_ROOT)/utils/asn1tostruct.py
#ASN1_SRCS:=$(patsubst 

CFLAGS=-g -Wall `pkg-config --cflags libosmocore libosmovty libosmogsm libasn1c` -Iasn1c/
LDFLAGS=`pkg-config --libs libosmocore libosmovty libosmogsm libasn1c` -lsctp

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

asn1c/libosmo-asn1-hnbap.a:
	$(MAKE) -C asn1c

hnbgw: asn1helpers.o hnbap_common.o hnbap_encoder.o hnbap_decoder.o hnbgw.o hnbgw_hnbap.o asn1c/libosmo-asn1-hnbap.a
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	@rm -f hmbgw *.o
