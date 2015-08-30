ASN1_ROOT=../asn1/
ASN1_DIR=$(ASN1_ROOT)/hnbap
ASN1_FILES=HNBAP-CommonDataTypes.asn

ASN1TOSTRUCT:=$(ASN1_ROOT)/utils/asn1tostruct.py
#ASN1_SRCS:=$(patsubst 

CFLAGS=-g -Wall `pkg-config --cflags libosmocore libosmovty libosmogsm` -I$(ASN1_DIR)/asn1c/
LDFLAGS=`pkg-config --libs libosmocore libosmovty libosmogsm` -lsctp

all: hnbgw

.PHONY: hnbap_encoder.c
hnbap_encoder.c: $(ASN1_DIR)/HNBAP-PDU-Contents.asn
	$(ASN1TOSTRUCT) -f $<

hnbgw: asn1helpers.o hnbap_common.o hnbap_encoder.o hnbap_decoder.o hnbgw.o hnbgw_hnbap.o
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	@rm -f hmbgw *.o
