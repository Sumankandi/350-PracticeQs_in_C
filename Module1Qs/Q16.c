#include <stdio.h>
int main()
{
    float num;
    printf("Enter a number :");
    scanf("%f", &num);
    if (num > 0)
    {
        printf("This is a positive number");
    }
    else if (num < 0)
    {
        printf("This is a nagative number");
    }
    else
    {
        printf("This is zero");
    }
    return 0;
}