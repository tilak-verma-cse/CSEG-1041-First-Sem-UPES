// Q9 Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>

int main()
{
    float p, rate, time, SI, CI;
    int i;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);


    SI = (p * rate * time) / 100;

    CI = p;
    for (i = 0; i < time; i++)
    {
        CI = CI * (1 + rate / 100);
    }
    
    CI = CI - p;

    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}