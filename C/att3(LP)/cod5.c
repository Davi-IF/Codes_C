#include<stdio.h>

int main () {

    int cig_day, qtd_days, lost_days;
    float years, tot_cig, lost_minutes;

    printf("type how many cigarettes for day: ");
    scanf("%i", &cig_day);
    printf("type how many years somke:");
    scanf("%f", &years);

    qtd_days = years * 365;
    tot_cig = qtd_days * cig_day;
    
    lost_minutes = tot_cig * 10;
    lost_days = lost_minutes / 1440;

    printf("lost days: %i dias", lost_days);

}
