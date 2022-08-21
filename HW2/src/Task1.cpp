//
// Created by Dmitry Morozov on 21/8/22.
//
#import <iostream>
#import <cmath>


double getEquation (double x) {
    double y;
    double numerator = 2 * cos (x - M_PI / 6) + sqrt (2);
    double denominator = (1 / (2 * log (x))) + pow (sin (pow (x, 2)), 2);
    y = (numerator / denominator) * exp (3 * x);

    return y;
}