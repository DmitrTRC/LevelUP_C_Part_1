/*
    A character string is given. Determine if it is a valid parentheses expression.
*/

#include <stdio.h>


int main () {
    constexpr int s = 40;
    char M[s];
    gets (M);
    int n = 0;
    int i = 0;
    while (M[i] != 0) {
        if (M[i] == '(') {
            ++n;
        }
        if (M[0] == ')') {
            printf ("incorrect brackets");
            return 1;
        } else if (M[i] == ')') {
            --n;
        }
        ++i;
    }
    if (n == 0) {
        printf ("correct parentheses");
    } else {
        printf ("incorrect brackets");
    }
    return 0;
}