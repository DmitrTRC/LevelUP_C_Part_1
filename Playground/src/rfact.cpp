//
// Created by Dmitry Morozov on 27/8/22.
//

#include <functional>

#include "rfact.hpp"


int r_fact (int n) {
    std::function<int (int, int)> r_fact_rec = [ &r_fact_rec ] (int n, int acc) -> int {
        if (n == 0) {
            return acc;
        } else {
            return r_fact_rec (n - 1, n * acc);
        }

    };
    return r_fact_rec (n, 1);
}