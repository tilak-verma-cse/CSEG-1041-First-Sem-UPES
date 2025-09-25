//  Q1 Write a program to input n integers into an array and perform the following using loops:
// (b) Calculate the average of all numbers.

#include <stdio.h>
int main()
{
	int n;
	printf("How many numbers you want to enter: ");         // asks the user for the array size
	scanf("%d",&n);

	int num[n];                                             // makes array of desired size
	printf("Enter %d numbers:\n",n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d",&num[i]);                                // takes input and store into array
	}

    int sum = 0;                                      // creats a variable to store sum of all no. with initial value 0
    
    for(int i = 0; i < n; i++)                              // reads every number in an array
    {
        sum = sum + num[i];                                 // updates the sum 
    }
    
    double avg = ((double)sum / n);                                 // creates a variable to store average of all numbers
    
    printf("The average of all numbers: %.2lf",avg);
    
	return 0;
}