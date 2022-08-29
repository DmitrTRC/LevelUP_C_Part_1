//
// Created by Dmitry Morozov on 28/8/22.
//

#include "Task5.hpp"

#include "gtest/gtest.h"


TEST(Task5, reduceSequence) {
    const double EPSILON = 1e-5;

    EXPECT_NEAR(reduceSequence (0.5), 0.0235961, EPSILON);
    EXPECT_NEAR(reduceSequence (0.8), 0.12729203, EPSILON);
    EXPECT_NEAR(reduceSequence (0.05), 2.08333e-05, EPSILON);

}