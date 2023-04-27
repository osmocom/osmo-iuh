#!/usr/bin/env python3

import re, os, sys, string
import datetime
import getopt
import getpass
import time

version = "0.5osmo1"

lines = ""
iesDefs = {}
ieofielist = {}
outdir = './'

filenames = []
verbosity = 0
prefix = ""

FAIL = '\033[91m'
WARN = '\033[93m'
ENDC = '\033[0m'

fileprefix = ""

def printFail(string):
    sys.stderr.write(FAIL + string + ENDC + "\n")

def printWarning(string):
    print(WARN + string + ENDC)

def printDebug(string):
    if verbosity > 0:
        print(string)

def outputHeaderToFile(f, filename):
    now = datetime.datetime.utcfromtimestamp(int(os.environ.get('SOURCE_DATE_EPOCH', time.time())))
    f.write("/*******************************************************************************\n")
    f.write(" * This file had been created by asn1tostruct.py script v%s\n" % (version))
    f.write(" * Please do not modify this file but regenerate it via script.\n")
    f.write(" * Created on: %s\n * from %s\n" % (str(now), filenames))
    f.write(" ******************************************************************************/\n")

def lowerFirstCamelWord(word):
    """ puts the first word in a CamelCase Word in lowercase.

    I.e. CustomerID becomes customerID, XMLInfoTest becomes xmlInfoTest
    """
    newstr = ''
    swapped = word.swapcase()
    idx = 0

    # if it's all-caps, return an all-lowered version
    lowered = word.lower()

    if swapped == lowered:
        return lowered

    for c in swapped:
        if c.islower():
            newstr += c
            idx += 1
        else:
            break
    if idx < 2:
        newstr += word[idx:]
    else:
        newstr = newstr[:-1]+ word[idx-1:]

    return newstr

def usage():
    print("Python parser for asn1 v%s" % (version))
    print("Usage: python asn1tostruct.py [options]")
    print("Available options:")
    print("-d        Enable script debug")
    print("-f [file] Input file to parse")
    print("-o [dir]  Output files to given directory")
    print("-p [pfx]  Prefix all types with given prefix")
    print("-h        Print this help and return")

def getUniqueIENameForDefine(ies, ie):
    """ Usually the type of the IE is used for defines. However a struct may
        use the same type multiple times, in that case we use the actual name
        of the field. """
    unique = True

    for ie_other in ies:
        if ie_other == ie:
            continue
        if ie_other[2] == ie[2]:
            unique = False
        assert ie[0] != ie_other[0], "failed to find a unique name for" \
                    " IE {}. Found another entry in ies {}" \
                    " that has the same ie[0] value.".format(ie, ie_other)

    if unique:
        ret = ie[2]
    else:
        ret = ie[0]

    ret = re.sub('-', '_', ret.upper())
    return ret

try:
    opts, args = getopt.getopt(sys.argv[1:], "df:ho:p:", ["debug", "file", "help", "outdir", "prefix"])
except getopt.GetoptError as err:
    # print help information and exit:
    usage()
    sys.exit(2)

for o, a in opts:
    if o in ("-f", "--file"):
        filenames.append(a)
    if o in ("-d", "--debug"):
        verbosity = 1
    if o in ("-o", "--outdir"):
        outdir = a
        if outdir.rfind('/') != len(outdir):
            outdir += '/'
    if o in ("-p", "--prefix"):
        prefix = a
    if o in ("-h", "--help"):
        usage()
        sys.exit(2)

