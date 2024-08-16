add_custom_target(
        remove_build
        COMMAND ${CMAKE_COMMAND} -E rm -rf ${CMAKE_BINARY_DIR}/
        COMMENT "Cleaning all generated files"
)