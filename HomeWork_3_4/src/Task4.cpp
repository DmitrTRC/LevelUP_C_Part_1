//
// Created by Dmitry Morozov on 27/8/22.
//

#include "Task4.hpp"

#include <cmath>
#include <functional>


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


