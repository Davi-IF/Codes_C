#include <stdio.h>
#include <string.h>

void gerar_dicionario_indices(const char *frase) {
    int len = strlen(frase);
    int encontrado[256] = {0}; 

    for (int i = 0; i < len; i++) {
        char char_atual = frase[i];
        
        if (!encontrado[char_atual]) { 
            encontrado[char_atual] = 1;
            printf("\"%c\": %d; ", char_atual, i);  
        }
    }
}

int main() {
    const char *frase = "O rato";
    gerar_dicionario_indices(frase);
    return 0;
}