for filename in filenames:
    file = open(filename, 'r', encoding='utf-8')
    for line in file:
        # Removing any comment
        if line.find('--') >= 0:
            line = line[:line.find('--')]
        # Removing any carriage return
        lines += re.sub('\r', '', line)

    for m in re.findall(r'([a-zA-Z0-9-]+)\s*::=\s+SEQUENCE\s+\(\s*SIZE\s*\(\s*\d+\s*\.\.\s*[0-9a-zA-Z-]+\s*\)\s*\)\s*OF\s+[a-zA-Z-]+\s*\{\s*\{\s*([0-9a-zA-Z-]+)\s*\}\s*\}', lines, re.MULTILINE):
        ieofielist[m[0]] = m[1]
    for m in re.findall(r'([a-zA-Z0-9-]+)\s*::=\s+E-RAB-IE-ContainerList\s*\{\s*\{\s*([a-zA-Z0-9-]+)\s*\}\s*\}', lines, re.MULTILINE):
        ieofielist[m[0]] = m[1]

    for i in re.findall(r'([a-zA-Z0-9-]+)\s+([A-Z0-9-]+)\s*::=\s*\{\s+([\,\|\{\}\t\n\.{3}\ \-a-zA-Z0-9]+)\s+}\n', lines, re.MULTILINE):
        ies = []
        maxLength = 0
        # TODO: handle extensions
        if i[1].find('EXTENSION') >= 0:
            continue
        if fileprefix == "":
            fileprefix = i[1][:i[1].find('-')].lower()
        for j in re.findall(r'\s*\{\s*([a-zA-Z0-9-\ \t]+)\s*\}\s*[\|,]*', i[2], re.MULTILINE):
            for k in re.findall(r'ID\s*([a-zA-Z0-9\-]+)\s*CRITICALITY\s*([a-zA-Z0-9\-]+)\s+[A-Z]+\s+([a-zA-Z0-9\-]+)\s*PRESENCE\s*([a-zA-Z0-9\-]+)', j, re.MULTILINE):
                printDebug("Got new ie for message " + i[0] + ": " + str(k))
                if len(k[2]) > maxLength:
                    maxLength = len(k[2])
                ies.append(k)

        if len(ies) > 0:
            iesDefs[i[0]] = { "length": maxLength, "ies": ies}
        else:
            printWarning("Didn't find any information element for message: " + i[0])

if len(iesDefs) == 0:
    printFail("No Information Element parsed, exiting")
    sys.exit(0)

f = open(outdir + fileprefix + '_ies_defs.h', 'w', encoding='utf-8')
outputHeaderToFile(f, filename)
f.write("#include \"%s_common.h\"\n\n" % (fileprefix))
f.write("#ifndef %s_IES_DEFS_H_\n#define %s_IES_DEFS_H_\n\n" % (fileprefix.upper(), fileprefix.upper()))

for key in iesDefs:

    if key not in list(ieofielist.values()):
        continue

    for (i, j) in list(ieofielist.items()):
        if j == key:
            break

    f.write("typedef struct %sIEs_s {\n" % (prefix + re.sub('-', '_', i)))
    f.write("    A_SEQUENCE_OF(struct %s_s) %s;\n" % (prefix + re.sub('IEs', '', re.sub('-', '_', ieofielist[i])), lowerFirstCamelWord(re.sub('IEs', '', re.sub('-', '_', ieofielist[i])))))
    f.write("} %sIEs_t;\n\n" % (prefix + re.sub('-', '_', i)))

for key in iesDefs:
    keyupperunderscore = re.sub('-', '_', key.upper())
    keylowerunderscore = re.sub('-', '_', key.lower())
    shift = 0

    if len(iesDefs[key]["ies"]) == 0:
        continue

    # Presence mask
    for ie in iesDefs[key]["ies"]:
        ieupperunderscore = getUniqueIENameForDefine(iesDefs[key]["ies"], ie)
        if ie[3] == "optional" or ie[3] == "conditional":
            f.write("#define {0:<{pad}} {1}\n".format("%s_%s%s_PRESENT" % (keyupperunderscore, prefix, ieupperunderscore), "(1 << %d)" % shift,
            pad=iesDefs[key]["length"] + len(keyupperunderscore) + 9))
            shift += 1
    if (shift > 0):
        f.write("\n")

    f.write("typedef struct %s_s {\n" % (prefix + re.sub('-', '_', key)))
    if (shift > 0):
        f.write("    {0:<{pad}} {1};\n".format("uint16_t", "presenceMask", pad=iesDefs[key]["length"] + 2))
    for ie in iesDefs[key]["ies"]:
        ieunderscore = prefix + re.sub('-', '_', ie[2])
        iename = re.sub('id-', '', ie[0])
        ienameunderscore = lowerFirstCamelWord(re.sub('-', '_', iename))
        if ie[2] in ieofielist:
            f.write("    %sIEs_t %s;" % (re.sub('-', '_', ie[2]), ienameunderscore))
        else:
            f.write("    {0:<{pad}} {1};".format("%s_t" % ieunderscore, ienameunderscore, pad=iesDefs[key]["length"] + 2))
        if ie[3] == "optional":
            f.write(" ///< Optional field")
        elif ie[3] == "conditional":
            f.write(" ///< Conditional field")
        f.write("\n")

    f.write("} %s_t;\n\n" % (prefix + re.sub('-', '_', key)))

