#include<stdio.h>
#include<string.h>


int main () {

	char A[10][50], B[10][50], aux[50];
	int i, j;
	
	for(i=0; i<10; i++){
		printf("digite os valores:");
		scanf("%s", &A[i]);
	}
	for(i=0; i<10; i++){
		strcpy(B[i], A[10-i-1]);
	}
	for(i=0; i<10-1; i++){
		for(j=i+1; j<10; j++){
			if(strcmp(B[i], B[j])>0){
				
				strcpy(aux, B[i]);
				strcpy(B[i], B[j]);
				strcpy(B[j], aux);
			}
		}
	}
	for(i=0; i<10; i++){
		printf("B[%s]", B[i]);
	}
}
	
