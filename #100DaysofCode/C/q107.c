// Q107 Find the previous greater element for each element (Brute force). 


#include <stdio.h>

int main() 
{
    int n, prev;
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
        prev = -1;
        for(int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                prev = arr[j];
                break;
            }
        }
        
        printf("%d", prev);
        if (i < n - 1) printf(", ");
    }

    return 0;
}