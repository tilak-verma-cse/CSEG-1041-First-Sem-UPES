// Q76 Check if a matrix is symmetric.


#include <stdio.h>

int main() 
{
    int r, c, flag = 1;
    int arr[10][10];
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("Enter elements:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    if (r != c)
    {
        printf("False");
    }
    else
    {
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if (arr[i][j] != arr[j][i])
                {
                    flag = 0;
                    break;
                }
            }
        }
        
        if (flag == 1)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }

    return 0;
}