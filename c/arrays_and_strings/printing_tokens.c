/*
    Given a sentence, s, print each word of the sentence in a new line.

    Sample input:
    This is C 

    Sample Output:
    This
    is
    C
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// print token of string (letter by letter)
void print_token(char *s, int start, int end) {
    int i;
    for(i = start; i < end; i++) {
        printf("%c", *(s + i));
    }
    printf("\n");
}

int main() {
    int i, start = 0, end, str_comp;
    char *s;

    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1); // only use memory needed
    
    for(i = 0; i < strlen(s); i++) {
        str_comp = strncmp((s + i) , " ", 1); // see if the current char is a whitespace, if true -> str_comp = 0

        if ((i + 1) == strlen(s)) { // check if we reached the end of the string, to print the last word
            end = i + 1;
            print_token(s, start, end);
        }
        else if (str_comp == 0) {
            end = i;
            print_token(s, start, end);
            start = end + 1; // +1 to omit whitespace char
        }
    }

    free(s); // free memory

    return 0;
}