//
// Created by Dmitry Morozov on 5/9/22.
//

#include "shared/get_even_string.hpp"

#include <sstream>


/**
 * This function deletes all words with odd length
 *
 * @param str the string to delete words from
 * @return std::string
 */
std::string deleteOddLengthWords (std::string &str) {
    std::stringstream ss (str);
    std::string word;
    std::string result;

    while (ss >> word) {
        if (word.length () % 2 == 0) {
            result += word + " ";
        }
    }

    return result;
}

