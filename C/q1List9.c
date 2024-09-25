#include<stdio.h>

float Prestacao(float valor, float tempo, float taxa){
	
	float PREST;
	PREST = valor + (valor * (taxa/100) * tempo);
	return PREST;	
}

int main () {
	float valor_p, tempo_p, taxa_p, result;
	

	printf("digite o valor:");
	scanf("%f", &valor_p);
	printf("digite o tempo: ");
	scanf("%f", &tempo_p);
	printf("digite a taxa: ");
	scanf("%f", &taxa_p);
	
	result = Prestacao(valor_p, tempo_p, taxa_p);
	
	printf("valor da prestacao em atraso: %2.f", result);
	
}
