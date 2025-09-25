/*Q18 Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

#include <stdio.h>

int main()
{
    double n;
    printf("Enter percentage: ");
    scanf("%lf",&n);
    
    if(90 <= n && n <= 100)
    {
        printf("Grade A");
    }
    else if(80 <= n && n <= 89)
    {
        printf("Grade B");
    }
    else if(70 <= n && n <= 79)
    {
        printf("Grade C");
    }
    else if(60 <= n && n <= 69)
    {
        printf("Grade D");
    }
    else if(0 <= n && n < 60)
    {
        printf("Grade F");
    }
    else
    {
        printf("Not a valid percentage");
    }
    return 0;
}