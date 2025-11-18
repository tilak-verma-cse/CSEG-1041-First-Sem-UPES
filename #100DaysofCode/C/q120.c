// Q120 Write a program to take a string input. Change it to sentence case.


#include <stdio.h>

int main() 
{
    char str[100];
    int i = 0;
    
    printf("Enter string: ");
    gets(str);
    
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }
    
    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i + 1] != '\0')
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] = str[i + 1] - 32;
            }
        }
        i++;
    }
    
    printf("%s", str);
    return 0;
}