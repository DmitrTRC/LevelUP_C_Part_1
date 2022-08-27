enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_3_4_SOURCE_DIR}/src)
message(STATUS "HW_3_4 Source DIR : ${HW_3_4_SOURCE_DIR}")


add_executable(HW_3_4_Tests_run
        test_task4.cpp
        )

target_link_libraries(HW_3_4_Tests_run
        gtest
        gtest_main
        HW_3_4_lib
        )

include(GoogleTest)
gtest_discover_tests(HW_3_4_Tests_run)