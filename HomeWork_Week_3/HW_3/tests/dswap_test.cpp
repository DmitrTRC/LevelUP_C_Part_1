//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "shared/dswap.hpp"


TEST (SwapDigits, isSwapped) {
    ASSERT_EQ (swap_first_last_digits (6789), 9786);
    ASSERT_EQ (swap_first_last_digits (1234), 4231);
    ASSERT_EQ (swap_first_last_digits (12345), 52341);
    ASSERT_EQ (swap_first_last_digits (123456), 623451);
}
