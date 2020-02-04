main(){
    int i,j;
    i = 1;
    printf("%d ", i++ - 1);
    printf("%d", i);

    printf("\n");

    i = 10; j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d\n", i, j);

    printf("\n");

    i = 7; j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d\n", i, j);

    printf("\n");

    i = 3; j = 4; int k = 5;
    printf("%d ",  i++ - j++ + --k);
    printf("%d %d %d\n", i, j, k);
}
