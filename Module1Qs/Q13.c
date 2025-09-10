//Swap two numbers without using a temporary variable
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers a and b :");
    scanf("%d %d", &a, &b);
    printf("Before swap value a = %d ,b = %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("after swap value a = %d ,b = %d", a, b);
    return 0;
}

