include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(HW_1_2_Tests_run
        test_example.cpp
        )

target_link_libraries(HW_1_2_Tests_run GTest::gtest_main)


include(GoogleTest)
gtest_discover_tests(HW_1_2_Tests_run)