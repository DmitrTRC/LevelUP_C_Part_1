//
// Created by Dmitry Morozov on 9/9/22.
//

#include "shared/single_number_1.hpp"

#include <vector>


/**
 * Given a non-empty array of integers nums, every element appears twice except for one. Find that single one
 * @param nums
 * @return int
 */
int Leetcode_1::Task1::singleNumber (std::vector<int> &nums) {
    int result = 0;
    for (int num: nums) {
        result ^= num;
    }
    return result;
}
