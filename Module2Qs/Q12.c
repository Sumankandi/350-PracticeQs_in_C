// Develop a program to check if a number is prime using a while loop

#include <stdio.h>
void main()
{
    int num, isPrime = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    int i = 1;
    while (i <= num)
    {
        if (num % i == 0)
        {
            isPrime++;
        }
        i++;
    }
    if (num == 1)
    {
        printf("prime");
    }
    else if (isPrime == 2)
    {
        printf("Prime");
    }
    else
    {
        printf("not prime");
    }
}