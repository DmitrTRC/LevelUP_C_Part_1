//
// Created by Dmitry Morozov on 27/8/22.
//

#include "Task5.hpp"

#include <cmath>
#include <functional>
#include <iostream>


/**
 * "If n is less than 2, return the result, otherwise return the result of calling double_factorial_ with n - 2 and the
 * result multiplied by n."
 *
 * The function is tail recursive because the recursive call is the last thing that happens in the function
 *
 * @param n The number to calculate the double factorial of.
 * @param res The result of the previous iteration.
 *
 * @return the result of the double factorial of the number n.
 */
//Double-Factorial tail recursion implementation
unsigned long long double_factorial_ (int n, unsigned long long res) {
    if (n < 2)
        return res;
    return double_factorial_ (n - 2, res * n);
}

/**
 * "If n is non-negative, return n times the double factorial of n minus 2, otherwise return 0."
 *
 * The function double_factorial_ is a helper function that does the actual work. It takes two arguments: n and a boolean
 * flag. If the flag is true, the function returns n times the double factorial of n minus 2, otherwise it returns 0
 *
 * @param n The number to calculate the double factorial of.
 *
 * @return The double factorial of n.
 */
unsigned long long doubleFactorialRec (int n) {
    return double_factorial_ (n, n >= 0);
}

/**
 * It takes an integer n and returns the product of all the integers from n to 1, skipping every other number
 *
 * @param n The number to calculate the double factorial of.
 *
 * @return The double factorial of n.
 */

unsigned long long doubleFactorial (int n) {
    unsigned long long res = 1;
    for (int i = n; i > 0; i -= 2)
        res *= i;
    return res;
}


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
    long double result = 0;
    int iteration = 1;
    double prev_n = 0;
    double current;
    //TODO Limit : fabs( numerator - prev_n) < EPSILON
    do {
        auto numerator = static_cast<double>(doubleFactorial (2 * iteration - 1)) * pow (x, 2 * iteration + 1);
        auto denominator = doubleFactorial (2 * iteration) * (2 * iteration + 1);

        std::cout << "Numerator :  " << numerator << "\tDenominator : " << denominator << " \t\tResult : " << result;


        current = numerator / static_cast<double>(denominator);
        std::cout << "\t\tCurrent : " << current << std::endl;

        std::cout << "Iteration " << iteration << " : " << current << std::endl;
        result += current;
        std::cout << "Delta  : " << current - prev << std::endl;
        prev = current;
        ++iteration;

    } while (fabs (current) > EPSILON);


    result += current;
    ++iteration;


    return result;


}