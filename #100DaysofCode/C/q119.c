// Q119 Find the repeated element in an array.


#include <stdio.h>

int main() 
{
    int n, repeated = -1;
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
        for(int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                repeated = arr[i];
                break;
            }
        }
        if (repeated != -1) break;
    }
    
    printf("%d", repeated);
    return 0;
}