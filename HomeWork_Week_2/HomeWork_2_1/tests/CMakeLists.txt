enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_2_1_SOURCE_DIR}/src)
message(STATUS "HW2 Source DIR : ${HW_2_1_SOURCE_DIR}")


add_executable(HW_2_1_Tests_run
        test_task1.cpp
        )

target_link_libraries(HW_2_1_Tests_run
        GTest::gtest_main
        HW_2_1_lib
        )

include(GoogleTest)
gtest_discover_tests(HW_2_1_Tests_run)