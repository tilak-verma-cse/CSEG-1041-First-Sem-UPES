// Q123 Read a text file and count the total number of characters, words, and lines.


#include <stdio.h>

int main() 
{
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0, inWord = 0;
    
    fp = fopen("sample.txt", "r");
    
    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    
    while ((ch = fgetc(fp)) != EOF)
    {
        chars++;
        
        if (ch == '\n')
        {
            lines++;
        }
        
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            words++;
        }
    }
    
    if (chars > 0)
    {
        lines++; 
    }
    
    printf("Characters: %d\nWords: %d\nLines: %d", chars, words, lines);
    
    fclose(fp);
    return 0;
}