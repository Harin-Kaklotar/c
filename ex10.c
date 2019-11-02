#include<stdio.h>
// mecro defination
#define FREEZING_POINT 32.0f
#define SCAL_FACTOR (5.0f / 9.0f)
main(){
    float fahrenheit, celsius;

    printf("Enter fahrenheit temprature: ");

    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_POINT) * SCAL_FACTOR;

    printf("Celsius equivalent : %.1f", celsius);
}
