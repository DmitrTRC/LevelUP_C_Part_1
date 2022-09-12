enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_4_2_Lib_SOURCE_DIR}/include/)
message(STATUS "HW_4_2_Lib Source DIR : ${HW_4_2_Lib_SOURCE_DIR}")


add_executable(HW_4_2_Tests_run
        arrDiff_test.cpp
        )

target_link_libraries(HW_4_2_Tests_run
        GTest::gtest_main
        arr_diff::lib
        )

include(GoogleTest)
gtest_discover_tests(HW_4_2_Tests_run)