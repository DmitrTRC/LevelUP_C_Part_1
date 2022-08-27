enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_3_5_SOURCE_DIR}/src)
message(STATUS "HW_3_5 Source DIR : ${HW_3_5_SOURCE_DIR}")


add_executable(HW_3_5_Tests_run
        test_task5.cpp
        )

target_link_libraries(HW_3_5_Tests_run
        gtest
        gtest_main
        HW_3_5_lib
        )

include(GoogleTest)
gtest_discover_tests(HW_3_5_Tests_run)