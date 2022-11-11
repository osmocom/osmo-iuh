#!/usr/bin/env python3
# SPDX-License-Identifier: AGPL-3.0-or-later
# Copyright 2022 sysmocom - s.f.m.c. GmbH <info@sysmocom.de>
"""
Avoid compiler warnings like "‘struct HNBAP_CriticalityDiagnostics_IE_List__Member’
declared inside parameter list will not be visible outside of this definition
or declaration", which break compiling the sources with -Werror and can't be
ignored with diagnostics as they don't have their own type (unlike e.g.
-Wuninitialized).

This problem is explained further in:
https://github.com/vlm/asn1c/issues/430

To avoid this, convert "SQUENCE … OF SEQUENCE" like here:

    CriticalityDiagnostics-IE-List ::= SEQUENCE (SIZE (1..maxNrOfErrors)) OF
    	SEQUENCE {
        …
to "SEQUENCE … OF …-Value" and below that "…-Value ::= SEQUENCE":

    CriticalityDiagnostics-IE-List ::= SEQUENCE (SIZE (1..maxNrOfErrors)) OF CriticalityDiagnostics-IE-List-Value
    CriticalityDiagnostics-IE-List-Value ::=
    	SEQUENCE {
        …
"""
import glob
import re

re_seq_of = re.compile("([A-Za-z0-0-]*)\s*::=\s*SEQUENCE .* OF$")
re_seq_of2 = re.compile("([A-Za-z0-0-]*)\s*::=\s*SEQUENCE .* OF SEQUENCE\s*{$")

for file in glob.glob("asn1/*/*.asn"):
    print(f"{file}:")
    with open(file) as handle:
        lines = handle.readlines()

    for i, line in enumerate(lines):
        match = re_seq_of.search(line)
        if match and "SEQUENCE" in lines[i + 1]:
            name_value = f"{match.group(1)}-Value"
            print(f"  {name_value}")
            lines[i] = f"{line.rstrip()} {name_value}\n{name_value} ::=\n"
            continue

        match = re_seq_of2.search(line)
        if match:
            name_value = f"{match.group(1)}-Value"
            print(f"  {name_value}")
            line = line.split(" OF SEQUENCE")[0]
            lines[i] = f"{line} OF {name_value}\n{name_value} ::= SEQUENCE {{\n"
            continue

    with open(file, "w") as handle:
        handle.writelines(lines)


print("Done")
