#include<stdio.h>
/*
*  Write a program that format product information entered by the user.
*  A session with the program should look like this:
*    Enter item number: 583
*    Enter unit price: 13.5
*    Enter purchase date (mm/dd/yyyy): 7/29/2015
*    Item            Unit            Purchase
*                    Price           Date
*    583             $  13.50        07/29/2015
*  The item number and date should be left justified; the unit price
*  should be right justified. Allow dollar amounts up to $9999.99.
*  Hint: Use tabs to line up the columns.
*/
main(){
  int number;
  float price;
  int dd, mm, yy;

  printf("Enter item number: ");
  scanf("%d", &number);
  printf("Enter unit price: ");
  scanf("%f", &price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &mm, &dd, &yy);

  printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
  printf("%d\t\t$%.2f\t\t%-.2d/%.2d/%d", number, price, mm,dd,yy);
}
