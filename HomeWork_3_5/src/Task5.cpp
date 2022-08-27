//
// Created by Dmitry Morozov on 27/8/22.
//

#include "Task5.hpp"

#include <cmath>
#include <functional>


//Double-Factorial tail recursion implementation
//unsigned long long double_factorial_ (int n, unsigned long long res) {
//    if (n < 2)
//        return res;
//    return double_factorial_ (n - 2, res * n);
//}
//
//unsigned long long doubleFactorial (int n) {
//    return double_factorial_ (n, n >= 0);
//}

//Double-Factorial iterative implementation
unsigned long long doubleFactorial (int n) {
    unsigned long long res = 1;
    for (int i = n; i > 0; i -= 2)
        res *= i;
    return res;
}

// Reduce sequence f(x) = x + x^3 / ( 2*3 ) + (1 * 3 * x^5)/(2*4*5) + ... +((2*n -1)!!x^(2*n + 1))/((2*n)!!(2*n + 1)) + ...
auto reduceSequence (double x) -> double {
    const double EPSILON = 1e-5;
    double result = 0;
    int iteration = 1;

    while (true) {
        auto numerator = static_cast<double>(doubleFactorial (2 * iteration - 1)) * pow (x, 2 * iteration + 1);
        auto denominator = doubleFactorial (2 * iteration) * (2 * iteration + 1);

        double current = numerator / static_cast<double>(denominator);

        if (current < EPSILON) {
            break;
        }

        result += current;
        ++iteration;
    }

    return result;


}