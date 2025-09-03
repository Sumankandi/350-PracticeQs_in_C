// Write a program to calculate the sum of the first n natural numbers.

#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter a number : ");
    scanf("%d", &num);

    result = (num * (num + 1)) / 2;
    printf("Sum of %d natural number is : %d", num, result);
    return 0;
}