enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_4_4_SOURCE_DIR}/src)
message(STATUS "HW_4_4 Source DIR : ${HW_4_4_SOURCE_DIR}")


add_executable(HW_4_4_Tests_run
        test_task1.cpp
        )

target_link_libraries(HW_4_4_Tests_run
        gtest
        gtest_main
        HW_4_4_lib
        )

include(GoogleTest)
gtest_discover_tests(HW_4_4_Tests_run)