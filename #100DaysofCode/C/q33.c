// Q33 Write a program to check if a number is an Armstrong number.


#include <stdio.h>

int main() 
{
    int n, temp, r, sum = 0, c = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    temp = n;

    while (temp > 0)
    {
        temp /= 10;
        c++;
    }
    
    temp = n;
    
    while (temp > 0)
    {
        r = temp % 10;

        int p = 1;
        for(int i = 1; i <= c; i++)
        {
            p *= r;
        }
        
        sum += p;
        temp /= 10;
    }
    
    if (sum == n)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}