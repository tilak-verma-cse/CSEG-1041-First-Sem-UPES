// Q64 Find the digit that occurs the most times in an integer number.


#include <stdio.h>

int main() 
{
    long long n;
    int digit, maxFreq = -1, ans;
    int freq[10] = {0};
    
    printf("Enter a number: ");
    scanf("%lld", &n);
    
    while (n > 0)
    {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }
    
    for(int i = 0; i < 10; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            ans = i;
        }
        else if (freq[i] == maxFreq)
        {
            if (i > ans)
            {
                ans = i;
            }
        }
    }
    
    printf("%d", ans);
    return 0;
}