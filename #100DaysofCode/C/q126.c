// Q126 Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.


#include <stdio.h>

int main() 
{
    FILE *fp;
    char name[50], str[100];
    
    printf("Enter filename: ");
    gets(name);
    
    fp = fopen(name, "r");
    
    if (fp == NULL)
    {
        printf("Error: File does not exist!");
    }
    else
    {
        printf("File opened successfully.\n");
        while (fgets(str, 100, fp) != NULL)
        {
            printf("%s", str);
        }
        fclose(fp);
    }

    return 0;
}