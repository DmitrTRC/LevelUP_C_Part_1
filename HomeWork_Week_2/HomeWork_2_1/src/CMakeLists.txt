

project(HW_2_1_run)

set(CMAKE_CXX_STANDARD 20)

#Build library

set(HEADER_FILES
        Task1.hpp
        )

set(SOURCE_FILES
        Task1.cpp
        )

add_library(HW_2_1_lib ${SOURCE_FILES} ${HEADER_FILES})

add_executable(HW_2_1_run main.cpp)

target_link_libraries(HW_2_1_run HW_2_1_lib)