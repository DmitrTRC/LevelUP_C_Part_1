//
// Created by Dmitry Morozov on 13/8/22.
//

#include <cstdio>
#include <cstdlib>
#include <cinttypes>
#include <cerrno>

#include "task2.hpp"


void task2::Solution::run () {
    auto a_data = readInt ("Enter a: ");
    auto b_data = readInt ("Enter b: ");
    auto result = solution ({a_data, b_data});

}


auto task2::Solution::solution (std::tuple<long, long> &data) -> std::tuple<long, long, long, long> {
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

//    printf (" a = %ld, b = %ld, c = %ld, d = %ld\n", a, b, c, d);

    return {a, b, c, d};
}

long task2::Solution::readInt (const char *prompt) {
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

