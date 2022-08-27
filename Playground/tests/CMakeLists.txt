enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${Playground_SOURCE_DIR}/src)
message(STATUS "Playground Source DIR : ${Playground_SOURCE_DIR}")


add_executable(Playground_Tests_run
        test_demo.cpp
        test_rfact.cpp
        test_r_fib.cpp
        )

target_link_libraries(Playground_Tests_run
        gtest
        gtest_main
        Playground_lib
        )

include(GoogleTest)
gtest_discover_tests(Playground_Tests_run)