f.write("typedef struct %s_message_s {\n" % (fileprefix))
f.write("    uint8_t procedureCode;\n")
f.write("    uint8_t criticality;\n")
f.write("    uint8_t direction;\n")
f.write("    union {\n")

messageList = list(iesDefs.keys())
messageList.sort()
for message in messageList:
    if message in list(ieofielist.values()):
        continue
    if len(iesDefs[message]["ies"]) == 0:
        continue
    f.write("        %s_t %s;\n" % (prefix + re.sub('-', '_', message), lowerFirstCamelWord(re.sub('-', '_', message))))
f.write("    } msg;\n")
f.write("} %s_message;\n\n" % (fileprefix))

for key in iesDefs:
    if key in list(ieofielist.values()):
        continue
    structName = re.sub('ies', '', key)
    asn1cStruct = re.sub('-', '_', re.sub('IEs', '', re.sub('-IEs', '', key)))
    asn1cStruct = prefix + re.sub('Item', 'List', asn1cStruct)
    keylowerunderscore = re.sub('-', '_', key.lower())
    firstlower = re.sub('Item', 'List', re.sub('enb', 'eNB', lowerFirstCamelWord(asn1cStruct)))
    f.write("/** \\brief Decode function for %s ies.\n" % (key))
    if len(iesDefs[key]["ies"]) != 0:
        f.write(" * \\param %s Pointer to ASN1 structure in which data will be stored\n" % (lowerFirstCamelWord(re.sub('-', '_', key))))
    f.write(" *  \\param any_p Pointer to the ANY value to decode.\n")
    f.write(" **/\n")
    f.write("int %s_decode_%s(\n" % (fileprefix, keylowerunderscore))

    if len(iesDefs[key]["ies"]) != 0:
        f.write("    %s_t *%s,\n" % (prefix + re.sub('-', '_', key), lowerFirstCamelWord(re.sub('-', '_', key))))
    f.write("    ANY_t *any_p);\n\n")

    if len(iesDefs[key]["ies"]) == 0:
        continue

    f.write("/** \\brief Encode function for %s ies.\n" % (key))
    f.write(" *  \\param %s Pointer to the ASN1 structure.\n" % (firstlower))
    f.write(" *  \\param %s Pointer to the IES structure.\n" % (lowerFirstCamelWord(re.sub('-', '_', key))))
    f.write(" **/\n")
    f.write("int %s_encode_%s(\n" % (fileprefix, re.sub('-', '_', structName.lower())))
    f.write("    %s_t *%s,\n" % (asn1cStruct, firstlower))
    f.write("    %s_t *%s);\n\n" % (prefix + re.sub('-', '_', key), lowerFirstCamelWord(re.sub('-', '_', key))))

for key in iesDefs:
    if key not in list(ieofielist.values()):
        continue
    asn1cStruct = re.sub('-', '_', re.sub('IEs', '', key))
    asn1cStruct = prefix + re.sub('Item', 'List', asn1cStruct)
    firstlower = re.sub('Item', 'List', re.sub('enb', 'eNB', lowerFirstCamelWord(asn1cStruct)))
    f.write("/** \\brief Encode function for %s ies.\n" % (key))
    f.write(" *  \\param %s Pointer to the ASN1 structure.\n" % (firstlower))
    f.write(" *  \\param %s Pointer to the IES structure.\n" % (lowerFirstCamelWord(re.sub('-', '_', key))))
    f.write(" **/\n")
    f.write("int %s_encode_%s(\n" % (fileprefix, firstlower.lower()))
    f.write("    %s_t *%s,\n" % (asn1cStruct, firstlower))
    f.write("    %sIEs_t *%sIEs);\n\n" % (asn1cStruct, firstlower))
    f.write("/** \\brief Decode function for %s ies.\n" % (key))
    f.write(" *  \\param any_p Pointer to the ANY value to decode.\n")
    f.write(" *  \\param callback Callback function called when any_p is successfully decoded.\n")
    f.write(" **/\n")
    f.write("int %s_decode_%s(\n" % (fileprefix, firstlower.lower()))
    f.write("    %sIEs_t *%sIEs,\n" % (asn1cStruct, firstlower))
    f.write("    %s_t *%s);\n\n" % (asn1cStruct, lowerFirstCamelWord(asn1cStruct)))

