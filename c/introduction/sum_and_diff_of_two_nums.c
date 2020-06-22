/*
    Your task is to take two numbers of int data type, two numbers of float data type as input
    and output their sum and difference.

    Sample input:
    10 4
    4.0 2.0

    Sample output:
    14 6
    6.0 2.0
*/

#include <stdio.h>

int main()
{
    int ia, ib;
    float fa, fb;

	scanf("%d %d", &ia, &ib);
    scanf("%f %f", &fa, &fb);

    printf("%d %d\n", (ia + ib), (ia - ib));
    printf("%.1f %.1f", (fa + fb), (fa - fb));
    
    return 0;
}