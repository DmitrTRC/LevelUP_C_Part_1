

project(HW_x_x_Lib)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${HW_x_x_Lib_SOURCE_DIR}/bin)
message(STATUS "HW_x_x Output directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")


############################################################
# Create a library
############################################################

#Generate the shared library from the library sources

add_library(HW_x_x_Lib SHARED
        src/xxxx.cpp
        )

add_library(LNAME::lib ALIAS HW_x_x_Lib)

target_include_directories(HW_x_x_Lib
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        )

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(
        HW_1_RUN
        src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries(HW_1_RUN
        PRIVATE
        get_length::lib
        )

# Tests
add_subdirectory(tests)