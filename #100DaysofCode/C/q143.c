// Q143 Find and print the student with the highest marks.


#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main() 
{
    struct Student s[3];
    int maxIndex = 0;
    
    printf("Enter details for 3 students:\n");
    for(int i = 0; i < 3; i++)
    {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }
    
    for(int i = 1; i < 3; i++)
    {
        if (s[i].marks > s[maxIndex].marks)
        {
            maxIndex = i;
        }
    }
    
    printf("Topper: %s (Marks: %d)", s[maxIndex].name, s[maxIndex].marks);
    return 0;
}