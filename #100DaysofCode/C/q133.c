// Q133 Create an enum for months and print how many days each month has.


#include <stdio.h>
#include <string.h>

enum Months {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main() 
{
    char input[20];
    enum Months m;
    
    printf("Enter month (e.g., FEB): ");
    gets(input);
    
    if (strcmp(input, "FEB") == 0) m = FEB;
    else if (strcmp(input, "JAN") == 0) m = JAN;
    else m = MAR; 
    
    if (m == FEB)
    {
        printf("28 or 29 days");
    }
    else
    {
        printf("30 or 31 days");
    }

    return 0;
}