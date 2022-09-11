//
// Created by Dmitry Morozov on 5/9/22.
//

#include "shared/arr_diff.hpp"

#include <array>


/**
 * Find indexes for elements in array A (30), That aren't in array B (15) and put them in array C (15)
 *
 * @param arrayA [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
 * 29, 30
 * @param arrayB [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]
 *
 * @return Array of indexes of elements in array A, that aren't in array B
 */
std::array<int, 15> getIndexesOfElementsNotInArrayB (const std::array<int, 30> &arrayA,
                                                     const std::array<int, 15> &arrayB) {
    std::array<int, 15> arrayC{};

    int index = 0;

    for (int i = 0; i < arrayA.size (); ++i) {
        bool isFound = false;
        for (int j = 0; j < arrayB.size (); ++j) {
            if (arrayA[i] == arrayB[j]) {
                isFound = true;
                break;
            }
        }
        if (!isFound) {
            arrayC[index] = i;
            index++;
        }
    }

    return arrayC;
}