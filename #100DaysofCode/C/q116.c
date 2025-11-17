// Q116 Find two indices such that nums[i] + nums[j] == target.


#include <stdio.h>

int main() 
{
    int n, target, found = 0;
    int arr[100];
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter target: ");
    scanf("%d", &target);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }
        if (found == 1) break;
    }
    
    if (found == 0) printf("-1 -1");
    return 0;
}