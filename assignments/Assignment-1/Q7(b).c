// Q7 Assume a class of 5 students, each having marks in 3 subjects. 
//    Store the marks in a 2D array where each row represents a student and each column represents a subject.
//    Perform the following:
//(b) Find the highest scorer (student with maximum total marks). 


#include <stdio.h>

int main()
{
    int marks[5][3];
    int totals[5];
    int max_marks;              // variable for the maximum possible marks

    printf("Enter maximum marks for a subject: ");
    scanf("%d", &max_marks);                // ask user for the max marks
    printf("\n");

    for (int i = 0; i < 5; i++)         // get input for the marks array
    {
        printf("Enter marks for Student %d (out of %d):\n", i + 1, max_marks);
        for (int j = 0; j < 3; j++)
        {
            do                              // loop to validate each mark
            {
                printf("Subject %d: ", j + 1);
                scanf("%d", &marks[i][j]);

                if (marks[i][j] < 0 || marks[i][j] > max_marks)             // check if the mark is in the valid range
                {
                    printf("Enter a mark between 0 and %d.\n", max_marks);
                }
            } while (marks[i][j] < 0 || marks[i][j] > max_marks);
        }
    }

    for (int i = 0; i < 5; i++)             // calculate and store each student's total
    {
        int cur_total = 0;
        for (int j = 0; j < 3; j++)
        {
            cur_total += marks[i][j];
        }
        totals[i] = cur_total;
    }

    int max_total = totals[0];                  // assume first student has the max score
    int top = 0;                                // assume first student is the top scorer

    for (int i = 1; i < 5; i++)                  // loop to find the highest score
    {
        if (totals[i] > max_total)
        {
            max_total = totals[i];
            top = i;
        }
    }

    printf("Student %d is the top scorer with %d marks.\n", top + 1, max_total);         // print the final result

    return 0;
}