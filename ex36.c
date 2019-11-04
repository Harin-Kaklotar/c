#include<stdio.h>
/*
*   Write a program that the prompts the user to enter the telephone number in the form (xxx) xxx-
* xxxx and then displays the number in the form xxx.xxx.xxxx
*
* Enter phone number [(xxx) xxx-xxxx]: (404 817-6900)
* You entered 404.817.6900
*/
main(){
    int first, second, third;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &first, &second, &third);
    printf("You entered %3d.%3d.%4d", first, second, third);
}
