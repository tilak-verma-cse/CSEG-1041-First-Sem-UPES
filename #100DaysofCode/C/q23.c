/* Q23 Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled. */


#include <stdio.h>

int main()
{
    int days, fine = 0;
    printf("Enter number of days late: ");
    scanf("%d", &days);
    
    if (days > 30)
    {
        printf("Membership Cancelled");
    }
    else if(days >= 0 && days <= 30)
    {
        for (int i = 1; i <= days; ++i)
        {
            if (i >= 1 && i <= 5)
            {
                fine += 2;
            }
            else if (i >= 6 && i <= 10)
            {
                fine += 4;
            }
            else
            {
                fine += 6;
            }
        }
        printf("Fine ₹%d", fine);
    }
    else
    {
        printf("Enter a valid number of days");
    }
    return 0;
}