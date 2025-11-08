// Q70 Rotate an array to the right by k positions.


#include <stdio.h>

int main() 
{
    int n, k, last;
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
    
    k = k % n;
    
    for(int i = 0; i < k; i++)
    {
        last = arr[n - 1];
        
        for(int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        
        arr[0] = last;
    }
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}