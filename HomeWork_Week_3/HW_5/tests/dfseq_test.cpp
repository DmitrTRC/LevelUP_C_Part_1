//
// Created by Dmitry Morozov on 28/8/22.
//

#include "shared/df_seq.hpp"

#include "gtest/gtest.h"


TEST(Sum_reduceSequence_Test, reduceSequence) {
    const double EPSILON = 1e-5;

    EXPECT_NEAR(reduceSequence (0.051), 0.05102216025, EPSILON);
    EXPECT_NEAR(reduceSequence (0.8), 0.927292, EPSILON);
    EXPECT_NEAR(reduceSequence (0.076), 0.0760735, EPSILON);
    EXPECT_NEAR(reduceSequence (0.99), 1.42893, EPSILON);

}