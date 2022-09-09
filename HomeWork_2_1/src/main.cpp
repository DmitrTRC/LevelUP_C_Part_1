//
// Created by Dmitry Morozov on 21/8/22.
//

#include "Task1.hpp"

#include <iostream>


/**
 * @brief Main function. Run Task1 demo
 * @return 0
 */
int main (int argc, char **argv) {


    std::cout << "HOME WORK 2\n\nTask 1" << std::endl;

    std::cout << "Enter x: ";

    double x;

    std::cin >> x;

    std::cout << "Equation: " << getEquation (x) << std::endl;

    return 0;
}

