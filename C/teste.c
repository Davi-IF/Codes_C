#include<stdio.h>


void triplo(int x[10], int mult[10]){
	int i;
	
	for(i=0; i<10; i++){
		mult[i] = x[i] * 3;	
		
	}
}

int main () {

	int v[10], result[10];
	int i;
	
	for(i=0; i<10; i++){
	
	printf("digite valor:");
	scanf("%i", &v[i]);	

	}

	triplo(v, result);	

	for(i=0; i<10; i++){
	printf("%i", result[i]);
	}		
}
