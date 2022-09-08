#include <iostream>



//Определить местоположение элементов массива А(30), не встречающихся в массиве В(15)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
    constexpr int size_arr_a = 30;
    int A[size_arr_a];


    srand (time (nullptr));

    printf ("A: ");
    for (int i = 0; i < size_arr_a; ++i) {
        A[i] = rand () % 21 - 5;
        printf ("%d ", A[i]);
    }

    {
        constexpr int size_arr_b = 15;
        int B[size_arr_b];

        srand (time (nullptr));

        printf ("B: ");
        for (int i = 0; i < size_arr_b; ++i) {
            B[i] = rand () % 21 - 5;
            printf ("%d ", B[i]);
        }

        for (int x = 0; x < size_arr_a; ++x) {
            bool isFound = false;

            for (int y = 0; y < size_arr_b; ++y) {
                if (A[x] == B[y]) {
                    isFound = true;
                    break;
                }
            }
            if (!isFound) {
                printf ("A[%d] = %d", x, A[x]);

            }

        }
        return 0;
}
