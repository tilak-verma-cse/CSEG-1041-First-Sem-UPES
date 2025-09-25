// Q28 Write a program to print the product of even numbers from 1 to n.


#include <stdio.h>

int main() 
{
    int n;
    long long p = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
    {
        p *= i;
    }

    printf("Product is: ");

    for (int i = 2; i <= n; i += 2)
    {
        printf("%d", i);
        if (i + 2 <= n) 
        {
            printf(" * ");
        }
    }
    
    printf(" = %lld", p);
    return 0;
}