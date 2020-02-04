#include <stdio.h>
#include <conio.h>
/*
*  Extend project ex51.c to handle three-digit number
*/
main(){
    int n;
    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    int fdigit, sdigit, tdigit;
    fdigit = n / 10;
    sdigit = n % 10;
    tdigit = n % 10;

    printf("The reversal is: %d%d%d", tdigit, sdigit, fdigit);

}
