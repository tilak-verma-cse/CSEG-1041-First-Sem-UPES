// Q7 Assume a class of 5 students, each having marks in 3 subjects. 
//    Store the marks in a 2D array where each row represents a student and each column represents a subject.
//    Perform the following:
//(c) Find the subject in which the class performed worst

#include <stdio.h>

int main()
{
    int marks[5][3];
    double avg[3];              // array to store the average of each subject
    int max_marks;              // variable for maximum possible marks

    printf("Enter maximum marks for a subject: ");
    scanf("%d", &max_marks);            // ask user for max marks
    printf("\n");

    for (int i = 0; i < 5; i++)             // get input for marks array
    {
        printf("Enter marks for student %d (out of %d):\n", i + 1, max_marks);
        for (int j = 0; j < 3; j++)
        {
            do                  // loop to validate each mark
            {
                printf("Subject %d: ", j + 1);
                scanf("%d", &marks[i][j]);

                if (marks[i][j] < 0 || marks[i][j] > max_marks)             // check if mark is in valid range
                {
                    printf("Enter a mark between 0 and %d.\n", max_marks);
                }
            } while (marks[i][j] < 0 || marks[i][j] > max_marks);
        }
    }

    for (int j = 0; j < 3; j++)                 // calculate average for each subject
    {
        int sub_total = 0;
        for (int i = 0; i < 5; i++)
        {
            sub_total += marks[i][j];
        }
        avg[j] = (double)sub_total / 5.0;
    }

    double low_avg = avg[0];                // assume first subject average is lowest
    int worst = 0;                  // assume first subject is worst

    for (int j = 1; j < 3; j++)             // loop to find lowest
    {
        if (avg[j] < low_avg)
        {
            low_avg = avg[j];
            worst = j;
        }
    }

    printf( "class performed worst in subject %d.\n", worst + 1); // print final result

    return 0;
}