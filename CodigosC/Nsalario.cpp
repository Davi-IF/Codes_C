#include<stdio.h> // cap 1 //  questao 1.4 

int main(void){
	
	float salario, Nsalario, aumento; // criação de variáveis
	
		printf("digite o salario:"); // recebe salario 
		scanf("%f", &salario);
		printf("digite o reajuste:"); // recebe reajuste em decimal
		scanf("%f",&aumento);
	
	Nsalario = salario + salario * aumento; // n salario recebe o salario + aumento 
		printf("o valor do novo salario e: %.2f\n", Nsalario); // imprime valor do novo salario
		
		
		return 0;
}
