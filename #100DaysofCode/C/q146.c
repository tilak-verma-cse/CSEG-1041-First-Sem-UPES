// Q146 Create Employee structure with nested Date structure for joining date and print details.


#include <stdio.h>

struct Date
{
    int d, m, y;
};

struct Employee
{
    char name[50];
    int id;
    struct Date joinDate;
};

int main() 
{
    struct Employee e;
    
    printf("Enter Name: ");
    scanf("%s", e.name);
    
    printf("Enter ID: ");
    scanf("%d", &e.id);
    
    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joinDate.d, &e.joinDate.m, &e.joinDate.y);
    
    printf("Name: %s ID: %d | Joining Date: %02d/%02d/%d", e.name, e.id, e.joinDate.d, e.joinDate.m, e.joinDate.y);

    return 0;
}