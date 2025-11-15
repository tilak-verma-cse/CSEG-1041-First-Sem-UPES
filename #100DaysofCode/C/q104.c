// Q104 Find the pivot integer x such that sum of 1 to x equals sum of x to n.


#include <stdio.h>

int main() 
{
    int n, pivot = -1;
    long long sumLeft, sumRight;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(int x = 1; x <= n; x++)
    {
        sumLeft = 0;
        sumRight = 0;
        
        for(int i = 1; i <= x; i++)
        {
            sumLeft += i;
        }
        
        for(int i = x; i <= n; i++)
        {
            sumRight += i;
        }
        
        if (sumLeft == sumRight)
        {
            pivot = x;
            break;
        }
    }
    
    printf("%d", pivot);
    return 0;
}