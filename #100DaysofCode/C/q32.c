// Q32 Write a program to check if a number is a palindrome.


#include <stdio.h>

int main() 
{
    int n1, n2;
    long long rev = 0;

    scanf("%d", &n1);

    n2 = n1;

    while (n1 > 0) 
    {
        rev = rev * 10 + n1 % 10;
        n1 /= 10;
    }

    if (n2 == rev) 
    {
        printf("Palindrome\n");
    } 
    else 
    {
        printf("Not palindrome\n");
    }

    return 0;
}
