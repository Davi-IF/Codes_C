#include<stdio.h> // question 4

int quadrado(int A, int B, int C) {

	int soma;
	
	soma = (A * A) + (B * B) + (C * C);
	return soma;		

}

int main (){
	
	int n1, n2, n3, result;
	
	printf("Digite o primeiro valor: ");
	scanf("%i", &n1);
	printf("Digite o segundo valor: ");
	scanf("%i", &n2);
	printf("Digite o terceiro valor: ");
	scanf("%i", &n3);
	
	result = quadrado(n1, n2, n3);
	
	printf("resultado da soma dos quadrados: %i", result);
	
	
}
