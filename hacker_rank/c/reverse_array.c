/* Given an array, of size n, reverse it. */

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

    for (i = 0; i < (n / 2); i++) {
        temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
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

    return 0;
}