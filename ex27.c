#include<stdio.h>
/*
*   Write call of printf that display a float variable x in the following formats.
* (a) Exponential notation; left-justified in a field of size 8; one digit after the decimal point.
* (b) Exponential notation; right-justified in a field of size 10; six digit after decimal
* point.
* (c) Fixed decimal notation; left-justified in the field size 8; three digits after the decimal
* point.
* (d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal
* point.
*/
main(){
    float f;
    f = 83.162;

    // (a)
    printf("|%-8.1e|", f);
    printf("\n");

    //(b)
    printf("|%10.6e|", f);
    printf("\n");

    //(c)
    printf("|%-8.3f|", f);
    printf("\n");

    //(d)
    printf("|%6.0f|", f);
    printf("\n");
}
