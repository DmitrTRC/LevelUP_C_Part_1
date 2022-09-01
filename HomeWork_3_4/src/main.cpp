//
// Created by Dmitry Morozov on 21/8/22.
//

#include "Task4.hpp"

#include <iostream>


int main (int argc, char **argv) {


    std::cout << "HOME WORK 3\n\nTask 4" << std::endl;

    std::cout << "Enter decimal  N : ";
    long long N;
    std::cin >> N;

    std::cout << "Decimal number :  " << N << " equal binary : " << decToBinary (N) << std::endl;
    std::cout << "Decimal number :  " << N << " equal binary : " << dec2bin_s (N) << std::endl;
    std::cout << "Decimal number :  " << N << " equal binary : " << dec2bin_u (N) << std::endl;


    return 0;
}

