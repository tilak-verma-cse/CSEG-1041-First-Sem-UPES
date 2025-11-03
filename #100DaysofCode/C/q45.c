// Q45 Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 ... up to n terms.


#include <stdio.h>

int main() 
{
    int n;
    float sum = 0.0;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        float num = 2 * i;
        float den = (4 * i) - 1;
        sum += num / den;
    }
    
    printf("Approximate sum: %.2f", sum);
    return 0;
}