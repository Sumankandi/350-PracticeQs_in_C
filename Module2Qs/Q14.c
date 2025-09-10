// Implement a program to find the sum of digits of a number using a do-while loop.

#include <stdio.h>
void main()
{
    int num, digit, sum = 0;
    printf("Enter a num : ");
    scanf("%d", &num);
    do
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    } while (num != 0);
    printf("sum of the digit of a num is : %d\n", sum);
}

// 1+2+3