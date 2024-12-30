#include<stdio.h>

int main () {
	
	int v, w[10], qtd, i;
	
	printf("valor de v:");
	scanf("%i", &v);
	
	for(i=0; i<10; i++){
		printf("digite um valor:");
		scanf("%d", &w[i]);
	}
	for (i=0; i<10; i++){
		if(w[i] == v){
			qtd++;
			printf("posicao[%i]", i);
		}
	}
	if(qtd>0){
		printf("quantidade: %i", qtd);
	}
	else{
		printf("nao encontrado!");
	}
	
	
}
