#include<stdio.h> // question 5

void positivo(int num){
	
	if(num < 0){
		 num = num * -1; // todo numero negativo  multiplicado inverte o sinal
		 
	}
	printf("%i", num);
}

int main() {
	int a;
	
	printf("digite um valor:");
	scanf("%i", &a);
	
	positivo(a);
		
}
