/*
    You have to print the character, ch, in the first line.
    Then print s in next line.
    In the last line print the sentence, sen.

    Sample input:
    C
    Language
    Welcome To C!!

    Sample output:
    C
    Language
    Welcome To C!!
*/


#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() 
{
    char ch, s[MAX_LEN], sen[MAX_LEN];

    scanf("%c", &ch);
    scanf("\n"); // discard newline from previous statement
    scanf("%[^\n]%*c", s);
    scanf("%[^\n]%*c", sen);

    printf("%c\n%s\n%s", ch, s, sen);

    return 0;
}