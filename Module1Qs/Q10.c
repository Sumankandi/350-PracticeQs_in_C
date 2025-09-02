// Write a program to calculate the area of a rectangle. 

#include <stdio.h>
int main()
{
    float area, length, width;
    printf("Enter the Length and Width of the Rectangle :");
    scanf("%f %f", &length, &width);
    area = length * width;
    printf("Area of the Rectangle is : %.2f", area);
    return 0;
}