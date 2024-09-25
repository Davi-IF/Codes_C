#include<stdio.h>
#include<string.h>

int main () {
	
	char A[10], B[10], C[10];
	int i;
	
	for(i = 0; i< 10; i++){
		printf("Digite os valores do vetor A:\n");
		scanf("%s", &A[i]);
		
	}
	for(i = 0; i< 10; i++){
		printf("\nDigite os valores do vetor B:");
		scanf("%s", &B[i]);
	
	}
	
	for (i = 0; i<10; i++){
		
		strcpy(A[i], B[i]);
		printf("\nvalores de C: %s ", C[i]);

	}
	
}

