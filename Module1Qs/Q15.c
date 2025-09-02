// Implement a program to find the square of a number using an arithmetic operator. 

#include <stdio.h>
#include<math.h>
int main()
{
    float num, square;

    printf("Enter a number: ");
    scanf("%f", &num);

    // square = num * num;
    square = pow(num, 2);

    printf("The square of %.2f is: %.2f\n", num, square);
    return 0;
}
