//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "shared/valid_brackets.hpp"


TEST (validBrackets, isValid) {

    EXPECT_TRUE (isValidBracketsExpression ("()"));
    EXPECT_TRUE (isValidBracketsExpression ("[]"));
    EXPECT_TRUE (isValidBracketsExpression ("{}"));
    EXPECT_TRUE (isValidBracketsExpression ("<>"));

    EXPECT_TRUE (isValidBracketsExpression ("()[]{}<>"));
    EXPECT_TRUE (isValidBracketsExpression ("([]{})<>"));
    EXPECT_TRUE (isValidBracketsExpression ("([]{})<>()"));

    EXPECT_FALSE (isValidBracketsExpression ("("));
    EXPECT_FALSE (isValidBracketsExpression ("["));
    EXPECT_FALSE (isValidBracketsExpression ("{"));
    EXPECT_FALSE (isValidBracketsExpression ("<"));

    EXPECT_FALSE (isValidBracketsExpression (")"));
    EXPECT_FALSE (isValidBracketsExpression ("]"));
    EXPECT_FALSE (isValidBracketsExpression ("}"));
    EXPECT_FALSE (isValidBracketsExpression (">"));

    EXPECT_FALSE (isValidBracketsExpression ("(]"));
    EXPECT_FALSE (isValidBracketsExpression ("[)"));
    EXPECT_FALSE (isValidBracketsExpression ("{]"));

    EXPECT_TRUE (isValidBracketsExpression (""));

    EXPECT_FALSE (isValidBracketsExpression ("(]"));


}
