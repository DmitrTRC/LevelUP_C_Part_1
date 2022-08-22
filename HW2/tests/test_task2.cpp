//
// Created by Dmitry Morozov on 23/8/22.
//

#include "gtest/gtest.h"

#include "Task2.hpp"


const double EPSILON = .01;

TEST(Task2, ClassSquare) {
    Square square (5);
    Square square2 (0);

    EXPECT_EQ (square.getArea (), 25);
    EXPECT_EQ (square2.getArea (), 0);
}

TEST(Task2, ClassTriangle) {
    EquilateralTriangle triangle1 (5);
    EquilateralTriangle triangle2 (0);

    EXPECT_NEAR(triangle1.getArea (), 10.8253, EPSILON);
    EXPECT_EQ(triangle2.getArea (), 0);
}

TEST(Task2, ClassCircle) {
    Circle circle1 (5);
    Circle circle2 (0);

    EXPECT_NEAR(circle1.getArea (), 78.5398, EPSILON);
    EXPECT_EQ (circle2.getArea (), 0);
}