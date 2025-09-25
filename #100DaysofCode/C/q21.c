// Q21 Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>

int main()
{
    int month,year;
    printf("Enter the year ");
    scanf("%d",&year);
    
    printf("Enter the Month number ");
    scanf("%d",&month);
    
    switch(month)
    {
        case 1:
            printf("January, 31 Days");
            break;
            
        case 2:
            if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            {
                printf("February, 29 Days");
            }
            else
            {
                printf("February, 28 Days");
            }
            break;           
            
        case 3:
            printf("March, 31 Days");
            break;
            
        case 4:
            printf("April, 30 Days");
            break;
            
        case 5:
            printf("May, 31 Days");
            break;
            
        case 6:
            printf("June, 30 Days");
            break;
            
        case 7:
            printf("July, 31 Days");
            break;
            
        case 8:
            printf("August, 31 Days");
            break;
            
        case 9:
            printf("September, 30 Days");
            break;
            
        case 10:
            printf("October, 31 Days");
            break;
            
        case 11:
            printf("November, 30 Days");
            break;
            
        case 12:
            printf("December, 31 Days");
            break;
        
        default:
            printf("Enter between 1-12");
    }
    return 0;
}