for key in iesDefs:
    keyupperunderscore = re.sub('-', '_', key.upper())
    keylowerunderscore = re.sub('-', '_', key.lower())
    structName = re.sub('ies', '', key)

    if len(iesDefs[key]["ies"]) == 0:
       continue

    f.write("int %s_free_%s(\n" % (fileprefix, re.sub('-', '_', structName.lower())))
    if len(iesDefs[key]["ies"]) != 0:
        f.write("    %s_t *%s);\n\n" % (prefix + re.sub('-', '_', key), lowerFirstCamelWord(re.sub('-', '_', key))))
f.write("#endif /* %s_IES_DEFS_H_ */\n\n" % (fileprefix.upper()))

#Generate Decode functions
f = open(outdir + fileprefix + '_decoder.c', 'w', encoding='utf-8')
outputHeaderToFile(f, filename)
f.write("#include \"%s_common.h\"\n#include \"%s_ies_defs.h\"\n\n" % (fileprefix, fileprefix))
for key in iesDefs:
    if key in list(ieofielist.values()):
        continue
    structName = re.sub('ies', '', key)
    asn1cStruct = re.sub('-', '_', re.sub('IEs', '', re.sub('-IEs', '', key)))
    ielistname = re.sub('UE', 'ue', asn1cStruct)
    ielistnamefirstlower = ielistname[:1].lower() + ielistname[1:]
    asn1cStructfirstlower = asn1cStruct[:1].lower() + asn1cStruct[1:]
    keyName = re.sub('-', '_', key)
    keyupperunderscore = keyName.upper()
    firstlower = re.sub('Item', 'List', re.sub('enb', 'eNB', lowerFirstCamelWord(asn1cStruct)))
    asn1cStruct = prefix + re.sub('Item', 'List', asn1cStruct)

    iesaccess = ""
    if key not in list(ieofielist.values()):
        iesaccess = "%s_ies." % (firstlower)

    f.write("int %s_decode_%s(\n" % (fileprefix, re.sub('-', '_', structName.lower())))
    if len(iesDefs[key]["ies"]) != 0:
        f.write("    %s_t *%s,\n" % (prefix + re.sub('-', '_', key), lowerFirstCamelWord(re.sub('-', '_', key))))
    f.write("    ANY_t *any_p) {\n\n")

    f.write("    %s_t *%s_p = NULL;\n" % (asn1cStruct, asn1cStructfirstlower))
    f.write("    int i, decoded = 0;\n")
    if len(iesDefs[key]["ies"]) != 0:
        f.write("    int tempDecoded = 0;\n")
    f.write("    int rc = -1;\n")

    f.write("    assert(any_p != NULL);\n")
    if len(iesDefs[key]["ies"]) != 0:
        f.write("    assert(%s != NULL);\n\n" % (lowerFirstCamelWord(re.sub('-', '_', key))))
        f.write("    memset(%s, 0, sizeof(%s_t));\n" % (lowerFirstCamelWord(re.sub('-', '_', key)), prefix + re.sub('-', '_', key)))

    f.write("    %s_DEBUG(\"Decoding message %s (%%s:%%d)\\n\", __FILE__, __LINE__);\n\n" % (fileprefix.upper(), prefix + re.sub('-', '_', keyName)))
    f.write("    tempDecoded = ANY_to_type_aper(any_p, &asn_DEF_%s, (void**)&%s_p);\n\n" % (asn1cStruct, asn1cStructfirstlower))
    f.write("    if (tempDecoded < 0 || %s_p == NULL) {\n" % (asn1cStructfirstlower))
    f.write("        %s_DEBUG(\"Decoding of message %s failed\\n\");\n" % (fileprefix.upper(), prefix + re.sub('-', '_', keyName)))
    f.write("        return -1;\n")
    f.write("    }\n\n")

    f.write("    for (i = 0; i < %s_p->%slist.count; i++) {\n" % (asn1cStructfirstlower, iesaccess))
    f.write("        %sIE_t *ie_p;\n" % (prefix))
    f.write("        ie_p = %s_p->%slist.array[i];\n" % (asn1cStructfirstlower, iesaccess))
    f.write("        switch(ie_p->id) {\n")
    for ie in iesDefs[key]["ies"]:
        iename = re.sub('id-', '', ie[0])
        ienameunderscore = lowerFirstCamelWord(re.sub('-', '_', iename))
        ienameunderscorefirstlower = lowerFirstCamelWord(ienameunderscore)
        ietypesubst = prefix + re.sub('-', '', ie[2])
        ietypeunderscore = prefix + re.sub('-', '_', ie[2])
        ieupperunderscore = prefix + getUniqueIENameForDefine(iesDefs[key]["ies"], ie)
        if ie[3] == "optional":
            f.write("            /* Optional field */\n")
        elif ie[3] == "conditional":
            f.write("            /* Conditional field */\n")
        f.write("            case %sProtocolIE_ID_%s:\n" % (prefix, re.sub('-', '_', ie[0])))
        f.write("            {\n")
        f.write("                %s_t *%s_p = NULL;\n" % (ietypeunderscore, lowerFirstCamelWord(ietypesubst)))
        if ie[3] != "mandatory":
            f.write("                %s->presenceMask |= %s_%s_PRESENT;\n" % (lowerFirstCamelWord(re.sub('-', '_', key)), keyupperunderscore, ieupperunderscore))
        f.write("                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_%s, (void**)&%s_p);\n" % (ietypeunderscore, lowerFirstCamelWord(ietypesubst)))
        f.write("                if (tempDecoded < 0) {\n")
        f.write("                    %s_DEBUG(\"Decoding of IE %s failed\\n\");\n" % (fileprefix.upper(), ienameunderscore))
        f.write("                    goto free_and_return_rc;\n")
        f.write("                }\n")
        f.write("                decoded += tempDecoded;\n")
        f.write("                if (asn1_xer_print)\n")
        f.write("                    xer_fprint(stdout, &asn_DEF_%s, %s_p);\n" % (ietypeunderscore, lowerFirstCamelWord(ietypesubst)))
        if ie[2] in list(ieofielist.keys()):
            f.write("                if (%s_decode_%s(&%s->%s, %s_p) < 0) {\n" % (fileprefix, ietypeunderscore.lower(), lowerFirstCamelWord(re.sub('-', '_', key)), ienameunderscore, lowerFirstCamelWord(ietypesubst)))
            f.write("                    %s_DEBUG(\"Decoding of encapsulated IE %s failed\\n\");\n" % (fileprefix.upper(), lowerFirstCamelWord(ietypesubst)))
            f.write("                    ASN_STRUCT_FREE(asn_DEF_%s, %s_p);\n" % (ietypeunderscore, lowerFirstCamelWord(ietypesubst)))
        else:
            f.write("                memcpy(&%s->%s, %s_p, sizeof(%s_t));\n" % (lowerFirstCamelWord(re.sub('-', '_', key)), ienameunderscore, lowerFirstCamelWord(ietypesubst), ietypeunderscore))
            f.write("                FREEMEM(%s_p);\n" % (lowerFirstCamelWord(ietypesubst)))
        f.write("            } break;\n")
    f.write("            default:\n")
    f.write("                %s_DEBUG(\"Unknown protocol IE id (%%d) for message %s\\n\", (int)ie_p->id);\n" % (fileprefix.upper(), re.sub('-', '_', structName.lower())))
    f.write("                goto free_and_return_rc;\n")
    f.write("        }\n")
    f.write("    }\n")
    f.write("    rc = decoded;\n")
    f.write("\n")
    f.write("free_and_return_rc:\n")
    f.write("    ASN_STRUCT_FREE(asn_DEF_%s, %s_p);\n" % (asn1cStruct, asn1cStructfirstlower))
    f.write("    return rc;\n")
    f.write("}\n\n")

