#include <stdio.h>
int main()
{
    int age;
    float mark;
    char name[50];
    printf("Enter your name,age & mark : ");
    scanf("%49s %d %f", &name, &age, &mark);
    printf("Name : %s,Age : %d, marks : %.1f", name, age, mark);
    return 0;
}


