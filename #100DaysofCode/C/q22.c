//Q22 Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
#include <math.h>               // needed to use fabs() function

int main()
{
    double cp, sp, f, per;
    printf("Ente the Cost price: ");
    scanf("%lf", &cp);
    
    printf("Enter the Selling prrice: ");
    scanf("%lf", &sp);
    
    f = sp - cp;
    per = (fabs((sp - cp ) * 100))/(cp);            // fabs(...) is used to get absolute value for decimals
                                                    // for integers we use abs(...)
    if(f < 0)
    {
        printf("Loss %.2lf%%",per);
    }
    else if(f > 0)
    {
        printf("Profit %.2lf%%",per);
    }
    else
    {
        printf("NO Profit NO Loss");
    }
    
    return 0;
}