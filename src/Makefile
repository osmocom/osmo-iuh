LIBFFASN1_DIR=../../../kommerz/sysmocom/git/admin/ffasn1c/libffasn1

CFLAGS=-g -Wall `pkg-config --cflags libosmocore libosmovty libosmogsm` -I$(LIBFFASN1_DIR)
LDFLAGS=`pkg-config --libs libosmocore libosmovty libosmogsm` -lsctp

all: hnbgw

hnbgw: hnbgw.o hnbgw_hnbap.o hnbap.o asn1helpers.o $(LIBFFASN1_DIR)/libffasn1.a $(LIBFFASN1_DIR)/libffasn1_runtime_stdc.a
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	@rm -f hmbgw *.o
