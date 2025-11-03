// Q47 Write a program to print a right triangle pattern of stars.


#include <stdio.h>

int main() 
{
    int n;
    
    printf("Enter rows: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}