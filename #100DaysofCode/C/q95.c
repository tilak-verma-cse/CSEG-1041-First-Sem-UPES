// Q95 Check if one string is a rotation of another.


#include <stdio.h>

int main() 
{
    char s1[100], s2[100], temp[200];
    int l1 = 0, l2 = 0, i = 0, j = 0, found = 0;
    
    printf("Enter first string: ");
    gets(s1);
    
    printf("Enter second string: ");
    gets(s2);
    
    while (s1[l1] != '\0') l1++;
    while (s2[l2] != '\0') l2++;
    
    if (l1 != l2)
    {
        printf("Not rotation");
    }
    else
    {
        while (s1[i] != '\0')
        {
            temp[i] = s1[i];
            i++;
        }
        j = 0;
        while (s1[j] != '\0')
        {
            temp[i] = s1[j];
            i++;
            j++;
        }
        temp[i] = '\0';
        
        for(i = 0; i < l1; i++)
        {
            int match = 1;
            for(j = 0; j < l1; j++)
            {
                if (temp[i + j] != s2[j])
                {
                    match = 0;
                    break;
                }
            }
            if (match == 1)
            {
                found = 1;
                break;
            }
        }
        
        if (found == 1)
            printf("Rotation");
        else
            printf("Not rotation");
    }

    return 0;
}