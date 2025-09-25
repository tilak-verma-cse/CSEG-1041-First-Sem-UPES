// Q4 Write a program to input two 3 X 3 matrices. Perform and display:
//    (b) Matrix subtraction


#include <stdio.h>


int main()
{
	int matrix_A[3][3], matrix_B[3][3], final[3][3];           // makes three 3x3 matrices

	printf("Enter 9 elements for the first matrix:\n");

	for (int i = 0; i < 3; i++)                                 // loop for each row
	{	                                                    
		for (int j = 0; j < 3; j++)                      // loop for column in that row
		{	
			scanf("%d", &matrix_A[i][j]);
		}
	}

    printf("Enter 9 elements for the second matrix:\n");     
    
    for (int i = 0; i < 3; i++)                             // get input for sencond matrix
    {
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix_B[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++)                             // performs the subtraction of the two matrices 
    {
        for (int j = 0; j < 3; j++) 
        {
            final[i][j] = matrix_A[i][j] - matrix_B[i][j];
        }
    }
    
    printf("\nThe difference of the two matrices is:\n");
    
    for (int i = 0; i < 3; i++)                             // loop to print the final matrix
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d\t", final[i][j]); 
        }
        printf("\n"); 
    }

	return 0;
}