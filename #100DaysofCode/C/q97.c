// Q97 Print the initials of a name.


#include <stdio.h>

int main() 
{
    char str[100];
    int i = 0;
    
    printf("Enter name: ");
    gets(str);
    
    printf("%c.", str[0]);
    
    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i + 1] != '\0')
        {
            printf("%c.", str[i + 1]);
        }
        i++;
    }

    return 0;
}