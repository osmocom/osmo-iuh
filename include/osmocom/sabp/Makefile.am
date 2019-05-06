# Ugly: sabp_ies_defs.h is generated from asn1tostruct.py at the same time as
# the sabp_*.c files in src/, but the sabp_ies_defs.h should live here. If
# the build process wants this header file, it should first build
# src/sabp_encoder.c and src/sabp_decoder.c.
# This rule sucks:
sabp_ies_defs.h:
	$(MAKE) -C $(top_builddir)/src/ gen_sabp.stamp

sabp_HEADERS = \
	sabp_ies_defs.h \
	sabp_common.h \
	SABP_InitiatingMessage.h	\
	SABP_SABP-PDU.h	\
	SABP_SuccessfulOutcome.h	\
	SABP_UnsuccessfulOutcome.h	\
	SABP_Criticality.h	\
	SABP_Presence.h	\
	SABP_ProcedureCode.h	\
	SABP_ProtocolExtensionID.h	\
	SABP_ProtocolIE-ID.h	\
	SABP_TriggeringMessage.h	\
	SABP_IE-Extensions.h	\
	SABP_Available-Bandwidth.h	\
	SABP_Broadcast-Message-Content.h	\
	SABP_Broadcast-Message-Content-Validity-Indicator.h	\
	SABP_Category.h	\
	SABP_Cause.h	\
	SABP_Criticality-Diagnostics.h	\
	SABP_CriticalityDiagnostics-IE-List.h	\
	SABP_MessageStructure.h	\
	SABP_Data-Coding-Scheme.h	\
	SABP_Failure-List.h	\
	SABP_Failure-List-Item.h	\
	SABP_Message-Identifier.h	\
	SABP_New-Serial-Number.h	\
	SABP_Number-of-Broadcasts-Completed-List.h	\
	SABP_Number-of-Broadcasts-Completed-List-Item.h	\
	SABP_Number-Of-Broadcasts-Completed-Info.h	\
	SABP_Number-of-Broadcasts-Requested.h	\
	SABP_Old-Serial-Number.h	\
	SABP_Paging-ETWS-Indicator.h	\
	SABP_Radio-Resource-Loading-List.h	\
	SABP_Radio-Resource-Loading-List-Item.h	\
	SABP_Recovery-Indication.h	\
	SABP_RepetitionNumber0.h	\
	SABP_RepetitionNumber1.h	\
	SABP_Repetition-Period.h	\
	SABP_Serial-Number.h	\
	SABP_Service-Area-Identifier.h	\
	SABP_Service-Areas-List.h	\
	SABP_TypeOfError.h	\
	SABP_WarningSecurityInfo.h	\
	SABP_Warning-Type.h	\
	SABP_Write-Replace.h	\
	SABP_Write-Replace-Complete.h	\
	SABP_Write-Replace-Failure.h	\
	SABP_Kill.h	\
	SABP_Kill-Complete.h	\
	SABP_Kill-Failure.h	\
	SABP_Load-Query.h	\
	SABP_Load-Query-Complete.h	\
	SABP_Load-Query-Failure.h	\
	SABP_Message-Status-Query.h	\
	SABP_Message-Status-Query-Complete.h	\
	SABP_Message-Status-Query-Failure.h	\
	SABP_Reset.h	\
	SABP_Reset-Complete.h	\
	SABP_Reset-Failure.h	\
	SABP_Restart.h	\
	SABP_Failure.h	\
	SABP_Error-Indication.h	\
	SABP_IE.h \
	$(NULL)

sabpdir = $(includedir)/osmocom/sabp

DISTCLEANFILES = \
	sabp_ies_defs.h
