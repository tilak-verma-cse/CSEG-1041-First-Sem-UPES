// Q43 Write a program to check if a number is a strong number.


#include <stdio.h>

int main() 
{
    int n, temp, d, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    temp = n;
    
    while (temp > 0)
    {
        d = temp % 10;
        int f = 1;
        
        for(int i = 1; i <= d; i++)
        {
            f *= i;
        }
        
        sum += f;
        temp /= 10;
    }
    
    if (sum == n)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not strong number");
    }

    return 0;
}