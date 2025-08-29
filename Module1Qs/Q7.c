#include <stdio.h>
int main()
{
    float num1, num2, num3, sum, avarage;
    printf("Enter three number num1, num2 and num3 : ");
    scanf("%f %f %f", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    avarage = sum / 3;
    printf("Sum of three num is : %f\n", sum);
    printf("Avarage of three num is : %f", avarage);
    return 0;
}