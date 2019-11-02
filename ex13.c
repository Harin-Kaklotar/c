#include<stdio.h>

/* Ex12 with user enter radius */
#define FRACTOIN (4.0f / 3.0f)
#define PI 3.14f

main(){
    int radius;
    float volume;
    printf("Enter sphere radius : ");
    scanf("%d", &radius);
    volume = FRACTOIN * PI * (radius * radius * radius);
    printf("Volume of shpere = %f", volume);
}
