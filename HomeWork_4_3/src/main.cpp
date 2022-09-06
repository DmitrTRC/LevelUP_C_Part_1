//
// Created by Dmitry Morozov on 3/9/22.
//

// Swap MAX and last negative element for M(40) array

#include "Task1.hpp"

#include <array>
#include <iostream>


/**
 * This function prints a 2D array of integers
 *
 * @param array the 2D array to print
 * @param size the size of the matrix
 */
void print_2d_matrix (int array[7][7]) {
    const int size = 7;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

}


int main () {
    std::cout << "HOME WORK 4\n\nTask 3" << std::endl;


    int first_matrix[7][7];
    int second_matrix[7][7];

    Generate_random_2d_square_matrix (first_matrix);
    Generate_random_2d_square_matrix (second_matrix);

    std::cout << "First matrix before replace: " << std::endl;
    print_2d_matrix (first_matrix);

    std::cout << "Second matrix before replace: " << std::endl;
    print_2d_matrix (second_matrix);

    if (Swap_matrix_col_and_row (first_matrix, 3)) {
        std::cout << "First matrix after replace: " << std::endl;
        print_2d_matrix (first_matrix);
    } else {
        std::cout << "Error: the first matrix is not square" << std::endl;
    }

    if (Swap_matrix_col_and_row (second_matrix, 3)) {
        std::cout << "Second matrix after replace: " << std::endl;
        print_2d_matrix (second_matrix);
    } else {
        std::cout << "Error: the second matrix is not square" << std::endl;
    }

    return 0;
}