for key in iesDefs:
    keyupperunderscore = re.sub('-', '_', key.upper())
    keylowerunderscore = re.sub('-', '_', key.lower())
    structName = re.sub('ies', '', key)

    if len(iesDefs[key]["ies"]) == 0:
       continue

    f.write("int %s_free_%s(\n" % (fileprefix, re.sub('-', '_', structName.lower())))
    if len(iesDefs[key]["ies"]) != 0:
        f.write("    %s_t *%s) {\n\n" % (prefix + re.sub('-', '_', key), lowerFirstCamelWord(re.sub('-', '_', key))))

    for ie in iesDefs[key]["ies"]:
        ietypeunderscore = prefix + re.sub('-', '_', ie[2])
        ieupperunderscore = prefix + getUniqueIENameForDefine(iesDefs[key]["ies"], ie)
        if ie[3] != "mandatory":
            if ie[3] == "optional":
                f.write("    /* Optional field */\n")
            elif ie[3] == "conditional":
                f.write("    /* Conditional field */\n")
            f.write("    if ((%s->presenceMask & %s_%s_PRESENT)\n" % (lowerFirstCamelWord(re.sub('-', '_', key)), keyupperunderscore, ieupperunderscore))
            f.write("        == %s_%s_PRESENT) \n    " % (keyupperunderscore, ieupperunderscore))

        ieunderscore = prefix + re.sub('-', '_', ie[2])
        iename = re.sub('id-', '', ie[0])
        ienameunderscore = lowerFirstCamelWord(re.sub('-', '_', iename))
        f.write("    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_%s, &%s->%s);\n" % (ietypeunderscore, lowerFirstCamelWord(re.sub('-', '_', key)), ienameunderscore))

    f.write("    return 0;\n")
    f.write("}\n\n")

