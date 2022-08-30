//
// Created by Dmitry Morozov on 21/8/22.
//

#include "Task5.hpp"

#include <iomanip>
#include <iostream>


int main (int argc, char **argv) {
    const double UPPER_LIMIT = 1.0;
    const double LOWER_LIMIT = 0.05;

    std::cout << "HOME WORK 3\n\nTask 5" << std::endl;

    std::cout << "Enter x in range ]0.05, 1.0[ : ";
    double x;
    std::cin >> x;

    if (x <= LOWER_LIMIT || (x > UPPER_LIMIT)) { //!!!! >=
        std::cout << "Error: x is not in range ]0.05, 1.0[" << std::endl;
        return 1;
    }

    std::cout << "The sum of series : " << std::setprecision (6) << reduceSequence (x) << std::endl;

    return 0;
}

