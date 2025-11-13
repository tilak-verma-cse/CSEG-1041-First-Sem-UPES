// Q94 Find the longest word in a sentence.


#include <stdio.h>

int main() 
{
    char str[100], longest[100], current[100];
    int i = 0, j = 0, maxLen = 0, currLen = 0;
    
    printf("Enter a sentence: ");
    gets(str);
    
    while (1)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            current[j] = '\0';
            if (currLen > maxLen)
            {
                maxLen = currLen;
                int k = 0;
                while (current[k] != '\0')
                {
                    longest[k] = current[k];
                    k++;
                }
                longest[k] = '\0';
            }
            j = 0;
            currLen = 0;
            
            if (str[i] == '\0') break;
        }
        else
        {
            current[j] = str[i];
            j++;
            currLen++;
        }
        i++;
    }
    
    printf("%s", longest);
    return 0;
}