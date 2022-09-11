enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_4_5_Lib_SOURCE_DIR}/include/)
message(STATUS "HW_4_5_Lib Source DIR : ${HW_4_5_Lib_SOURCE_DIR}")


add_executable(HW_4_5_Tests_run
        geString_test.cpp
        )

target_link_libraries(HW_4_5_Tests_run
        gtest_main
        ge_string::lib
        )

include(GoogleTest)
gtest_discover_tests(HW_4_5_Tests_run)