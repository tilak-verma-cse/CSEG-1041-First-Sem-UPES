// Q73 Find the sum of each row of a matrix and store it in an array.


#include <stdio.h>

int main() 
{
    int r, c;
    int arr[10][10], rowSum[10];
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("Enter elements:\n");
    for(int i = 0; i < r; i++)
    {
        rowSum[i] = 0; 
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            rowSum[i] += arr[i][j];
        }
    }
    
    for(int i = 0; i < r; i++)
    {
        printf("%d ", rowSum[i]);
    }

    return 0;
}