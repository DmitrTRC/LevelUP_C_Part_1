

project(HW2_run)

set(CMAKE_CXX_STANDARD 20)

set(HEADER_FILES
        Task2.hpp
        Task1.hpp
        )

set(SOURCE_FILES
        Task2.cpp
        Task1.cpp
        main.cpp
        )
add_executable(HW2_run ${HEADER_FILES} ${SOURCE_FILES})

