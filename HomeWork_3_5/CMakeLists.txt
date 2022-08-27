
project(HW_3_5)

set(CMAKE_CXX_STANDARD 20)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${HW_3_5_SOURCE_DIR}/bin)
message(STATUS "HW_3_5 Output directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")


add_subdirectory(src)
add_subdirectory(tests)
