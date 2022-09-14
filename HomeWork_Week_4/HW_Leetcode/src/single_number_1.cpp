//
// Created by Dmitry Morozov on 9/9/22.
//

#include "shared/single_number_1.hpp"

#include <numeric>


/**
 * Given a non-empty array of integers nums, every element appears twice except for one. Find that single one
 * @param nums
 * @return int
 */
int Leetcode_1::Task::singleNumber (std::vector<int> &nums) const {

    return std::accumulate (nums.begin (), nums.end (), 0, std::bit_xor<> ());
}
