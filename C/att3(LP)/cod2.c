#include<stdio.h>

int main () {

    float price, discount, tot_discount, final_value;

    printf("what's value of product:");
    scanf("%f", &price);
    printf("what's value of discount:");
    scanf("%f", &discount);

    tot_discount = price * (discount/100);
    final_value = price - tot_discount;

    printf(" the final value: %.2f ", final_value);

}