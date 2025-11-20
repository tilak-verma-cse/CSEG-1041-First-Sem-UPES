// Q129 A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.


#include <stdio.h>

int main() 
{
    FILE *fp;
    int num, count = 0;
    long long sum = 0;
    float avg;
    
    fp = fopen("numbers.txt", "r");
    
    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    
    while (fscanf(fp, "%d", &num) != EOF)
    {
        sum += num;
        count++;
    }
    
    if (count > 0)
    {
        avg = (float)sum / count;
        printf("Sum = %lld\nAverage = %.2f", sum, avg);
    }
    else
    {
        printf("No numbers found");
    }
    
    fclose(fp);
    return 0;
}