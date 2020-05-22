AUTOMAKE_OPTIONS = foreign dist-bzip2

SUBDIRS = src include doc contrib

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libosmo-ranap.pc libosmo-sabp.pc

EXTRA_DIST = \
	     .version \
	     README.md \
	     asn1 \
	     contrib/osmo-iuh.spec.in \
	     debian \
	     $(NULL)

AM_DISTCHECK_CONFIGURE_FLAGS = \
	--with-systemdsystemunitdir=$$dc_install_base/$(systemdsystemunitdir)

@RELMAKE@

BUILT_SOURCES = $(top_srcdir)/.version
$(top_srcdir)/.version:
	echo $(VERSION) > $@-t && mv $@-t $@
dist-hook:
	echo $(VERSION) > $(distdir)/.tarball-version
