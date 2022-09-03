//
// Created by Dmitry Morozov on 3/9/22.
//

#include "Task1.hpp"

#include <iostream>


/**
 * It swaps the maximum element of the array with the last negative element of the array
 *
 * @param array the array to be sorted
 * @param n the number of elements in the array
 */
void swap_elements (int *array, int n) {
    int max = array[0];
    int max_index = 0;
    int last_negative = array[0];
    int last_negative_index = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] > max) {
            max = array[i];
            max_index = i;
        }
        if (array[i] < 0) {
            last_negative = array[i];
            last_negative_index = i;
        }
    }
    array[max_index] = last_negative;
    array[last_negative_index] = max;

}