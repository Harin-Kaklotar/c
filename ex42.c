/*
* The algorithm for computing the UPC check digit end with the following steps:
*
* Subtract 1 from total.
* Compute the reminder when the adjusted total is divided by 10.
* Subtract reminder from 9.
*
* It's tempting to try simplify the algorithm by using these steps instead:
* Compute the reminder when the total is divided by 10.
* Subtract the reminder from 10.
*
* Why doesn't this technique work ?
*
* NOTE: Would this program still work it the expression 9 - ((total -1) % 10) were
* replace by (10 - (total % 10)) % 10 ?
*/
main(){
 int total = 10;
 int fvalue = 9 - ((total - 1) / 10);
 printf("%d\n", fvalue);

 fvalue = 10 - (total / 10);
 printf("%d\n", fvalue);

 printf("\n");

 fvalue = (10 - (total % 10)) % 10;
 printf("%d\n", fvalue);
}

