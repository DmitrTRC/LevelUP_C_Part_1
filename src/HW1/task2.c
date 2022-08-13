//
// Created by Dmitry Morozov on 13/8/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <errno.h>


long readInt (const char *);


int main () {
    long a = 5, c = 5;

    long b = readInt ("b = ");
    long d = readInt ("d = ");

    a = a + b - 2;
    c = c + 1;
    d = c - a + d;
    a = a * c;
    c = c - 1;
    a = a / 10;
    c = c / 2;
    b = b - 1;
    d = d * (c + b + a);

    printf (" a = %ld, b = %ld, c = %ld, d = %ld\n", a, b, c, d);

    return 0;
}

long readInt (const char *prompt) {
    long value;
    const int BUFFER_SIZE = 256;
    char buffer[BUFFER_SIZE];
    char *end_ptr;

    errno = 0;

    printf ("%s", prompt);
    fgets (buffer, BUFFER_SIZE, stdin);
    value = strtoimax (buffer, &end_ptr, 10);

    if (errno) {
        perror ("Number conversion error : ");
        exit (EXIT_FAILURE);
    }

    return value;
}

