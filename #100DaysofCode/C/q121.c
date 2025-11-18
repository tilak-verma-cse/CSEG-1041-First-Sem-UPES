// Q121 Write a C program that creates a text file named info.txt in write mode. The program should take the user's name and age as input, and write them to the file using fprintf().


#include <stdio.h>

int main() 
{
    FILE *fp;
    char name[50];
    int age;
    
    fp = fopen("info.txt", "w");
    
    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    
    printf("Enter Name: ");
    gets(name);
    
    printf("Enter Age: ");
    scanf("%d", &age);
    
    fprintf(fp, "Name: %s\nAge: %d", name, age);
    
    printf("File created successfully! Data written to info.txt");
    
    fclose(fp);
    return 0;
}