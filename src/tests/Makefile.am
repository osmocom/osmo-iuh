AM_CFLAGS = $(OSMOVTY_CFLAGS) $(OSMOCORE_CFLAGS) $(OSMOGSM_CFLAGS) $(OSMONETIF_CFLAGS) $(ASN1C_CFLAGS) -g -I$(top_builddir)/src -I$(top_builddir)/src/hnbap/

COMMON_LIBS = $(OSMOVTY_LIBS) $(OSMOCORE_LIBS) $(OSMOGSM_LIBS) $(ASN1C_LIBS) -lsctp

check_PROGRAMS = test-ranap test-helpers test-hnbap hnb-test

HNBAP_FILES = $(top_builddir)/src/hnbap_common.c $(top_builddir)/src/hnbap_decoder.c $(top_builddir)/src/hnbap_encoder.c
RUA_FILES = $(top_builddir)/src/rua_common.c $(top_builddir)/src/rua_decoder.c $(top_builddir)/src/rua_encoder.c
RANAP_FILES = $(top_builddir)/src/ranap_common.c \
	      $(top_builddir)/src/ranap_decoder.c \
	      $(top_builddir)/src/ranap_encoder.c \
	      $(top_builddir)/src/ranap_msg_factory.c
HELPER_FILES = $(top_builddir)/src/iu_helpers.c $(top_builddir)/src/asn1helpers.c

test_helpers_SOURCES = $(HELPER_FILES) test-helpers.c
test_helpers_LDADD = $(COMMON_LIBS)

test_hnbap_SOURCES = $(HELPER_FILES) $(top_builddir)/src/hnbap_common.c $(top_builddir)/src/hnbap_decoder.c test-hnbap.c
test_hnbap_LDADD = $(COMMON_LIBS) $(top_builddir)/src/hnbap/libosmo-asn1-hnbap.a

hnb_test_SOURCES = $(HELPER_FILES) $(HNBAP_FILES) $(RUA_FILES) $(RANAP_FILES) hnb-test.c rua_helper.c
hnb_test_LDADD = $(COMMON_LIBS) $(top_builddir)/src/hnbap/libosmo-asn1-hnbap.a $(top_builddir)/src/rua/libosmo-asn1-rua.a $(top_builddir)/src/ranap/libosmo-asn1-ranap.a

test_ranap_SOURCES = $(HELPER_FILES) $(RANAP_FILES) test-ranap.c
test_ranap_LDADD = $(COMMON_LIBS) $(top_builddir)/src/ranap/libosmo-asn1-ranap.a

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

