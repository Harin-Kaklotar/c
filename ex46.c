main(){
    int i, j;

    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d\n", i, j);

    printf("\n");

    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d\n", i, j);

    printf("\n");

    i = 7;
    j = 3 + --i * 2;
    printf("%d %d", i, j);

}
