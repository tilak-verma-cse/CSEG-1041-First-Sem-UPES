// Q39 Write a program to find the product of odd digits of a number.


#include <stdio.h>

int main() 
{
    int n, d, prod = 1, flag = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (n > 0)
    {
        d = n % 10;
        
        if (d % 2 != 0)
        {
            prod *= d;
            flag = 1;
        }
        n /= 10;
    }
    
    if (flag == 1)
    {
        printf("%d", prod);
    }
    else
    {
        printf("1"); 
    }

    return 0;
}