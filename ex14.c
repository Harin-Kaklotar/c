#include<stdio.h>

/*
*   Write a program that asks the user to enter a dollars-and-cents amount, then display the
* amount with 5% tax added:
* Enter an amount : 100.00
* With tax added : $105.00
*/
main(){
    float amount, withTax;
    printf("Enter dollar-and-cents amount (ex. 100.00) : ");
    scanf("%f", &amount);
    withTax = amount + (amount * 5) / 100;
    printf("Withg tax added : $%.2f", withTax);
}
