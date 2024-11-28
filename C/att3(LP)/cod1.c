#include<stdio.h>


int main () {

    float wage, percent, increase, new_salary;

    printf("Type your salary:");
    scanf("%f", &wage);
    printf("Type the increase:");
    scanf("%f", &percent);

    increase = wage * (percent/100);
    new_salary = wage + increase;

    printf("The new salary: %f", new_salary);

}