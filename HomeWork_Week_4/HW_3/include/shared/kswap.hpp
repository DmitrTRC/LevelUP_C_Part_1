//
// Created by Dmitry Morozov on 5/9/22.
//

#ifndef LEVELUP_C_PARTI_DEV_TASK1_HPP
#define LEVELUP_C_PARTI_DEV_TASK1_HPP

#include <array>


typedef std::array<std::array<int, 7>, 7> Matrix;

void Swap_matrix_col_and_row (Matrix &, int);

void Generate_random_2d_square_matrix (Matrix &);

#endif //LEVELUP_C_PARTI_DEV_TASK1_HPP
