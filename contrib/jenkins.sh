#!/usr/bin/env bash

set -ex

base="$PWD"
deps="$base/deps"
inst="$deps/install"

mkdir "$deps" || true
rm -rf "$inst"

build_dep() {
	project="$1"
	branch="$2"
	set +x
	echo
	echo
	echo
	echo " =============================== $project ==============================="
	echo
	set -x
	if [ -z "$project" ]; then
		echo "internal failure"
		exit 1
	fi
	cd "$deps"
	rm -rf "$project"
	osmo-deps.sh "$project"
	cd "$project"
	if [ -n "$branch" ]; then
		git checkout "$branch"
	fi
	git rev-parse HEAD
	autoreconf --install --force
	./configure --prefix="$inst"
	$MAKE $PARALLEL_MAKE install
}

build_dep libosmocore

# All below builds want this PKG_CONFIG_PATH
export PKG_CONFIG_PATH="$inst/lib/pkgconfig:$PKG_CONFIG_PATH"

build_dep libosmo-abis
build_dep libosmo-netif sysmocom/sctp
build_dep libosmo-sccp sysmocom/iu
build_dep libasn1c

# the asn1c binary is used by the 'regen' target below
build_dep asn1c aper-prefix

cd "$base"
autoreconf --install --force
./configure
PATH="$inst/bin:$PATH" $MAKE $PARALLEL_MAKE -C src regen
$MAKE $PARALLEL_MAKE
LD_LIBRARY_PATH="$inst/lib" $MAKE check
# distcheck is broken
#LD_LIBRARY_PATH=$PWD/deps/install/lib $MAKE distcheck
