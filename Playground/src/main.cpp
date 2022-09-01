#include <iostream>


// Swap last and first elements of number. 6789 -> 9786
int main () {
    int n;


    int array[6] = {6, 7, 8, 9, 0, 1};
    int tmp = array[0];
    array[0] = array[5];
    array[5] = tmp;

    return 0;

}