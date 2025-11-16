// Q109 Find the maximum sum of all subarrays of size k.


#include <stdio.h>

int main() 
{
    int n, k, maxSum = -999999, currentSum;
    int arr[100];
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    for(int i = 0; i <= n - k; i++)
    {
        currentSum = 0;
        for(int j = i; j < i + k; j++)
        {
            currentSum += arr[j];
        }
        
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }
    
    printf("%d", maxSum);
    return 0;
}