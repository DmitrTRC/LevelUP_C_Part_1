//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "r_fib.hpp"


TEST (Recursive_Fibonacci, r_fib) {
    EXPECT_EQ (r_fib (1), 1);
    ASSERT_NE (r_fib (1), 0);
    EXPECT_EQ(r_fib (4), 3);
    EXPECT_EQ(r_fib (10), 55);

}