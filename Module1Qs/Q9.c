#include <stdio.h>
int main() {
    int num1, num2, num3, largest_in_2, largest_in_3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    largest_in_2 = (num1 > num2) ? num1 : num2;
    largest_in_3 = (largest_in_2 > num3) ? largest_in_2 : num3;

    printf("The largest number is: %d\n", largest_in_3);
    return 0;
}


