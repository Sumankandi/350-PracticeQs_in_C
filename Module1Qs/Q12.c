//Write a program to swap two numbers using a temporary variable. 

#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers a and b :");
    scanf("%d %d", &a, &b);
    printf("Before swap value a = %d ,b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("after swap value a = %d ,b = %d", a, b);
    return 0;
}




