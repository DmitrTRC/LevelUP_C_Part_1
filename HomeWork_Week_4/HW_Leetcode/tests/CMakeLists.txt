enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_4_Leetcode_Lib_SOURCE_DIR}/include/)
message(STATUS "HW_4_Leetcode_Lib Source DIR : ${HW_4_Leetcode_Lib_SOURCE_DIR}")


add_executable(HW_4_Leetcode_Tests_run
        sn1_test.cpp
        sn2_test.cpp
        sn3_test.cpp
        )

target_link_libraries(HW_4_Leetcode_Tests_run
        GTest::gtest_main
        leet_sn::lib
        )

include(GoogleTest)
gtest_discover_tests(HW_4_Leetcode_Tests_run)