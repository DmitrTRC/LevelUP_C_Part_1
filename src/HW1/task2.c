//
// Created by Dmitry Morozov on 13/8/22.
//

#include <stdio.h>


int main () {
    int a = 5, c = 5;

    int b;
    printf (" b = ");
    scanf ("%d", &b);

    int d;
    printf (" d = ");
    scanf ("%d", &d);

    a = a + b - 2;
    c = c + 1;
    d = c - a + d;
    a = a * c;
    c = c - 1;
    a = a / 10;
    c = c / 2;
    b = b - 1;
    d = d * (c + b + a);

    printf (" a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    return 0;
}