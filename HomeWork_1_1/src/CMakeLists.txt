

project(HW_1_1_run)

set(CMAKE_CXX_STANDARD 20)

#Build library


set(SOURCE_FILES
        Task1.cpp

        )

add_library(HW_1_1_lib ${SOURCE_FILES})


add_executable(HW_1_1_run main.cpp)
target_link_libraries(HW_1_1_run HW_1_1_lib)
