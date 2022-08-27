

project(HW_3_4_run)

set(CMAKE_CXX_STANDARD 20)

#Build library

set(HEADER_FILES
        Task4.hpp
        )

set(SOURCE_FILES
        Task4.cpp
        )

add_library(HW_3_4_lib ${SOURCE_FILES} ${HEADER_FILES})

add_executable(HW_3_4_run main.cpp)

target_link_libraries(HW_3_4_run HW_3_4_lib)