if (NOT PHP_FOUND)
    message(FATAL_ERROR "PHP installation is not found")
endif ()

include(ProcessorCount)


file(GLOB_RECURSE ext_uv_tests LIST_DIRECTORIES false RELATIVE "${CMAKE_SOURCE_DIR}" ON "./*.phpt")

set(WITH_VALGRIND OFF CACHE BOOL "Enable php tests to run through valgrind")
set(PHP_TEST_TIMEOUT "120" CACHE STRING "Enable php tests to run through valgrind")

ProcessorCount(PROCESSOR_COUNT)

foreach(test ${ext_uv_tests})
    add_test(
            NAME ${test}
            COMMAND ${PHP_BINARY} run-tests.php -d extension=${CMAKE_BINARY_DIR}/uv.so -q --show-diff -p ${PHP_BINARY} --set-timeout ${PHP_TEST_TIMEOUT} ${test}
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    )

    set_property (TEST ${test}
            PROPERTY PASS_REGULAR_EXPRESSION "Tests passed    :     1")
    set_property (TEST ${test}
            PROPERTY FAIL_REGULAR_EXPRESSION "Tests failed    :     1")
    set_property (TEST ${test}
            PROPERTY SKIP_REGULAR_EXPRESSION "^Tests skipped   :     1")
endforeach()

add_test(
        NAME php_test
        COMMAND ${PHP_BINARY} run-tests.php -j${PROCESSOR_COUNT} -d extension=${CMAKE_BINARY_DIR}/uv.so -q --show-diff -p ${PHP_BINARY} --set-timeout ${PHP_TEST_TIMEOUT}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)

set_property (TEST php_test
        PROPERTY PASS_REGULAR_EXPRESSION "Tests passed    :     1")
set_property (TEST php_test
        PROPERTY FAIL_REGULAR_EXPRESSION "Tests failed    :     1")
set_property (TEST php_test
        PROPERTY SKIP_REGULAR_EXPRESSION "^Tests skipped   :     1")