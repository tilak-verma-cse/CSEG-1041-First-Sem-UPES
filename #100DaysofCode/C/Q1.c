// Q1 Write a program to input two numbers and display their sum.

#include <stdio.h>

int main() 
{
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum = %d\n", sum);

    return 0;
}
