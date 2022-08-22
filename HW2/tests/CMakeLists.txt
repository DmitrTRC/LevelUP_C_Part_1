include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories (${HW2_SOURCE_DIR}/src)
message( STATUS "HW2 Source DIR : ${HW2_SOURCE_DIR}" )

add_executable(HW2_Tests_run
        test_example.cpp
        test_task1.cpp
        )

target_link_libraries(HW2_Tests_run
        gtest
        gtest_main
        HW2_lib
        )
