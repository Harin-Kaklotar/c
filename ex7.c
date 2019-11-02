#include<stdio.h>
main(){
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions : %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pound) : %d\n", weight);

    // printing expression
    int x = 10,y = 10,z =10;
    printf("%d + %d + %d = %d\n", x,y,z, x+y+z);
}
