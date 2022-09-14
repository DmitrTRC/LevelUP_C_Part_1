//
// Created by Dmitry Morozov on 5/9/22.
//

#include "shared/arr_diff.hpp"

#include <algorithm>


/**
 * Find indexes for elements in array A (30), That aren't in array B (15) and put their index in array C (15)
 *
 * @param arrayA [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
 * 29, 30
 * @param arrayB [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]
 *
 * @return Array
 */
Array getIndexesOfElementsNotInArrayB (const Array &arrayA, const Array &arrayB) {
    Array arrayResult;
    int index{0};

    for (const auto &elementA: arrayA) {
        if (std::find (arrayB.begin (), arrayB.end (), elementA) == arrayB.end ()) {
            arrayResult.emplace_back (index);
        }
        index++;
    }

    return arrayResult;
}