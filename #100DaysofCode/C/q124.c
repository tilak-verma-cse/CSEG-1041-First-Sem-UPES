// Q124 Take two filenames from the user - a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().


#include <stdio.h>

int main() 
{
    FILE *fs, *fd;
    char src[50], dest[50], ch;
    
    printf("Enter source filename: ");
    gets(src);
    
    printf("Enter destination filename: ");
    gets(dest);
    
    fs = fopen(src, "r");
    if (fs == NULL)
    {
        printf("Error opening source file");
        return 1;
    }
    
    fd = fopen(dest, "w");
    if (fd == NULL)
    {
        printf("Error opening destination file");
        fclose(fs);
        return 1;
    }
    
    while ((ch = fgetc(fs)) != EOF)
    {
        fputc(ch, fd);
    }
    
    printf("File copied successfully to %s", dest);
    
    fclose(fs);
    fclose(fd);
    return 0;
}