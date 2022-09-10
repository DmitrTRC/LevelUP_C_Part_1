

project(HW_4_Leet_run)

set(CMAKE_CXX_STANDARD 20)

#Build library

set(HEADER_FILES
        Task_1.hpp
        Task_2.hpp
        Task_3.hpp
        )

set(SOURCE_FILES
        Task_1.cpp
        Task_2.cpp
        Task_3.cpp
        )

add_library(HW_4_Leet_lib ${SOURCE_FILES} ${HEADER_FILES})

add_executable(HW_4_Leet_run main.cpp main.hpp)

target_link_libraries(HW_4_Leet_run HW_4_Leet_lib)