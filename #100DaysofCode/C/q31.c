// Q31 Write a program to take a number as input and print its equivalent bary representation.


#include <stdio.h>

int main() 
{
    int n, p = 1;
    long long b = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) 
    {
        b = b + (long long)(n % 2) * p;
        p = p * 10;
        n = n / 2;
    }
	printf("%lld", b);
	return 0;
}