//
// Created by Dmitry Morozov on 3/9/22.
//

//Delete all words with odd length;

#include "Task1.hpp"

#include <iostream>


/**
 * This program deletes all words with odd length
 *
 * @param str the string to delete words from
 */
int main () {
    std::cout << "HOME WORK 4\n\nTask 5" << std::endl;

    std::string str = "Hi! This is a test combinations of odd end even string";
    std::cout << "The given string: " << str << std::endl;

    std::cout << "The string without words with odd length: " << deleteOddLengthWords (str) << std::endl;

    return 0;
}