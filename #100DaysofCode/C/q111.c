// Q111 Find the first negative integer in each subarray of size k.


#include <stdio.h>

int main() 
{
    int n, k, foundNegative;
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
        foundNegative = 0;
        for(int j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                printf("%d ", arr[j]);
                foundNegative = 1;
                break;
            }
        }
        
        if (foundNegative == 0)
        {
            printf("0 ");
        }
    }

    return 0;
}