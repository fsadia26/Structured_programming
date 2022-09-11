/*This program reverse a number
Author: Fatema Tuj Juhra Sadia(222-16-667)*/
#include<stdio.h>
int main(){
    int number;
    int a;
    int b;
    int c;
    int d;
    int e;
    int rev;

    printf("Please enter a five-digit number = ");
    scanf("%d",&number);

    e=number%10;
    d=(number/10)%10;
    c=(number/100)%10;
    b=(number/1000)%10;
    a=(number/10000);

    rev=e*10000+d*1000+c*100+b*10+a;

    printf("The reverse of this number = %d",rev);
    return 0;
}
