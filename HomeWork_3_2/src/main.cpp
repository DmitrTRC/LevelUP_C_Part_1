//
// Created by Dmitry Morozov on 21/8/22.
//

#include <iostream>

#include "Task2.hpp"


int main (int argc, char **argv) {


    std::cout << "HOME WORK 3\n\nTask 2" << std::endl;

    std::cout << "Enter natural a, b, c  : ";
    unsigned a, b, c;
    std::cin >> a >> b >> c;

    std::cout << std::endl << "Th Least Common Divisor (lsd) is : " << lcd (a, b, c) << std::endl;


    return 0;
}

