/** This program converts the temperature Fahreinheit degree to centigrade degree
Author: Fatema Tuj Juhra Sadia(222-16-667)**/
#include<stdio.h>
int main()
{
    float centigrade;
    float fahreinheit;

    printf("Please enter the temperature of the city in fahreinheit degree=");
    scanf("%f",&fahreinheit);

    centigrade=(fahreinheit-32)*0.55555556;

     printf("Temperature of the city in Centigrade degree = %.2f",centigrade);

    return 0;


}
