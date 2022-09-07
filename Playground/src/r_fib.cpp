//
// Created by Dmitry Morozov on 27/8/22.
//


#include "r_fib.hpp"


int r_fib (int n) {
    if ((n == 1) || (n == 0)) {
        return (n);
    } else {
        return (r_fib (n - 1) + r_fib (n - 2));
    }
}
