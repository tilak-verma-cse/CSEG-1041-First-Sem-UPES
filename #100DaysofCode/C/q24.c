/* Q24 Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit */


#include <stdio.h>

int main()
{
    int unit, bill = 0;
    printf("Enter units consumed: ");
    scanf("%d", &unit);
    
    if(unit >= 0)
    {
        for (int i = 1; i <= unit; ++i)
        {
            if (i >= 1 && i <= 100)
            {
                bill += 5;
            }
            else if (i >= 101 && i <= 200)
            {
                bill += 7;
            }
            else if (i >= 201 && i <= 300)
            {
                bill += 10;
            }
            else
            {
                bill += 12;
            }
        }
        printf("Bill ₹%d", bill);
    }
    else
    {
        printf("Enter valid number of units");
    }
    return 0;
}