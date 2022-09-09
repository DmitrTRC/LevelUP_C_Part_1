//
// Created by Dmitry Morozov on 3/9/22.
//

// Determine if it is a valid bracket expression

#include "Task1.hpp"

#include <iostream>

/**
 * @brief Validate brackets
 * @param str String to validate
 * @return void
 */
void validateString (const std::string &str) {
    std::cout << "The string " << str << " is " << (isValidBracketsExpression (str) ? "" : "not ") << "valid"
              << std::endl;
}

/**
 * @brief Main function
 * @return int
 */
int main () {
    std::cout << "HOME WORK 4\n\nTask 6" << std::endl;

    std::string str = "((()))";
    validateString (str);
    str = "[{{{}}}])";
    validateString (str);
    str = "((()";
    validateString (str);


    return 0;
}