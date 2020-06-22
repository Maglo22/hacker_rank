/*
    There is a series, S, where the next term is the sum of pervious three terms.
    Given the first three terms of the series, a, b, and c respectively,
    you have to output the nth term of the series using recursion.

    Sample input:
    5
    1 2 3

    Sample output:
    11
*/

#include <stdio.h>

int find_nth_term(int n, int a, int b, int c) {
    // base cases (break recursion)
    switch (n) {
        case 1: return a; break;
        case 2: return b; break;
        case 3: return c; break;
    }

    // recursion
    return find_nth_term((n - 1), a, b, c)
            + find_nth_term((n - 2), a, b, c)
            + find_nth_term((n - 3), a, b, c);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans);

    return 0;
}