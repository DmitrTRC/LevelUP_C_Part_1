//
// Created by Dmitry Morozov on 14/9/22.
//

#include "gtest/gtest.h"

#include "shared/C_Stack.hpp"


TEST (STACK, operations) {
    C_stack stack;

    EXPECT_EQ (stack.size (), 0);
    EXPECT_TRUE (stack.isEmpty ());

    stack.push ('a');
    stack.push ('b');
    stack.push ('c');
    stack.push ('d');
    stack.push ('e');

    EXPECT_EQ (stack.size (), 5);
    EXPECT_FALSE (stack.isEmpty ());

    EXPECT_EQ (stack.top (), 'e');
    stack.pop ();
    EXPECT_EQ (stack.top (), 'd');
    stack.pop ();
    EXPECT_EQ (stack.top (), 'c');
    stack.pop ();
    EXPECT_EQ (stack.top (), 'b');
    stack.pop ();
    EXPECT_EQ (stack.top (), 'a');
    stack.pop ();

    EXPECT_EQ (stack.size (), 0);
    EXPECT_TRUE (stack.isEmpty ());

}

TEST (STACK, Exceptions) {
    C_stack stack;

    EXPECT_THROW (stack.top (), std::runtime_error);
    EXPECT_THROW (stack.pop (), std::runtime_error);

    stack.push ('a');
    stack.push ('b');
    stack.push ('c');
    stack.push ('d');
    stack.push ('e');

    EXPECT_NO_THROW (stack.top ());
    EXPECT_NO_THROW (stack.pop ());
    EXPECT_NO_THROW (stack.top ());
    EXPECT_NO_THROW (stack.pop ());
    EXPECT_NO_THROW (stack.top ());
    EXPECT_NO_THROW (stack.pop ());
    EXPECT_NO_THROW (stack.top ());
    EXPECT_NO_THROW (stack.pop ());
    EXPECT_NO_THROW (stack.top ());
    EXPECT_NO_THROW (stack.pop ());

    EXPECT_ANY_THROW (stack.top ());

}

