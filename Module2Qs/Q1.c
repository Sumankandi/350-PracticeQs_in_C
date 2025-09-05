//Write a program using if-else to find the largest of three numbers. 

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three number : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("%d is largest ", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d is largest ", num2);
    }
    else
    {
        printf("%d is largest ", num3);
    }
    return 0;
}