// Q3 Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() 
{
    double length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nArea of the rectangle: %.2lf\n", area);
    printf("Perimeter of the rectangle: %.2lf\n", perimeter);

    return 0;
}