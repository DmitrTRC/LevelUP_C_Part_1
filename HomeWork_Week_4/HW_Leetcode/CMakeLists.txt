

project(HW_4_Leetcode_Lib)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${HW_4_Leetcode_Lib_SOURCE_DIR}/bin)
message(STATUS "HW_4_Leetcode Output directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")


############################################################
# Create a library
############################################################

#Generate the shared library from the library sources

add_library(HW_4_Leetcode_Lib SHARED
        src/single_number_1.cpp
        src/single_number_2.cpp
        src/single_number_3.cpp
        )

add_library(leet_sn::lib ALIAS HW_4_Leetcode_Lib)

target_include_directories(HW_4_Leetcode_Lib
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        )

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(
        HW_4_Leetcode_RUN
        src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries(HW_4_Leetcode_RUN
        PRIVATE
        leet_sn::lib
        )

# Tests
add_subdirectory(tests)