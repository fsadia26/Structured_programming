/** This C Program shows the distance between Mirpur and Ashulia in meter, feet, inches and centimeter
Author: Fatema Tuj Juhra Sadia(222-16-667)**/
#include<stdio.h>
int main()
{
    float kilometer;
    float meter;
    float feet;
    float inches;
    float centimeter;

    printf("Enter the distance between Mirpur and Ashulia(km)=");
    scanf("%f",&kilometer);

    meter=1000*kilometer;
    feet=3280.8399*kilometer;
    inches=39370.0787*kilometer;
    centimeter=100000*kilometer;


    printf("Distance in meter= %.2f",meter);
     printf("\nDistance in meter= %.4f",feet);
      printf("\nDistance in meter= %.4f",inches);
       printf("\nDistance in meter= %.4f",centimeter);

       return 0;

}
