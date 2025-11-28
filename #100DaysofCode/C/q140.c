// Q140 Define a struct with enum Gender and print person's gender.


#include <stdio.h>
#include <string.h>

enum Gender {MALE, FEMALE};

struct Person 
{
    enum Gender g;
};

int main() 
{
    struct Person p;
    char input[20];
    
    printf("Enter Gender (MALE/FEMALE): ");
    scanf("%s", input);
    
    if (strcmp(input, "MALE") == 0)
    {
        p.g = MALE;
    }
    else
    {
        p.g = FEMALE;
    }
    
    if (p.g == MALE)
    {
        printf("Male");
    }
    else
    {
        printf("Female");
    }

    return 0;
}