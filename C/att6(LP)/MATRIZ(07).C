#include <stdio.h>

#define LINHAS 4
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS];


    printf("Digite 20 elementos para a matriz (4 linhas e 5 colunas):\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz 4x5 inserida:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
