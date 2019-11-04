#include<stdio.h>

main(){
    int a,b;
    float x,y;
    a = 100;
    b = 65123;
    x = 10236.3628f;
    y = 0.23f;
    printf("%d\n", a);
    printf("%4d\n", a);
    printf("%-4d\n", a);
    printf("%f\n", x);
    printf("%.2f\n", x);
    printf("%0.f\n", x);
    printf("%10.5f\n", x);
    printf("%.10f\n", x);
}
