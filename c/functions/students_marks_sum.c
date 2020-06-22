/*
    You are given an array of integers, marks, denoting the marks scored by students in a class.
    marks[0], marks[2], marks[4], ..., denote the marks of boys.
    marks[1], marks[3], marks[5], ..., denote the marks of girls.

    Complete the function, marks_summation which returns the total sum of:
    marks of boys if gender = b 
    marks of girls if gender = g

    Sample input:
    3 <- number of students
    3
    2
    5
    b

    Sample output:
    8

*/

#include <stdio.h>
#include <stdlib.h>


int marks_summation(int* marks, int number_of_students, char gender) {
    int i, sum = 0;
    if (gender == 'b') {
        for(i = 0; i < number_of_students; i += 2)
            sum += *(marks + i);
    }
    else {
        for(i = 1; i < number_of_students; i += 2)
            sum += *(marks + i);
    }

    return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++)
        scanf("%d", (marks + student));
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);

    printf("%d", sum);

    free(marks);
 
    return 0;
}