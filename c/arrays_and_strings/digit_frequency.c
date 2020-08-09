/*
    Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.

    Sample input:
    lw4n88j12n1

    Sample output:
    0 2 1 0 1 0 0 0 2 0 
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// print array to stdout
void print_array(int* arr, int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
}

// get the digit frequency (0 - 9) from a given string
int* get_digit_frequency(char* arr, int size) {
    int i;
    // each item represents a digit from 0 to 9
    static int results[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    // for each char in the array
    for (i = 0; i < size; i++) {
        // check if its a number
        if(isdigit(*(arr + i))) {
            // +1 to the corresponding index of the results array
            results[*(arr + i) - '0']++; // i (char) - '0' to get the equivalent int
        }
    }

    return results;
}

int main() {
    char *num;
    int *results;

    // read input from stdin
    num = malloc(1024 * sizeof(char));
    scanf("%[^\n]", num);
    num = realloc(num, strlen(num) + 1); // only use memory needed

    // get digit frequency
    results = get_digit_frequency(num, strlen(num));

    // print results
    print_array(results, 10);

    return 0;
}
