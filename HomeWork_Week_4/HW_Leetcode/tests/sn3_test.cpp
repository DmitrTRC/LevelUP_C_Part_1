//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "shared/single_number_3.hpp"


using namespace Leetcode_3;

TEST (SingleNumberIII, getSingleNumber) {
    Task task;
    std::vector<int> nums = {1, 2, 1, 3, 2, 5};
    std::vector<int> expected = {3, 5};

    EXPECT_EQ (task.singleNumber (nums), expected);

    nums = {1, 2, 1, 3, 2, 5, 5, 6, 6};
    EXPECT_ANY_THROW(task.singleNumber (nums));

    nums = {1, 2, 1, 3, 2, 5, 5, 6, 6, 4, 7};
    EXPECT_ANY_THROW(task.singleNumber (nums));

}
