

project(HW_4_2_Lib)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${HW_4_2_Lib_SOURCE_DIR}/bin)
message(STATUS "HW_4_2 Output directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")


############################################################
# Create a library
############################################################

#Generate the shared library from the library sources

add_library(HW_4_2_Lib SHARED
        src/arr_diff.cpp
        )

add_library(arr_diff::lib ALIAS HW_4_2_Lib)

target_include_directories(HW_4_2_Lib
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        )

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(
        HW_4_2_RUN
        src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries(HW_4_2_RUN
        PRIVATE
        arr_diff::lib
        )

# Tests
add_subdirectory(tests)