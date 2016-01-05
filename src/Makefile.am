SUBDIRS = hnbap rua ranap tests

# Build {hnbap,rua,ranap}_{encoder,decoder}.c using asn1tostruct
ASN1_ROOT = $(top_builddir)/asn1/
ASN1TOSTRUCT = $(ASN1_ROOT)/utils/asn1tostruct.py
BUILT_SOURCES = hnbap_decoder.c hnbap_encoder.c rua_decoder.c rua_encoder.c ranap_decoder.c ranap_encoder.c

hnbap_encoder.c hnbap_decoder.c hnbap_ies_defs.h: $(ASN1_ROOT)/hnbap/HNBAP-PDU-Contents.asn $(ASN1TOSTRUCT)
	$(ASN1TOSTRUCT) -f $<

rua_encoder.c rua_decoder.c rua_ies_defs.h: $(ASN1_ROOT)/rua/RUA-PDU-Contents.asn $(ASN1TOSTRUCT)
	$(ASN1TOSTRUCT) -p RUA_ -f $<

ranap_encoder.c ranap_decoder.c: $(ASN1_ROOT)/ranap/RANAP-PDU-Contents.asn $(ASN1TOSTRUCT)
	$(ASN1TOSTRUCT) -p RANAP_ -f $<
	mv ranap_ies_defs.h $(includedir)/osmocom/ranap/
#	this is ugly ^. ranap_ies_defs.h is generated from asn1tostruct.py here, but
#	it should live in include/osmocom/ranap/.
#	We also need to replace the include in the newly generated .c files:
	sed -i 's,^#include "ranap_ies_defs.h",#include <osmocom/ranap/ranap_ies_defs.h>,' ranap_encoder.c ranap_decoder.c

AM_CFLAGS = $(OSMOCORE_CFLAGS) $(OSMOVTY_CFLAGS) $(OSMOGSM_CFLAGS) $(OSMONETIF_CFLAGS) $(ASN1C_CFLAGS) $(OSMOSIGTRAN_CFLAGS) -I../include
COMMON_LDADD = -lsctp

# build the shared RANAP library
#
RANAP_LIBVERSION=0:0:0
lib_LTLIBRARIES = libosmo-ranap.la
libosmo_ranap_la_LDFLAGS = $(AM_LDFLAGS) -version-info $(RANAP_LIBVERSION)
libosmo_ranap_la_LIBADD = $(OSMOCORE_LIBS) $(OSMOGSM_LIBS) $(ASN1C_LIBS) $(COMMON_LDADD) ranap/libosmo-asn1-ranap.la
libosmo_ranap_la_SOURCES = ranap_common.c ranap_encoder.c ranap_decoder.c ranap_msg_factory.c iu_helpers.c

# build the actual HomeNodeB gateway
#
bin_PROGRAMS = osmo-hnbgw

noinst_HEADERS = hnbap_common.h hnbap_ies_defs.h \
		 rua_common.h rua_ies_defs.h \
		 context_map.h hnbgw.h hnbgw_cn.h \
		 hnbgw_hnbap.h hnbgw_rua.h hnbgw_ranap.h \
		 sccp_helpers.h

osmo_hnbgw_SOURCES = hnbap_encoder.c hnbap_decoder.c hnbap_common.c \
		     rua_encoder.c rua_decoder.c rua_common.c \
		     rua_msg_factory.c sccp_helpers.c \
		     hnbgw.c hnbgw_hnbap.c hnbgw_rua.c hnbgw_ranap.c \
		     context_map.c hnbgw_cn.c

osmo_hnbgw_LDADD = $(OSMOCORE_LIBS) $(OSMOVTY_LIBS) $(OSMOGSM_LIBS) \
		   $(ASN1C_LIBS) $(OSMOSIGTRAN_LIBS) $(COMMON_LDADD) \
		   hnbap/libosmo-asn1-hnbap.a rua/libosmo-asn1-rua.a \
		   libosmo-ranap.la


regen: regenerate-from-asn1-source

regenerate-from-asn1-source:
	make -C hnbap regen
	make -C ranap regen
	make -C rua regen
