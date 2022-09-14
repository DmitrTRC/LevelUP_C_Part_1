//
// Created by Dmitry Morozov on 3/9/22.
//

// Compute the sum of the 2d-matrix elements to the left of the side diagonal

#include "shared/matrix_sod.hpp"

#include <vector>
#include <iomanip>
#include <iostream>


/**
 * @brief main function
 * @return 0
 */
int main () {
    std::cout << "HOME WORK 4\n\nTask 4" << std::endl;


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


// Print the 2D array
    std::cout << "The given int matrix: " << std::endl;
    printMatrix (iMatrix);


    std::cout << std::endl << "Sum of the elements to the left of the side diagonal: "
              << sumMatrixSideDiagonalElements (iMatrix) << std::endl;

    std::cout << "The given float matrix: " << std::endl;
    printMatrix (dMatrix);

    std::cout << std::endl << "Sum of the elements to the left of the side diagonal: "
              << sumMatrixSideDiagonalElements (dMatrix) << std::endl;
    return 0;
}
