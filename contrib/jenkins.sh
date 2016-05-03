#!/usr/bin/env bash

set -ex

rm -rf deps/install
mkdir deps || true
cd deps
osmo-deps.sh libosmocore

cd libosmocore
autoreconf --install --force
./configure --prefix=$PWD/../install
$MAKE $PARALLEL_MAKE install

cd ../
osmo-deps.sh libosmo-abis
cd libosmo-abis
autoreconf --install --force
PKG_CONFIG_PATH=$PWD/../install/lib/pkgconfig:$PKG_CONFIG_PATH ./configure --prefix=$PWD/../install  
PKG_CONFIG_PATH=$PWD/..//install/lib/pkgconfig:$PKG_CONFIG_PATH $MAKE $PARALLEL_MAKE install

cd ../
osmo-deps.sh libosmo-netif
cd libosmo-netif
autoreconf --install --force
PKG_CONFIG_PATH=$PWD/../install/lib/pkgconfig:$PKG_CONFIG_PATH ./configure --prefix=$PWD/../install  
PKG_CONFIG_PATH=$PWD/..//install/lib/pkgconfig:$PKG_CONFIG_PATH $MAKE $PARALLEL_MAKE install

cd ../
rm -rf libosmo-sccp
git clone git://git.osmocom.org/libosmo-sccp
cd libosmo-sccp
git checkout sysmocom/iu
autoreconf --install --force
PKG_CONFIG_PATH=$PWD/../install/lib/pkgconfig:$PKG_CONFIG_PATH ./configure --prefix=$PWD/../install  
PKG_CONFIG_PATH=$PWD/..//install/lib/pkgconfig:$PKG_CONFIG_PATH $MAKE $PARALLEL_MAKE install

cd ../
rm -rf asn1c
git clone git://git.osmocom.org/asn1c
cd asn1c
git checkout aper-prefix
autoreconf --install --force
PKG_CONFIG_PATH=$PWD/../install/lib/pkgconfig:$PKG_CONFIG_PATH ./configure --prefix=$PWD/../install  
PKG_CONFIG_PATH=$PWD/..//install/lib/pkgconfig:$PKG_CONFIG_PATH $MAKE $PARALLEL_MAKE install

cd ../
osmo-deps.sh libasn1c
cd libasn1c
autoreconf --install --force
PKG_CONFIG_PATH=$PWD/../install/lib/pkgconfig:$PKG_CONFIG_PATH ./configure --prefix=$PWD/../install  
PKG_CONFIG_PATH=$PWD/..//install/lib/pkgconfig:$PKG_CONFIG_PATH $MAKE $PARALLEL_MAKE install


cd ../../
autoreconf --install --force
PKG_CONFIG_PATH=$PWD/deps/install/lib/pkgconfig:$PKG_CONFIG_PATH ./configure
PKG_CONFIG_PATH=$PWD/deps/install/lib/pkgconfig:$PKG_CONFIG_PATH $MAKE
PKG_CONFIG_PATH=$PWD/deps/install/lib/pkgconfig:$PKG_CONFIG_PATH LD_LIBRARY_PATH=$PWD/deps/install/lib $MAKE check
# distcheck is broken
#PKG_CONFIG_PATH=$PWD/deps/install/lib/pkgconfig:$PKG_CONFIG_PATH LD_LIBRARY_PATH=$PWD/deps/install/lib $MAKE distcheck
PATH=$PWD/deps/install/bin:$PATH PKG_CONFIG_PATH=$PWD/deps/install/lib/pkgconfig:$PKG_CONFIG_PATH $MAKE -C src regen
PKG_CONFIG_PATH=$PWD/deps/install/lib/pkgconfig:$PKG_CONFIG_PATH $MAKE
PKG_CONFIG_PATH=$PWD/deps/install/lib/pkgconfig:$PKG_CONFIG_PATH LD_LIBRARY_PATH=$PWD/deps/install/lib $MAKE check
