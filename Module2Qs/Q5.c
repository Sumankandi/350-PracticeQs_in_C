// Write a program to demonstrate the use of switch-case for basic calculator operations.

#include <stdio.h>
int main()
{
    int num1, num2, res;
    char op;
    printf("Enter num1 and num2 : ");
    scanf("%d %d", &num1, &num2);
    printf("Enter operator (+,_,*,/) : ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        res = num1 + num2;
        printf("%d", res);
        break;
    case '-':
        res = num1 - num2;
        printf("%d", res);
        break;
    case '*':
        res = num1 * num2;
        printf("%d", res);
        break;
    case '/':
        res = num1 / num2;
        printf("%d", res);
        break;
    default:
        printf("invalid operator!");
    }
    return 0;
}