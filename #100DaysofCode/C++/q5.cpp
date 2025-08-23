// Q5 Write a program to convert temperature from Celsius to Fahrenheit. 

#include <iostream>

int main()
{
    double c;

    std::cout<< "Enter temperature in Celsius: ";
    std::cin>> c;

    std::cout<< "Temperature in Fahrenheit: " << (c * 9 / 5) + 32;

    return 0;
}