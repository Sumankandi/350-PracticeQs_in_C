//Develop a program to check if a given number is even or odd. 

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    num % 2 == 0 ? printf("Even") : printf("Odd");
    return 0;
}