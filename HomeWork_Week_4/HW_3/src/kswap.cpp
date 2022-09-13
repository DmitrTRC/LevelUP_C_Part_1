//
// Created by Dmitry Morozov on 5/9/22.
//

#include "shared/kswap.hpp"

#include <random>



/**
 * It swaps the k-th row and the k-th column of a square matrix
 *
 * @param matrix a matrix of integers
 * @param k the index of the row and column to swap
 */
void Swap_matrix_col_and_row (Matrix &matrix, int k) {
    if (k < 0 || k >= matrix.size ()) {
        throw std::invalid_argument ("Isn't square matrix! ");
    }

    for (int i = 0; i < matrix.size (); ++i) {
        std::swap (matrix[i][k], matrix[k][i]);
    }
}


/**
 * It generates a random 2d square matrix of size `n` where `n` is the size of the matrix
 *
 * @param matrix the matrix to be filled with random numbers
 */
void Generate_random_2d_square_matrix (Matrix &matrix) {
    std::random_device rd;
    std::mt19937 gen (rd ());
    std::uniform_int_distribution<> dis (0, 100);

    for (auto &row: matrix) {
        for (auto &col: row) {
            col = dis (gen);
        }
    }
}



