//Q19 Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main()
{
    double a,b,c;
    printf("Enter thee sides \n");
    scanf("%lf %lf %lf",&a,&b,&c);
    
    if (a <= 0 || b <= 0 || c <= 0) 
    {
        printf("side must be positive\n");
    }
    
    else if ((a + b > c) && (a + c > b) && (b + c > a)) 
    {
        if (a == b && b == c) 
        {
            printf("equilateral");
        }
        else if (a == b || b == c || a == c) 
        {
            printf("isosceles");
        } 
        else 
        {
            printf("scalene");
        }
    } 
    
    else 
    {
        printf("cannot form a triangle\n");
    }
    return 0;
}