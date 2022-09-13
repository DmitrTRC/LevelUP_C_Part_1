//
// Created by Dmitry Morozov on 3/9/22.
//

// Swap MAX and last negative element for M(40) array

#include "shared/kswap.hpp"

#include <iomanip>
#include <iostream>


/**
 * It prints a matrix
 *
 * @param matrix The matrix to print.
 */
void printMatrix (Matrix &matrix) {
    for (const auto &row: matrix) {
        for (const auto &col: row) {
            std::cout << std::setw (5) << col << " ";
        }
        std::cout << std::endl;
    }
}


/**
 * @brief main function
 * @return 0
 */
int main () {
    std::cout << "HOME WORK 4\n\nTask 3" << std::endl;

    Matrix test_matrix;
    Generate_random_2d_square_matrix (test_matrix);


    std::cout << "Test matrix before replace: " << std::endl;
    printMatrix (test_matrix);

    Swap_matrix_col_and_row (test_matrix, 3);
    std::cout << std::endl << "Test matrix after exchange col and raw 3 : " << std::endl;
    printMatrix (test_matrix);

    return 0;
}
