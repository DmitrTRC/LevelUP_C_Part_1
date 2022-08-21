
project(HW2)

set(CMAKE_CXX_STANDARD 20)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${HW2_BINARY_DIR}/bin)
message(STATUS "HW2 Output directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
message(STATUS "HW2 BINARY_DIR : ${HW2_BINARY_DIR}")


add_subdirectory(src)
add_subdirectory(tests)
