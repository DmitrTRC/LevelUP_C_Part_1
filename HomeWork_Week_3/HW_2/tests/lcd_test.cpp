//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "shared/lcd.hpp"


TEST (Task2, lcd) {
    ASSERT_EQ (lcd (1, 1, 1), 1);
    ASSERT_NE (lcd (1, 1, 1), 0);
    ASSERT_EQ (lcd (4, 6, 8), 2);
    ASSERT_EQ (lcd (10, 15, 20), 5);
    ASSERT_EQ (lcd (3, 5, 7), 1);
}
