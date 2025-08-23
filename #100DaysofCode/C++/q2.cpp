// Q2 Write a program to input two numbers and display their sum, difference, product, and quotient. 

#include <iostream>
int main()
{
    double n1,n2;
    std::cout<< "Enter the two numbers: \n";
    std::cin>> n1 >> n2;

    std::cout<< "Sum is: " << n1 + n2;
    std::cout<< "\nDifference is: " << n1 - n2;
    std::cout<< "\nProduct is: " << n1 * n2; 
    if(n2 != 0)
    {
        std::cout<< "\nQuotient is: " << n1 / n2;
    }
    else
    {
        std::cout<< "\nCan't divide by Zero!";
    }

    return 0;
}