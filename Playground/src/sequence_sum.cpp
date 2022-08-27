//
// Created by Dmitry Morozov on 27/8/22.
//

#include "sequence_sum.hpp"

#include <cmath>
#include <functional>


// Calculate sum of number sequence f(x) = x/ 2 + 2/3 x^2 + 3/4 x^3 + ... + (n - 1) / n x^n Epsilon = 0.00001


double sequence_sum (double x) {

    std::function<double (double, int)> get_next = [ &get_next ] (double x, int n) -> double {
        return pow (x, n) * ((double) n / (n + 1));
    };

    double epsilon = 1e-5;
    double acc = 0;
    int iteration = 0;
    double next_term = get_next (x, 1);
    do {
        ++iteration;
        acc += next_term;
        next_term = get_next (x, iteration);

    } while (next_term > epsilon);

    return acc;
}
