//  Q1 Write a program to input n integers into an array and perform the following using loops:
// (a) Find the largest and smallest number. 

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
    
    int max = num[0], min = num[0];                         // assume 1st no. in array to be max and min
    
    for(int i = 1; i < n; i++)
    {
        if(num[i] > max)                                    // updates max 
        {
            max = num[i];
        }
        if(num[i] < min)                                    // updates min
        {
            min = num[i];
        }
    }
    
    printf("The largest number is: %d",max);                // prints max
    printf("\nThe smallest number is: %d",min);             // prints min
    
    return 0;
}