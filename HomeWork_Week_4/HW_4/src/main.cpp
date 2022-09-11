//
// Created by Dmitry Morozov on 3/9/22.
//

// Compute the sum of the 2d-matrix elements to the left of the side diagonal

#include "shared/matrix_sod.hpp"

#include <array>
#include <iomanip>
#include <iostream>


/**
 * This function prints a 2D array of integers
 *
 * @param array the 2D array to print
 * @param size the size of the matrix
 */
template<typename T, std::size_t SIZE>
void printMatrix (std::array<std::array<T, SIZE>, SIZE> &matrix) {
    for (auto &row: matrix) {
        for (auto &element: row) {
            std::cout << std::setw (4) << element;
        }
        std::cout << std::endl;
    }
}

/**
 * @brief main function
 * @return 0
 */
int main () {
    std::cout << "HOME WORK 4\n\nTask 4" << std::endl;

    // Inplace definition of 2D array of integers till side diagonal (0) positive (1) and after negative (-1)
    std::array<std::array<int, 10>, 10> iMatrix = {
            1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
            1, 1, 1, 1, 1, 1, 1, 1, 0, -1,
            1, 1, 1, 1, 1, 1, 1, 0, -1, -1,
            1, 1, 1, 1, 1, 1, 0, -1, -1, -1,
            1, 1, 1, 1, 1, 0, -1, -1, -1, -1,
            1, 1, 1, 1, 0, -1, -1, -1, -1, -1,
            1, 1, 1, 0, -1, -1, -1, -1, -1, -1,
            1, 1, 0, -1, -1, -1, -1, -1, -1, -1,
            1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
            0, -1, -1, -1, -1, -1, -1, -1, -1, -1
    };

    // Inplace definition of 2D array of doubles till side diagonal (0) positive (0.1) and after negative (-0.1)
    std::array<std::array<double, 5>, 5> dMatrix = {
            0.1, 0.1, 0.1, 0.1, 0,
            0.1, 0.1, 0.1, 0, -0.1,
            0.1, 0.1, 0, -0.1, -0.1,
            0.1, 0, -0.1, -0.1, -0.1,
            0, -0.1, -0.1, -0.1, -0.1
    };


    // Print the 2D array
    std::cout << "The given int matrix: " << std::endl;
    printMatrix (iMatrix);


    std::cout << std::endl << "Sum of the elements to the left of the side diagonal: "
              << sumMatrixSideDiagonalElements (iMatrix)
              << std::endl;

    std::cout << "The given float matrix: " << std::endl;
    printMatrix (dMatrix);

    std::cout << std::endl << "Sum of the elements to the left of the side diagonal: "
              << sumMatrixSideDiagonalElements (dMatrix)
              << std::endl;
    return 0;
}