for key in iesDefs:
    if key not in list(ieofielist.values()):
        continue

    keyname = re.sub('IEs', '', re.sub('Item', 'List', key))

    f.write("int %s_decode_%s(\n" % (fileprefix, re.sub('-', '_', keyname).lower()))
    f.write("    %sIEs_t *%sIEs,\n" % (prefix + re.sub('-', '_', keyname), lowerFirstCamelWord(re.sub('-', '_', keyname))))
    f.write("    %s_t *%s) {\n\n" % (prefix + re.sub('-', '_', keyname), lowerFirstCamelWord(re.sub('-', '_', keyname))))
    f.write("    int i, decoded = 0;\n")
    f.write("    int tempDecoded = 0;\n\n")
    f.write("    for (i = 0; i < %s->list.count; i++) {\n" % (lowerFirstCamelWord(re.sub('-', '_', keyname))))
    f.write("        %sIE_t *ie_p = %s->list.array[i];\n" % (prefix, lowerFirstCamelWord(re.sub('-', '_', keyname))))
    f.write("        switch (ie_p->id) {\n")
    for ie in iesDefs[key]["ies"]:
        iename = re.sub('id-', '', ie[0])
        ienameunderscore = lowerFirstCamelWord(re.sub('-', '_', iename))
        f.write("            case ProtocolIE_ID_%s:\n" % (re.sub('-', '_', ie[0])))
        f.write("            {\n")
        f.write("                %s_t *%s_p;\n" % (prefix + re.sub('-', '_', ie[2]), lowerFirstCamelWord(re.sub('-', '', ie[2]))))
        f.write("                tempDecoded = ANY_to_type_aper(&ie_p->value, &asn_DEF_%s, (void**)&%s_p);\n" % (re.sub('-', '_', ie[2]), lowerFirstCamelWord(re.sub('-', '', ie[2]))))
        f.write("                if (tempDecoded < 0 || %s_p == NULL) {\n" % (lowerFirstCamelWord(re.sub('-', '', ie[2]))))
        f.write("                    %s_DEBUG(\"Decoding of IE %s for message %s failed\\n\");\n" % (fileprefix.upper(), ienameunderscore, re.sub('-', '_', keyname)))
        f.write("                    if (%s_p)\n" % (lowerFirstCamelWord(re.sub('-', '', ie[2]))))
        f.write("                        ASN_STRUCT_FREE(asn_DEF_%s, %s_p);\n" % (re.sub('-', '_', ie[2]), lowerFirstCamelWord(re.sub('-', '', ie[2]))))
        f.write("                    return -1;\n")
        f.write("                }\n")
        f.write("                decoded += tempDecoded;\n")
        f.write("                if (asn1_xer_print)\n")
        f.write("                    xer_fprint(stdout, &asn_DEF_%s, %s_p);\n" % (re.sub('-', '_', ie[2]), lowerFirstCamelWord(re.sub('-', '', ie[2]))))
        f.write("                ASN_SEQUENCE_ADD(&%sIEs->%s, %s_p);\n" % (lowerFirstCamelWord(re.sub('-', '_', keyname)),
        re.sub('IEs', '', lowerFirstCamelWord(re.sub('-', '_', key))), lowerFirstCamelWord(re.sub('-', '', ie[2]))))
        f.write("            } break;\n")
    f.write("            default:\n")
    f.write("                %s_DEBUG(\"Unknown protocol IE id (%%d) for message %s\\n\", (int)ie_p->id);\n" % (fileprefix.upper(), re.sub('-', '_', structName.lower())))
    f.write("                return -1;\n")
    f.write("        }\n")
    f.write("    }\n")
    f.write("    return decoded;\n")
    f.write("}\n\n")


