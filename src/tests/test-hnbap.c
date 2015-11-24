/* Test de-/encoding of HBNAP messages */

/* (C) 2015 by Daniel Willmann <dwillmann@sysmocom.de>
 * (C) 2015 by sysmocom s.f.m.c GmbH
 * All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "iu_helpers.h"

#include "hnbap_common.h"
#include "hnbap_ies_defs.h"

#include <assert.h>
#define ASSERT(x)	assert(x)

#include <osmocom/core/utils.h>
#include <osmocom/core/logging.h>

void *talloc_asn1_ctx;

static const unsigned char hnbap_ue_reg_req[] = {
0x00, 0x03,
0x00, 0x1a, 0x00, 0x00, 0x03, 0x00, 0x05, 0x00,
0x09, 0x0a, 0x62, 0x02, 0x11, 0x32, 0x54, 0x76,
0x98, 0xf0, 0x00, 0x0c, 0x40, 0x01, 0x40, 0x00,
0x0d, 0x00, 0x01, 0x0d
};

static const unsigned char hnbap_ue_reg_acc[] = {
0x20, 0x03,
0x00, 0x17, 0x00, 0x00, 0x02, 0x00, 0x05, 0x00,
0x09, 0x0a, 0x62, 0x02, 0x11, 0x32, 0x54, 0x76,
0x98, 0xf0, 0x00, 0x04, 0x00, 0x03, 0x17, 0x00,
0x00
};

void test_asn1_decoding(void)
{
	int rc;

	HNBAP_PDU_t _pdu, *pdu = &_pdu;
	InitiatingMessage_t *im;
	UERegisterRequestIEs_t ies;

	char imsi[16];

	asn_dec_rval_t dec_ret;

	memset(pdu, 0, sizeof(*pdu));
	printf("Testing asn.1 HNBAP decoding\n");

	dec_ret = aper_decode(NULL, &asn_DEF_HNBAP_PDU, (void **) &pdu,
			hnbap_ue_reg_req, sizeof(hnbap_ue_reg_req), 0, 0);


	ASSERT(dec_ret.code == RC_OK);
	ASSERT(pdu->present == HNBAP_PDU_PR_initiatingMessage);

	im = &pdu->choice.initiatingMessage;
	ASSERT(im->procedureCode == ProcedureCode_id_UERegister);

	rc = hnbap_decode_ueregisterrequesties(&ies, &im->value);
	ASSERT(rc >= 0);

	ASSERT(ies.uE_Identity.present == UE_Identity_PR_iMSI);
	decode_iu_bcd(imsi, sizeof(imsi), ies.uE_Identity.choice.iMSI.buf,
			ies.uE_Identity.choice.iMSI.size);

	printf("HNBAP UE Register from IMSI %s\n", imsi);
}


static const struct log_info osmo_log = {
	.cat = NULL,
	.num_cat = 0,
};

int main(int argc, char **argv)
{
	int rc;

	rc = osmo_init_logging(&osmo_log);
	if (rc < 0) {
		printf("Error in init logging\n");
		return -1;
	}

	test_asn1_decoding();

	return 0;
}

