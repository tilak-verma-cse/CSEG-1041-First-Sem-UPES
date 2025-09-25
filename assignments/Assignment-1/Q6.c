// Q6 Write a program that takes a 4 × 4 matrix and finds the maximum element in each row and each column.

#include <stdio.h>

int main()
{
    int matrix[4][4];               // makes a 4x4 matrix

    printf("Enter 16 elements for 4x4 matrix:\n");
    
    for (int i = 0; i < 4; i++)         // inputs elements for the matrix
    {
        for (int j = 0; j < 4; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMax in each Row\n");

    for (int i = 0; i < 4; i++) 
    {
        int max_row = matrix[i][0];          // assumes the first element of the current row is the max
        
        for (int j = 1; j < 4; j++)             // checks the rest of the elements in that row
        {
            if (matrix[i][j] > max_row) 
            {
                max_row = matrix[i][j];         // updates the max
            }
        }
        printf("Maximum in Row %d is: %d\n", i, max_row);
    }

    printf("\nMax in each Column\n");

    for (int j = 0; j < 4; j++) {
        
        int max_col = matrix[0][j];         // assumes the first element of the current column is the max
        
        for (int i = 1; i < 4; i++) 
        {
            if (matrix[i][j] > max_col)     // checks the rest of the elements in that column
            {
                max_col = matrix[i][j];     // updates the max
            }
        }
        printf("Maximum in Column %d is: %d\n", j, max_col);
    }

    return 0;
}