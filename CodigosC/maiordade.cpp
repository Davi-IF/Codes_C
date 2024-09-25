#include<stdio.h>
#include<stdio.h>

int main(){

	int A, B, C;							// declarar variaveis
	
	printf("digite A:");					// recebimento de valores
		scanf("%i", &A);	
		
	printf("digite B:");
		scanf("%i", &B);
		
	printf("digite C:");
		scanf("%i", &C);
		
		if(A>B && A>C){ 					 // iniciar condição// achar valor maior 
			printf("o maior valor e A", A);
		}
		else if(B>A && B>C){
			printf("o maior valor e B", B);
		}
		else if (C>A && C>B){
			printf("o maior valor e C", C);	
		}
		
		if (A<B && A<C){ 						// iniciar nova condição// achar o menor
			printf("\nO menor valor e A", A);
		}
		else if (B<A && B<C){
			printf ("\nO menor valor e B", B);
		}	
		else if(C<A && C<B){	
		printf("\nO menor valor e C", C);
		
		}
	}

