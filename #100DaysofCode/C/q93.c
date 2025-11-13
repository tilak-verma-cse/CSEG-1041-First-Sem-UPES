// Q93 Check if two strings are anagrams of each other.


#include <stdio.h>

int main() 
{
    char s1[100], s2[100];
    int c1[26] = {0}, c2[26] = {0};
    int i = 0, flag = 1;
    
    printf("Enter first string: ");
    gets(s1);
    
    printf("Enter second string: ");
    gets(s2);
    
    while (s1[i] != '\0')
    {
        if (s1[i] >= 'a' && s1[i] <= 'z') 
            c1[s1[i] - 'a']++;
        i++;
    }
    
    i = 0;
    while (s2[i] != '\0')
    {
        if (s2[i] >= 'a' && s2[i] <= 'z') 
            c2[s2[i] - 'a']++;
        i++;
    }
    
    for(i = 0; i < 26; i++)
    {
        if (c1[i] != c2[i])
        {
            flag = 0;
            break;
        }
    }
    
    if (flag == 1)
    {
        printf("Anagrams");
    }
    else
    {
        printf("Not anagrams");
    }

    return 0;
}