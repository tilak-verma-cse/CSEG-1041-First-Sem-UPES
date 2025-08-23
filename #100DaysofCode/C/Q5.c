// Q5 Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    float cel, fah;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);

    fah = (cel * 9.0 / 5.0) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fah);

    return 0;
}