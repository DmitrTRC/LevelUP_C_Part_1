//
// Created by Dmitry Morozov on 21/8/22.
//

#include <iostream>
#include <limits>

#include "Task1.hpp"


int main (int argc, char **argv) {


    std::cout << "HOME WORK 2\n\nTask 1" << std::endl;

    std::cout << "Enter x: ";

    std::cin.clear ();
    std::cin.ignore (INT_MAX);

    double x;

    std::cin >> x;

    std::cout << "Equation: " << getEquation (x) << std::endl;

    std::cout << "HOME WORK 2\n\nTask 2" << std::endl;

    std::cin.clear ();
    std::cin.ignore (INT_MAX);

    std::cout << "Enter Circle radius R : ";
    double r;
    std::cin >> r;

    std::cout << "Enter Triangle side a : ";
    double a;
    std::cin >> a;

    std::cout << "Enter Square side d : ";
    double d;
    std::cin >> d;



    return 0;
}

