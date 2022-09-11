/*This program finds the cost price of one item from the total selling price of 15 items and the total profit earned on them
Author: Fatema Tuj Juhra Sadia(222-16-667)*/
#include<stdio.h>
int main(){
float total_price;
float total_profit;
float cost_per;

printf("Please enter the total selling price of the 15 items = ");
scanf("%f",&total_price);

printf("Please enter the total profit on the 15 items = ");
scanf("%f",&total_profit);

cost_per=(total_price-total_profit)/15;

printf("The cost price of each item is = %.2f",cost_per);
return 0;
}
