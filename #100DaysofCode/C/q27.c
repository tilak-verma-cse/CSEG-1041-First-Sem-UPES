// Q27 Write a program to print the sum of the first n odd numbers.


#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(int i = 0; i <= 2*n; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }
        else
        {
            sum += i;
        }
    }
    printf("Sum is: %d", sum);
    return 0;
}