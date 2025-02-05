#include<stdio.h>
#include<string.h>

int main() {

    char S[20], C;
    int P, i, encontrado = 0;

    printf("digite um caractere [C]:");
    scanf(" %c", &C);

    printf("digite a posicao [P]:");
    scanf("%i", &P);
  
    printf("Digite uma palavra:");
    scanf("%s", S);

    for(i=P; i <strlen(S); i++){
        if(S[i] == C){
            printf("posicao [%i]\n", i);
             encontrado = 1;
             break;
        }
    }
    
    if(!encontrado){
        printf("nao encontrado %i",C, P);
    }
  return 0;
} 