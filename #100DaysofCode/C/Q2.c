// Q2 Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    double num1, num2, sum, diff, prd;
    float qut;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prd = num1 * num2;

    printf("Sum = %lf\n", sum);
    printf("Diff = %lf\n", diff);
    printf("Product = %lf\n", prd);

    if (num2 != 0)
    {
        qut = num1 / num2;
        printf("Quotient = %.f\n", qut);
    }
    else
    {
        printf("Quotient = Cannot divide by zero!\n");
    }

    return 0;
}