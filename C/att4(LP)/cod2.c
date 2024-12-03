#include<stdio.h>

int main () {
    
    float salary, new_salary, increase;

    printf("type salary:");
    scanf("%f", &salary);

    if(salary > 1250) {
        increase = salary + (salary * 0.10);
        new_salary = increase;
    }
    else{
        increase = salary + (salary * 0.15);
        new_salary = increase;
    }

    printf("New salary current: %.2f", new_salary);

}