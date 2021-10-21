SUBDIRS = hnbap rua ranap sabp tests

# Build {hnbap,rua,ranap}_{encoder,decoder}.c using asn1tostruct
ASN1_ROOT = $(top_srcdir)/asn1
ASN1TOSTRUCT = $(ASN1_ROOT)/utils/asn1tostruct.py
BUILT_SOURCES = hnbap_decoder.c hnbap_encoder.c rua_decoder.c rua_encoder.c sabp_encoder.c sabp_decoder.c \
	gen_hnbap.stamp gen_rua.stamp gen_ranap.stamp gen_sabp.stamp

gen_hnbap.stamp: $(ASN1_ROOT)/hnbap/HNBAP-PDU-Contents.asn $(ASN1TOSTRUCT)
	$(ASN1TOSTRUCT) -f $<
#	We also need to replace the include in the newly generated .c files:
	sed -i 's,^#include "hnbap_ies_defs.h",#include <osmocom/hnbap/hnbap_ies_defs.h>,' hnbap_encoder.c hnbap_decoder.c
	sed -i 's,^#include "hnbap_common.h",#include <osmocom/hnbap/hnbap_common.h>,' hnbap_encoder.c hnbap_decoder.c hnbap_ies_defs.h
	mv hnbap_ies_defs.h $(top_builddir)/include/osmocom/hnbap/
#	this is ugly ^. hnbap_ies_defs.h is generated from asn1tostruct.py here, but
#	it should live in include/osmocom/hnbap/.
	touch $(top_builddir)/src/$@

hnbap_decoder.c hnbap_encoder.c: gen_hnbap.stamp

gen_rua.stamp: $(ASN1_ROOT)/rua/RUA-PDU-Contents.asn $(ASN1TOSTRUCT)
	$(ASN1TOSTRUCT) -p RUA_ -f $<
#	We also need to replace the include in the newly generated .c files:
	sed -i 's,^#include "rua_ies_defs.h",#include <osmocom/rua/rua_ies_defs.h>,' rua_encoder.c rua_decoder.c
	sed -i 's,^#include "rua_common.h",#include <osmocom/rua/rua_common.h>,' rua_encoder.c rua_decoder.c rua_ies_defs.h
	mv rua_ies_defs.h $(top_builddir)/include/osmocom/rua/
#	this is ugly ^. rua_ies_defs.h is generated from asn1tostruct.py here, but
#	it should live in include/osmocom/rua/.
	touch $(top_builddir)/src/$@

rua_decoder.c rua_encoder.c: gen_rua.stamp

gen_ranap.stamp: $(ASN1_ROOT)/ranap/RANAP-PDU-Contents.asn $(ASN1TOSTRUCT)
	$(ASN1TOSTRUCT) -p RANAP_ -f $<
#	We also need to replace the include in the newly generated .c files:
	sed -i 's,^#include "ranap_ies_defs.h",#include <osmocom/ranap/ranap_ies_defs.h>,' ranap_encoder.c ranap_decoder.c
	sed -i 's,^#include "ranap_common.h",#include <osmocom/ranap/ranap_common.h>,' ranap_encoder.c ranap_decoder.c ranap_ies_defs.h
	mv ranap_ies_defs.h $(top_builddir)/include/osmocom/ranap/
#	this is ugly ^. ranap_ies_defs.h is generated from asn1tostruct.py here, but
#	it should live in include/osmocom/ranap/.
	touch $(top_builddir)/src/$@

ranap_decoder.c ranap_encoder.c: gen_ranap.stamp

gen_sabp.stamp: $(ASN1_ROOT)/sabp/SABP-PDU-Contents.asn $(ASN1TOSTRUCT)
	$(ASN1TOSTRUCT) -p SABP_ -f $<
#	We also need to replace the include in the newly generated .c files:
	sed -i 's,^#include "sabp_ies_defs.h",#include <osmocom/sabp/sabp_ies_defs.h>,' sabp_encoder.c sabp_decoder.c
	sed -i 's,^#include "sabp_common.h",#include <osmocom/sabp/sabp_common.h>,' sabp_encoder.c sabp_decoder.c sabp_ies_defs.h
	mv sabp_ies_defs.h $(top_builddir)/include/osmocom/sabp/
#	this is ugly ^. sabp_ies_defs.h is generated from asn1tostruct.py here, but
#	it should live in include/osmocom/sabp/.
	touch $(top_builddir)/src/$@

sabp_decoder.c sabp_encoder.c: gen_sabp.stamp


