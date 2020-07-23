/*
    Given an array of integers, calculate the ratios of its elements that are positive,
    negative, and zero.
    Print the decimal value of each fraction on a new line with 6 places after the decimal.

    Sample Input:
    6
    -4 3 -9 0 4 1 
      
    Sample Output:
    0.500000
    0.333333
    0.166667
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// prints the ratio of positive, negative and zero numbers in an array.
void plusMinus(int arr_count, int* arr) {
    int i, plus = 0, minus = 0, zero = 0;

    for(i = 0; i < arr_count; i++) {
        if(*(arr + i) > 0) {
            plus++;
        } else if(*(arr + i) < 0) {
            minus++;
        } else {
            zero++;
        }
    }
    
    printf("%.6f\n", (float)plus / (float)arr_count);
    printf("%.6f\n", (float)minus / (float)arr_count);
    printf("%.6f", (float)zero / (float)arr_count);
}

int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char** arr_temp = split_string(readline());

    int* arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        char* arr_item_endptr;
        char* arr_item_str = *(arr_temp + i);
        int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

        if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

        *(arr + i) = arr_item;
    }

    int arr_count = n;

    plusMinus(arr_count, arr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}