#Generate IES Encode functions
f = open(outdir + fileprefix + '_encoder.c', 'w', encoding='utf-8')
outputHeaderToFile(f,filename)
f.write("#include \"%s_common.h\"\n" % (fileprefix))
f.write("#include \"%s_ies_defs.h\"\n\n" % (fileprefix))
for key in iesDefs:
    if key in list(ieofielist.values()):
        continue

    structName = re.sub('ies', '', key)
    asn1cStruct = re.sub('-', '_', re.sub('IEs', '', re.sub('-IEs', '', key)))
    firstwordlower = re.sub('Item', 'List', re.sub('enb', 'eNB', lowerFirstCamelWord(asn1cStruct)))
    asn1cStruct = prefix + re.sub('Item', 'List', asn1cStruct)
    asn1cStructfirstlower = asn1cStruct[:1].lower() + asn1cStruct[1:]

    iesaccess = ""
    if key not in list(ieofielist.values()):
        iesaccess = "%s_ies." % (firstwordlower)

    keyName = re.sub('-', '_', key)
    keyupperunderscore = keyName.upper()
    # No IE to encode...
    if len(iesDefs[key]["ies"]) == 0:
        continue

    f.write("int %s_encode_%s(\n" % (fileprefix, re.sub('-', '_', structName.lower())))
    f.write("    %s_t *%s,\n" % (asn1cStruct, firstwordlower))
    f.write("    %s_t *%s) {\n\n" % (prefix + re.sub('-', '_', key), lowerFirstCamelWord(re.sub('-', '_', key))))

    f.write("    %sIE_t *ie;\n\n" % (prefix))

    for ie in iesDefs[key]["ies"]:
        iename = re.sub('-', '_', re.sub('id-', '', ie[0]))
        ienameunderscore = prefix + re.sub('-', '_', iename)
        ienamefirstwordlower = lowerFirstCamelWord(iename)
        ieupperunderscore = prefix + getUniqueIENameForDefine(iesDefs[key]["ies"], ie)
        ietypeunderscore = prefix + re.sub('-', '_', ie[2])
        if ie[3] != "mandatory":
            if ie[3] == "optional":
                f.write("    /* Optional field */\n")
            elif ie[3] == "conditional":
                f.write("    /* Conditional field */\n")
            f.write("    if ((%s->presenceMask & %s_%s_PRESENT)\n" % (lowerFirstCamelWord(re.sub('-', '_', key)), keyupperunderscore, ieupperunderscore))
            f.write("        == %s_%s_PRESENT) {\n" % (keyupperunderscore, ieupperunderscore))
            f.write("        if ((ie = %s_new_ie(%sProtocolIE_ID_%s,\n" % (fileprefix, prefix, re.sub('-', '_', ie[0])))
            f.write("                              %sCriticality_%s,\n" % (prefix, ie[1]))
            f.write("                              &asn_DEF_%s,\n" % (ietypeunderscore))
            f.write("                              &%s->%s)) == NULL) {\n" % (lowerFirstCamelWord(re.sub('-', '_', key)), ienamefirstwordlower))
            f.write("            return -1;\n")
            f.write("        }\n")
            f.write("        ASN_SEQUENCE_ADD(&%s->%slist, ie);\n" % (firstwordlower, iesaccess))
            f.write("    }\n\n")
        else:
            if ie[2] in list(ieofielist.keys()):
                f.write("    %s_t %s;\n\n" % (prefix + ietypeunderscore, ienamefirstwordlower))
                f.write("    memset(&%s, 0, sizeof(%s_t));\n" % (ienamefirstwordlower, ietypeunderscore))
                f.write("\n")
                f.write("    if (%s_encode_%s(&%s, &%s->%s) < 0) return -1;\n" % (fileprefix, ietypeunderscore.lower(), ienamefirstwordlower, lowerFirstCamelWord(re.sub('-', '_', key)), ienamefirstwordlower))
            f.write("    if ((ie = %s_new_ie(%sProtocolIE_ID_%s,\n" % (fileprefix, prefix, re.sub('-', '_', ie[0])))
            f.write("                          %sCriticality_%s,\n" % (prefix, ie[1]))
            f.write("                          &asn_DEF_%s,\n" % (ietypeunderscore))
            if ie[2] in list(ieofielist.keys()):
                f.write("                          &%s)) == NULL) {\n" % (ienamefirstwordlower))
            else:
                f.write("                          &%s->%s)) == NULL) {\n" % (lowerFirstCamelWord(re.sub('-', '_', key)), ienamefirstwordlower))
            f.write("        return -1;\n")
            f.write("    }\n")
            f.write("    ASN_SEQUENCE_ADD(&%s->%slist, ie);\n\n" % (firstwordlower, iesaccess))
            if ie[2] in list(ieofielist.keys()):
                f.write("    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_%s, &%s);\n\n" % (ietypeunderscore, ienamefirstwordlower))

    f.write("    return 0;\n")
    f.write("}\n\n")

