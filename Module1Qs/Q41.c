//Implement a program to demonstrate type casting in C. 

#include <stdio.h>

int main()
{
    int a = 10, b = 3;
    float result;

    result = a / b;
    printf("Without casting: %f\n", result); // Output: 3.000000

    result = (float)a / b;
    printf("With casting: %f\n", result); // Output: 3.333333

    return 0;
}
