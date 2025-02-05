#include <stdio.h>

#define TAMANHO 15

int main() {
    int A[TAMANHO][TAMANHO];
    int soma = 0;
    
    printf("Digite os elementos da matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    for (int i = 0; i < TAMANHO; i++) {
        if (A[i][i] % 2 == 0) {
            soma += A[i][i];
        }
    }
    
    printf("Soma dos elementos pares na diagonal principal: %d\n", soma);
    
    return 0;
}