//
// Created by Dmitry Morozov on 9/9/22.
//

#include "Task_1.hpp"

#include <vector>


///Given a non-empty array of integers nums, every element appears twice except for one. Find that single one
int Leetcode_1::Task1::singleNumber (std::vector<int> &nums) {
    int result = 0;
    for (int i = 0; i < nums.size (); i++) {
        result ^= nums[i];
    }
    return result;
}
