// Q7 Assume a class of 5 students, each having marks in 3 subjects. 
//    Store the marks in a 2D array where each row represents a student and each column represents a subject.
//    Perform the following:
//(d) Use sizeof() operator to display the total memory consumed by the array

#include <stdio.h>

int main()
{
    int marks[5][3]; // create the 5x3 array

    printf("Total memory consumed by the marks array is %lu bytes.\n", sizeof(marks));        // sizeof() operator calculates total bytes used by array

    return 0;
}