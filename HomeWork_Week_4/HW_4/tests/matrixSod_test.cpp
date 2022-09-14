//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "shared/matrix_sod.hpp"

#include <vector>


TEST (MatrixSOD, CheckSumOD) {
    std::vector<std::vector<int>> iMatrix
            {{1, 1,  1,  1,  1},
             {1, 1,  1,  0,  1},
             {1, 1,  0,  -1, -1},
             {1, 0,  -1, -1, -1},
             {0, -1, -1, -1, -1}};

    std::vector<std::vector<double>> dMatrix = {
            {0.1, 0.1,  0.1,  0.1,  0.1},
            {0.1, 0.1,  0.1,  0.0,  0.1},
            {0.1, 0.1,  0.0,  -0.1, -0.1},
            {0.1, 0.0,  -0.1, -0.1, -0.1},
            {0.0, -0.1, -0.1, -0.1, -0.1}
    };

    std::vector<std::vector<int>> wrongMatrix = {
            {1, 2,  3,  4},
            {5, 6,  7,  8},
            {9, 10, 11, 12},
    };

    EXPECT_EQ (sumMatrixSideDiagonalElements (iMatrix), 10);
    EXPECT_FLOAT_EQ(sumMatrixSideDiagonalElements (dMatrix), 1.0);
    EXPECT_ANY_THROW(sumMatrixSideDiagonalElements (wrongMatrix));

}
