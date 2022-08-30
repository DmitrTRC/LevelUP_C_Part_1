/*
    Task: the sum of the row with an accuracy of 10^-5, where 0.05 < x < 1
*/

#include<math.h>
#include<stdio.h>


int main () {
    printf ("Enter the x in the range 0.05 < x < 1: ");
    double x, eps = 1e-5;
    double result = 0;
    double amount = 1;
    scanf ("%lf", &x);

    if (x <= 0.05 || x > 1) printf ("Error");
    else {
        int n = 1;
        double first_value_even = 1;
        double last_value_even = 1;
        double first_last_odd = 1;
        double last_value_odd = 1;
        while (true) {
            if (n % 2 == 0) {
                double divided = ((2 * n - 1) * first_value_even * pow (x, 2 * n + 1));
                double divider = double (((2 * n) * last_value_even * (2 * n + 1)));
                result = divided / divider;
                first_value_even *= 2 * n - 1;
                last_value_even *= 2 * n;
                if (result < eps) break;
                amount += result;
                ++n;
            } else {
                double divided = ((2 * n - 1) * first_last_odd * pow (x, 2 * n + 1));
                double divider = double (((2 * n) * last_value_odd * (2 * n + 1)));
                result = divided / divider;
                first_last_odd *= 2 * n - 1;
                last_value_odd *= 2 * n;
                if (result < eps) break;
                amount += result;
                ++n;
            }
        }
        printf ("Answer: %lf\n", amount);
    }
}