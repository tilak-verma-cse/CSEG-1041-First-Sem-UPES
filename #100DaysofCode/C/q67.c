// Q67 Insert an element in an array at a given position.


#include <stdio.h>

int main() 
{
    int n, val, pos;
    int arr[100];
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter index and value to insert: ");
    scanf("%d %d", &pos, &val);
    
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