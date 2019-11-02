#include<stdio.h>
main(){
    int height, lenght, width;
    int volume;
    height = 10;
    lenght = 20;
    width = 5;
    volume = height * lenght * width;
    printf("Height = %d, lenght = %d, widht = %d\n", height, lenght, width);
    printf("volume = %d\n", volume);


    float income, expence;
    float profit;

    income = 100.5f;
    expence = 27.35f;
    profit = income - expence;
    printf("Profit = %.2f", profit); /* value contain 3 digit after decimal point*/

}
