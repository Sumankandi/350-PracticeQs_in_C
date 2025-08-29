#include <stdio.h>
int main()
{
    float num1, num2, addition, subtraction, multiplication, division;
    printf("Enter two number num1 and num2 :");
    scanf("%f %f", &num1, &num2);
    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;
    printf("Addition of two num is : %.2f\n Substration of two num is : %.2f\n Multiplication of two num is : %.2f\n Devision of two num is : %.2f", addition, subtraction, multiplication, division);
    return 0;
}