for (key, value) in list(iesDefs.items()):
    if key not in list(ieofielist.values()):
        continue

    ie = value["ies"][0]
    ietypeunderscore = re.sub('-', '_', ie[2])
    asn1cStruct = re.sub('-', '_', re.sub('IEs', '', re.sub('-IEs', '', key)))
    asn1cStruct = prefix + re.sub('Item', 'List', asn1cStruct)
    firstwordlower = re.sub('Item', 'List', re.sub('enb', 'eNB', lowerFirstCamelWord(asn1cStruct)))

    for (i, j) in list(ieofielist.items()):
        if j == key:
            break
    f.write("int %s_encode_%s(\n" % (fileprefix, re.sub('-', '_', i).lower()))
    f.write("    %s_t *%s,\n" % (asn1cStruct, firstwordlower))
    f.write("    %sIEs_t *%sIEs) {\n\n" % (prefix + re.sub('-', '_', i), lowerFirstCamelWord(re.sub('-', '_', i))))
    f.write("    int i;\n")

    f.write("    %sIE_t *ie;\n\n" % (prefix))

    f.write("    for (i = 0; i < %sIEs->%s.count; i++) {\n" % (firstwordlower, re.sub('IEs', '', lowerFirstCamelWord(re.sub('-', '_', key)))))
    f.write("        if ((ie = %s_new_ie(ProtocolIE_ID_%s,\n" % (fileprefix, re.sub('-', '_', ie[0])))
    f.write("                              Criticality_%s,\n" % (ie[1]))
    f.write("                              &asn_DEF_%s,\n" % (ietypeunderscore))
    f.write("                              %sIEs->%s.array[i])) == NULL) {\n" % (firstwordlower, re.sub('IEs', '', lowerFirstCamelWord(re.sub('-', '_', key)))))
    f.write("            return -1;\n")
    f.write("        }\n")
    f.write("        ASN_SEQUENCE_ADD(&%s->list, ie);\n" % (firstwordlower))
    f.write("    }\n")
    f.write("    return 0;\n")
    f.write("}\n\n")
