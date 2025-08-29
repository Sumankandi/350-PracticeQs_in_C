#include<stdio.h>
int main(){
    float KM, MILES,RES;
    printf("Enter KM value to conver in miles : ");
    scanf("%f",&KM);
    MILES = 0.621371;
    RES = KM * MILES;
    printf("%.2fKM is %.2f MILES",KM,MILES);
    return 0;
}