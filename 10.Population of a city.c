/*In a town, the percentage of men is 52. The percentage of total literacy is 48. Total
percentage of literate men is 35 of the total population, this program shows the total number
of illiterate men and women where the population of the town is 80,000
Author: Fatema Tuj Juhra Sadia(222-16-667)*/
#include<stdio.h>
int main(){
    int popu=80000;
    int popu_men;
    int popu_women;
    int popu_lit;
    int popu_illit;
    int lit_men;
    int illit_men;
    int lit_women;
    int illit_women;

    popu_men=0.52*popu;
    popu_women=popu-popu_men;
    popu_lit=0.48*popu;
    lit_men=0.35*popu;
    lit_women=popu_lit-lit_men;
    illit_men=popu_men-lit_men;
    illit_women=popu_women-lit_women;

    printf("Total number of illiterate men = %d",illit_men);
    printf("\nTotal number of illiterate women = %d",illit_women);
    return 0;
}
