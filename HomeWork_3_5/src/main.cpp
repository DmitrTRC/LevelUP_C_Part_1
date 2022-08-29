//
// Created by Dmitry Morozov on 21/8/22.
//

#include "Task5.hpp"

#include <iostream>


int main (int argc, char **argv) {
    const double UPPER_LIMIT = 1.0;
    const double LOWER_LIMIT = 0.05;
    const double EPS = 0.00001;

    std::cout << "HOME WORK 3\n\nTask 5" << std::endl;

//    std::cout << "Enter x in range [0.05, 1.0] : ";
//    double x;
//    std::cin >> x;
//    if (x < LOWER_LIMIT || x > UPPER_LIMIT) {
//        std::cout << "Error: x is not in range [0.05, 1.0]" << std::endl;
//        return 1;
//    }
//    std::cout << "The value of the function is : " << reduceSequence (x) << std::endl;
//
//
//}

//debug
    int j = 0;
    for (double i = 0.8; i < 1; i += 0.1, j++) {
        std::cout << "Iter : " << j << "\t\tx = " << i << " : " << reduceSequence (i) << std::endl;


    }

    return 0;
}