AM_CFLAGS = -Wall -I$(top_srcdir)/include -I$(top_builddir)/include \
	    $(OSMOCORE_CFLAGS) $(OSMOVTY_CFLAGS) $(OSMOCTRL_CFLAGS) $(OSMOGSM_CFLAGS) \
	    $(OSMONETIF_CFLAGS) $(ASN1C_CFLAGS) $(OSMOSIGTRAN_CFLAGS)

# build the shared RANAP + SABP library
#
HNBAP_LIBVERSION=0:0:0
RANAP_LIBVERSION=4:0:1
RUA_LIBVERSION=0:0:0
SABP_LIBVERSION=0:0:0
lib_LTLIBRARIES = libosmo-hnbap.la libosmo-ranap.la libosmo-rua.la libosmo-sabp.la
libosmo_hnbap_la_LDFLAGS = $(AM_LDFLAGS) -version-info $(HNBAP_LIBVERSION)
libosmo_hnbap_la_LIBADD = $(OSMOCORE_LIBS) $(OSMOGSM_LIBS) $(OSMOVTY_LIBS) $(OSMOSIGTRAN_LIBS) \
			  $(ASN1C_LIBS) hnbap/libosmo-asn1-hnbap.la
libosmo_hnbap_la_SOURCES = hnbap_common.c hnbap_encoder.c hnbap_decoder.c

libosmo_ranap_la_LDFLAGS = $(AM_LDFLAGS) -version-info $(RANAP_LIBVERSION)
libosmo_ranap_la_LIBADD = $(OSMOCORE_LIBS) $(OSMOGSM_LIBS) $(OSMOVTY_LIBS) $(OSMOSIGTRAN_LIBS) \
			  $(ASN1C_LIBS) ranap/libosmo-asn1-ranap.la
libosmo_ranap_la_SOURCES = ranap_common.c ranap_encoder.c ranap_decoder.c ranap_msg_factory.c iu_helpers.c \
			   ranap_common_cn.c iu_client.c iu_client_vty.c

libosmo_rua_la_LDFLAGS = $(AM_LDFLAGS) -version-info $(HNBAP_LIBVERSION)
libosmo_rua_la_LIBADD = $(OSMOCORE_LIBS) $(OSMOGSM_LIBS) $(OSMOVTY_LIBS) $(OSMOSIGTRAN_LIBS) \
			  $(ASN1C_LIBS) rua/libosmo-asn1-rua.la
libosmo_rua_la_SOURCES = rua_common.c rua_encoder.c rua_decoder.c rua_msg_factory.c

libosmo_sabp_la_LDFLAGS = $(AM_LDFLAGS) -version-info $(SABP_LIBVERSION)
libosmo_sabp_la_LIBADD = $(OSMOCORE_LIBS) $(OSMOGSM_LIBS) $(OSMOVTY_LIBS) $(OSMOSIGTRAN_LIBS) \
			  $(ASN1C_LIBS) sabp/libosmo-asn1-sabp.la
libosmo_sabp_la_SOURCES = sabp_common.c sabp_encoder.c sabp_decoder.c


# build the actual HomeNodeB gateway
#
bin_PROGRAMS = osmo-hnbgw

osmo_hnbgw_SOURCES = hnbgw.c hnbgw_hnbap.c hnbgw_rua.c hnbgw_ranap.c \
		     hnbgw_vty.c \
		     context_map.c hnbgw_cn.c

osmo_hnbgw_LDADD = $(OSMOCORE_LIBS) $(OSMOGSM_LIBS) $(OSMOVTY_LIBS) $(OSMOCTRL_LIBS) \
		   $(ASN1C_LIBS) $(OSMOSIGTRAN_LIBS) \
		   $(OSMONETIF_LIBS) \
		   libosmo-hnbap.la libosmo-rua.la libosmo-ranap.la


regen: regenerate-from-asn1-source

regenerate-from-asn1-source:
	$(MAKE) -C hnbap regen
	$(MAKE) -C ranap regen
	$(MAKE) -C rua regen
	$(MAKE) -C sabp regen

DISTCLEANFILES = \
	hnbap_decoder.c \
	hnbap_encoder.c \
	rua_decoder.c \
	rua_encoder.c \
	ranap_decoder.c \
	ranap_encoder.c \
	sabp_decoder.c \
	sabp_encoder.c \
	gen_hnbap.stamp \
	gen_rua.stamp \
	gen_ranap.stamp \
	gen_sabp.stamp
