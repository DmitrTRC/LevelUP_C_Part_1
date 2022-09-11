//
// Created by Dmitry Morozov on 27/8/22.
//

#include "shared/dec2bin.hpp"

#include <bitset>
#include <cmath>


/**
 * It takes a number and returns its binary representation
 *
 * @param number The number to convert to binary.
 *
 * @return the binary representation of the number passed to it.
 */
auto decToBinary (unsigned number) -> unsigned {
    unsigned result = 0;
    int i = 0;


    while (number) {
        result += static_cast<unsigned>((number % 2) * pow (10, i));
        ++i;
        number >>= 1;
    }

    return result;
}


/**
 * It converts a decimal number to a binary string
 *
 * @param number The number to convert to binary.
 *
 * @return A string of the binary representation of the number.
 */
auto dec2bin_s (unsigned number) -> std::string {
    return std::bitset<sizeof (number) * 8> (number).to_string ();
}

/**
 * If the number is zero, return zero, otherwise return the number modulo 2 plus 10 times the result of the function called
 * on the number shifted right by one.
 *
 * @param number the number to convert
 *
 * @return The binary representation of the number.
 */
auto dec2bin_u (unsigned number) -> unsigned {
    if (number == 0) {
        return 0;
    }
    return (number % 2) + 10 * dec2bin_u (number >> 1);

}


