// Q149 Use malloc() to allocate structure memory dynamically and print details.


#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main() 
{
    struct Student *ptr;
    
    ptr = (struct Student*) malloc(sizeof(struct Student));
    
    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    
    printf("Enter Name: ");
    scanf("%s", ptr->name);
    
    printf("Enter Roll: ");
    scanf("%d", &ptr->roll);
    
    printf("Enter Marks: ");
    scanf("%d", &ptr->marks);
    
    printf("Name: %s | Roll: %d | Marks: %d", ptr->name, ptr->roll, ptr->marks);
    
    free(ptr);
    return 0;
}