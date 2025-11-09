// Q74 Find the transpose of a matrix.


#include <stdio.h>

int main() 
{
    int r, c;
    int arr[10][10], trans[10][10];
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("Enter elements:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            trans[j][i] = arr[i][j];
        }
    }
    
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}