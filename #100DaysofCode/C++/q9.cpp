// Q9 Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double p, rate, time;

    std::cout << "Enter Principal, Rate, and Time: \n";
    std::cin >> p >> rate >> time;

    std::cout << std::fixed << std::setprecision(2);
    
    std::cout << "Simple Interest = " << (p * rate * time) / 100 << std::endl;
    std::cout << "Compound Interest = " << p * std::pow(1 + rate / 100, time) - p << std::endl;

    return 0;
}