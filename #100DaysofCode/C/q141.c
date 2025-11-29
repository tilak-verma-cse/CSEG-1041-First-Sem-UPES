// Q141 Define a structure Student with name, roll_no, and marks, then read and print one student's data.


#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main() 
{
    struct Student s;
    
    printf("Enter Name: ");
    scanf("%s", s.name);
    
    printf("Enter Roll: ");
    scanf("%d", &s.roll);
    
    printf("Enter Marks: ");
    scanf("%d", &s.marks);
    
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);

    return 0;
}