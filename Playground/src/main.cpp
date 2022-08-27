//
// Created by Dmitry Morozov on 27/8/22.
//

#include "sequence_sum.hpp"

#include <cstdio>


int main (int argc, char **argv) {
    double sum = 0;
    double x;
    printf ("x = ");
    scanf ("%lf", &x);
    printf ("Sum = %lf\n", sequence_sum (x));

}