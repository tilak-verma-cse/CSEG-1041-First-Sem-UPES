// Q6 Write a program to swap two numbers using a third variable. 

#include <iostream>

int main()
{
    double a, b, temp;

    std::cout << "Enter the 1st number: ";
    std::cin >> a;

    std::cout << "Enter the 2nd number: ";
    std::cin >> b;

    std::cout << "\nBefore swapping\n";
    std::cout << "1st number: " << a << std::endl;
    std::cout << "2nd number: " << b << std::endl;

    temp = a;
    a = b;
    b = temp;

    std::cout << "\nAfter swapping\n";
    std::cout << "1st number: " << a << std::endl;
    std::cout << "2nd number: " << b << std::endl;
    return 0;
}