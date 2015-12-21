LDADD := -ltalloc -lsctp $(shell pkg-config --libs libosmo-sccp) $(shell pkg-config --libs libosmocore) $(shell pkg-config --libs libosmo-netif)
LDFLAGS += $(LDADD)
CFLAGS += -Wall

all: sua_client_test sua_server_test

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

sua_client_test: sccp_sap.o sua.o sua_client_test.o sua_test_common.o /usr/local/lib/libxua.a
	$(CC) $(LDFLAGS) -o $@ $^

sua_server_test: sccp_sap.o sua.o sua_server_test.o sua_test_common.o /usr/local/lib/libxua.a
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	@rm *.o sua_client_test sua_server_test
