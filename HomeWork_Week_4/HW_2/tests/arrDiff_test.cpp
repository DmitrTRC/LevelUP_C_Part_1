//
// Created by Dmitry Morozov on 27/8/22.
//


#include "gtest/gtest.h"

#include "shared/arr_diff.hpp"


TEST (ArrayDifference, arrayDiff) {
    Array a = {1, 2, 3, 4, 5};
    Array b = {1, 3, 5, 7, 9};

    EXPECT_EQ(getIndexesOfElementsNotInArrayB (a, b), Array ({1, 3}));
    EXPECT_EQ(getIndexesOfElementsNotInArrayB (b, a), Array ({3, 4}));

    b.clear ();
    b = {10};

    EXPECT_EQ(getIndexesOfElementsNotInArrayB (a, b), Array ({0, 1, 2, 3, 4}));
    EXPECT_EQ(getIndexesOfElementsNotInArrayB (b, a), Array ({0}));

    a.clear ();

    EXPECT_TRUE(getIndexesOfElementsNotInArrayB (a, b).empty ());
    EXPECT_EQ(getIndexesOfElementsNotInArrayB (b, a), Array ({0}));

    a = {-1, -2, -3, -4, -5};
    b = {1, 2, 3, 4, 5};

    EXPECT_EQ(getIndexesOfElementsNotInArrayB (a, b), Array ({0, 1, 2, 3, 4}));
    EXPECT_EQ(getIndexesOfElementsNotInArrayB (b, a), Array ({0, 1, 2, 3, 4}));


}
