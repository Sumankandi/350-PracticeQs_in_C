// Write a program to reverse a given number using a while loop.

#include <stdio.h>
void main()
{
    int num, reversed = 0, digit;
    printf("Enter a number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    printf("Reversed number = %d\n", reversed);
}