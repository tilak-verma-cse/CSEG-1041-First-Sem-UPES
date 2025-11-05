// Q55 Write a program to print all the prime numbers from 1 to n.


#include <stdio.h>

int main() 
{
    int n, count;
    
    printf("Enter range n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        count = 0;
        for(int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        
        if (count == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}