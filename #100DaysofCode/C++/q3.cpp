// Q3 Write a program to calculate the area and perimeter of a rectangle given its length and breadth. 

#include <iostream>
int main()
{
    double length, breadth;
    
    std::cout<< "Enter the length of rectangle: \n";
    std::cin>> length;

    std::cout<< "Enter the breadth of the rectangle: \n";
    std::cin>> breadth;

    std::cout<< "Perimeter: " << 2*(length + breadth);
    std::cout<< "\nArea: " << length * breadth;

    return 0;
}