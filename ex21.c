#include<stdio.h>
/*
* d = display an integer in decimal
* e = display floating point number in exponential format
* f = display floating point number in "fixed decimal" format
* g = display floating point number in either exponential format or fixed decimal format, depending on number's size
*/
main(){
    int i;
    float x;
    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%f|%10.3f|%10.3ed|%-10g|\n", x, x, x, x);
}
