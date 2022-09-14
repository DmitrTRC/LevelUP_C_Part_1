//
// Created by Dmitry Morozov on 9/9/22.
//

#include "shared/single_number_3.hpp"

#include <map>
#include <vector>


/**
 * Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice.
 * Find the two elements that appear only once. You can return the answer in any order.
 * @param nums
 * @return std::vector<int>
 */
std::vector<int> Leetcode_3::Task::singleNumber (std::vector<int> &nums) const {
    std::map<int, int> frequency;
    std::vector<int> res;
    for (const auto num: nums) {
        frequency[num]++;
    }
    for (const auto &[key, value]: frequency) {
        if (value == 1) {
            res.push_back (key);

        }

    }

    if (res.size () == 2) {
        return res;
    } else {
        throw std::invalid_argument ("No only two single numbers in the array");
    }

}


