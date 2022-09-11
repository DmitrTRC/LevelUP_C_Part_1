enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_4_1_Lib_SOURCE_DIR}/include/)
message(STATUS "HW_4_1_Lib Source DIR : ${HW_4_1_Lib_SOURCE_DIR}")


add_executable(HW_4_1_Tests_run
        swapMln_test.cpp
        )

target_link_libraries(HW_4_1_Tests_run
        gtest_main
        swap_mln::lib
        )

include(GoogleTest)
gtest_discover_tests(HW_4_1_Tests_run)
