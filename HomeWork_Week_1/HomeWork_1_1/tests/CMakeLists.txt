enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_1_1_SOURCE_DIR}/src)
message(STATUS "HW_1_1 Source DIR : ${HW_1_1_SOURCE_DIR}")


add_executable(HW_1_1_Tests_run
        test_task1.cpp
        )

target_link_libraries(HW_1_1_Tests_run
        GTest::gtest_main
        HW_1_1_lib
        )

include(GoogleTest)
gtest_discover_tests(HW_1_1_Tests_run)