// Q4 Write a program to input two 3x3 matrices. Perform and display:
//   (c) Matrix multiplication

#include <stdio.h>

int main()
{
    
    int matrix_A[3][3], matrix_B[3][3], final[3][3];            // Declare three 3x3 integer matrices.

    printf("Enter 9 elements for the first matrix:\n");     
    
    for (int i = 0; i < 3; i++)                                 // takes input for matrix 1
    {    
        for (int j = 0; j < 3; j++)      
        {   
            scanf("%d", &matrix_A[i][j]);
        }
    }

    printf("Enter 9 elements for the second matrix:\n");
    
    for (int i = 0; i < 3; i++)                                 // takes input for matrix 2
    {
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix_B[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++)                                 // multipies two matrices 
    {
        for (int j = 0; j < 3; j++) 
        {
            for (int k = 0; k < 3; k++) 
            {
				final[i][j] = 0;				// initialises to 0 to avoid any garbage value
                final[i][j] = final[i][j] + (matrix_A[i][k] * matrix_B[k][j]);    // main logic for matrix multiplication 
            }
        }
    }
    
    printf("\nThe product of the two matrices is:\n");
    
    for (int i = 0; i < 3; i++)                                 // prints the final matrix
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d\t", final[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}