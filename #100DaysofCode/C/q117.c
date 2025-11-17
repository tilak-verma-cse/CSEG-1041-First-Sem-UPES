// Q117 Merge two sorted arrays.


#include <stdio.h>

int main() 
{
    int n1, n2, i = 0, j = 0, k = 0;
    int a[100], b[100], res[200];
    
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements: ");
    for(int x = 0; x < n1; x++) scanf("%d", &a[x]);
    
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements: ");
    for(int x = 0; x < n2; x++) scanf("%d", &b[x]);
    
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            res[k] = a[i];
            i++;
        }
        else
        {
            res[k] = b[j];
            j++;
        }
        k++;
    }
    
    while (i < n1)
    {
        res[k] = a[i];
        i++;
        k++;
    }
    
    while (j < n2)
    {
        res[k] = b[j];
        j++;
        k++;
    }
    
    for(int x = 0; x < k; x++)
    {
        printf("%d ", res[x]);
    }

    return 0;
}