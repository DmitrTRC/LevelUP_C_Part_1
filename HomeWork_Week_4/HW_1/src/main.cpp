//
// Created by Dmitry Morozov on 3/9/22.
//

// Swap MAX and last negative element for M(40) array

#include "shared/swap_mln.hpp"

#include <iostream>


/**
 * It takes an array as argument and prints the array's elements to the screen
 *
 * @param  array : the array to be printed
 */
void printArray (Array &array);


/**
 * @brief main function
 * @return : 0
 */
int main () {
    std::cout << "HOME WORK 4\n\nTask 1" << std::endl;

    Array array_sample{1, -2, 3, 4, -5, 6, 7, 8, -9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                       21, 22, 23, 24, 25, 26, 27, 28, 41, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};

    std::cout << "Array before swap : ";
    printArray (array_sample);

    swapElements (array_sample);

    std::cout << "Array after swap : ";
    printArray (array_sample);

    Array sample2{1, 2, 3, 4, 5, 6, 7, 8};
    std::cout << "Array before swap : ";
    printArray (sample2);
    swapElements (sample2);
    std::cout << "Array after swap : ";
    printArray (sample2);
    

    return 0;
}


void printArray (Array &array) {
    for (auto &element: array) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}
