// Q78 Find the sum of main diagonal elements for a square matrix.


#include <stdio.h>

int main() 
{
    int n, sum = 0;
    int arr[10][10];
    
    printf("Enter size n (nxn): ");
    scanf("%d", &n);
    
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    
    printf("%d", sum);
    return 0;
}