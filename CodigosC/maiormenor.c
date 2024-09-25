#include<stdio.h>

int main () {
	
	int c=1, n=0;
	int maior, menor;

		printf("digite o primeiro valor:", c);
		scanf("%i", &n);
		
		maior = menor = n;
	
	while (n >= 0){	
		
		if(n > maior){
			maior = n;
		}
		if(n<menor && n>=0){
			menor = n;
		}
		printf("digite o valor %i: ", c);
		scanf("%i", &n);
	}
	printf("maior: %i\nmenor: %i", maior, menor);
}



