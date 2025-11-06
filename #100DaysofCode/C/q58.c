// Q58 Find the maximum and minimum element in an array.


#include <stdio.h>

int main() 
{
    int n, max, min;
    int arr[100];
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    min = arr[0];
    
    for(int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    printf("Max=%d, Min=%d", max, min);
    return 0;
}