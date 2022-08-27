//
// Created by Dmitry Morozov on 27/8/22.
//

#include <iostream>
#include <cstdio>
#include <cmath>


// Calculate sum of number sequence f(x) = x/ 2 + 2/3 x^2 + 3/4 x^3 + ... + (n - 1) / n x^n Epsilion = 0.00001
// for x from 0 to n
int main (int argc, char **argv) {
    double sum = 0;
    double x;
    printf ("x = ");
    scanf ("%lf", &x);
    double eps = 1e-5;
    int n{2};
    do {
        auto tmp = ((n - 1) / double (n)) * pow (x, n - 1);
        sum += tmp;
        if (tmp < eps) {
            break;
        }

        ++n;
    } while (true);
    printf ("sum = %lf\n", sum);


    return 0;
}