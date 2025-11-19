// Q127 Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.


#include <stdio.h>

int main() 
{
    FILE *fin, *fout;
    char ch;
    
    fin = fopen("input.txt", "r");
    if (fin == NULL)
    {
        printf("Error opening input file");
        return 1;
    }
    
    fout = fopen("output.txt", "w");
    if (fout == NULL)
    {
        printf("Error opening output file");
        fclose(fin);
        return 1;
    }
    
    while ((ch = fgetc(fin)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
        fputc(ch, fout);
    }
    
    printf("Conversion complete.");
    
    fclose(fin);
    fclose(fout);
    return 0;
}