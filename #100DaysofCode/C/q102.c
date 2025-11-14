// Q102 Find the index of the smallest element in arr[] that is greater than or equal to x (Ceil).


#include <stdio.h>

int main() 
{
    int n, x, index = -1;
    int arr[100];
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter sorted elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter x: ");
    scanf("%d", &x);
    
    for(int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            index = i;
            break;
        }
    }
    
    printf("%d", index);
    return 0;
}