/*
    Given an array, of size n, reverse it.

    Sample Input:
    6
    16 13 7 2 1 12

    Sample Output:
    12 1 2 7 13 16 
*/

#include <stdio.h>
#include <stdlib.h>

// fill array with stdin
void fill_array(int* arr, int n) {
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
}

// print array to stdout
void print_array(int* arr, int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
}

// reverse elements of an array
void reverse_array(int* arr, int n) {
    int i, j = n - 1;
    int temp;

    // loop only half the lenght, since we use two iterators:
    // one that increments from left-most to middle, and the other
    // that decrements from right-most to middle
    for (i = 0; i < (n / 2); i++) {
        temp = *(arr + i);
        *(arr + i) = *(arr + j); // set current left element with current right one
        *(arr + j) = temp; // set current right element with current left one (stored in temp)
        j--;
    }
}

int main() {
    int n; // size of array

    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int)); // allocate memory for array

    fill_array(arr, n); // fill array with stdin

    reverse_array(arr, n); // reverse the array

    print_array(arr, n); // print to console

    free(arr); // free memory

    return 0;
}