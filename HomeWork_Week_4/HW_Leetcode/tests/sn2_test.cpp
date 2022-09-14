//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "shared/single_number_2.hpp"


using namespace Leetcode_2;

TEST (SingleNumberII, getSingleNumber) {

    Task task;

    std::vector<int> nums = {2, 2, 3, 2};
    EXPECT_EQ (task.singleNumber (nums), 3);

    nums = {0, 1, 0, 1, 0, 1, 99};
    EXPECT_EQ (task.singleNumber (nums), 99);

    nums = {1, 1, 1, 2, 2, 2, 3};
    EXPECT_EQ (task.singleNumber (nums), 3);

    nums = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    EXPECT_ANY_THROW(task.singleNumber (nums));

}
