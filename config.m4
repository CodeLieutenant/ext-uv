PHP_ARG_WITH(uv, Whether to include "uv" support,
[ --with-uv[=DIR]        Include "uv" support])

PHP_ARG_ENABLE(uv-debug, for uv debug support,
    [ --enable-uv-debug       Enable enable uv debug support], no, no)

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

    CMAKE_BUILD_TYPE="Release"
    CMAKE_FLAGS="-DCMAKE_CXX_COMPILER_LAUNCHER=ccache"

    if test "$PHP_UV_DEBUG" != "no"; then
        CMAKE_BUILD_TYPE="Debug"
    fi

    if test "$PHP_LIBUV_STATIC" == "yes"; then
        CMAKE_FLAGS="$CMAKE_FLAGS -DLIBUV_STATIC=ON"
    fi

    if test "$PHP_LIBUV_FROM_SRC" == "yes"; then
        CMAKE_FLAGS="$CMAKE_FLAGS -DLIBUV_FROM_SRC=ON -DLIBUV_SRC_VERSION=1.48.0"
    fi

    if test "$PHP_LIBUV_SRC_VERSION" != ""; then
        CMAKE_FLAGS="$CMAKE_FLAGS -DLIBUV_SRC_VERION=$PHP_LIBUV_SRC_VERSION"
    fi
    cat >> Makefile.objects << EOF
all: cmake_build

cmake_build:
	@cmake --preset $CMAKE_BUILD_TYPE -DCMAKE_CXX_COMPILER_LAUNCHER=ccache && cd out/$CMAKE_BUILD_TYPE && ninja && cd ../../
	@cp ./out/install/$CMAKE_BUILD_TYPE/uv.so ./modules/uv.so

cmake_clean:
	@cmake --build out/$CMAKE_BUILD_TYPE --target remove_build

cmake_install:
    @cd out/$CMAKE_BUILD_TYPE && ninja install && cd ../../

install: cmake_install

.PHONY: cmake_build cmake_clean cmake_install

EOF
fi
