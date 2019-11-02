#include<stdio.h>
/*
*   Write a program that ask the use to enter a U.S. dollar amount and the show how to pay
* that amount using the smallest number of $20, %10, $5 and $1 bills:
* Enter a dollar amount : 93
* $20 bills: 4
* $10 bills: 1
*  $5 bills: 0
*  $1 bills: 1
*
*   Hint: Divide the amount by 20 to determine the number of $20 bill needed, and then reduce
* the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use
* integer values throughout, not floating-point numbers.
*/
main(){
    int amount, twenty = 0, ten = 0, five = 0, one = 0;
    printf("Enter the amount : ");
    scanf("%d", &amount);

    twenty = amount / 20;
    amount = amount % 20;
    ten = amount / 10;
    amount = amount % 10;
    five = amount / 5;
    amount = amount % 5;
    one = amount / 1;
    amount = amount % 1;

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf(" $5 bills: %d\n", five);
    printf(" $1 bills: %d\n", one);
}
