#include<stdio.h>
#include<string.h>
#include<ctype.h>

int Verificacao(char *S){

    int i;

     if(S[2]!= '/'){
        printf(" erro, barra invalida! ");
    }
    if(S[5]!= '/'){
        printf(" erro, barra invalida! ");
    }

    for(i=0; i<2; i++){
        if(!isdigit(S[i])){
            printf("Erro. nao contem nemeros");
            return 0;
        }
    }
    for(i=3; i<5; i++){
        if(!isdigit(S[i])){
            printf("Erro. nao contem numeros");
            return 0;
        }
    }
    for(i=6; i<10; i++){
        if(!isdigit(S[i])){
            printf("Erro. nao contem numeros");
            return 0;
        }
    }
    return 1;
}

int main () {

    char S[15];
    int D, M, A, i;

    printf(" digite a data: (DD/MM/AAAA):");
    fgets(S, sizeof(S), stdin);

    S[strcspn(S, "\n")] = '\0';

    if(Verificacao(S)){
        printf("data valida!\n");
        sscanf(S, "%d/%d/%d", &D, &M, &A);
        printf("Dia: %d, Mes: %d, Ano: %d\n", D, M, A);
    }
    else{   
        printf(" data invalida! ");
    }
    return 0;
}