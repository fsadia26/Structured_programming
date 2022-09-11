/*This program calculates the sum of the first and last digit of a five-digit number
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
    int number;
    int first_d;
    int last_d;
    int sum;

    printf("Please enter a five-digit number = ");
    scanf("%d",&number);

    last_d=number%10;
    first_d=(number/10000);

    sum=last_d+first_d;

    printf("The reverse of this number = %d",sum);
    return 0;
}
