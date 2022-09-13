//
// Created by Dmitry Morozov on 5/9/22.
//

#ifndef LEVELUP_C_PARTI_DEV_TASK1_HPP
#define LEVELUP_C_PARTI_DEV_TASK1_HPP

#include <iostream>
#include <iomanip>
#include <vector>


template<typename T>
void printMatrix (std::vector<std::vector<T>> &matrix) {
    for (auto &row: matrix) {
        for (auto &element: row) {
            std::cout << std::setw (4) << element;
        }
        std::cout << std::endl;
    }
}

/**
 * @brief Compute the sum of the 2d-matrix elements to the left of the side diagonal
 * @tparam T
 * @param matrix
 * @return T
 */
template<typename T>
T sumMatrixSideDiagonalElements (std::vector<std::vector<T>> &matrix) {
    T sum{};

    if (matrix.empty ()) {
        return sum;
    } else if (matrix.size () != matrix[0].size ()) {
        throw std::invalid_argument ("Matrix must be square");
    }


    for (size_t i = 0; i < matrix.size (); ++i) {
        for (size_t j = 0; j < matrix[i].size (); ++j) {
            if (i + j < matrix.size () - 1) {
                sum += matrix[i][j];
            }
        }

    }

    return sum;
}


#endif //LEVELUP_C_PARTI_DEV_TASK1_HPP
