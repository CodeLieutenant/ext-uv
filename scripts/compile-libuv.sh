#!/usr/bin/env bash
# -*- coding: utf-8 -*-

LIBUV_BUILD_TYPE=${1:-"RelWithInfo"}
LIBUV_VERSION=${2:-"1.48.0"}
CURRENT_DIR="$(pwd)"

# cd / || exit 1

curl -L "https://github.com/libuv/libuv/archive/v$LIBUV_VERSION.tar.gz" | tar xzf -

mv "libuv-$LIBUV_VERSION" libuv-src || exit 1

cd libuv-src || exit 1

mkdir build || exit 1

cd build || exit 1

LDFLAGS="-flto" CFLAGS="-fPIC" cmake -G Ninja \
    -DBUILD_TESTING=OFF \
    -DLIBUV_BUILD_SHARED=ON \
    "-DCMAKE_INSTALL_PREFIX=$CURRENT_DIR/libuv" \
    -DCMAKE_BUILD_TYPE="$LIBUV_BUILD_TYPE" ..

LDFLAGS="-flto" CFLAGS="-fPIC" ninja install

cd .. || exit

rm -rf build

cd "$CURRENT_DIR" || exit 1