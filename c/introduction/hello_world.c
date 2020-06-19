/*
    Print Hello World! on a single line and the given input.

    Sample Input
    Welcome to C programming.

    Sample Output
    Hello, World!
    Welcome to C programming.
*/

#include <stdio.h>

int main() 
{
    char s[100];
    scanf("%[^\n]%*c", &s);

	printf("Hello, World!\n");
    printf("%s", s);
    
    return 0;
}