//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "Task2.hpp"


TEST (Task2, lcd) {
    EXPECT_EQ (lcd (1, 1, 1), 1);
    ASSERT_NE (lcd (1, 1, 1), 0);
    EXPECT_EQ(lcd (4, 6, 8), 2);
    EXPECT_EQ(lcd (10, 15, 20), 5);

}
