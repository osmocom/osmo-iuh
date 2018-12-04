AUTOMAKE_OPTIONS = foreign dist-bzip2

SUBDIRS = src include doc contrib

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libosmo-ranap.pc

EXTRA_DIST = asn1 .version README.md

AM_DISTCHECK_CONFIGURE_FLAGS = \
	--with-systemdsystemunitdir=$$dc_install_base/$(systemdsystemunitdir)

@RELMAKE@

BUILT_SOURCES = $(top_srcdir)/.version
$(top_srcdir)/.version:
	echo $(VERSION) > $@-t && mv $@-t $@
dist-hook:
	echo $(VERSION) > $(distdir)/.tarball-version
