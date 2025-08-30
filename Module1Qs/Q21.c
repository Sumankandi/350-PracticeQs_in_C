#include <stdio.h>

int main() {
    float amount, interest, time, simple_interest;

    printf("Enter Total amount, rate of interest and time: ");
    scanf("%f %f %f", &amount, &interest, &time);

    simple_interest = (amount * interest * time) / 100;

    printf("Simple Interest is: %.2f", simple_interest);

    return 0;
}
