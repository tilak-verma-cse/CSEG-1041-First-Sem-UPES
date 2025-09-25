//Q16 Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main()
{
    double a,b,c;
    printf("Enter three numbers: \n");
    scanf("%lf %lf %lf",&a,&b,&c);

    double max = a;

    if(b > max)
    {
       max = b;
    }

    if(c > max)
    {
        max = c;
    }

    printf("%lf is the largest",max);
    return 0;
}