include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(HW1_Tests_run
        test_example.cpp
        )

target_link_libraries(HW1_Tests_run gtest gtest_main)


include(GoogleTest)
gtest_discover_tests(HW1_Tests_run)