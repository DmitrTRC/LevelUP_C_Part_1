//
// Created by Dmitry Morozov on 27/8/22.
//

#include "gtest/gtest.h"

#include "shared/kswap.hpp"
#include <array>


TEST (K_SWAP, checkSwap) {

    Matrix matrix{{
                          {1, 1, 1, 1, 1, 1, 1},
                          {2, 2, 2, 2, 2, 2, 2},
                          {3, 3, 3, 3, 3, 3, 3},
                          {4, 4, 4, 4, 4, 4, 4},
                          {5, 5, 5, 5, 5, 5, 5},
                          {6, 6, 6, 6, 6, 6, 6},
                          {7, 7, 7, 7, 7, 7, 7}

                  }
    };

    Matrix expected_matrix{{
                                   {1, 2, 3, 4, 5, 6, 7},
                                   {1, 2, 2, 2, 2, 2, 2},
                                   {1, 3, 3, 3, 3, 3, 3},
                                   {1, 4, 4, 4, 4, 4, 4},
                                   {1, 5, 5, 5, 5, 5, 5},
                                   {1, 6, 6, 6, 6, 6, 6},
                                   {1, 7, 7, 7, 7, 7, 7}
                           }
    };

    auto tmpMatrix = Matrix (matrix);

    Swap_matrix_col_and_row (matrix, 0);

    EXPECT_EQ (matrix, expected_matrix);

    Swap_matrix_col_and_row (matrix, 0);

    EXPECT_EQ (matrix, tmpMatrix);


}
