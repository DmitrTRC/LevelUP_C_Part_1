enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_3_2_Lib_SOURCE_DIR}/include/)
message(STATUS "HW_3_2_Lib Source DIR : ${HW_3_2_Lib_SOURCE_DIR}")


add_executable(HW_3_2_Tests_run
        lcd_test.cpp
        )

target_link_libraries(HW_3_2_Tests_run
        GTest::gtest_main
        lcd::lib
        )

include(GoogleTest)
gtest_discover_tests(HW_3_2_Tests_run)