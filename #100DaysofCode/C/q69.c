// Q69 Find the second largest element in an array.


#include <stdio.h>

int main() 
{
    int n, max, smax;
    int arr[100];
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    smax = -1;
    
    for(int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
    }
    
    printf("%d", smax);
    return 0;
}