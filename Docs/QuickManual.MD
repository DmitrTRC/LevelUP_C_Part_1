# Quick Guide

## Description of project Structure

* Each Project separated.
* You can build it separately with CMake
* Docs : Documentation for project
* HW(x) Project Directory , where x : Week number
    - bin : Binary output directory
    - Docs : Documentation ( Homework tasks content )
    - src : Source code
        * main.cpp : Demo launcher
        * task1.cpp / test_task1.hpp , ... , task(n).cpp/hpp : lib source files
    - tests: Test files ( GTest Library )
        * test_task(n).cpp for each Task number. 