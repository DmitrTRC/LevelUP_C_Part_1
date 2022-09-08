//
// Created by Dmitry Morozov on 5/9/22.
//

#ifndef LEVELUP_C_PARTI_DEV_TASK1_HPP
#define LEVELUP_C_PARTI_DEV_TASK1_HPP

#include <array>


// Compute the sum of the 2d-matrix elements to the left of the side diagonal
template<typename T, std::size_t SIZE>
T sumMatrixSideDiagonalElements (std::array<std::array<T, SIZE>, SIZE> &matrix) {
    T sum = 0;
    for (std::size_t i = 0; i < SIZE; ++i) {
        for (std::size_t j = 0; j < SIZE; ++j) {
            if (i + j < SIZE - 1) {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}


#endif //LEVELUP_C_PARTI_DEV_TASK1_HPP
