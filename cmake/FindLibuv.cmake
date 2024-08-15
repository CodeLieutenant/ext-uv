if(LIBUV_FROM_SRC)
    if(LIBUV_STATIC)
        set(LIBUV_BUILD_SHARED OFF)
    else()
        set(LIBUV_BUILD_SHARED ON)
    endif()

    CPMAddPackage(
        NAME libuv
        VERSION ${LIBUV_SRC_VERSION}
        URL https://github.com/libuv/libuv/tarball/v${LIBUV_SRC_VERSION}
        OPTIONS
        "BUILD_TESTING OFF"
        "BUILD_BENCHMARKS OFF"
        "LIBUV_BUILD_SHARED ${LIBUV_BUILD_SHARED}"
        "CMAKE_C_FLAGS ${CMAKE_C_FLAGS} -fPIC"
        "CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -fPIC"
    )

    set(LIBUV_ROOT_DIR ${libuv_BINARY_DIR})

    if(LIBUV_STATIC)
        set(LIBUV_LIBRARY "${libuv_BINARY_DIR}/libuv_a.a")
    else()
        set(LIBUV_LIBRARY "${libuv_BINARY_DIR}/libuv.so")
    endif()

    set(LIBUV_LIBRARY_DIRS "${libuv_BINARY_DIR}")

    if(LIBUV_STATIC)
        target_link_libraries(ext-uv PRIVATE uv_a)
    else()
        target_link_libraries(ext-uv PRIVATE uv)
    endif()
else()
    find_package(PkgConfig REQUIRED)

    if(LIBUV_STATIC)
        target_compile_definitions(ext-uv PRIVATE -DUV_STATIC)
        pkg_check_modules(LIBUV REQUIRED IMPORTED_TARGET libuv-static)
    else()
        pkg_check_modules(LIBUV REQUIRED IMPORTED_TARGET libuv)
    endif()

    target_link_libraries(ext-uv PRIVATE ${LIBUV_LIBRARIES})
    target_link_directories(ext-uv PRIVATE ${LIBUV_LIBRARY_DIRS})
    target_include_directories(ext-uv PUBLIC ${LIBUV_INCLUDE_DIRS})
endif()