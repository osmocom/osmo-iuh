LIBFFASN1_DIR=../../../kommerz/sysmocom/git/admin/ffasn1c/libffasn1

CFLAGS=-g -Wall `pkg-config --cflags libosmocore libosmovty libosmogsm` -I$(LIBFFASN1_DIR)
LDFLAGS=`pkg-config --libs libosmocore libosmovty libosmogsm` -lsctp -L$(LIBFFASN1_DIR) -lffasn1

all: hnbgw

hnbgw: hnbgw.o hnbgw_hnbap.o hnbap.o
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	@rm -f hmbgw *.o
