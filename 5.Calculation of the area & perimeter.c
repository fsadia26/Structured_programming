/**This program calculates the area & perimeter of a rectangle, the area and circumference of a circle
Author: Fatema Tuj Juhra Sadia (222-16-667)**/
#include<stdio.h>
int main()
{
    float lenght;
    float breadth;
    float perimeter;
    float rectangle_area;
    float radius;
    float circle_area;
    float circumference;
    float pi=3.1416;

    printf("Please enter the lenght of the rectangle=");
    scanf("%f",&lenght);

    printf("Please enter the breadth of the rectangle=");
    scanf("%f",&breadth);

    printf("Please enter the radius of the circle=");
    scanf("%f",&radius);

     perimeter=2*(lenght+breadth);
     rectangle_area=lenght*breadth;
     circle_area=(radius*radius)*pi;
     circumference=2*pi*radius;

     printf("Area of the rectangle=%.2f",rectangle_area);
      printf("\nPerimeter of the rectangle = %.2f",perimeter);
    printf("\nArea of the circle = %.2f",circle_area);
    printf("\nCircumference of the circle = %.2f",circumference);
    return 0;

}
