//Implement a program to demonstrate the use of the ternary operator

#include <stdio.h>
int main()
{
    float num;
    printf("Enter a num :");
    scanf("%f", &num);
    num == 0 ? printf("This is zero") : num > 0 ? printf("This is a positive number")
                                                : printf("This is a nagative number");
    return 0;
}