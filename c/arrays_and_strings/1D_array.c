/*
	Create an array of size n dynamically, input the elements of the array,
	sum them and print the sum of the elements in a new line.

	Sample Input:
	6
	16 13 7 2 1 12

	Sample Output:
	51
*/


#include <stdio.h>
#include <stdlib.h>

// fill array with stdin
void fill_array(int *arr, int n) {
	int i;

	for (i = 0; i < n; i++) {
		scanf("%d", arr + i);
	}
}

// sum elements inside of array
int sum_array_elements(int *arr, int n) {
	int i, sum = 0;

	for (i = 0; i < n; i++) {
		sum += *(arr + i);
	}

	return sum;
}

int main() {
	int n;
	
	scanf("%d", &n); // size of array

	int *arr = (int*)malloc(n * sizeof(int)); // allocate memory for array

	fill_array(arr, n); // fill array

	int res = sum_array_elements(arr, n); // sum elements of array

	printf("%d", res);

	free(arr); // free memory

	return 0;
}