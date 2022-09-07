//
// Created by Dmitry Morozov on 3/9/22.
//

// Swap MAX and last negative element for M(40) array

#include "Task1.hpp"

#include <array>
#include <cmath>
#include <iomanip>
#include <iostream>


/**
 * This function prints a 2D array of integers
 *
 * @param array the 2D array to print
 * @param size the size of the matrix
 */
void print_2d_matrix (const int *array, int size = 49) {
    const int row_size = static_cast<int>(std::sqrt (size));

    for (int i = 0; i < size; ++i) {
        std::cout << std::setw (5) << *(array + i);
        if ((i + 1) % row_size == 0) {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;

}


int main () {
    std::cout << "HOME WORK 4\n\nTask 4" << std::endl;


    return 0;
}
