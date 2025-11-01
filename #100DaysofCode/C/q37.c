// Q37 Write a program to find the LCM of two numbers.


#include <stdio.h>

int main() 
{
    int n1, n2, max;
    
    printf("Enter first number: ");
    scanf("%d", &n1);
    
    printf("Enter second number: ");
    scanf("%d", &n2);
    
    if (n1 > n2)
    {
        max = n1;
    }
    else
    {
        max = n2;
    }
    
    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            printf("%d", max);
            break;
        }
        max++;
    }

    return 0;
}