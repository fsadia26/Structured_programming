/** This C Program is about Calculating Niloy's basic salary
Author:Fatema Tuj Juhra Sadia(222-16-667)**/
#include<stdio.h>
int main(){
    float b_salary;
    float d_allowance;
    float h_rent;
    float g_salary;

    printf("Please enter your basic salary=");
    scanf("%f",&b_salary);

    d_allowance=0.4*b_salary;
    h_rent=0.2*b_salary;
    g_salary=b_salary+d_allowance+h_rent;

    printf("Your Gross Salary is+%.2f",g_salary);

    return 0;
}
