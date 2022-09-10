enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${HW_x_x_Lib_SOURCE_DIR}/include/)
message(STATUS "HW_x_x_Lib Source DIR : ${HW_x_x_Lib_SOURCE_DIR}")


add_executable(HW_x_x_Tests_run
        xxxx_test.cpp
        )

target_link_libraries(HW_x_x_Tests_run
        gtest_main
        xxxx::lib
        )

include(GoogleTest)
gtest_discover_tests(HW_x_x_Tests_run)