// Develop a program to calculate the average of first n numbers entered by the user.
#include <stdio.h>
int main()
{
    int num;
    float avg;

    printf("Enter a number : ");
    scanf("%d", &num);

    avg = (num * (num + 1) / 2.0) / num;
    printf("Avarage of first %d num is : %.2f", num, avg);
    return 0;
}