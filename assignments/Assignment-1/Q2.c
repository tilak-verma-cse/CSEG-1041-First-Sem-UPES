//Q2  Write a program to input n integers in an array. 
//    Ask the user for a number and check if it exists in the array using the ternary operator. 
//    Print "Found" or "Not Found".

#include <stdio.h>
#include <stdbool.h>

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
    
    bool found = 0;                                         // creates a bool value to keep record of presence
    int user_n = 0;
    
    printf("Enter a number: ");                             // asks user for a number
    scanf("%d",&user_n);
    
    for(int i = 0; i < n; i++)                              // checks if user number found in array or not
    {
        if(user_n == num[i])
        {
            found = 1;                                      // triggers the bool value to true
            break;
        }
    }

    printf("%s\n", found ? "Found" : "Not Found");          // prints the Case Found or not using ternary operator
    
	return 0;
}