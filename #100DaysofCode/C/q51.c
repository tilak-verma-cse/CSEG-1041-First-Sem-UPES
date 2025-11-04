/* Q51 Write a program to print the following pattern:
     5
    45
   345
  2345
 12345
*/


#include <stdio.h>

int main() 
{
    int n;
    
    printf("Enter rows: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        for(int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }
        
        for(int j = (n - i + 1); j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}