#include <math.h>
#include <stdio.h>
//Сумма рядка с точностью 10^-5, где 0.05<x<1

#define INPUT_MIN 0.05
#define INPUT_MAX 1

int inputValid (double x) {
    if (INPUT_MIN < x && x < INPUT_MAX) {
        return 1;
    }
    return 0;
}

int main () {
    printf ("Enter number x, which is more than 0.05 and less than 1: ");
    double x;
    scanf ("%lf", &x);

    if (!inputValid (x)) {
        printf ("You have entered wrong number!");
        return EXIT_FAILURE;
    }

    double row = 1;
    double sum = x;

    int fact1;
    int fact2;

    for (int i = 1; row > 0.00001; ++i) {
        fact1 = 1;
        fact1 *= (2 * i - 1);

        fact2 = 1;
        fact2 *= 2 * i;

        row *= (fact1 * pow (x, (2 * i + 1))) / (fact2 * (2 * i + 1));

        sum += row;
    }

    printf ("Sum is: %lf\n", sum);

    return EXIT_SUCCESS;
}