#include<stdio.h>

int main () {

    float v_house, salary, prest, max_prest;
    int  months, yearsp;

    printf("type the value of house:");
    scanf("%f", &v_house);
    printf("type the salary:");
    scanf("%f", &salary);
    printf("type the yearsp:");
    scanf("%i", &yearsp);

    months = yearsp * 12;
    prest = v_house / months;
    max_prest = salary * 0.30;

    if(prest <= max_prest){
        printf("loan allowed!");
    }else{
        printf("loan not allowed!");
    }

    return 0;
}