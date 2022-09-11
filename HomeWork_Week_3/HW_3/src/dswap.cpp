//
// Created by Dmitry Morozov on 27/8/22.
//

#include "shared/dswap.hpp"

#include <vector>


/**
 * It converts a number into a vector of digits, swaps the first and the last digits of the number, and converts a vector
 * of digits into a number
 *
 * @param number The number to be swapped.
 *
 * @return A number with the first and the last digits swapped.
 */
auto swap_first_last_digits (unsigned long long number) -> unsigned long long {
    std::vector<unsigned> digits;

    /* Converting a number into a vector of digits. */
    while (number > 0) {
        digits.emplace_back (number % 10);
        number /= 10;
    }

    /* It swaps the first and the last digits of the number. */
    std::swap (digits.front (), digits.back ());

    /* Converting a vector of digits into a number. */
    unsigned long long result = 0;


    for (auto it = digits.rbegin (); it != digits.rend (); ++it) {
        result = result * 10 + *it;

    }
    return result;
}