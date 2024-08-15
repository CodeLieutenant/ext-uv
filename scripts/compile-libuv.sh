#!/usr/bin/env bash
# -*- coding: utf-8 -*-

LIBUV_BUILD_TYPE="RelWithInfo"
LIBUV_VERSION=${2:-"v1.48.0"}
LIBUV_REPO=${3:-"https://github.com/libuv/libuv.git"}
CURRENT_DIR="$(pwd)"

git clone --depth=1 "$LIBUV_REPO" /opt/libuv

cd /opt/libuv || exit 1

git fetch --tags

git checkout -b "$LIBUV_VERSION" "tags/$LIBUV_VERSION"

mkdir build || exit 1

cd build || exit 1

LDFLAGS="-flto" CFLAGS="-fPIC" cmake -G Ninja \
    -DBUILD_TESTING=OFF \
    -DBUILD_BENCHMARKS=OFF \
    -DLIBUV_BUILD_SHARED=ON \
    -DCMAKE_CXX_COMPILER_LAUNCHER=ccache \
    -DCMAKE_BUILD_TYPE="$LIBUV_BUILD_TYPE" ..

LDFLAGS="-flto" CFLAGS="-fPIC" ninja install

cd .. || exit

rm -rf build

cd "$CURRENT_DIR" || exit 1