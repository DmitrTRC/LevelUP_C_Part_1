

project(HW_3_5_run)

set(CMAKE_CXX_STANDARD 20)

#Build library

set(HEADER_FILES
        Task5.hpp
        )

set(SOURCE_FILES
        Task5.cpp
        )

add_library(HW_3_5_lib ${SOURCE_FILES} ${HEADER_FILES})

add_executable(HW_3_5_run main.cpp)

target_link_libraries(HW_3_5_run HW_3_5_lib)