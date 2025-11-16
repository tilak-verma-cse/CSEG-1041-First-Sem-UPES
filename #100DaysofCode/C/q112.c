// Q112 Find the maximum sum of any contiguous subarray using Kadane's algorithm.


#include <stdio.h>

int main() 
{
    int n;
    long long currentSum = 0, maxSum = -999999;
    int arr[100];
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
        
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    

    int allNeg = 1;
    int maxEle = -999999;
    for(int i=0; i<n; i++) {
        if(arr[i] > 0) allNeg = 0;
        if(arr[i] > maxEle) maxEle = arr[i];
    }
    
    if(allNeg == 1) {
        printf("%d", maxEle);
    } else {
        printf("%lld", maxSum);
    }
    
    return 0;
}