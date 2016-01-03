AUTOMAKE_OPTIONS = foreign dist-bzip2

SUBDIRS = src

EXTRA_DIST = asn1 .version

BUILT_SOURCES = $(top_srcdir)/.version
$(top_srcdir)/.version:
	echo $(VERSION) > $@-t && mv $@-t $@
dist-hook:
	echo $(VERSION) > $(distdir)/.tarball-version
