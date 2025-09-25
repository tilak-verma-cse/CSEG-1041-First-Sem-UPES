// Q5 Write a program to find the transpose of a given 3 × 3 matrix.

#include <stdio.h>

int main()
{
    int matrix_A[3][3], matrix_B[3][3];       // declare two 3x3 integer matrices.

    printf("Enter 9 elements for matrix:\n");
    
    for (int i = 0; i < 3; i++)                  // takes input for matrix
    {
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix_A[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++)                  // transpose matrix by swapping row and coloum
    {
        for (int j = 0; j < 3; j++) 
        {
            matrix_B[j][i] = matrix_A[i][j];
        }
    }
    
    printf("transpose of matrix is:\n");
    
    for (int i = 0; i < 3; i++)                  // prints transpose matrix
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d\t", matrix_B[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}