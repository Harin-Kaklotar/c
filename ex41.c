/*
* What is the value of each of the following expressions in C89? (Give all possible value if
* an expression may have more than one value.)
* (a) 8 / 5
* (b) -8 / 5
* (c) 8 / -5
* (d) -8 / -5
* NOTE : Repeat this exercise for C99
*/
main(){
    printf("a = %d\n", 8 / 5);
    printf("b = %d\n", -8 / 5);
    printf("c = %d\n", 8 / -5);
    printf("d = %d\n", -8 / -5);

    printf("\n");

    printf("a = %d\n", 8 % 5);
    printf("b = %d\n", -8 % 5);
    printf("c = %d\n", 8 % -5);
    printf("d = %d\n", -8 % -5);

}
