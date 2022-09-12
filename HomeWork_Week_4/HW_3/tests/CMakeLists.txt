enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_4_3_Lib_SOURCE_DIR}/include/)
message(STATUS "HW_4_3_Lib Source DIR : ${HW_4_3_Lib_SOURCE_DIR}")


add_executable(HW_4_3_Tests_run
        kswap_test.cpp
        )

target_link_libraries(HW_4_3_Tests_run
        GTest::gtest_main
        kswap::lib
        )

include(GoogleTest)
gtest_discover_tests(HW_4_3_Tests_run)