// Q114 Find the length of the longest substring without repeating characters.


#include <stdio.h>

int main() 
{
    char str[100];
    int n = 0, maxLen = 0;
    
    printf("Enter string: ");
    gets(str);
    
    while (str[n] != '\0') n++;
    
    for(int i = 0; i < n; i++)
    {
        int visited[256] = {0};
        int currLen = 0;
        
        for(int j = i; j < n; j++)
        {
            if (visited[str[j]] == 1)
            {
                break;
            }
            else
            {
                visited[str[j]] = 1;
                currLen++;
            }
        }
        
        if (currLen > maxLen)
        {
            maxLen = currLen;
        }
    }
    
    printf("%d", maxLen);
    return 0;
}