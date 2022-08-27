//
// Created by Dmitry Morozov on 27/8/22.
//

#include <functional>
#include "r_fib.hpp"


int r_fib (int n) {
    std::function<int (int, int)> r_fib_rec = [ &r_fib_rec ] (int n, int acc) -> int {
        if (n == 0) {
            return acc;
        } else {
            return r_fib_rec (n - 1, acc + r_fib_rec (n - 2, acc));
        }

    };
    return r_fib_rec (n, 0);
}
