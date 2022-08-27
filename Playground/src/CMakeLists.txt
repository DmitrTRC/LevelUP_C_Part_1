

project(Playground_run)

set(CMAKE_CXX_STANDARD 20)

#Build library

set(HEADER_FILES
        Playground.hpp
        )

set(SOURCE_FILES
        Playground.cpp
        )

add_library(Playground_lib ${SOURCE_FILES} ${HEADER_FILES})

add_executable(Playground_run main.cpp)

target_link_libraries(Playground_run Playground_lib)