/*This program calculates the sum of digits of a five digit number
Author: Fatema Tuj Juhra Sadia(222-16-667)*/
#include<stdio.h>
int main(){
    int number;
    int sum=0;
    int remain;

    printf("Please enter a five-digit number = ");
    scanf("%d",&number);

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    printf("The sum of digits of this number = %d",sum);
return 0;
}
