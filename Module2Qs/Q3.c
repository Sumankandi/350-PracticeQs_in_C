//Write a program to determine the grade of a student based on marks using if-else. 

#include <stdio.h>
int main()
{
    int mark;
    printf("Enter a number : ");
    scanf("%d", &mark);
    if (mark > 90 && mark <= 100)
    {
        printf("Grade : A");
    }
    else if (mark > 70 && mark <= 90)
    {
        printf("Grade : B");
    }
    else if (mark > 30 && mark <= 70)
    {
        printf("Grade : C");
    }
    else if (mark > 0 && mark <= 30)
    {
        printf("Fail");
    }
    else
    {
        printf("Mark is not valid !!");
    }
    return 0;
}