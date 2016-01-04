#!/bin/sh
# Usage:
#    ../../move-asn1-headers.sh  osmocom/foo/bar  File1.h File2.h ...

set -e

base_dir="$(dirname "$0")"

include_subdir="$1"
shift

include_dir="$base_dir/include/$include_subdir"
mkdir -p "$include_dir"
echo "$PWD/*.h --> $include_dir"

sed_includes() {
	while [ -n "$1" ]; do
		fname="$1"
		shift

		echo 'sed -i "s,^#include \"'$fname'\"$,#include <'$include_subdir/$fname'>," *.[hc]'
		sed -i "s,^#include \"$fname\"$,#include <$include_subdir/$fname>," *.[hc]
	done
}

move_headers() {
	echo mv $@ "$include_dir/"
	mv $@ "$include_dir/"
}

# first replace all `#include "foo.h"' with `#include <dir/foo.h>' locally
sed_includes $@

# move sed'ed *.h files to the proper include/dir
move_headers $@
