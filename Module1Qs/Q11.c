//Implement a program to convert a given temperature from Celsius to Fahrenheit. 

#include <stdio.h>
int main() {
    float celsius, fahrenheit;

    printf("Enter the Celsius value to convert to Fahrenheit: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0 * celsius) + 32;

    printf("Fahrenheit value is: %.2f F\n", fahrenheit);
    return 0;
}
