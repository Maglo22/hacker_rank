/*
    Complete the function update, which reads two integers as argument,
    and sets a with the sum of them, and b with the absolute difference of them.

    Sample input:
    4
    5

    Sample output:
    9
    1
*/

#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int temp_a = *a, temp_b = *b;

    *a = temp_a + temp_b;
    *b = abs(temp_a - temp_b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}