

project(Playground_run)

set(CMAKE_CXX_STANDARD 20)

#Build library

set(HEADER_FILES
        Playground.hpp
        rfact.hpp
        r_fib.hpp
        sequence_sum.hpp
        )

set(SOURCE_FILES
        Playground.cpp
        rfact.cpp
        r_fib.cpp
        sequence_sum.cpp
        )

add_library(Playground_lib ${SOURCE_FILES} ${HEADER_FILES})

add_executable(Playground_run main.cpp)

target_link_libraries(Playground_run Playground_lib)