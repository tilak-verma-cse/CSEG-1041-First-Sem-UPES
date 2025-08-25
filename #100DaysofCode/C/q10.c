// Q10 Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main()
{
    int t_sec, h, min, sec;

    printf("Enter time in seconds: ");
    scanf("%d", &t_sec);

    h = t_sec / 3600;
    min = (t_sec % 3600) / 60;
    sec = t_sec % 60;

    printf("Time: %d:%d:%d\n", h, min, sec);

    return 0;
}