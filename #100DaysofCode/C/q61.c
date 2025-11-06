// Q61 Search for an element in an array using linear search.


#include <stdio.h>

int main() 
{
    int n, key, found = -1;
    int arr[100];
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = i;
            break;
        }
    }
    
    if (found != -1)
    {
        printf("Found at index %d", found);
    }
    else
    {
        printf("-1");
    }

    return 0;
}