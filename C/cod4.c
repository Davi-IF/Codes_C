#include<stdio.h>

int main() {

 int qtd_d; 
 float km_per, final_price;

 printf("what was the amount km traveled of the car: ");
 scanf("%f", &km_per);
 printf("what was the amount of days:");
 scanf("%i", &qtd_d);

final_price = (qtd_d * 60) + (km_per * 0.15); 

printf("final price: %.2f reais", final_price);


}