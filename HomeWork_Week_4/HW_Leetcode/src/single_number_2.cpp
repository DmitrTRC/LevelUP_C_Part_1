//
// Created by Dmitry Morozov on 9/9/22.
//

#include "shared/single_number_2.hpp"

#include <algorithm>
#include <stdexcept>
#include <vector>


/**
 * Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
 * @param nums
 * @return int
 */
int Leetcode_2::Task::singleNumber (std::vector<int> &nums) const {
    for (const auto number: nums) {
        if (std::count (nums.begin (), nums.end (), number) == 1) {
            return number;
        }
    }
    throw std::invalid_argument ("There is no single number in the array");
}
