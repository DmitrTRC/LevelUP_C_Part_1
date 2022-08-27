//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "rfact.hpp"


TEST (Recursive_Factorial, r_fact) {
    EXPECT_EQ (r_fact (1), 1);
    ASSERT_NE (r_fact (1), 0);
    EXPECT_EQ(r_fact (4), 24);
    EXPECT_EQ(r_fact (10), 3628800);

}