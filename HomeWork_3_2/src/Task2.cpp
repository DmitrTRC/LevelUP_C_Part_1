//
// Created by Dmitry Morozov on 27/8/22.
//

#include "Task2.hpp"


/**
 * "Find the least common divisor of three numbers."
 *
 * The first line of the function is a return type declaration. It's optional, but it's a good practice to use it
 *
 * @param a The first number
 * @param b The second number
 * @param c The third number
 *
 * @return The least common divisor of three numbers.
 */
auto lcd (unsigned a, unsigned b, unsigned c) -> unsigned {
    unsigned lcd_ = 1;
    unsigned min_value = a < b ? a : b < c ? b : c;

    for (unsigned i = 1; i <= min_value; ++i) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            lcd_ = i;
        }
    }

    return lcd_;
}