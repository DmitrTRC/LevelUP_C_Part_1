//
// Created by Dmitry Morozov on 21/8/22.
//
#import <cmath>


/**
 * Function returns the number of digits in a number
 *
 * @param n The number to get the length of.
 *
 * @return The number of digits in the number.
 */
size_t getNaturalLength (unsigned long long n) {
    return (size_t) log10 (n) + 1;
}