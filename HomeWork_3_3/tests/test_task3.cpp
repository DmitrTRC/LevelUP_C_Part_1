//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "Task3.hpp"


TEST(Task3, swap_first_last_digits) {
    EXPECT_EQ(swap_first_last_digits (1), 1);
    EXPECT_EQ(swap_first_last_digits (12), 21);
    EXPECT_EQ(swap_first_last_digits (123), 321);
    EXPECT_EQ(swap_first_last_digits (1234), 4231);
    EXPECT_EQ(swap_first_last_digits (6789), 9786);
    EXPECT_EQ(swap_first_last_digits (12345), 52341);
    EXPECT_EQ(swap_first_last_digits (123456), 623451);
    EXPECT_EQ(swap_first_last_digits (1234567), 7234561);
    EXPECT_EQ(swap_first_last_digits (12345678), 82345671);
    EXPECT_EQ(swap_first_last_digits (123456789), 923456781);


}
