// Q10 Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <iostream>

int main()
{
    int t_sec, h, min, sec;

    std::cout << "Enter time in seconds: ";
    std::cin >> t_sec;

    h = t_sec / 3600;
    min = (t_sec % 3600) / 60;
    sec = t_sec % 60;

    std::cout << "Time: " << h << ":" << min << ":" << sec;

    return 0;
}