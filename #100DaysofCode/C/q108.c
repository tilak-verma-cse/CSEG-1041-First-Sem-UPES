// Q108 Print an array where each element is the product of all other elements. 


#include <stdio.h>

int main() 
{
    int n;
    long long prod;
    int arr[100];
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("[");
    for(int i = 0; i < n; i++)
    {
        prod = 1;
        for(int j = 0; j < n; j++)
        {
            if (i != j)
            {
                prod *= arr[j];
            }
        }
        printf("%lld", prod);
        if (i < n - 1) printf(", ");
    }
    printf("]");

    return 0;
}