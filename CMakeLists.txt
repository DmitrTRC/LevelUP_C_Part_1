cmake_minimum_required(VERSION 3.22)
project(LevelUP_C_PartI)

set(CMAKE_CXX_STANDARD 20)


include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)


#add_subdirectory(Playground) This is dev playground
add_subdirectory(HomeWork_Week_1)
add_subdirectory(HomeWork_Week_2)
add_subdirectory(HomeWork_Week_3)
add_subdirectory(HomeWork_Week_4)



