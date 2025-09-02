// Write a program to demonstrate the use of assignment operators.
#include <stdio.h>
int main()
{
    int a = 2, b = 33, add, sub, mul, div;
    add = a += b;
    printf("addition of two number is : %d \n", add);

    sub = a -= b;
    printf("sub of two number is : %d \n", sub);

    mul = a *= b;
    printf("mul of two number is : %d \n", mul);

    div = a /= b;
    printf("div of two number is : %d \n", div);
    return 0;
}