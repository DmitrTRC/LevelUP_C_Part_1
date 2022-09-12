enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_3_1_Lib_SOURCE_DIR}/include/static)
message(STATUS "HW_3_1_Lib Source DIR : ${HW_3_1_Lib_SOURCE_DIR}")


add_executable(HW_3_1_Tests_run
        getlength_test.cpp
        )

target_link_libraries(HW_3_1_Tests_run
        GTest::gtest_main
        get_length::lib
        )

include(GoogleTest)
gtest_discover_tests(HW_3_1_Tests_run)