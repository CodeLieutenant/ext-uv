PHP_ARG_ENABLE(uv-debug, for uv debug support,
    [ --enable-uv-debug       Enable enable uv debug support], no, no)

PHP_ARG_ENABLE(ext-testing, enable tests running,
    [ --enable-ext-testing       Enable running php tests through cmake/ctest], no, no)

PHP_ARG_ENABLE(libuv-static, for libuv static,
    [ --enable-libuv-static       Compile extension with static libuv], no, no)

PHP_ARG_ENABLE(libuv-from-src, for libuv from source,
    [ --enable-libuv-from-src       Use libuv from source], no, no)

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

    CMAKE_BUILD_TYPE="Release"
    CMAKE_FLAGS="-DCMAKE_CXX_COMPILER_LAUNCHER=ccache -DCMAKE_INSTALL_PREFIX=\"\""

    if test "$PHP_UV_DEBUG" != "no"; then
        CMAKE_BUILD_TYPE="Debug"
    fi

    if test "$PHP_LIBUV_STATIC" == "yes"; then
        CMAKE_FLAGS="$CMAKE_FLAGS -DLIBUV_STATIC=ON"
    fi

    if test "$PHP_EXT_TESTING" == "yes"; then
        CMAKE_FLAGS="$CMAKE_FLAGS -DBUILD_TESTING=ON"
		else
        CMAKE_FLAGS="$CMAKE_FLAGS -DBUILD_TESTING=OFF"
    fi

    if test "$PHP_LIBUV_FROM_SRC" == "yes"; then
        CMAKE_FLAGS="$CMAKE_FLAGS -DLIBUV_FROM_SRC=ON -DLIBUV_SRC_VERSION=$PHP_LIBUV_VERSION"
    fi

    cat >> Makefile.objects << EOF
all: cmake_build

cmake_build:
	@cmake --preset $CMAKE_BUILD_TYPE -DCMAKE_CXX_COMPILER_LAUNCHER=ccache && cd out/$CMAKE_BUILD_TYPE && ninja && cd ../../
	@cp ./out/$CMAKE_BUILD_TYPE/uv.so ./modules/uv.so

cmake_clean:
	@cmake --build out/$CMAKE_BUILD_TYPE --target remove_build

cmake_install:
	@cd out/$CMAKE_BUILD_TYPE && ninja install && cd ../../

install: cmake_install

.PHONY: cmake_build cmake_clean cmake_install

EOF
fi
