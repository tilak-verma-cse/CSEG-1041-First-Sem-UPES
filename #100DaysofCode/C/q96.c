// Q96 Reverse each word in a sentence without changing the word order.


#include <stdio.h>

int main() 
{
    char str[100], word[50];
    int i = 0, j = 0;
    
    printf("Enter a sentence: ");
    gets(str);
    
    while (1)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            for(int k = j - 1; k >= 0; k--)
            {
                printf("%c", word[k]);
            }
            if (str[i] == ' ') printf(" ");
            j = 0;
            if (str[i] == '\0') break;
        }
        else
        {
            word[j] = str[i];
            j++;
        }
        i++;
    }

    return 0;
}