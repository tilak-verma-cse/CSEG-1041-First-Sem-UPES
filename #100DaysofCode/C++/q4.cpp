// Q4 Write a program to calculate the area and circumference of a circle given its radius. 

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double r;

    std::cout << "Enter radius of circle: ";
    std::cin >> r;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Area of Circle is: " << M_PI * std::pow(r, 2) << "cm^2";
    std::cout << "\nCircumference of Circle is: " << 2 * M_PI * r << "cm";

    return 0;
}
