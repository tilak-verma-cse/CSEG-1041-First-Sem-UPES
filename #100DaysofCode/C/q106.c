// Q106 Find the next greater element for each element (Brute force).


#include <stdio.h>

int main() 
{
    int n, next;
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
        next = -1;
        for(int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }
        
        printf("%d", next);
        if (i < n - 1) printf(", ");
    }

    return 0;
}