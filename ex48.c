#include <stdio.h>
/*
*   Supply parentheses to show how a C compiler would interpret each of the following expressions.
* (a) a * b - c * d + e
* (b) a / b % c / d
* (c) - a - b + c - + d
* (d) a * - b / c - d
*/
main(){
    int a,b,c,d,e;
    a = 1;
    b = 1;
    c = 1;
    d = 1;
    e = 1;
    printf("%d\n", a * b - c * d + e);
    printf("%d\n", a / b % c / d);
    printf("%d\n", - a - b + c - + d);
    printf("%d\n", a * - b / c - d);


    printf("\n");

    printf("%d\n", (a * b) - (c * d) + e);
    printf("%d\n", (a / b) % (c / d));
    printf("%d\n", (- a - b) + (c - + d));
    printf("%d\n", ((a * - b) / c) - d);
}
