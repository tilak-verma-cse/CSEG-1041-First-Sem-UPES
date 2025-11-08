// Q72 Find the sum of all elements in a matrix.


#include <stdio.h>

int main() 
{
    int r, c, sum = 0;
    int arr[10][10];
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("Enter elements:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
    
    printf("%d", sum);
    return 0;
}