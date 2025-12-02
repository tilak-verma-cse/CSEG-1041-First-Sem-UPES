// Q145 Return a structure containing top student's details from a function.


#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

struct Student getTopper(struct Student s[], int n)
{
    struct Student top = s[0];
    for(int i = 1; i < n; i++)
    {
        if (s[i].marks > top.marks)
        {
            top = s[i];
        }
    }
    return top;
}

int main() 
{
    struct Student s[3], topper;
    
    printf("Enter details for 3 students:\n");
    for(int i = 0; i < 3; i++)
    {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }
    
    topper = getTopper(s, 3);
    
    printf("Top Student: %s | Roll: %d | Marks: %d", topper.name, topper.roll, topper.marks);
    return 0;
}