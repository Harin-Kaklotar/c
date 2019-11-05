#include<stdio.h>
/*
* Write a program that accepts a date from the user in the form mm/dd/yyyy and then dis-
* plays it in the form yyyymmdd:
*
* Enter a date (mm/dd/yyyy): 2/17/2011
* You entered the date 20110217
*
*/
main(){
    int dd, mm, yy;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yy);
    printf("You entered the date %4d%02d%02d", yy, mm, dd);
}
