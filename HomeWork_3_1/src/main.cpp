//
// Created by Dmitry Morozov on 21/8/22.
//

#include "Task1.hpp"

#include <iostream>


int main () {
    std::cout << "HOME WORK 3\n\nTask 1" << std::endl;

    std::cout << "Enter natural N  : ";
    int n;
    std::cin >> n;
    std::cout << "The length of the number is " << getNaturalLength (n) << std::endl;

    return 0;
}

