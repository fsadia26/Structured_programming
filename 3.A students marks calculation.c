/** This C Program is about finding the aggregate marks and percentage marks obtained by a student
Author:Fatema Tuj Juhra Sadia(222-16-667)**/
#include<stdio.h>
int main(){
   float bangla;
   float english;
   float mathematics;
   float ict;
   float physics;
   float aggregate_mark;
   float percentage_mark;

   printf("Enter your obtained mark in Bangla=");
   scanf("%f",&bangla);

   printf("Enter your obtained mark in English=");
   scanf("%f",&english);

   printf("Enter your obtained mark in Mathematics=");
   scanf("%f",&mathematics);

     printf("Enter your obtained mark in ICT=");
   scanf("%f",&ict);

   printf("Enter your obtained mark in Physics=");
   scanf("%f",&physics);

    aggregate_mark=bangla+english+mathematics+ict+physics;
    printf("Aggregate mark=%.2f",aggregate_mark);

    percentage_mark=aggregate_mark/5;
    printf("\nPercentage mark= %.2f",percentage_mark);

    return 0;

}
