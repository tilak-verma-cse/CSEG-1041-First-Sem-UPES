// Q25 Write a program to implement a basic calculator using switch-case for +, -, *, /, %


#include <stdio.h>

int main() 
{
    int num1, num2;
    char op;
    
    printf("Enter number one: ");
    scanf("%d", &num1);
    
    printf("Enter number two: ");
    scanf("%d", &num2);
    
    printf("Enter operator from(+, -, *, /, %%): ");
    scanf(" %c", &op);
    
    switch (op) 
    {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) 
            {
                printf("Division by zero not allowed\n");
            } 
            else 
            {
                printf("%d\n", num1 / num2);
            }
            break;
        case '%':
            if (num2 == 0) 
            {
                printf("Division by zero not allowed\n");
            } 
            else 
            {
                printf("%d\n", num1 % num2);
            }
            break;
        default:
            printf("Invalid\n");
            break;
    }

    return 0;
}