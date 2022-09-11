//
// Created by Dmitry Morozov on 9/9/22.
//

#include "shared/single_number_2.hpp"

#include <vector>


/**
 * Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
 * @param nums
 * @return int
 */
int Leetcode_2::Task2::singleNumber (std::vector<int> &nums) {
    std::sort (nums.begin (), nums.end ());
    int counter{0};
    int cur_n = nums.at (0);
    for (auto n: nums) {
        if (n == cur_n) {
            counter++;
            continue;
        }
        if (counter == 1) {
            break;
        } else {
            counter = 1;
            cur_n = n;

        }
    }
    return cur_n;
}
