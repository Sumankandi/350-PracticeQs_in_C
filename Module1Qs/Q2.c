//Write a program to declare and initialize variables of all basic data types. 

#include<stdio.h>
int main()
{
    int a = 10;
    float age = 10.5;
    double pi = 3.1415926535;
    char grade = 'A';

    printf("a = %d\n", a);
    printf("age = %.2f\n", age);
    printf("pi = %.10lf\n", pi);
    printf("grade = %c\n", grade);

    return 0;
}
