// Q105 Find the majority element (appears strictly more than n/2 times).


#include <stdio.h>

int main() 
{
    int n, count, majority = -1;
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
        count = 0;
        for(int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        
        if (count > n / 2)
        {
            majority = arr[i];
            break;
        }
    }
    
    printf("%d", majority);
    return 0;
}