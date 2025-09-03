// Write a program to find the minimum and maximum of three numbers.

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three number : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    num1 > num2 &&num1 > num3 ? printf("%d is maximum \n", num1) : num2 > num1 &&num2 > num3 ? printf("%d is maximum \n", num2) : printf("%d is maximum \n", num3);

    num1 < num2 &&num1 < num3 ? printf("%d is minimum \n", num1) : num2 < num1 &&num2 < num3 ? printf("%d is minimum \n", num2) : printf("%d is minimum \n", num3);

    return 0;
}