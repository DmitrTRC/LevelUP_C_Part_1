//
// Created by Dmitry Morozov on 13/8/22.
//
//

#include <cinttypes>
#include <cerrno>
#include <cstdio>
#include <cstdlib>


long readInt (const char *);


int task2 () {
    long a = 5, c = 5;

    long b = readInt ("b = ");
    long d = readInt ("d = ");

    a += b - 2;
    c++;
    d += c - a;
    a *= c;
    c--;
    a = a / 10;
    c = c / 2;
    b--;
    d *= c + b + a;

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

