MOD=RANAP

ASNS=../$(MOD)-CommonDataTypes.asn ../$(MOD)-Constants.asn ../$(MOD)-IEs.asn ../$(MOD)-PDU.asn

all: $(ASNS)
	asn1c -gen-PER -fnative-types -fskeletons-copy $^
