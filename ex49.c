/*
*   Give the values of i and j after each of the following expression statements has been
* executed.( Assume that i has the value 1 initially and j has the value 2.)
* (a) i += j;
* (b) i++;
* (c) i * j / i;
* (d) i % ++j;
*/
main(){
    int i,j;
    i = 1; j = 2;

    i += j;
    printf("i = %d, j = %d\n", i, j);

    i++;
    printf("i = %d, j = %d\n", i, j);

    i * j / i;
    printf("i = %d, j = %d\n", i, j);

    i % ++j;
    printf("i = %d, j = %d\n", i, j);

}
