//
// Created by Dmitry Morozov on 27/8/22.
//

#include "Task5.hpp"

#include <cmath>
#include <functional>


/* A lambda function that calculates the double factorial of a number. */
auto doubleFactorial = [] (int n) -> long double {
    std::function<long double (int, long double)> double_factorial_ =
            [ &double_factorial_ ] (int n, long double res) -> long double {
                if (n < 2) {
                    return res;
                }
                return double_factorial_ (n - 2, res * n);
            };
    return double_factorial_ (n, n >= 0);
};


/**
 * It calculates the sum of the series
 *
 * $$
 * \sum_{n=0}^{\infty} \frac{(2n-1)!!}{(2n)!!(2n+1)}x^{2n+1}
 * $$
 *
 * where $n!!$ is the double factorial of $n$
 *
 * @param x the value of x
 *
 * @return the sum of the series.
 */
auto reduceSequence (double x) -> long double {
    const double EPSILON = 1e-5;
    long double result = x;
    int iteration = 1;
    long double current = 1;

    while (fabs (current) > EPSILON) {
        long double numerator = doubleFactorial (2 * iteration - 1) * pow (x, 2 * iteration + 1);
        auto denominator = doubleFactorial (2 * iteration) * (2 * iteration + 1);
        current = numerator / denominator;

        result += current;
        ++iteration;
    }
    result += current;
    ++iteration;

    return result;
}
