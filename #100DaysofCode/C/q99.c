// Q99 Change the date format from dd/04/yyyy to dd-Apr-yyyy.


#include <stdio.h>

int main() 
{
    char date[15];
    int d1, d2, m1, m2, month;
    
    printf("Enter date (dd/mm/yyyy): ");
    gets(date);
    
    printf("%c%c-", date[0], date[1]);
    
    m1 = date[3] - '0';
    m2 = date[4] - '0';
    month = m1 * 10 + m2;
    
    switch (month)
    {
        case 1: printf("Jan"); break;
        case 2: printf("Feb"); break;
        case 3: printf("Mar"); break;
        case 4: printf("Apr"); break;
        case 5: printf("May"); break;
        case 6: printf("Jun"); break;
        case 7: printf("Jul"); break;
        case 8: printf("Aug"); break;
        case 9: printf("Sep"); break;
        case 10: printf("Oct"); break;
        case 11: printf("Nov"); break;
        case 12: printf("Dec"); break;
    }
    
    printf("-%c%c%c%c", date[6], date[7], date[8], date[9]);
    return 0;
}