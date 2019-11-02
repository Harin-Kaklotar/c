#include<stdio.h>
/*
*   Modify the program of Programming Project ex15.c so that the polynomial is evaluated
* using the following formula:
* ((((3X + 2)X - 5)X -1)X + 7)X - 6
*/
main(){
    int x, equation;
    printf("Enter value of x : ");
    scanf("%d", &x);
    equation = ((((3*x + 2)*x - 5)*x -1)*x + 7)*x - 6;
    printf("value of ((((3X + 2)X - 5)X -1)X + 7)X - 6 = %d", equation);
}
