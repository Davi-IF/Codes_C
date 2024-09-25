#include<stdio.h>

void juncao(int a[], int b[], int c[]){
	
	int i;
	
	for(i=0; i<10; i++){
			
		c[i] = a[i];
		c[i+10] = b[i]; 	
	}
}
int main() {

	int v[10], w[10], y[20];
	int i;
	
	for(i=0; i<10; i++){
		printf("valores de v:");
		scanf("%i", &v[i]);
	}
	for(i=0; i<10; i++){
		printf("valores de w:");
		scanf("%i", &w[i]);
	}
	juncao(v, w, y);

	for(i=0; i<20; i++){
		printf("valor de y: [%i]\n", y[i]);
	}
}
