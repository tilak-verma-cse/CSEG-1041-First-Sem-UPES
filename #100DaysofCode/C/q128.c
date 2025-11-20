// Q128 Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.


#include <stdio.h>

int main() 
{
    FILE *fp;
    char ch;
    int v = 0, c = 0;
    
    fp = fopen("text.txt", "r");
    
    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32; 
        }
        
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }
    
    printf("Vowels: %d\nConsonants: %d", v, c);
    
    fclose(fp);
    return 0;
}