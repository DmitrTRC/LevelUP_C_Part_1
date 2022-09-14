//
// Created by Dmitry Morozov on 3/9/22.
//

#include "shared/swap_mln.hpp"


/**
 * It swaps the maximum element of the array with the last negative element of the array
 *
 * @param array the array to be processed
 */
void swapElements (Array &array) {
    auto max_element = std::max_element (array.begin (), array.end ());
    auto last_negative_element = std::find_if (array.rbegin (), array.rend (),
                                               [] (int element) { return element < 0; });

    if (last_negative_element != array.rend ()) {
        std::swap (*max_element, *last_negative_element);
    } else {
        throw std::invalid_argument ("There is no negative elements in array");
    }

}