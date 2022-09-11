

project(HW_4_3_Lib)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${HW_4_3_Lib_SOURCE_DIR}/bin)
message(STATUS "HW_4_3 Output directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")


############################################################
# Create a library
############################################################

#Generate the shared library from the library sources

add_library(HW_4_3_Lib SHARED
        src/kswap.cpp
        )

add_library(kswap::lib ALIAS HW_4_3_Lib)

target_include_directories(HW_4_3_Lib
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        )

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(
        HW_4_3_RUN
        src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries(HW_4_3_RUN
        PRIVATE
        kswap::lib
        )

# Tests
add_subdirectory(tests)