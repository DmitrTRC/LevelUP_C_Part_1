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

/**
 * @brief main function
 * @return 0
 */
int main () {
    std::cout << "HOME WORK 4\n\nTask 3" << std::endl;


    int first_matrix[7][7];
    int test_matrix[7][7] = {1, 2, 3, 4, 5, 6, 7,
                             8, 9, 10, 11, 12, 13, 14,
                             15, 16, 17, 18, 19, 20, 21,
                             22, 23, 24, 25, 26, 27, 28,
                             29, 30, 31, 32, 33, 34, 35,
                             36, 37, 38, 39, 40, 41, 42,
                             43, 44, 45, 46, 47, 48, 49};

    Generate_random_2d_square_matrix (reinterpret_cast<int *>(first_matrix));


    std::cout << "First matrix before replace: " << std::endl;
    print_2d_matrix (reinterpret_cast<int *>(first_matrix));


    if (Swap_matrix_col_and_row (first_matrix, 3)) {
        std::cout << "First matrix after replace: " << std::endl;
        print_2d_matrix (reinterpret_cast<int *>(first_matrix));
    } else {
        std::cout << "Error: the first matrix is not square" << std::endl;
    }

    std::cout << "Second matrix before replace: " << std::endl;
    print_2d_matrix (reinterpret_cast<int *>(test_matrix));

    if (Swap_matrix_col_and_row (test_matrix, 3)) {
        std::cout << "Second matrix after replace: " << std::endl;
        print_2d_matrix (reinterpret_cast<int *>(test_matrix));
    } else {
        std::cout << "Error: the second matrix is not square" << std::endl;
    }

    return 0;
}
