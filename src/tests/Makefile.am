AM_CFLAGS = $(OSMOVTY_CFLAGS) $(OSMOCORE_CFLAGS) $(OSMOGSM_CFLAGS) $(OSMONETIF_CFLAGS) $(ASN1C_CFLAGS) $(OSMOSIGTRAN_CFLAGS) -g -I$(top_builddir)/src -I$(top_builddir)/src/hnbap/

COMMON_LIBS = $(OSMOVTY_LIBS) $(OSMOCORE_LIBS) $(OSMOGSM_LIBS) $(ASN1C_LIBS) $(OSMOSIGTRAN_LIBS) -lsctp

check_PROGRAMS = test-ranap test-helpers test-hnbap hnb-test dummy-cn

HNBAP_FILES = $(top_builddir)/src/hnbap_common.c $(top_builddir)/src/hnbap_decoder.c $(top_builddir)/src/hnbap_encoder.c
RUA_FILES = $(top_builddir)/src/rua_common.c $(top_builddir)/src/rua_decoder.c $(top_builddir)/src/rua_encoder.c

test_helpers_SOURCES = test-helpers.c
test_helpers_LDADD = $(COMMON_LIBS) $(top_builddir)/src/libosmo-ranap.la

test_hnbap_SOURCES = $(top_builddir)/src/hnbap_common.c $(top_builddir)/src/hnbap_decoder.c test-hnbap.c test_common.c
test_hnbap_LDADD = $(COMMON_LIBS) $(top_builddir)/src/hnbap/libosmo-asn1-hnbap.a $(top_builddir)/src/libosmo-ranap.la

hnb_test_SOURCES = $(HNBAP_FILES) $(RUA_FILES) hnb-test.c rua_helper.c test_common.c
hnb_test_LDADD = $(COMMON_LIBS) $(top_builddir)/src/hnbap/libosmo-asn1-hnbap.a $(top_builddir)/src/rua/libosmo-asn1-rua.a $(top_builddir)/src/libosmo-ranap.la

test_ranap_SOURCES = $(RANAP_FILES) test-ranap.c test_common.c
test_ranap_LDADD = $(COMMON_LIBS) $(top_builddir)/src/libosmo-ranap.la

dummy_cn_SOURCES = $(RANAP_FILES) test_common.c dummy_cn_sua.c ranap_common_cn.c
dummy_cn_LDADD = $(COMMON_LIBS) $(top_builddir)/src/libosmo-ranap.la

# The `:;' works around a Bash 3.2 bug when the output is not writeable.
$(srcdir)/package.m4: $(top_srcdir)/configure.ac
	:;{ \
               echo '# Signature of the current package.' && \
               echo 'm4_define([AT_PACKAGE_NAME],' && \
               echo '  [$(PACKAGE_NAME)])' && \
               echo 'm4_define([AT_PACKAGE_TARNAME],' && \
               echo '  [$(PACKAGE_TARNAME)])' && \
               echo 'm4_define([AT_PACKAGE_VERSION],' && \
               echo '  [$(PACKAGE_VERSION)])' && \
               echo 'm4_define([AT_PACKAGE_STRING],' && \
               echo '  [$(PACKAGE_STRING)])' && \
               echo 'm4_define([AT_PACKAGE_BUGREPORT],' && \
               echo '  [$(PACKAGE_BUGREPORT)])'; \
               echo 'm4_define([AT_PACKAGE_URL],' && \
               echo '  [$(PACKAGE_URL)])'; \
             } >'$(srcdir)/package.m4'

TESTSUITE = $(srcdir)/testsuite

check-local: atconfig $(TESTSUITE)
	$(SHELL) '$(TESTSUITE)' $(TESTSUITEFLAGS)

AUTOM4TE = $(SHELL) $(top_srcdir)/missing --run autom4te
AUTOTEST = $(AUTOM4TE) --language=autotest

$(TESTSUITE): $(srcdir)/testsuite.at $(srcdir)/package.m4
	$(AUTOTEST) -I '$(srcdir)' -o $@.tmp $@.at
	mv $@.tmp $@

