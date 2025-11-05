// Q57 Find the sum of array elements. 


#include <stdio.h>

int main() 
{
    int n, sum = 0;
    int arr[100];
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("Sum is: %d", sum);
    return 0;
}