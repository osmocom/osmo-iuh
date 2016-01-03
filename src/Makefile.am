SUBDIRS = hnbap rua ranap tests

RANAP_LIBVERSION=0:0:0

ASN1_ROOT = $(top_builddir)/asn1/
ASN1TOSTRUCT = $(ASN1_ROOT)/utils/asn1tostruct.py

AM_CFLAGS = $(OSMOCORE_CFLAGS) $(OSMOVTY_CFLAGS) $(OSMOGSM_CFLAGS) $(OSMONETIF_CFLAGS) $(ASN1C_CFLAGS) $(OSMOSIGTRAN_CFLAGS) -Ihnbap/
COMMON_LDADD = -lsctp

lib_LTLIBRARIES = libosmo-ranap.la
libosmo_ranap_la_LDFLAGS = $(AM_LDFLAGS) -version-info $(RANAP_LIBVERSION)
libosmo_ranap_la_LIBADD = $(OSMOCORE_LIBS) $(OSMOGSM_LIBS) $(ASN1C_LIBS) $(COMMON_LDADD) ranap/libosmo-asn1-ranap.la
libosmo_ranap_la_SOURCES = ranap_common.c ranap_encoder.c ranap_decoder.c ranap_msg_factory.c

bin_PROGRAMS = hnbgw

hnbgw_SOURCES = hnbap_encoder.c hnbap_decoder.c rua_encoder.c rua_decoder.c rua_common.c hnbap_common.c iu_helpers.c asn1helpers.c hnbgw.c hnbgw_hnbap.c hnbgw_rua.c hnbgw_ranap.c context_map.c hnbgw_cn.c sccp_helpers.c
hnbgw_LDADD = $(OSMOCORE_LIBS) $(OSMOVTY_LIBS) $(OSMOGSM_LIBS) $(ASN1C_LIBS) $(OSMOSIGTRAN_LIBS) $(COMMON_LDADD) hnbap/libosmo-asn1-hnbap.a rua/libosmo-asn1-rua.a libosmo-ranap.la

BUILT_SOURCES = hnbap_decoder.c hnbap_encoder.c rua_decoder.c rua_encoder.c ranap_decoder.c ranap_encoder.c

hnbap_encoder.c hnbap_decoder.c hnbap_ies_defs.h: $(ASN1_ROOT)/hnbap/HNBAP-PDU-Contents.asn
	$(ASN1TOSTRUCT) -f $<

rua_encoder.c rua_decoder.c rua_ies_defs.h: $(ASN1_ROOT)/rua/RUA-PDU-Contents.asn
	$(ASN1TOSTRUCT) -p RUA_ -f $<

ranap_encoder.c ranap_decoder.c ranap_ies_defs.h: $(ASN1_ROOT)/ranap/RANAP-PDU-Contents.asn
	$(ASN1TOSTRUCT) -p RANAP_ -f $<
