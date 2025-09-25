// Q7 Assume a class of 5 students, each having marks in 3 subjects. 
//    Store the marks in a 2D array where each row represents a student and each column represents a subject.
//    Perform the following:
//(a) Calculate the total and average marks of each student

#include <stdio.h>

int main()
{
    int marks[5][3];            // 5x3 matrix for 5 students and 3 subjects
    int max_marks;

    printf("Enter maximum marks for subject: ");        // ask user for maximum marks for a subject
    scanf("%d", &max_marks);
    
    int max = (max_marks * 3);                  // calculate the total possible marks
    
    for (int i = 0; i < 5; i++)                 // get input for the marks 
    {
        printf("Enter marks for Student %d (out of %d):\n", i + 1, max_marks);
        
        for (int j = 0; j < 3; j++) 
        {
            do 
            {
                printf("Subject %d: ", j + 1);
                scanf("%d", &marks[i][j]);

                if (marks[i][j] < 0 || marks[i][j] > max_marks)         // validates the marks entered by user
                {
                    printf("Enter a value between 0 and %d.\n", max_marks);
                }
            } while (marks[i][j] < 0 || marks[i][j] > max_marks);
        }
        printf("\n");
    }

    printf("\nResult\n");
    for (int i = 0; i < 5; i++)                 // loop to calculate and print results
    {
        int total = 0;                          // variable to store total marks for a student
        
        for (int j = 0; j < 3; j++)             // sum of marks for the 3 subjects
        {
            total += marks[i][j];
        }
        
        double avg = (double)total / 3.0;       // calculate the average marks
        
        printf("Student %d:\n", i + 1);         // prints final result
        printf("Total Marks: %d/%d\n", total, max);
        printf("Average:  %.2lf\n\n", avg);
    }

    return 0;
}