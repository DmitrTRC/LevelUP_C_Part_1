//
// Created by Dmitry Morozov on 22/8/22.
//

#include "gtest/gtest.h"

#include "Task1.hpp"


/**
 * @brief Test for getNaturalLength() function
 *
 * @param  `Task1`: the name of the test suite
 * @param  'getNaturalLength': the name of the test
 */
TEST(Task1, getNauralLength) {

    EXPECT_EQ(getNaturalLength (2), 1);
    EXPECT_EQ(getNaturalLength (34), 2);
    EXPECT_EQ(getNaturalLength (123), 3);
    EXPECT_EQ(getNaturalLength (1234), 4);
    EXPECT_EQ(getNaturalLength (12345), 5);
    EXPECT_EQ(getNaturalLength (123456), 6);
    EXPECT_EQ(getNaturalLength (1234567), 7);

    EXPECT_EQ(getNaturalLength (4637289443898902384), 19);
}






