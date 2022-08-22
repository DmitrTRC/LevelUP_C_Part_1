

project(HW2_run)

set(CMAKE_CXX_STANDARD 20)

#Build library

set(HEADER_FILES
        Task2.hpp
        Task1.hpp
        )

set(SOURCE_FILES
        Task2.cpp
        Task1.cpp
        )

add_library(HW2_lib ${SOURCE_FILES} ${HEADER_FILES})

add_executable(HW2_run main.cpp)

target_link_libraries(HW2_run HW2_lib)