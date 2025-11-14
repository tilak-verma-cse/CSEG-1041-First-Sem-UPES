// Q101 Write a Program to find the first and last occurrence of a target in a sorted array.


#include <stdio.h>

int main() 
{
    int n, target, first = -1, last = -1;
    int arr[100];
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter sorted elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter target: ");
    scanf("%d", &target);
    
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            if (first == -1)
            {
                first = i;
            }
            last = i;
        }
    }
    
    printf("%d, %d", first, last);
    return 0;
}