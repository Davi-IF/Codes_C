#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Digite um número: ");
    scanf("%d", &num);

    original = num;  

    while (num != 0) {
        remainder = num % 10;            
        reversed = reversed * 10 + remainder;  
        num = num / 10;                   
    }


    if (original == reversed) {
        printf("%d é um número palíndromo.\n", original);
    } else {
        printf("%d não é um número palíndromo.\n", original);
    }

    return 0;
}
