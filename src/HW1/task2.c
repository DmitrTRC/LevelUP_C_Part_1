//
// Created by Dmitry Morozov on 13/8/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <errno.h>


int main () {
    int a = 5, c = 5;

    int b;
    printf (" b = ");
    scanf ("%d\n", &b);

//    int d;
//    printf (" d = ");
//    scanf ("%d", &d);
//Better way to do it:

    const int BUFFER_SIZE = 256;
    char buffer[BUFFER_SIZE];
    char *end_ptr;
    long d;

    errno = 0;

    fgets (buffer, BUFFER_SIZE, stdin);
    d = strtoimax (buffer, &end_ptr, 10);
    if (errno) {
        perror ("Number conversion error : ");
        exit (EXIT_FAILURE);
    }


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