/*This program interchanges the contents of two locations
Author: Fatema Tuj Juhra Sadia(222-16-667)*/
#include<stdio.h>
int main(){
    int c;
    int d;
    int e;

    printf("Please enter the value of C = ");
    scanf("%d",&c);

    printf("Please enter the value of D = ");
    scanf("%d",&d);

    e=c;
    c=d;
    d=e;

    printf("The value of C = %d",c);
    printf("\nThe value of D = %d",d);
    return 0;
    }
