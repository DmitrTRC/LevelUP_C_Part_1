/*
    Task: the sum of the row with an accuracy of 10^-5, where 0.05 < x < 1
*/

#include<math.h>
#include<stdio.h>


int main () {
    printf ("Enter the x in the range 0.05 < x < 1: ");
    double x, eps = 1e-5;
    double result = 1;
    scanf ("%lf", &x);
    if (x <= 0.05 || x >= 1) printf ("Error");
    else {
        int n = 1;
        double amount = x;
        int first_factorial = 1;
        int second_factorial = 1;

        while (result > eps) {
            first_factorial *= (2 * n - 1);
            second_factorial *= 2 * n;
            result *= (first_factorial * pow (x, (2 * n + 1))) / (second_factorial * (2 * n + 1));
            amount += result;
            ++n;

        }

        printf ("Answer: %lf\n", amount);
    }
}