AUTOMAKE_OPTIONS = foreign dist-bzip2

SUBDIRS = src include doc tests

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libosmo-hnbap.pc libosmo-ranap.pc libosmo-rua.pc libosmo-sabp.pc

EXTRA_DIST = \
	     .version \
	     README.md \
	     asn1 \
	     contrib/osmo-iuh.spec.in \
	     debian \
	     $(NULL)

@RELMAKE@

BUILT_SOURCES = $(top_srcdir)/.version
$(top_srcdir)/.version:
	echo $(VERSION) > $@-t && mv $@-t $@
dist-hook:
	echo $(VERSION) > $(distdir)/.tarball-version
