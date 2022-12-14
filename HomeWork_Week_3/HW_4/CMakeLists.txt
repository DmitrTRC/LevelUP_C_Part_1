

project(HW_3_4_Lib)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${HW_3_4_Lib_SOURCE_DIR}/bin)
message(STATUS "HW_3_4 Output directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")


############################################################
# Create a library
############################################################

#Generate the shared library from the library sources

add_library(HW_3_4_Lib SHARED
        src/dec2bin.cpp
        )

add_library(dec2bin::lib ALIAS HW_3_4_Lib)

target_include_directories(HW_3_4_Lib
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        )

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(
        HW_3_4_RUN
        src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries(HW_3_4_RUN
        PRIVATE
        dec2bin::lib
        )

# Tests
add_subdirectory(tests)