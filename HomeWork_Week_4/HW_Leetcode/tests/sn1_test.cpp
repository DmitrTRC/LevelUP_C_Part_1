//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "shared/single_number_1.hpp"


using namespace Leetcode_1;


TEST (SingleNumberI, getSingleNumber) {

    Task task;
    std::vector<int> v1 = {2, 2, 1};
    std::vector<int> v2 = {4, 1, 2, 1, 2};
    std::vector<int> v3 = {1};

    EXPECT_EQ (task.singleNumber (v1), 1);
    EXPECT_EQ (task.singleNumber (v2), 4);
    EXPECT_EQ (task.singleNumber (v3), 1);

}
