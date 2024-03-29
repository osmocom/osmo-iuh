/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RUA-CommonDataTypes"
 * 	found in "../../asn1/rua/RUA-CommonDataTypes.asn"
 * 	`asn1c -R -fcompound-names`
 */

#ifndef	_RUA_ProcedureCode_H_
#define	_RUA_ProcedureCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RUA_ProcedureCode {
	RUA_ProcedureCode_id_Connect	= 1,
	RUA_ProcedureCode_id_DirectTransfer	= 2,
	RUA_ProcedureCode_id_Disconnect	= 3,
	RUA_ProcedureCode_id_ConnectionlessTransfer	= 4,
	RUA_ProcedureCode_id_ErrorIndication	= 5,
	RUA_ProcedureCode_id_privateMessage	= 6
} e_RUA_ProcedureCode;

/* RUA_ProcedureCode */
typedef long	 RUA_ProcedureCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RUA_ProcedureCode;
asn_struct_free_f RUA_ProcedureCode_free;
asn_struct_print_f RUA_ProcedureCode_print;
asn_constr_check_f RUA_ProcedureCode_constraint;
ber_type_decoder_f RUA_ProcedureCode_decode_ber;
der_type_encoder_f RUA_ProcedureCode_encode_der;
xer_type_decoder_f RUA_ProcedureCode_decode_xer;
xer_type_encoder_f RUA_ProcedureCode_encode_xer;
per_type_decoder_f RUA_ProcedureCode_decode_uper;
per_type_encoder_f RUA_ProcedureCode_encode_uper;
per_type_decoder_f RUA_ProcedureCode_decode_aper;
per_type_encoder_f RUA_ProcedureCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RUA_ProcedureCode_H_ */
#include <asn_internal.h>
