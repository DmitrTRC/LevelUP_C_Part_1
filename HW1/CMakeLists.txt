
project(HW1)

set(CMAKE_CXX_STANDARD 20)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${HW1_BINARY_DIR}/bin)
message(STATUS "HW1 Output directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")

add_subdirectory(src)
add_subdirectory(tests)
