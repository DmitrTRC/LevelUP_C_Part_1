//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "shared/swap_mln.hpp"


TEST (CheckSwapPositions, testSwaped) {
    Array arr1 = {1, -2, 3, 4, -5, 6, 7, 8, -9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                  21, 22, 23, 24, 25, 26, 27, 28, 41, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};

    swapElements (arr1);

    EXPECT_EQ (arr1.at (8), 41);
    EXPECT_EQ (arr1.at (28), -9);

}

TEST (CheckSwapPositions, testNotSwaped) {
    Array arr2 = {1, -2, 3, 4, -5, 6, 7, 8, -9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                  21, 22, 23, 24, 25, 26, 27, 28, 41, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};

    swapElements (arr2);

    EXPECT_NE (arr2.at (8), 40);
    EXPECT_NE (arr2.at (28), 36);

}

TEST (CheckSwapPositions, testSwaped2) {
    Array arr3 = {-5, -7, -1, 0, 1, 6, -2};
    Array arr_expected = {-5, -7, -1, 0, 1, -2, 6};

    swapElements (arr3);

    EXPECT_EQ (arr3, arr_expected);
    EXPECT_EQ (arr3.at (5), -2);
    EXPECT_EQ (arr3.size (), 7);

}

TEST (CheckSwapPositions, testNoNegatives) {
    Array arr4 = {1, 2, 3, 4, 5, 6, 7, 8};

    EXPECT_ANY_THROW(swapElements (arr4)) << "No negative elements in array";

}
