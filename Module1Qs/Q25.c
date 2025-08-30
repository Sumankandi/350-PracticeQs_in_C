#include <stdio.h>
#include<math.h>
int main()
{
    float num,result;
    printf("Enter a number :");
    scanf("%f", &num);
    if (num < 0) {
        printf("Square root of a negative number is not real.\n");
    } else {
        result = sqrt(num);
        printf("Square root of %.2f is %.2f\n", num, result);
    }
    return 0;
}