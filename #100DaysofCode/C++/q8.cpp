// Q8 Write a program to find and display the sum of the first n natural numbers.

#include <iostream>

int main()
{
    int n;
    long long sum = 0; 

    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }

    std::cout << "Sum of the first " << n << " natural numbers = " << sum << std::endl;

    return 0;
}