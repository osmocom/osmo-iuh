EXTRA_DIST = \
	     osmohnbgw-vty-reference.xml \
	     regen_doc.sh \
	     vty

if BUILD_MANUALS
  VTY_REFERENCE = osmohnbgw-vty-reference.xml
  include $(OSMO_GSM_MANUALS_DIR)/build/Makefile.vty-reference.inc

  OSMO_REPOSITORY = osmo-hnbgw
  include $(OSMO_GSM_MANUALS_DIR)/build/Makefile.common.inc
endif
