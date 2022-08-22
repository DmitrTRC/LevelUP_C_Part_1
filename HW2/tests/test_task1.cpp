//
// Created by Dmitry Morozov on 22/8/22.
//

#include "gtest/gtest.h"

#include "Task1.hpp"


TEST(Task1, getEquation) {

    EXPECT_EQ(getEquation(1), 1);
    EXPECT_EQ(getEquation(2), 2);
    EXPECT_EQ(getEquation(3), 3);
}






