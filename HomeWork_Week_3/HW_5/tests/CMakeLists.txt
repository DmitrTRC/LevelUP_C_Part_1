enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_3_5_Lib_SOURCE_DIR}/include/)
message(STATUS "HW_3_5_Lib Source DIR : ${HW_3_5_Lib_SOURCE_DIR}")


add_executable(HW_3_5_Tests_run
        dfseq_test.cpp
        )

target_link_libraries(HW_3_5_Tests_run
        GTest::gtest_main
        df_seq::lib
        )

include(GoogleTest)

gtest_discover_tests(HW_3_5_Tests_run)