#include<stdio.h>
/*
*    Write a program that asks the user to enter the numbers from
*   1 to 16 (in any order) and then displays the numbers in a
*   4 by 4 arrangement, followed by the sums of the rows, columns,
*   and diagonals:
*       Enter the numbers from 1 to 16 in any order:
*       16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
*       16  3  2 13
*        5 10 11  8
*        9  6  7 12
*        4 15 14  1
*       Row sums: 34 34 34 34
*       Column sums: 34 34 34 34
*       Diagonal sums: 34 34
*   If the row, column, and diagonal sums are all the same (as they
*   are in this example), the numbers are said to form a magic square.
*   The magic square shown here appears in a 1514 engraving by  artist
*   and mathematician Albrecht Durer. (Note that the middle numbers in
*   the last row give the date of the engraving.)
*/
main(){
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;
    int rs1, rs2,rs3,rs4;
    int cs1, cs2, cs3,cs4;
    int ds1, ds2;
    printf("Enter the numbers from 1 to 16 in any order: ");

    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
    scanf("%d %d %d %d", &a5, &a6, &a7, &a8);
    scanf("%d %d %d %d", &a9, &a10, &a11, &a12);
    scanf("%d %d %d %d", &a13, &a14, &a15, &a16);

    rs1 = a1 + a2 + a3 + a4;
    rs2 = a5 + a6 + a7 + a8;
    rs3 = a9 + a10 + a11 + a12;
    rs4 = a13 + a14 + a15 + a16;

    cs1 = a1 + a5 + a9 + a13;
    cs2 = a2 + a6 + a10 + a14;
    cs3 = a3 + a7 + a11 + a15;
    cs4 = a4 + a8 + a12 + a16;

    ds1 = a1 + a6 + a11 + a16;
    ds2 = a13 + a10 + a7 + a4;

    printf("Row sums: %d %d %d %d\n", rs1, rs2, rs3, rs4);
    printf("Column sums: %d %d %d %d\n", cs1, cs2, cs3, cs4);
    printf("Diagonal sums: %d %d\n", ds1, ds2);
}
