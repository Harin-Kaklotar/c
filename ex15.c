#include<stdio.h>

/*
*   Write a program that ask the use to enter a value for x and then displays the value of the
* following polynomial:
* 3X^5 + 2X^4 - 5X^3 - X^2 +7X - 6
* Hint: C doesn't have an exponentiation operator, so you'll need to multiply x by itself
* repeatedly in order to compute the power of x. (For example, x*x*x is x cubed.)
*/
main(){
    int x, equation;
    printf("Enter value of x : ");
    scanf("%d", &x);
    equation = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*(x) - 6;
    printf("value of 3X^5 + 2X^4 - 5X^3 - X^2 +7X - 6 = %d", equation);
}
