cmake_minimum_required(VERSION 3.24)

if (POLICY CMP0074)
    cmake_policy(SET CMP0074 NEW)
endif ()

if (POLICY CMP0054)
    cmake_policy(SET CMP0054 NEW)
endif ()

if (POLICY CMP0079)
    cmake_policy(SET CMP0079 NEW)
endif ()

if (POLICY CMP0108)
    cmake_policy(SET CMP0108 NEW)
endif ()

if (POLICY CMP0109)
    cmake_policy(SET CMP0109 NEW)
endif ()

if (POLICY CMP0128)
    cmake_policy(SET CMP0128 NEW)
endif ()

project(php-uv)
enable_language(C)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake" "${CMAKE_SOURCE_DIR}/externals/sanitizers-cmake/cmake")

# if build type is not set, default to debug
if (NOT CMAKE_BUILD_TYPE OR CMAKE_BUILD_TYPE STREQUAL "")
    set(CMAKE_BUILD_TYPE "Debug")
endif ()

include(cmake/Clean.cmake)

set(PHP_UV_VERSION "1.0.0-dev")

set(CUSTOM_PHP_CONFIG "" CACHE STRING "Custom PHP config path")

set(PHP_VERSION_FOR_PHP_CONFIG "8.3" CACHE STRING "PHP version")
option(PHP_DEBUG_FOR_PHP_CONFIG "Debug or Release" ON)
option(PHP_THREAD_SAFE_FOR_PHP_CONFIG "ZTS(zts) or NTS(nts)" OFF)

option(ENABLE_SANITIZERS "Enable sanitizers" OFF)

option(LIBUV_STATIC "Statically link libuv" OFF)
option(LIBUV_FROM_SRC "Build LibUV from Source" OFF)
set(LIBUV_SRC_VERSION "1.48.0" CACHE STRING "Tag for LibUV source")

find_package(PHP REQUIRED)

if (ENABLE_SANITIZERS)
    find_package(Sanitizers REQUIRED)
endif ()

set(SRC_LIST src/uv.c src/php_uv.c)

add_library(ext-uv SHARED)
find_package(Libuv REQUIRED)

configure_file(version.in.h version.h USE_SOURCE_PERMISSIONS NEWLINE_STYLE UNIX)

target_sources(ext-uv PRIVATE ${SRC_LIST})

target_compile_features(ext-uv PRIVATE c_std_23 c_restrict c_static_assert c_function_prototypes c_variadic_macros)

target_compile_definitions(
        ext-uv
        PUBLIC HAVE_VERSION_H
        PUBLIC _POSIX_C_SOURCE=200809L
        PUBLIC _GNU_SOURCE
        PUBLIC _FILE_OFFSET_BITS=64
        PUBLIC _LARGEFILE_SOURCE
        PUBLIC _LARGEFILE64_SOURCE
        PUBLIC COMPILE_DL_UV
)
target_include_directories(ext-uv PUBLIC ${PHP_INCLUDES} ${PROJECT_BINARY_DIR} ${PROJECT_SOURCE_DIR}/include)

set_target_properties(
        ext-uv PROPERTIES
        POSITION_INDEPENDENT_CODE ON
        PREFIX ""
        OUTPUT_NAME "uv"
        C_STANDARD 23
        C_STANDARD_REQUIRED ON
        C_EXTENSIONS ON
)
