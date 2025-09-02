//Write a program to demonstrate the use of constants. 

#include <stdio.h>
// Constant using #define
#define PI 3.14159

int main() {
    // Constant using 'const' keyword
    const int DAYS_IN_WEEK = 7;  

    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Using constants in calculation
    area = PI * radius * radius;

    printf("Number of days in a week: %d\n", DAYS_IN_WEEK);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}
