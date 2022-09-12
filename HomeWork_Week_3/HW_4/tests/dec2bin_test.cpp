//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "shared/dec2bin.hpp"


TEST(dec2bin, decToBinaryUInt) {
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

TEST(dec2bin, decToBinaryString) {
    EXPECT_EQ(dec2bin_s (1), "1");
    EXPECT_EQ(dec2bin_s (2), "10");
    EXPECT_EQ(dec2bin_s (3), "11");
    EXPECT_EQ(dec2bin_s (4), "100");
    EXPECT_EQ(dec2bin_s (5), "101");
    EXPECT_EQ(dec2bin_s (6), "110");
    EXPECT_EQ(dec2bin_s (7), "111");
    EXPECT_EQ(dec2bin_s (8), "1000");
    EXPECT_EQ(dec2bin_s (9), "1001");
    EXPECT_EQ(dec2bin_s (127), "1111111");
    EXPECT_EQ(dec2bin_s (128), "10000000");

}

TEST(dec2bin, decToBinaryUnsignedRecursion) {
    EXPECT_EQ(dec2bin_u (1), 1);
    EXPECT_EQ(dec2bin_u (2), 10);
    EXPECT_EQ(dec2bin_u (3), 11);
    EXPECT_EQ(dec2bin_u (4), 100);
    EXPECT_EQ(dec2bin_u (5), 101);
    EXPECT_EQ(dec2bin_u (6), 110);
    EXPECT_EQ(dec2bin_u (7), 111);
    EXPECT_EQ(dec2bin_u (8), 1000);
    EXPECT_EQ(dec2bin_u (9), 1001);
    EXPECT_EQ(dec2bin_u (127), 1111111);
    EXPECT_EQ(dec2bin_u (128), 10000000);

}