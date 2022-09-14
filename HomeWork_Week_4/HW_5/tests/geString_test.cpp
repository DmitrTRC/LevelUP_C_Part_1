//
// Created by Dmitry Morozov on 22/8/22.
//

#include "gtest/gtest.h"

#include "shared/get_even_string.hpp"


TEST(EvenStrins, isEvenOnly) {
    std::string str = "Hi! This is a test combinations of odd end even string";

    EXPECT_EQ (deleteOddLengthWords (str), "This is test combinations of even string");

    str = "LOVE you";

    EXPECT_EQ (deleteOddLengthWords (str), "LOVE");
    EXPECT_EQ (deleteOddLengthWords (str).length (), 4);

    EXPECT_STRNE (deleteOddLengthWords (str).c_str (), "love");

}






