#!/bin/sh

set -ex

base="$PWD"
deps="$base/deps"
inst="$deps/install"
export deps inst

osmo-clean-workspace.sh

mkdir "$deps" || true

verify_value_string_arrays_are_terminated.py $(find . -name "*.[hc]")

export PKG_CONFIG_PATH="$inst/lib/pkgconfig:$PKG_CONFIG_PATH"
export LD_LIBRARY_PATH="$inst/lib"
export PATH="$inst/bin:$PATH"

osmo-build-dep.sh libosmocore "" --disable-doxygen
osmo-build-dep.sh libosmo-abis
osmo-build-dep.sh libosmo-netif
osmo-build-dep.sh libosmo-sccp
osmo-build-dep.sh libasn1c

# the asn1c binary is used by the 'regen' target below
osmo-build-dep.sh asn1c aper-prefix

CONFIG="--enable-werror"
if [ "$WITH_MANUALS" = "1" ]; then
	CONFIG="$CONFIG --enable-manuals"
fi

set +x
echo
echo
echo
echo " =============================== osmo-iuh ==============================="
echo
set -x

autoreconf --install --force
./configure --enable-sanitize $CONFIG

# Verify that checked-in asn1 code is identical to regenerated asn1 code
PATH="$inst/bin:$PATH" $MAKE $PARALLEL_MAKE -C src regen

# attempt to settle the file system
sleep 1

git status
git diff | cat

if ! git diff-files --quiet ; then
	echo "ERROR: 'make -C src regen' does not match committed asn1 code"
	exit 1
fi

$MAKE $PARALLEL_MAKE
$MAKE check \
  || cat-testlogs.sh
$MAKE $PARALLEL_MAKE distcheck \
  || cat-testlogs.sh

$MAKE $PARALLEL_MAKE maintainer-clean
osmo-clean-workspace.sh
