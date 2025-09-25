//  Q1 Write a program to input n integers into an array and perform the following using loops:
// (c) Count how many numbers are even and how many are odd.

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
    
    int odd = 0, even = 0;                                  // creates 2 variables for storing number of odd and even numbers
    
    for(int i = 0; i < n; i++)                              
    {
        if(num[i] % 2 == 0)                                 // checks if the number is odd or even and increase the counter accordingly
        even++;
        else
        odd++;
    }
    
    printf("Even numbers: %d",even);                        // prints number of even no.
    printf("\nOdd numbers: %d",odd);                        // prints number of odd no.
    
	return 0;
}