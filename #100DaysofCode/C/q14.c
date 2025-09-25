//Q14 Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("%c is a Vowel");
    }
    else
    {
        printf("%c is a Consonent");
    }
    return 0;
}