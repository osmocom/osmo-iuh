SUBDIRS = hnbap rua ranap tests

ASN1_ROOT = $(top_builddir)/asn1/
ASN1TOSTRUCT = $(ASN1_ROOT)/utils/asn1tostruct.py

AM_CFLAGS = $(OSMOCORE_CFLAGS) $(OSMOVTY_CFLAGS) $(OSMOGSM_CFLAGS) $(ASN1C_CFLAGS) -Ihnbap/
COMMON_LDADD = -lsctp

bin_PROGRAMS = hnbgw

hnbgw_SOURCES = hnbap_encoder.c hnbap_decoder.c rua_encoder.c rua_decoder.c ranap_common.c rua_common.c hnbap_common.c iu_helpers.c asn1helpers.c hnbgw.c hnbgw_hnbap.c hnbgw_rua.c hnbgw_ranap.c ranap_decoder.c ranap_encoder.c ranap_msg_factory.c
hnbgw_LDADD = $(OSMOCORE_LIBS) $(OSMOVTY_LIBS) $(OSMOGSM_LIBS) $(ASN1C_LIBS) $(COMMON_LDADD) hnbap/libosmo-asn1-hnbap.a rua/libosmo-asn1-rua.a ranap/libosmo-asn1-ranap.a


.PHONY: hnbap_encoder.c
hnbap_encoder.c : $(ASN1_ROOT)/hnbap/HNBAP-PDU-Contents.asn
	$(ASN1TOSTRUCT) -f $<

.PHONY: rua_encoder.c
rua_encoder.c : $(ASN1_ROOT)/rua/RUA-PDU-Contents.asn
	$(ASN1TOSTRUCT) -p RUA_ -f $<

.PHONY: ranap_encoder.c
ranap_encoder.c : $(ASN1_ROOT)/ranap/RANAP-PDU-Contents.asn
	$(ASN1TOSTRUCT) -p RANAP_ -f $<
