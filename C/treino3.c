#include<stdio.h>
#include<stdbool.h>

void procura(float x[12]){
	
	int i;
	float D[1];
	bool achou = false;
	
	printf("digite valor a ser encontrado:");
	scanf("%f", &D[0]);
	
	for(i=0; i<12; i++){
		
	if(D[0]==x[i]){
		achou = true;
		break;
	}
}
	if(achou){
		printf("encontrado!");
	}

	else{
		printf("nao encontrado!");
	}
}

int main (){
	float A[12], B[12], C[12];
	int i;
	
	for(i=0; i<12; i++){
		printf("digite valores:A\n");
		scanf("%f", &A[i]);
	}
	for(i=0; i<12; i++){
		printf("digite valores B:\n");
		scanf("%f", &B[i]);
	}
	for(i=0; i<12; i++){
		C[i] = A[i] * B[i];
	}
	for(i=0; i<12; i++){
		printf("C[%2.f]\n", C[i]);	
	}
	
	procura(C);
}
