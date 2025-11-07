// Q66 Insert an element in a sorted array at the appropriate position.


#include <stdio.h>

int main() 
{
    int n, val, pos;
    int arr[100];
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter sorted elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to insert: ");
    scanf("%d", &val);
    
    pos = n; 
    
    for(int i = 0; i < n; i++)
    {
        if (arr[i] > val)
        {
            pos = i;
            break;
        }
    }
    
    for(int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    
    arr[pos] = val;
    n++;
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}