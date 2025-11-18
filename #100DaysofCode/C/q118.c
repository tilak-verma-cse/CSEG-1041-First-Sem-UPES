// Q118 Find the missing number in an array of 0 to n.


#include <stdio.h>

int main() 
{
    int n, sumArr = 0, sumTotal = 0;
    int arr[100];
    
    printf("Enter size of array (number of elements present): ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sumArr += arr[i];
    }
    
    
    for(int i = 0; i <= n; i++)
    {
        sumTotal += i;
    }
    
    printf("%d", sumTotal - sumArr);
    return 0;
}