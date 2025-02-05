#include <stdio.h>

#define MAX_SIZE 100


void combinar_listas(int lista1[], int tamanho1, int lista2[], int tamanho2, int resultado[], int* tamanho_resultado) {
    *tamanho_resultado = 0;

  
    for (int i = 0; i < tamanho1; i++) {
        resultado[*tamanho_resultado] = lista1[i];
        (*tamanho_resultado)++;
    }

   
    for (int i = 0; i < tamanho2; i++) {
        int existe = 0;
        for (int j = 0; j < *tamanho_resultado; j++) {
            if (resultado[j] == lista2[i]) {
                existe = 1;
                break;
            }
        }
        if (!existe) {
            resultado[*tamanho_resultado] = lista2[i];
            (*tamanho_resultado)++;
        }
    }
}

int main() {
    int lista1[] = {1, 2, 3, 4, 5};
    int lista2[] = {4, 5, 6, 7, 8};
    int lista_resultado[MAX_SIZE];
    int tamanho1 = 5, tamanho2 = 5;
    int tamanho_resultado;

    
    combinar_listas(lista1, tamanho1, lista2, tamanho2, lista_resultado, &tamanho_resultado);

  
    printf("Lista resultante sem elementos repetidos: ");
    for (int i = 0; i < tamanho_resultado; i++) {
        printf("%d ", lista_resultado[i]);
    }
    printf("\n");

    return 0;
}
