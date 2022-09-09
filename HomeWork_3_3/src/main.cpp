//
// Created by Dmitry Morozov on 21/8/22.
//

#include "Task3.hpp"

#include <iostream>


/**
 * @brief Main function
 * @return 0
 */
int main () {


    std::cout << "HOME WORK 3\n\nTask 3" << std::endl;

    std::cout << "Enter natural N : ";
    unsigned N;
    std::cin >> N;

    std::cout << "The given number is " << N << " and the swapped number is : " << swap_first_last_digits (N)
              << std::endl;


    return 0;
}

