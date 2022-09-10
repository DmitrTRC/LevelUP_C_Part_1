
project(HW_4_2)

set(CMAKE_CXX_STANDARD 20)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${HW_4_2_SOURCE_DIR}/bin)
message(STATUS "HW_4_2 Output directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")


add_subdirectory(src)
add_subdirectory(tests)
