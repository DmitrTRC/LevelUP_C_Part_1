

project(HW_3_3_Lib)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${HW_3_3_Lib_SOURCE_DIR}/bin)
message(STATUS "HW_3_3 Output directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")


############################################################
# Create a library
############################################################

#Generate the shared library from the library sources

add_library(HW_3_3_Lib SHARED
        src/dswap.cpp
        )

add_library(dswap::lib ALIAS HW_3_3_Lib)

target_include_directories(HW_3_3_Lib
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        )

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(
        HW_3_RUN
        src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries(HW_3_RUN
        PRIVATE
        dswap::lib
        )

# Tests
add_subdirectory(tests)