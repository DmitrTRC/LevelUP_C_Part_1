//
// Created by Dmitry Morozov on 9/9/22.
//

/// Leetcode task 1, task2, task3 Demos

#include "shared/single_number_1.hpp"
#include "shared/single_number_2.hpp"
#include "shared/single_number_3.hpp"

#include <iostream>


void demoT1 ();

void demoT2 ();

void demoT3 ();

/**
 * @brief Main function
 * @return 0
 */
int main () {
    std::cout << "HOME WORK 4\n\nTask: Leetcode problems" << std::endl;

    std::cout << std::endl << "Task 1 demo " << std::endl;
    demoT1 ();

    std::cout << std::endl << "Task 2 demo " << std::endl;
    demoT2 ();

    std::cout << std::endl << "Task 3 demo " << std::endl;
    demoT3 ();

    return 0;
}

/**
 * Demo for Task 1
 */
void demoT1 () {
    std::vector<int> nums = {2, 2, 7, 3, 3, 4, 6, 6, 4, 5, 5};

    std::cout << "Given array: " << "{2, 2, 7, 3, 3, 4, 6, 6, 4, 5, 5}" << std::endl;

    auto solution = new Leetcode_1::Task;
    std::cout << "Single number is: " << solution->singleNumber (nums) << std::endl;
}

/**
 * Demo for Task 2
 */
void demoT2 () {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Given array: " << "{1, 1, 1, 2, 3, 2, 2, 8, 4, 8, 4, 8, 4}" << std::endl;

    auto solution = new Leetcode_2::Task;
    std::cout << "Single number is: " << solution->singleNumber (nums) << std::endl;
}

/**
 * Demo for Task 3
 */
void demoT3 () {
    std::vector<int> nums = {1, 2, 1, 5, 3, 7, 2, 3, 5, 9};

    std::cout << "Given array: " << "{1, 2, 1, 5, 3, 7, 2, 3, 5, 9}" << std::endl;

    auto solution = new Leetcode_3::Task;
    std::cout << "Single numbers are: " << solution->singleNumber (nums).at (0) << " and "
              << solution->singleNumber (nums).at (1) << std::endl;
}
