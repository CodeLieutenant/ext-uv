PHP_ARG_WITH(uv, Whether to include "uv" support,
[ --with-uv[=DIR]        Include "uv" support])

PHP_ARG_ENABLE(uv-debug, for uv debug support,
    [ --enable-uv-debug       Enable uv debug support])

PHP_ARG_ENABLE(msan, for memory sanitizer,
    [ --enable-msan       Enable memory sanitizer])

PHP_ARG_ENABLE(asan, for address sanitizer,
    [ --enable-asan       Enable address sanitizer])

PHP_ARG_ENABLE(ubsan, for undefined behaviour sanitizer,
    [ --enable-ubsan       Enable undefined behaviour sanitizer])

PHP_ARG_ENABLE(ext-testing, enable tests running,
    [ --enable-ext-testing       Enable running php tests through cmake/ctest])

PHP_ARG_ENABLE(ext-testing, enable tests running,
    [ --enable-ext-testing       Enable running php tests through cmake/ctest])

PHP_ARG_ENABLE(libuv-static, for libuv static,
    [ --enable-libuv-static       Compile extension with static libuv])

PHP_ARG_ENABLE(libuv-from-src, for libuv from source,
    [ --enable-libuv-from-src       Use libuv from source])

PHP_ARG_WITH(libuv-version, Libuv version,
	[ --with-libuv-version[=VERSION]        Version to fetch the LibUV sources], 1.48.0, no)

PHP_ARG_WITH(libuv-version, Libuv version,
[ --with-libuv-version[=VERSION]        Version to fetch the LibUV sources], 1.48.0, no)

if test $PHP_UV != "no"; then
    PHP_NEW_EXTENSION(uv, [ ], $ext_shared)
    PHP_ADD_EXTENSION_DEP(uv, sockets, true)

    AC_PATH_PROG(PKG_CONFIG, pkg-config, no)
    AC_MSG_CHECKING(for pkg-config)
    if ! test -x "$PKG_CONFIG"; then
        AC_MSG_ERROR([pkg-config command not found, install it with your package manager])
    fi

    AC_PATH_PROG(CMAKE, cmake, no)
    AC_MSG_CHECKING(for cmake)
    if ! test -x "$CMAKE"; then
        AC_MSG_ERROR([cmake command not found, install it with your package manager or use pipx install cmake])
    fi

    CMAKE_BUILD_TYPE="Debug"
    CMAKE_FLAGS=""

    if test "$PHP_UV_DEBUG" == "no"; then
        CMAKE_BUILD_TYPE="Release"
    fi

    if test "$PHP_UV_DEBUG" == "yes"; then
        if test "$PHP_MSAN" == "yes"; then
            CMAKE_FLAGS="$CMAKE_FLAGS -DSANITIZE_MEMORY=ON"
        fi

        if test "$PHP_ASAN" == "yes"; then
            CMAKE_FLAGS="$CMAKE_FLAGS -DSANITIZE_ADDRESS=ON"
        fi

        if test "$PHP_UBSAN" == "yes"; then
            CMAKE_FLAGS="$CMAKE_FLAGS -DSANITIZE_UNDEFINED=ON"
        fi
    fi

    if test "$PHP_LIBUV_STATIC" == "yes"; then
        CMAKE_FLAGS="$CMAKE_FLAGS -DLIBUV_STATIC=ON"
    fi

    if test "$PHP_EXT_TESTING" == "yes"; then
        CMAKE_FLAGS="$CMAKE_FLAGS -DBUILD_TESTING=$PHP_EXT_TESTING"
    fi

    if test "$PHP_LIBUV_FROM_SRC" == "yes"; then
        CMAKE_FLAGS="$CMAKE_FLAGS -DLIBUV_FROM_SRC=ON -DLIBUV_SRC_VERSION=$PHP_LIBUV_VERSION"
    fi

    cat >> Makefile.objects << EOF
all: cmake_build

cmake_build:
	@cmake --preset $CMAKE_BUILD_TYPE && cd out/$CMAKE_BUILD_TYPE && ninja && cd ../../
	@cp ./out/$CMAKE_BUILD_TYPE/uv.so ./modules/uv.so

cmake_clean:
	@cmake --build out/$CMAKE_BUILD_TYPE --target remove_build

cmake_install:
	@cd out/$CMAKE_BUILD_TYPE && ninja install && cd ../../

.PHONY: cmake_build cmake_clean cmake_install

EOF
fi
