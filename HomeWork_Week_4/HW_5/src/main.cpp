//
// Created by Dmitry Morozov on 3/9/22.
//

//Delete all words with odd length;

#include "shared/get_even_string.hpp"

#include <iostream>


/**
 * @brief Main function
 * @return 0
 */
int main () {
    std::cout << "HOME WORK 4\n\nTask 5" << std::endl;

    std::string str = "Hi! This is a test combinations of odd end even string";
    std::cout << "The given string: " << str << std::endl;

    std::cout << "The string without words with odd length: " << deleteOddLengthWords (str) << std::endl;

    return 0;
}