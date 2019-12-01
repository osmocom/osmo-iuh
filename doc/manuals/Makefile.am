EXTRA_DIST = \
	     osmohnbgw-usermanual.adoc \
	     osmohnbgw-usermanual-docinfo.xml \
	     chapters \
	     osmohnbgw-vty-reference.xml \
	     regen_doc.sh \
	     vty

if BUILD_MANUALS
  ASCIIDOC = osmohnbgw-usermanual.adoc
  ASCIIDOC_DEPS = $(srcdir)/chapters/*.adoc
  include $(OSMO_GSM_MANUALS_DIR)/build/Makefile.asciidoc.inc

  VTY_REFERENCE = osmohnbgw-vty-reference.xml
  include $(OSMO_GSM_MANUALS_DIR)/build/Makefile.vty-reference.inc

  OSMO_REPOSITORY = osmo-hnbgw
  include $(OSMO_GSM_MANUALS_DIR)/build/Makefile.common.inc
endif
