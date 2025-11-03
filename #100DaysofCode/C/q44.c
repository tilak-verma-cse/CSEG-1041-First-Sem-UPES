// Q44 Write a program to find the sum of the series: 1 + 3/4 + 5/6 ... up to n terms.


#include <stdio.h>

int main() 
{
    int n;
    float sum = 0.0;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            sum += 1.0;
        }
        else
        {
            float num = (2 * i) - 1;
            float den = 2 * i;
            sum += num / den;
        }
    }
    
    printf("Approximate sum: %.1f", sum);
    return 0;
}