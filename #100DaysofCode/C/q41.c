// Q41 Write a program to swap the first and last digit of a number.


#include <stdio.h>

int main() 
{
    int n, first, last, temp, digits = 0, divisor = 1, result, middle;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    last = n % 10;
    temp = n;
    
    while (temp > 0)
    {
        temp /= 10;
        digits++;
    }
    
    for(int i = 1; i < digits; i++)
    {
        divisor *= 10;
    }
    
    first = n / divisor;
    
    middle = (n % divisor) / 10;
    
    result = (last * divisor) + (middle * 10) + first;
    
    if (digits == 1) 
    {
        result = n;
    }

    printf("%d", result);
    return 0;
}