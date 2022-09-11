enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_4_4_Lib_SOURCE_DIR}/include/)
message(STATUS "HW_4_4_Lib Source DIR : ${HW_4_4_Lib_SOURCE_DIR}")


add_executable(HW_4_4_Tests_run
        matrixSod_test.cpp
        )

target_link_libraries(HW_4_4_Tests_run
        gtest_main
        matrix_sod::lib
        )

include(GoogleTest)
gtest_discover_tests(HW_4_4_Tests_run)