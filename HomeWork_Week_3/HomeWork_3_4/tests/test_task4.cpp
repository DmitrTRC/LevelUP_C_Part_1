//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "Task4.hpp"


TEST(Task4, decToBinary) {
    EXPECT_EQ(decToBinary (1), 1);
    EXPECT_EQ(decToBinary (2), 10);
    EXPECT_EQ(decToBinary (3), 11);
    EXPECT_EQ(decToBinary (4), 100);
    EXPECT_EQ(decToBinary (5), 101);
    EXPECT_EQ(decToBinary (6), 110);
    EXPECT_EQ(decToBinary (7), 111);
    EXPECT_EQ(decToBinary (8), 1000);
    EXPECT_EQ(decToBinary (9), 1001);
    EXPECT_EQ(decToBinary (127), 1111111);
    EXPECT_EQ(decToBinary (128), 10000000);

}