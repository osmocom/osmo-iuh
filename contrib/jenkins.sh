#!/usr/bin/env bash
export PATH="$PATH:$HOME/osmo-ci/scripts"

set -ex

base="$PWD"
deps="$base/deps"
inst="$deps/install"

mkdir "$deps" || true
rm -rf "$inst"

marker() {
	set +x
	echo
	echo
	echo
	echo " =============================== $@ ==============================="
	echo
	set -x
}

build_dep() {
	project="$1"
	branch="$2"
	marker $project
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

marker osmo-iuh
cd "$base"

autoreconf --install --force
./configure

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
LD_LIBRARY_PATH="$inst/lib" $MAKE check \
  || cat-testlogs.sh
LD_LIBRARY_PATH="$inst/lib" $MAKE distcheck \
  || cat-testlogs.sh
