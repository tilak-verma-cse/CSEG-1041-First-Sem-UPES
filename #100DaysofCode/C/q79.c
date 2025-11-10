// Q79 Perform diagonal traversal of a matrix.


#include <stdio.h>

int main() 
{
    int n;
    int arr[10][10];
    
    printf("Enter size n (nxn): ");
    scanf("%d", &n);
    
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Logic: Traversal based on sum of indices k = i + j
    for(int k = 0; k < 2 * n - 1; k++)
    {
        if (k % 2 == 0) 
        {
            // Even sum: go up
            for(int i = k; i >= 0; i--)
            {
                int j = k - i;
                if (i < n && j < n)
                {
                    printf("%d ", arr[i][j]);
                }
            }
        }
        else 
        {
            // Odd sum: go down
            for(int i = 0; i <= k; i++)
            {
                int j = k - i;
                if (i < n && j < n)
                {
                    printf("%d ", arr[i][j]);
                }
            }
        }
    }

    return 0;
}