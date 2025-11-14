// Q98 Print initials of a name with the surname displayed in full.


#include <stdio.h>

int main() 
{
    char str[100];
    int len = 0, lastSpace = 0;
    
    printf("Enter full name: ");
    gets(str);
    
    while (str[len] != '\0')
    {
        if (str[len] == ' ')
        {
            lastSpace = len;
        }
        len++;
    }
    
    printf("%c.", str[0]);
    
    for(int i = 0; i < lastSpace; i++)
    {
        if (str[i] == ' ')
        {
            printf("%c.", str[i + 1]);
        }
    }
    
    printf(" ");
    for(int i = lastSpace + 1; i < len; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}