
PKG_INCLUDES:=$(shell pkg-config --cflags libosmocore libosmovty libosmogsm libasn1c)
PKG_LDFLAGS:=$(shell pkg-config --libs libosmocore libosmovty libosmogsm libasn1c)

CFLAGS:=-g -Wall $(PKG_INCLUDES) -I..
LDFLAGS:=$(PKG_LDFLAGS)

test-helpers: ../iu_helpers.o test-helpers.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^
