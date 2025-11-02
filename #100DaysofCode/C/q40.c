// Q40 Write a program to find the 1's complement of a binary number and print it.


#include <stdio.h>

int main() 
{
    int n, digit;
    long long comp = 0, p = 1;
    
    printf("Enter a binary number: ");
    scanf("%d", &n);
    
    while (n > 0)
    {
        digit = n % 10;
        
        if (digit == 0)
        {
            digit = 1;
        }
        else
        {
            digit = 0;
        }
        
        comp = comp + digit * p;
        p *= 10;
        n /= 10;
    }
    
    printf("%lld", comp);
    return 0;
}