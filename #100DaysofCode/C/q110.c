// Q110 Find the maximum element in each subarray of size k.


#include <stdio.h>

int main() 
{
    int n, k, max;
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
        max = arr[i];
        for(int j = i; j < i + k; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }

    return 0;
}