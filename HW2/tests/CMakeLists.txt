include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(HW2_Tests_run
        test_example.cpp
        )

target_link_libraries(HW2_Tests_run gtest gtest_main)
