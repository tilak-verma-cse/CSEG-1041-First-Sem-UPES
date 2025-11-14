// Q100 Print all sub-strings of a string.


#include <stdio.h>

int main() 
{
    char str[100];
    int len = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    while (str[len] != '\0') len++;
    
    for(int i = 0; i < len; i++)
    {
        for(int j = i; j < len; j++)
        {
            for(int k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
            if (j < len - 1) printf(", ");
        }
        printf("\n");
    }

    return 0;
}