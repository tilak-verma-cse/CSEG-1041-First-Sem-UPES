// Q103 Find the pivot index where the sum of left elements equals the sum of right elements.


#include <stdio.h>

int main() 
{
    int n, leftSum, rightSum, pivot = -1;
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
        leftSum = 0;
        rightSum = 0;
        
        for(int j = 0; j < i; j++)
        {
            leftSum += arr[j];
        }
        
        for(int k = i + 1; k < n; k++)
        {
            rightSum += arr[k];
        }
        
        if (leftSum == rightSum)
        {
            pivot = i;
            break;
        }
    }
    
    printf("%d", pivot);
    return 0;
}