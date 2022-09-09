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

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    add_compile_options(-fprofile-instr-generate -fcoverage-mapping)
    add_link_options(-fprofile-instr-generate)
    #Uncomment in case of linker errors
    #link_libraries(clang_rt.profile-x86_64)
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    add_compile_options(--coverage)
    #Uncomment in case of linker errors
    #link_libraries(gcov)
endif ()


#add_subdirectory(Playground)
add_subdirectory(HomeWork_1_1)
add_subdirectory(HomeWork_1_2)
add_subdirectory(HomeWork_2_1)
add_subdirectory(HomeWork_2_2)
add_subdirectory(HomeWork_3_1)
add_subdirectory(HomeWork_3_2)
add_subdirectory(HomeWork_3_3)
add_subdirectory(HomeWork_3_4)
add_subdirectory(HomeWork_3_5)
add_subdirectory(HomeWork_4_1)
add_subdirectory(HomeWork_4_2)
add_subdirectory(HomeWork_4_3)
add_subdirectory(HomeWork_4_4)
add_subdirectory(HomeWork_4_5)
add_subdirectory(HomeWork_4_6)
add_subdirectory(HomeWork_4_Leetcode)



