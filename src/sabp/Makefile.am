ASN_MODULE_SRC=	\
	SABP_InitiatingMessage.c	\
	SABP_SABP-PDU.c	\
	SABP_SuccessfulOutcome.c	\
	SABP_UnsuccessfulOutcome.c	\
	SABP_Criticality.c	\
	SABP_Presence.c	\
	SABP_ProcedureCode.c	\
	SABP_ProtocolExtensionID.c	\
	SABP_ProtocolIE-ID.c	\
	SABP_TriggeringMessage.c	\
	SABP_IE-Extensions.c	\
	SABP_Available-Bandwidth.c	\
	SABP_Broadcast-Message-Content.c	\
	SABP_Broadcast-Message-Content-Validity-Indicator.c	\
	SABP_Category.c	\
	SABP_Cause.c	\
	SABP_Criticality-Diagnostics.c	\
	SABP_CriticalityDiagnostics-IE-List.c	\
	SABP_MessageStructure.c	\
	SABP_Data-Coding-Scheme.c	\
	SABP_Failure-List.c	\
	SABP_Failure-List-Item.c	\
	SABP_Message-Identifier.c	\
	SABP_New-Serial-Number.c	\
	SABP_Number-of-Broadcasts-Completed-List.c	\
	SABP_Number-of-Broadcasts-Completed-List-Item.c	\
	SABP_Number-Of-Broadcasts-Completed-Info.c	\
	SABP_Number-of-Broadcasts-Requested.c	\
	SABP_Old-Serial-Number.c	\
	SABP_Paging-ETWS-Indicator.c	\
	SABP_Radio-Resource-Loading-List.c	\
	SABP_Radio-Resource-Loading-List-Item.c	\
	SABP_Recovery-Indication.c	\
	SABP_RepetitionNumber0.c	\
	SABP_RepetitionNumber1.c	\
	SABP_Repetition-Period.c	\
	SABP_Serial-Number.c	\
	SABP_Service-Area-Identifier.c	\
	SABP_Service-Areas-List.c	\
	SABP_TypeOfError.c	\
	SABP_WarningSecurityInfo.c	\
	SABP_Warning-Type.c	\
	SABP_Write-Replace.c	\
	SABP_Write-Replace-Complete.c	\
	SABP_Write-Replace-Failure.c	\
	SABP_Kill.c	\
	SABP_Kill-Complete.c	\
	SABP_Kill-Failure.c	\
	SABP_Load-Query.c	\
	SABP_Load-Query-Complete.c	\
	SABP_Load-Query-Failure.c	\
	SABP_Message-Status-Query.c	\
	SABP_Message-Status-Query-Complete.c	\
	SABP_Message-Status-Query-Failure.c	\
	SABP_Reset.c	\
	SABP_Reset-Complete.c	\
	SABP_Reset-Failure.c	\
	SABP_Restart.c	\
	SABP_Failure.c	\
	SABP_Error-Indication.c	\
	SABP_IE.c \
	$(NULL)

ASN_MODULE_INC=	\
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

AM_CFLAGS = -I$(top_srcdir)/include $(ASN1C_CFLAGS) $(OSMOCORE_CFLAGS)

noinst_LTLIBRARIES=libosmo-asn1-sabp.la
libosmo_asn1_sabp_la_SOURCES=$(ASN_MODULE_SRC)
libosmo_asn1_sabp_la_LIBADD=$(ASN1C_LDADD)

regen: regenerate-from-asn1-source

regenerate-from-asn1-source:
	ASN1C_PREFIX="SABP_" asn1c -gen-PER $(top_srcdir)/asn1/sabp/SABP-CommonDataTypes.asn $(top_srcdir)/asn1/sabp/SABP-Constants.asn $(top_srcdir)/asn1/sabp/SABP-IEs.asn $(top_srcdir)/asn1/sabp/SABP-PDU.asn
#	remove the local copy of the runtime code
	@rm ANY.* INTEGER.* NativeEnumerated.* NativeInteger.* asn_* OCTET_STRING.* converter-sample.c per_* xer_* constr* der_* ber_* BIT_STRING.*
#	change include style to `#include <dir/foo.h>'
	sed -i 's/Member/MemberA/' SABP_MessageStructure.[ch]
	sed -i 's/Member/MemberB/' SABP_Criticality-Diagnostics.[ch]
#	add missing includes
	sed -i '/#include "SABP_Serial-Number.h"/a #include <constr_CHOICE.h>' SABP_Old-Serial-Number.h SABP_New-Serial-Number.h
#	change include style to `#include <dir/foo.h>'
	$(top_srcdir)/move-asn1-header-files.sh osmocom/sabp $(ASN_MODULE_INC)

