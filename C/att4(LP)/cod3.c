#include<stdio.h>

int main () {

    int a, b, sum, subt, mult;
    float div;
    char op;    

        printf("type number a: ");
        scanf("%i", &a);
        printf("type number b:");
        scanf("%i", &b);

    printf("choose the option: (+) (-) (*) or (/):");
    scanf(" %c", &op);

    switch (op) {

    case '+':
        sum = a + b; 
        printf("result of sum: %i", sum);  break;
    case '-':
        subt = a - b;
        printf("result of subtraction: %i", subt); break;
    case '*':
        mult = a * b;
        printf("result of multiplication: %i", mult); break;
    case '/':
        div = a / b;
        printf("result of division: %f", div); break;
    default:
        printf("invalid!!");   
    }
    return 0;
}

