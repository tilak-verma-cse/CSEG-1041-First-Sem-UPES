// Q77 Check if the elements on the diagonal of a matrix are distinct.


#include <stdio.h>

int main() 
{
    int n, flag = 1;
    int arr[10][10], diag[10];
    
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
                diag[i] = arr[i][j];
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (diag[i] == diag[j])
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

    return 0;
}