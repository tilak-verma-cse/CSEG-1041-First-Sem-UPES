//Q17 Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    double D = (b * b - 4 * a * c);
    double r1, r2, r;

    if (D > 0)
    {
        r1 = (-b + sqrt(D)) / (2.0 * a);
        r2 = (-b - sqrt(D)) / (2.0 * a);
        printf("Roots are real and different %lf, %lf",r1,r2);
    }
    else if (D == 0)
    {
        r = -b / (2.0 * a);
        printf("Roots are real and same %lf\n",r);
    }
    else
    {
        printf("Roots are complex\n");
    }

    return 0;
}