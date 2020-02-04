/*
* Only one of the expressions ++i and i++ is exactly the same as (i += 1); which is it?
* Justify your answer.
*/
main(){
    int i = 10;
    printf("%d", i += 1); // is equal 11 and ++i also is equal 11
}
