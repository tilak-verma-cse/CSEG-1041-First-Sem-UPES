// Q3 Write a program to input 10 integers (range 0–9). Store them in an array. 
//    Then, using a switch-case, print the frequency of each digit.


#include <stdio.h>


int main()
{
	int num[10];                                            // makes array of size of desired size
	printf("Enter 10 integers (between 0-9):\n");

    for(int i = 0; i < 10; i++)                     // this loop stores user values into array
    {
        int n;
        
        do {                            // this loop checks if user enter a number outside range and forces to enter a number betwwen 0-9
            scanf("%d", &n);
            if (n < 0 || n > 9) 
            {
                printf("enter a number between (0-9): \n");
            }
        } while (n < 0 || n > 9);
        
        num[i] = n;                     // stores the number
    }
    
    int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;       // declares counters to keep track on frequency of each digit
    
    for(int i = 0; i < 10; i++)                     // this loop calculates the frequency of digits using switch-case
    {
        switch(num[i])
        {
            case 0:
                c0++;
                break;
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
            case 5:
                c5++;
                break;
            case 6:
                c6++;
                break;
            case 7:
                c7++;
                break;
            case 8:
                c8++;
                break;
            case 9:
                c9++;
                break;
        }
    }
    
    printf("0 - %d times\n",c0);        // prints frequency of each digit
    printf("1 - %d times\n",c1);
    printf("2 - %d times\n",c2);
    printf("3 - %d times\n",c3);
    printf("4 - %d times\n",c4);
    printf("5 - %d times\n",c5);
    printf("6 - %d times\n",c6);
    printf("7 - %d times\n",c7);
    printf("8 - %d times\n",c8);
    printf("9 - %d times\n",c9);
   
	return 0;
}