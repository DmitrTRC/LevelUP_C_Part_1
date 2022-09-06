//
// Created by Dmitry Morozov on 5/9/22.
//

#include "Task1.hpp"

#include <random>


/**
 * Swap the k-th column with the k-th row
 *
 * @param array the array to be swapped
 * @param k the column and row to swap
 *
 * @return a boolean value.
 */
bool Swap_matrix_col_and_row (int array[7][7], int k) {
    const int size = 7;
    if (k > size) {
        return false;
    }
    for (int i = 0; i < size; ++i) {
        int temp = array[i][k];
        array[i][k] = array[k][i];
        array[k][i] = temp;
    }

    return true;
}

/**
 * It generates a random 2D square matrix of size 7
 *
 * @param array the array to be filled with random numbers
 */
void Generate_random_2d_square_matrix (int array[7][7]) {
    const int size = 7;

    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution (1975, 2021);

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            array[i][j] = distribution (generator);
        }
    }
}



