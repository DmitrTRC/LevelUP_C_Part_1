#include <stdio.h>


int main () {
    int a, b = 5, c;
    float x, y = (float) -.5, z;
    printf ("a = ");
    scanf ("%d", &a); // Bad practice, but for the sake of simplicity
    x = (float) (c = a);
    printf ("a = %d, c = %d, x = %f\n", a, c, x);
    a += b;
    printf ("a = %d\n", a);
    x += (float) (b + a);
    printf ("x = %f\n", x);
    b += a--;
    printf ("b = %d\n", b);
    x -= (float) ++c;
    printf ("x = %f\n", x);
    c = a / b;
    printf ("c = %4d\n", c);
    c = a % b;
    printf ("c = %d\n", c);
    x = (float) 5.3;
//    y += ((--x - 1) / x++); // Needs to be split. Unexpected result
    y += ((x - 2) / x);
    printf (" x = %f\ty = %.2f\n\n x = %.0f\ty = %.0f\n", x - 1, y, x, y - 1);
    z = (float) a / 2;
    printf (" z = %f\n", z);
    z = (float) a / 2;
    printf (" z = %f\n", z);
    y = x / 2;
    printf (" y = %f\n", y);
    y = (float) ((int) x) / 2;
    printf (" y = %f\n", y);
    z = (float) ((float) (a % 2) - (x + (float) b) / (float) c + (x - y) / (float) (a - 1) + (float) 1 / 4 * (float) a -
                 y++ + ++b / 3.); // Needs to be split. Unexpected result
    printf (" a = %d, b = %d, c = %d, x = %f, y = %f, z = %f\n", a, b, c, x, y, z);
    return 0;
}
