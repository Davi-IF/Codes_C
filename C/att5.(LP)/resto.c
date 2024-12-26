#include <stdio.h>

int main() {
    int dividend, divisor, quotient = 0, remainder;

    printf("Digite o dividendo: ");
    scanf("%d", &dividend);
    printf("Digite o divisor: ");
    scanf("%d", &divisor);


    if (divisor == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 1;
    }

    remainder = dividend;
    while (remainder >= divisor) {
        remainder = remainder - divisor; 
        quotient = quotient + 1;          
    }

    printf("O quociente é: %d\n", quotient);
    printf("O resto da divisão é: %d\n", remainder);

    return 0;
}
