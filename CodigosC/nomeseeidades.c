#include<stdio.h>


int main () {
	
	char nome[9][50];
	int idade[9];
	int i;
	
	for(i=0; i<9; i++){
		printf("digite o nome[%i]:",i);
		scanf("%s", nome[i]);
	}
	for(i=0; i<9; i++){
		printf("\ndigite a idade[%i]:", i);
		scanf("%i", &idade[i]);
	}
	for(i=0; i<9; i++){
		if(idade[i]<18){
			printf("%s[%i]\n", nome[i],i);
		}
	}
}
