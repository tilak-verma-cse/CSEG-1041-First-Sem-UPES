// Q115 Determine if s and t are valid anagrams.


#include <stdio.h>

int main() 
{
    char s[100], t[100];
    int count[26] = {0};
    int i = 0, flag = 1;
    
    printf("Enter s: ");
    gets(s);
    
    printf("Enter t: ");
    gets(t);
    
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z') count[s[i] - 'a']++;
        i++;
    }
    
    i = 0;
    while (t[i] != '\0')
    {
        if (t[i] >= 'a' && t[i] <= 'z') count[t[i] - 'a']--;
        i++;
    }
    
    for(int k = 0; k < 26; k++)
    {
        if (count[k] != 0)
        {
            flag = 0;
            break;
        }
    }
    
    if (flag == 1) printf("Anagram");
    else printf("Not Anagram");

    return 0;
}