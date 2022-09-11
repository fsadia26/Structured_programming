/*This program prints a new number by adding one to each of its digits from a five-digit number input
Author: Fatema Tuj Juhra Sadia(222-16-667)*/
#include<stdio.h>
int main(){
    int number;
    int new_number;
    int a;
    int b;
    int c;
    int d;
    int e;

    printf("Please enter a five-digit number = ");
    scanf("%d",&number);

    e=number%10;
    e=++e;
    d=(number/10)%10;
    d=++d;
    c=(number/100)%10;
    c=++c;
    b=(number/1000)%10;
    b=++b;
    a=(number/10000);
    a=++a;

	printf("The new number is = %d%d%d%d%d",a,b,c,d,e);

return 0;
}
