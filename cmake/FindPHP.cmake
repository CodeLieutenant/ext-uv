if(NOT ${CUSTOM_PHP_CONFIG} STREQUAL "")
    message(STATUS "Using custom php config: ${CUSTOM_PHP_CONFIG}")

    if(EXISTS ${CUSTOM_PHP_CONFIG})
        set(PHP_CONFIG_EXECUTABLE ${CUSTOM_PHP_CONFIG})
        set(PHP_CONFIG_FOUND ON)
    else()
        message(FATAL_ERROR "php-config not found")
        set(PHP_CONFIG_FOUND OFF)
    endif()
else()
    message(STATUS "Searching php-config PHP-VERSION: ${PHP_VERSION_FOR_PHP_CONFIG}")

    if(${PHP_VERSION_FOR_PHP_CONFIG} STREQUAL "")
        message(FATAL_ERROR "PHP version not defined: ${PHP_VERSION_FOR_PHP_CONFIG}")
    endif()

    set(hint "${PROJECT_SOURCE_DIR}/php/${PHP_VERSION_FOR_PHP_CONFIG}")

    if(${PHP_DEBUG_FOR_PHP_CONFIG})
        set(hint "${hint}-debug")
    else()
        set(hint "${hint}-release")
    endif()

    if(${PHP_THREAD_SAFE_FOR_PHP_CONFIG})
        set(hint "${hint}-zts")
    else()
        set(hint "${hint}-nts")
    endif()

    find_program(
        PHP_CONFIG_EXECUTABLE php-config
        HINTS ${hint} "/root/php" "/usr" "/usr/local" "${PROJECT_SOURCE_DIR}/php"
        PATH_SUFFIXES bin
        REQUIRED
    )
    message(STATUS "Found php-config: ${PHP_CONFIG_EXECUTABLE}")
    set(PHP_CONFIG_EXECUTABLE ${PHP_CONFIG_EXECUTABLE})
    set(PHP_CONFIG_FOUND ON)
endif()

if(NOT PHP_CONFIG_FOUND)
    message(FATAL_ERROR "php-config is required")
endif()

execute_process(COMMAND ${PHP_CONFIG_EXECUTABLE} --prefix OUTPUT_VARIABLE PHP_LIB_PREFIX OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND ${PHP_CONFIG_EXECUTABLE} --includes OUTPUT_VARIABLE PHP_INCLUDES OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND ${PHP_CONFIG_EXECUTABLE} --libs OUTPUT_VARIABLE PHP_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND ${PHP_CONFIG_EXECUTABLE} --version OUTPUT_VARIABLE PHP_VERSION OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND ${PHP_CONFIG_EXECUTABLE} --vernum OUTPUT_VARIABLE ZEND_API OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND ${PHP_CONFIG_EXECUTABLE} --extension-dir OUTPUT_VARIABLE PHP_EXTENSION_DIR OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND ${PHP_CONFIG_EXECUTABLE} --include-dir OUTPUT_VARIABLE PHP_INCLUDES_DIR OUTPUT_STRIP_TRAILING_WHITESPACE)

get_filename_component(PHP_LIB_DIR ${PHP_LIBS} DIRECTORY)
string(REGEX REPLACE "-I" "" PHP_INCLUDES "${PHP_INCLUDES} ")
string(REGEX REPLACE " " ";" PHP_INCLUDES " ${PHP_INCLUDES} ")

set(PHP_LDFLAGS " -L${PHP_LIB_DIR} ${PHP_LIBS} ")
set(PHP_INCLUDES ${PHP_INCLUDES})
set(PHP_LDFLAGS ${PHP_LDFLAGS})
set(PHP_LIB ${PHP_LIB})
set(PHP_VERSION ${PHP_VERSION})
set(ZEND_API ${ZEND_API})
set(PHP_EXTENSION_DIR ${PHP_EXTENSION_DIR})
set(PHP_INCLUDES_DIR ${PHP_INCLUDES_DIR})
set(PHP_FOUND ON)