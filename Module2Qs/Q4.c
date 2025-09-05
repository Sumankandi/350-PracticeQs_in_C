// Develop a program using nested if to check if a number is positive and even

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num > 0)
    {
        if (num % 2 == 0)
        {
            printf("%d is positive and even.",num);
        }
        else
        {
            printf("%d is positive but odd.",num);
        }
    }
    else
    {
        printf("%d is Nagative number",num);
    }
    return 0;
}