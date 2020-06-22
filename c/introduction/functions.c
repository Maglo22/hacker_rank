/*
    You have to write a function max_of_four, which reads four arguments and returns the greatest of them.

    Sample input:
    3
    4
    6
    5

    Sample output:
    6
*/


#include <stdio.h>

// returns max of 4 numbers
int max_of_four(int a, int b, int c, int d) {
    int max_a_b = a * (a > b) + b * (b > a); // if a > b -> (a > b) = 1
    int max_c_d = c * (c > d) + d * (d > c);

    return max_a_b * (max_a_b > max_c_d) + max_c_d * (max_c_d > max_a_b);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}