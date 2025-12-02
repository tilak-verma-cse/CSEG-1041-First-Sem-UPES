// Q147 Store employee data in a binary file using fwrite() and read using fread().


#include <stdio.h>

struct Employee
{
    char name[50];
    int id;
    int salary;
};

int main() 
{
    FILE *fp;
    struct Employee e1, e2;
    
    fp = fopen("emp.dat", "wb");
    if (fp == NULL) return 1;
    
    printf("Enter Name, ID, Salary: ");
    scanf("%s %d %d", e1.name, &e1.id, &e1.salary);
    
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);
    
    fp = fopen("emp.dat", "rb");
    if (fp == NULL) return 1;
    
    fread(&e2, sizeof(struct Employee), 1, fp);
    
    printf("Read from file: Name: %s | ID: %d | Salary: %d", e2.name, e2.id, e2.salary);
    fclose(fp);
    
    return 0;
}