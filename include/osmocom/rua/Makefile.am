version.h: version.h.tpl
	$(AM_V_GEN)$(MKDIR_P) $(dir $@)
	$(AM_V_GEN)sed \
		-e "s/{{VERSION}}/$$(echo '@VERSION@' | cut -d. -f1-3)/g" \
		-e "s/{{VERSION_MAJOR}}/$$(echo '@VERSION@' | cut -d. -f1)/g" \
		-e "s/{{VERSION_MINOR}}/$$(echo '@VERSION@' | cut -d. -f2)/g" \
		-e "s/{{VERSION_PATCH}}/$$(echo '@VERSION@' | cut -d. -f3)/g" \
		$< > $@

EXTRA_DIST = \
	version.h.tpl \
	$(NULL)

rua_HEADERS = \
	rua_common.h rua_ies_defs.h rua_msg_factory.h \
	RUA_Ansi-41-IDNNS.h \
	RUA_Cause.h \
	RUA_CauseMisc.h \
	RUA_CauseProtocol.h \
	RUA_CauseRadioNetwork.h \
	RUA_CauseTransport.h \
	RUA_CN-DomainIndicator.h \
	RUA_Connect.h \
	RUA_ConnectionlessTransfer.h \
	RUA_Context-ID.h \
	RUA_CriticalityDiagnostics.h \
	RUA_CriticalityDiagnostics-IE-List.h \
	RUA_CriticalityDiagnostics-IE-List-Value.h \
	RUA_Criticality.h \
	RUA_CSGMembershipStatus.h \
	RUA_DirectTransfer.h \
	RUA_Disconnect.h \
	RUA_ErrorIndication.h \
	RUA_Establishment-Cause.h \
	RUA_Gsm-map-IDNNS.h \
	RUA_IE-Extensions.h \
	RUA_IE.h \
	RUA_InitiatingMessage.h \
	RUA_IntraDomainNasNodeSelector.h \
	RUA_Presence.h \
	RUA_PrivateIE-ID.h \
	RUA_PrivateMessage.h \
	RUA_ProcedureCode.h \
	RUA_ProtocolIE-ID.h \
	RUA_RANAP-Message.h \
	RUA_RoutingParameter.h \
	RUA_RUA-PDU.h \
	RUA_SuccessfulOutcome.h \
	RUA_TriggeringMessage.h \
	RUA_TypeOfError.h \
	RUA_UnsuccessfulOutcome.h \
	version.h \
	$(NULL)

ruadir = $(includedir)/osmocom/rua

DISTCLEANFILES = \
	rua_ies_defs.h \
	version.h \
	$(NULL)
