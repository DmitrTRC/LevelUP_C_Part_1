//
// Created by Dmitry Morozov on 3/9/22.
//

// Swap MAX and last negative element for M(40) array

#include "shared/arr_diff.hpp"

#include <array>
#include <iostream>


/**
 * It takes an array and its size as arguments and prints the array's elements to the screen
 *
 * @param array the array to be sorted
 *
 *  */
void print_array (std::array<int, 15> arr) {

    for (auto &el: arr) {
        std::cout << el << " ";
    }
    std::cout << std::endl;

}

/**
 * @brief main function
 * @return 0
 */
int main () {
    std::cout << "HOME WORK 4\n\nTask 2" << std::endl;

    std::array<int, 30> arrayA = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                                  25, 26, 27, 28, 29, 30};
    std::array<int, 15> arrayB = {1, 2, 3, 4, 40, 6, 7, 42, 9, 10, 22, 12, 13, 55, 15};

    auto arrayC = getIndexesOfElementsNotInArrayB (arrayA, arrayB);

    print_array (arrayC);
    return 0;
}