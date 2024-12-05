#include<stdio.h>

int main() {

    float kwh, price;
    char type;

   
    printf("Enter the amount of kWh consumed: ");
    scanf("%f", &kwh);
    printf("Enter the type of installation (R for Residential, C for Commercial, I for Industrial): ");
    scanf(" %c", &type);

    
    if (type == 'R' || type == 'r') {
        if (kwh <= 500) {
            price = kwh * 0.40;
        } else {
            price = kwh * 0.65;
        }
    } else if (type == 'C' || type == 'c') {
        if (kwh <= 1000) {
            price = kwh * 0.55;
        } else {
            price = kwh * 0.60;
        }
    } else if (type == 'I' || type == 'i') {
        if (kwh <= 5000) {
            price = kwh * 0.55;
        } else {
            price = kwh * 0.60;
        }
    } else {
        printf("Invalid installation type!\n");
        return 1; 
    }

    printf("The total amount to pay is: R$ %.2f\n", price);

    return 0;
}
