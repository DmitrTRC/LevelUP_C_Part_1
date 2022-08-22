//
// Created by Dmitry Morozov on 22/8/22.
//

#include "gtest/gtest.h"

#include "Task1.hpp"


const double PRECISSION = .01;


TEST(Task1, getEquation) {

    EXPECT_EQ(getEquation (1), 0 );
    EXPECT_NEAR(getEquation (2), 499.641, PRECISSION);
    EXPECT_NEAR(getEquation (3), -2066.53, PRECISSION);
}






