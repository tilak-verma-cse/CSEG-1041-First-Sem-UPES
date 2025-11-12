// Q92 Find the first repeating lowercase alphabet in a string.


#include <stdio.h>

int main() 
{
    char str[100];
    int i = 0, found = 0;
    int freq[26] = {0};
    
    printf("Enter a string: ");
    gets(str);
    
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int index = str[i] - 'a';
            freq[index]++;
            
            if (freq[index] > 1)
            {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }
        i++;
    }
    
    if (found == 0)
    {
        printf("None");
    }

    return 0;
}