#include<stdio.h>


int main () {
	
	int A[15], B[15], C[30], i;
		
	for(i=0; i<15; i++){
	
		printf("digite os valores de A:");
		scanf("%i", &A[i]);
	}
	
	for(i=0; i<15; i++){
		printf("digite os valores de B:");
		scanf("%i", &B[i]);	
	}

	for(i=0; i<15; i++){
		C[i] = A[i];
		C[i+15]= B[i];
	}
	for(i=0; i<30; i++){
		printf("C:[%i]\n", C[i]);
	
	}
}
