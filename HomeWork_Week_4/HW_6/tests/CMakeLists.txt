enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_4_6_Lib_SOURCE_DIR}/include/)
message(STATUS "HW_4_6_Lib Source DIR : ${HW_4_6_Lib_SOURCE_DIR}")


add_executable(HW_4_6_Tests_run
        isValid_test.cpp
        )

target_link_libraries(HW_4_6_Tests_run
        GTest::gtest_main
        valid_brackets::lib
        )

include(GoogleTest)
gtest_discover_tests(HW_4_6_Tests_run)