//
// Created by Dmitry Morozov on 21/8/22.
//
#include <cmath>


double get_triangle_area (double a) {
    return a * a * sqrt (3) / 4;
}

double get_square_area (double a) {
    return a * a;
}

double get_circle_area (double r) {
    return r * r * M_PI;
}

